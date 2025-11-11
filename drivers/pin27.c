#include "pin27.h"
#include <rp2350/resets.h>
#include <rp2350/sio.h>
#include <rp2350/io_bank0.h>
#include <rp2350/pads_bank0.h>
#include "gpio_irq.h"
#include <stdbool.h>

static void callback();
static _Bool pin_state;

_Bool get_pin27();

#define GPIO_RESETS (RESETS_RESET_IO_BANK0_MASK | RESETS_RESET_PADS_BANK0_MASK)
void configure_pin27( void )
{
    resets.reset_clr = GPIO_RESETS;
    while(! (resets.reset_done & GPIO_RESETS) )
	    continue;

    pads_bank0.gpio27 = 
	PADS_BANK0_GPIO27_OD(1) 
	| PADS_BANK0_GPIO27_IE(1) 
	| PADS_BANK0_GPIO27_DRIVE(0) 
	| PADS_BANK0_GPIO27_PUE(1) 
	| PADS_BANK0_GPIO27_PDE(0) 
	| PADS_BANK0_GPIO27_SCHMITT(0) 
	| PADS_BANK0_GPIO27_SLEWFAST(0);
    io_bank0.gpio27_ctrl = 
	IO_BANK0_GPIO27_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO27_CTRL_INOVER(0)  |
	IO_BANK0_GPIO27_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO27_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO27_CTRL_FUNCSEL(5);

	register_gpio_irq_callback(callback);
	io_bank0.proc0_inte3 |= ( IO_BANK0_PROC0_INTE3_GPIO27_EDGE_HIGH_MASK
		             |IO_BANK0_PROC0_INTE3_GPIO27_EDGE_LOW_MASK); 
}

_Bool get_pin27(){
	return pin_state;
}

static void callback( ){
	uint8_t events = get_irq_status_for_pin(27);
	if( !events )
		return;
	if( events & IRQ_EDGE_HIGH )
		pin_state=true;
	if( events & IRQ_EDGE_LOW )
		pin_state=false;
}

