/*
	KHOA THANH VO
	MAIN PROGRAM TO TEST Rotary Encoder's Functionalities
*/
#include "rotary_encoder.h"
#include "usbcdc.h"
#include "systick.h"

void main(){
	
	configure_systick();
	configure_usbcdc();
	configure_rotary_encoder();
	rotary_t rotation;

	while(1){
		if(!system_tick()){
			continue;
		}
		rotation = get_rotation();
		if(rotation == CLOCKWISE){
			usbcdc_putchar('C');
		}	
		else if(rotation == ANTI_CLOCKWISE){
			usbcdc_putchar('A');
		}
	}

}
