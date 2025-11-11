#include "gpio_irq.h"
#include <rp2350/resets.h>
#include <rp2350/io_bank0.h>
#include <rp2350/m33.h>
#include <stdbool.h>
#include <stdint.h>
#include "interrupt.h"

#ifndef NUM_GPIO_IRQ_CALLBACKS
#define NUM_GPIO_IRQ_CALLBACKS 5
#endif

static void(*callback[NUM_GPIO_IRQ_CALLBACKS])();
static uint8_t num_registered_callbacks;
static uint32_t gpio_irq_events[4];

#define GPIO_IRQ_RESETS (RESETS_RESET_IO_BANK0_MASK)

#ifndef GPIO_IRQ_PRIO
#define GPIO_IRQ_PRIO 15
#endif

#define GPIO_IRQ 21

void register_gpio_irq_callback( void (*pf)() )
{
	RESETS_RESET_CLR = GPIO_IRQ_RESETS;
	while( (RESETS_RESET_DONE & GPIO_IRQ_RESETS) != GPIO_IRQ_RESETS)
		continue;
	callback[num_registered_callbacks] = pf;
	num_registered_callbacks++;
	((uint8_t *)&(M33_NVIC_IPR0))[16+GPIO_IRQ]=GPIO_IRQ_PRIO;
	M33_NVIC_ISER0 = (1<<GPIO_IRQ);
}

uint8_t get_irq_status_for_pin( uint8_t pin)
{
	uint8_t events = ((uint8_t *)gpio_irq_events)[pin/2];
	if( pin/2 == 0 )
		events &= 0x0f;
	else
		events >>= 4;
	return events;
}

void __attribute__((interrupt)) IO_IRQ_BANK0_Handler()
{
	M33_NVIC_ICPR0 = (1<<GPIO_IRQ);

	for( uint8_t i=0; i<4; i++ )
		gpio_irq_events[i] = (&(IO_BANK0_PROC0_INTS0))[i];

	for( uint8_t i=0; i < num_registered_callbacks; i++)
		callback[i]();

	for( uint8_t i=0; i<4; i++ )
		(&(IO_BANK0_INTR0))[i]=gpio_irq_events[i];
}
