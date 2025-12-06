/*
	KHOA THANH VO
	MAIN PROGRAM TO TEST Rotary Encoder's Functionalities
*/
#include "ultrasonic_sensor.h"
#include "usbcdc.h"
#include "systick.h"
#include <stdio.h>
static char c;
void main(){
	
	configure_systick();
	configure_usbcdc();
	configure_ultrasonic_sensor();

	while(1){
		if(!system_tick())
			continue;
		if(usbcdc_getchar(&c)){
			usbcdc_putchar(c);
			if(c == 't'){
				trigger();
			}
			if(c == 'r'){
				printf("distance is: %d\r\n",get_distance);
			}
		}
	}

}
