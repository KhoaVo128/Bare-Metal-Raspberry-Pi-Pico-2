#include "led.h"
#include <rp2350/resets.h>
#include <rp2350/sio.h>
#include <rp2350/io_bank0.h>
#include <rp2350/pads_bank0.h>

#define LED_RESETS (RESETS_RESET_IO_BANK0_MASK | RESETS_RESET_PADS_BANK0_MASK)
void configure_led( void )
{
    RESETS_RESET_CLR = LED_RESETS;

    while((RESETS_RESET_DONE & LED_RESETS ) != LED_RESETS )
    	continue;

    PADS_BANK0_GPIO25 = 
	PADS_BANK0_GPIO25_OD(0) 
	| PADS_BANK0_GPIO25_IE(0) 
	| PADS_BANK0_GPIO25_DRIVE(0) 
	| PADS_BANK0_GPIO25_PUE(0) 
	| PADS_BANK0_GPIO25_PDE(0) 
	| PADS_BANK0_GPIO25_SCHMITT(0) 
	| PADS_BANK0_GPIO25_SLEWFAST(0);

    IO_BANK0_GPIO25_CTRL = 
	IO_BANK0_GPIO25_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO25_CTRL_INOVER(0)  |
	IO_BANK0_GPIO25_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO25_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO25_CTRL_FUNCSEL(5);

    SIO_GPIO_OE_SET = (1<<25);
	turn_off_led();
}
void turn_on_led()
{
    SIO_GPIO_OUT_SET = (1<<25);
}
void turn_off_led()
{
    SIO_GPIO_OUT_CLR = (1<<25);
}
void toggle_led()
{
    SIO_GPIO_OUT_XOR = (1<<25);
}
