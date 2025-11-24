#include <rp2350/sio.h>
#include <rp2350/resets.h>
#include <rp2350/io_bank0.h>
#include <rp2350/pads_bank0.h>
#include "rotary_encoder.h"

#define A 3
#define B 4

#define CONCAT2(X,Y)			X ## Y
#define CONCAT3(X,Y,Z)			X ## Y ## Z
#define PADS_BANK0_GPIO(X) 		CONCAT2(PADS_BANK0_GPIO,X)
#define IO_BANK0_GPIO_CTRL(X)	CONCAT3(IO_BANK0_GPIO,X,_CTRL)

#define GPIO_RESETS (RESETS_RESET_IO_BANK0_MASK | RESETS_RESET_PADS_BANK0_MASK)


void configure_rotary_encoder(){
	resets.reset_clr = GPIO_RESETS;
	while(!(resets.reset_done & GPIO_RESETS))
		continue;   

	const uint32_t PADS_BANK0_INPUTS =
	PADS_BANK0_GPIO0_OD(1) 
	| PADS_BANK0_GPIO0_IE(1)  
	| PADS_BANK0_GPIO0_DRIVE(0) 
	| PADS_BANK0_GPIO0_PUE(0) 
	| PADS_BANK0_GPIO0_PDE(0) 
	| PADS_BANK0_GPIO0_SCHMITT(0) 
	| PADS_BANK0_GPIO0_SLEWFAST(0);
	
	const uint32_t BANK0_CTRL_INPUTS = 
	IO_BANK0_GPIO0_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO0_CTRL_INOVER(0)  |
	IO_BANK0_GPIO0_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO0_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO0_CTRL_FUNCSEL(5);
	
	PADS_BANK0_GPIO(A) = PADS_BANK0_INPUTS;
	IO_BANK0_GPIO_CTRL(A) = BANK0_CTRL_INPUTS;
	
	PADS_BANK0_GPIO(B) = PADS_BANK0_INPUTS;
	IO_BANK0_GPIO_CTRL(B) = BANK0_CTRL_INPUTS;	
	
	
		
}

_Bool get_A_low(){
	return (SIO_GPIO_IN & (0x00001 << (A))) == 0;
}

_Bool get_B_low(){
	return (SIO_GPIO_IN & (0x00001 << (B))) == 0;
}

rotary_t get_rotation(){
	static rotary_t retval = NONE;
	static enum {
					IDLE,  
			    	CW_STEP1,  CW_STEP2,  CW_STEP3,
					ACW_STEP1, ACW_STEP2, ACW_STEP3 
				} rotary_state = IDLE;
	switch(rotary_state){
		case IDLE:
			if(!get_A_low() && get_B_low()){
				rotary_state = CW_STEP1;
			}
			else if(get_A_low() && !get_B_low()){
				rotary_state = ACW_STEP1;
			}
			break;
		case CW_STEP1:
			if(get_A_low() && get_B_low()){
				rotary_state = CW_STEP2;
			}else{
				rotary_state = IDLE;
			}
			break;
		case CW_STEP2:
			if(get_A_low() && !get_B_low()){
				rotary_state = CW_STEP3;
			}else{
				rotary_state = IDLE;
			}
			break;
		case CW_STEP3:
			if(!get_A_low() && !get_B_low()){
				retval = CLOCKWISE;
			}
				rotary_state = IDLE;
			break;		
		case ACW_STEP1:
			if(get_A_low() && !get_B_low()){
				rotary_state = ACW_STEP2;
			}else{
				rotary_state = IDLE;
			}
			break;
		case ACW_STEP2:
			if(get_A_low() && get_B_low()){
				rotary_state = ACW_STEP3;
			}else{
				rotary_state = IDLE;
			}
			break;
		case ACW_STEP3:
			if(!get_A_low() && get_B_low()){
				retval = ANTI_CLOCKWISE;
			}
			rotary_state = IDLE;
			break;
		default:
			rotary_state = IDLE;
			break;
	}
	return retval;
}
