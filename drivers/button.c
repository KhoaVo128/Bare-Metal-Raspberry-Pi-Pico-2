/*
definitions of header file's functions on GPIO0
*/
#include <rp2350/resets.h>
#include <rp2350/sio.h>
#include <rp2350/io_bank0.h>
#include <rp2350/pads_bank0.h>
#include "button.h"



#define GPIO_RESETS (RESETS_RESET_IO_BANK0_MASK | RESETS_RESET_PADS_BANK0_MASK)

void configure_button(){
    resets.reset_clr = GPIO_RESETS;
    while(!(resets.reset_done & GPIO_RESETS))
	    continue;
	
	pads_bank0.gpio20 = 
	PADS_BANK0_GPIO0_OD(1) 
	| PADS_BANK0_GPIO0_IE(1)  
	| PADS_BANK0_GPIO0_DRIVE(0) 
	| PADS_BANK0_GPIO0_PUE(1) 
	| PADS_BANK0_GPIO14_PDE(0) 
	| PADS_BANK0_GPIO14_SCHMITT(0) 
	| PADS_BANK0_GPIO14_SLEWFAST(0);
	
	io_bank0.gpio10_ctrl = 
	IO_BANK0_GPIO14_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO14_CTRL_INOVER(0)  |
	IO_BANK0_GPIO14_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO14_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO14_CTRL_FUNCSEL(5);


}

_Bool button_is_down(){
	return (SIO_GPIO_IN & (0x0001<<20))==0;
}

button_press_t get_button_press(){
	static button_press_t retval = NO_PRESS;
	static uint16_t counter = 0;
	static enum {IDLE, SHORT, NORMAL, LONG} button_state = IDLE;
	switch (button_state){
	case IDLE:
		if(!button_is_down()){
			button_state = IDLE;
		}else{
			counter = 0;
			button_state = SHORT;
		}
		break;
	case SHORT:
		if(!button_is_down()){
			retval = SHORT_PRESS;
			button_state = IDLE;
		}else{
			if(counter < 500){
				button_state = SHORT;
			}else{
				button_state = NORMAL;
			}
		}
		counter++;
		break;
	case NORMAL:
		if(!button_is_down()){
			retval = PRESS;
			button_state = IDLE;
		}else{
			if(counter<1000){
				button_state = NORMAL;
			}else{
				button_state = LONG;
			}
		}
		counter++;
		break;
	case LONG:
		if(!button_is_down()){
			retval = LONG_PRESS;
			button_state = IDLE;
		}else{
			button_state = LONG;
		}
		break;
	}
	return retval;
}
