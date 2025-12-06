#include <stdio.h>
#include "ultrasonic_sensor.h"
#include "usbcdc.h"
#include "systick.h"

void main(){
	char c;	
	configure_systick();
	configure_usbcdc();
	configure_ultrasonic_sensor();

	while(1){
		if(!system_tick())
			continue;
		usbcdc_getchar(&c);
		usbcdc_putchar(c);
		if(c == 't'){
			trigger();
		}
		if(c == 'r'){
			printf("distance is: %d\r\n",get_distance());
		}
		
	}

}
