#include "rotary_encoder.h"
#include "usbcdc.h"
#include "systick.h"

static char a;
static char b;

void main(){
	
	configure_systick();
	configure_usbcdc();
	configure_rotary_encoder();

	while(1){
		if(!system_tick()){
			continue;
		}
		if(get_A_low()){
			a = '0';
		}else{
			a = '1';
		}
		if(get_B_low()){
			b = '0';
		}else{
			b = '1';
		}
		usbcdc_putchar(a);
		usbcdc_putchar(b);
		usbcdc_putchar('\n');
		usbcdc_putchar('\r');
	}

}
