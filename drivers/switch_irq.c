
#include <rp2350/sio.h>
#include <rp2350/m33.h>
#include <rp2350/resets.h>
#include <rp2350/io_bank0.h>
#include <rp2350/pads_bank0.h>
#include "interrupt.h"
#include "gpio_irq.h"
#include "switch_irq.h"

#define SWITCH 27

#define CONCAT2(X,Y)			X ## Y
#define CONCAT3(X,Y,Z)			X ## Y ## Z
#define PADS_BANK0_GPIO(X) 		CONCAT2(PADS_BANK0_GPIO,X)
#define IO_BANK0_GPIO_CTRL(X)	CONCAT3(IO_BANK0_GPIO,X,_CTRL)

#define GPIO_RESETS (RESETS_RESET_IO_BANK0_MASK | RESETS_RESET_PADS_BANK0_MASK)
#define GPIO_IRQ_RESETS (RESETS_RESET_IO_BANK0_MASK)

static void callback();
static volatile _Bool switch_state;

void configure_switch(){

    
    RESETS_RESET_CLR = GPIO_RESETS;
    while(! (RESETS_RESET_DONE & GPIO_RESETS))
	    continue;

    PADS_BANK0_GPIO(SWITCH) =
	PADS_BANK0_GPIO0_OD(1) 
	| PADS_BANK0_GPIO0_IE(1)  
	| PADS_BANK0_GPIO0_DRIVE(0) 
	| PADS_BANK0_GPIO0_PUE(0) 
	| PADS_BANK0_GPIO0_PDE(0)
	| PADS_BANK0_GPIO0_SCHMITT(0) 
	| PADS_BANK0_GPIO0_SLEWFAST(0);
	
	IO_BANK0_GPIO_CTRL(SWITCH) = 
	IO_BANK0_GPIO0_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO0_CTRL_INOVER(0)  |
	IO_BANK0_GPIO0_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO0_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO0_CTRL_FUNCSEL(5);

    register_gpio_irq_callback(callback);
	io_bank0.proc0_inte3 |= (IO_BANK0_PROC0_INTE3_GPIO27_EDGE_HIGH_MASK
		             		|IO_BANK0_PROC0_INTE3_GPIO27_EDGE_LOW_MASK);  
}


_Bool get_switch(){
    return switch_state;
}

static void callback(){
	uint8_t events = get_irq_status_for_pin(SWITCH);
	if( !events )
		return;
	if( events & IRQ_EDGE_HIGH )
		switch_state = true;
	if( events & IRQ_EDGE_LOW )
		switch_state = false;
}