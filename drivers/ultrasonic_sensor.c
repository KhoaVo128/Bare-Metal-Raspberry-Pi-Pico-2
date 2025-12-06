#include <rp2350/resets.h>
#include <rp2350/sio.h>
#include <rp2350/io_bank0.h>
#include <rp2350/pads_bank0.h>
#include "ultrasonic_sensor.h"
#define TRIG 8
#define ECHO 9

#define CONCAT2(X,Y)			X ## Y
#define CONCAT3(X,Y,Z)			X ## Y ## Z
#define PADS_BANK0_GPIO(X) 		CONCAT2(PADS_BANK0_GPIO,X)
#define IO_BANK0_GPIO_CTRL(X)	CONCAT3(IO_BANK0_GPIO,X,_CTRL)

#define GPIO_RESETS (RESETS_RESET_IO_BANK0_MASK | RESETS_RESET_PADS_BANK0_MASK)

static uint16_t distance;
static _Bool get_echo(){
	return !(SIO_GPIO_IN & (0x00001 << (ECHO))) == 0;
}

void configure_ultrasonic_sensor(){
    resets.reset_clr = GPIO_RESETS;
    while(!(resets.reset_done & GPIO_RESETS))
	    continue;

    PADS_BANK0_GPIO(TRIG) =
	PADS_BANK0_GPIO0_OD(0) 
	| PADS_BANK0_GPIO0_IE(0)  
	| PADS_BANK0_GPIO0_DRIVE(0) 
	| PADS_BANK0_GPIO0_PUE(0) 
	| PADS_BANK0_GPIO0_PDE(1) 
	| PADS_BANK0_GPIO0_SCHMITT(0) 
	| PADS_BANK0_GPIO0_SLEWFAST(0);
	
	IO_BANK0_GPIO_CTRL(TRIG) = 
	IO_BANK0_GPIO0_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO0_CTRL_INOVER(0)  |
	IO_BANK0_GPIO0_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO0_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO0_CTRL_FUNCSEL(5);

    PADS_BANK0_GPIO(ECHO) =
	PADS_BANK0_GPIO0_OD(1) 
	| PADS_BANK0_GPIO0_IE(1)  
	| PADS_BANK0_GPIO0_DRIVE(0) 
	| PADS_BANK0_GPIO0_PUE(0) 
	| PADS_BANK0_GPIO0_PDE(0) 
	| PADS_BANK0_GPIO0_SCHMITT(0) 
	| PADS_BANK0_GPIO0_SLEWFAST(0);
	
	IO_BANK0_GPIO_CTRL(ECHO) = 
	IO_BANK0_GPIO0_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO0_CTRL_INOVER(0)  |
	IO_BANK0_GPIO0_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO0_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO0_CTRL_FUNCSEL(5);
}

void trigger(){
	static enum{LOW, HIGH} trig_state = LOW;
	
	switch(trig_state){
		case LOW:
			SIO_GPIO_OE_SET = (1<<TRIG);
			trig_state = HIGH;
			break;
		case HIGH:
			SIO_GPIO_OE_CLR = (1<<TRIG);
			trig_state = HIGH;
			break;
		default:
			break;
	}
}

void measure_distace(){
    static enum{IDLE, MEASURING} echo_state = IDLE;
	static uint16_t echo_time;
	switch(echo_state){
		case IDLE:
			echo_time = 0;
			if(get_echo()){
				echo_state = MEASURING;
			}else{
				echo_state = IDLE;
			}
			break;
		case MEASURING:
			if(get_echo()){
				echo_time++;
				echo_state = MEASURING;
			}else{
				distance = echo_time;
				echo_state = IDLE;
			}
			break;
		default:
			break;
	}
}

uint16_t get_distance(){
	return distance;
}
