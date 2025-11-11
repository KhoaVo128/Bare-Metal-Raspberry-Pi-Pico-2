#include "usbcdc.h"
#include "systick.h"
#include "interrupt.h"
#include "led.h"
#include <stdint.h>

void callback_0();
void callback_1();

int main ( void )
{
	__disable_irq();
	configure_usbcdc();
	configure_systick();
	systick_register_callback(callback_0);
	systick_register_callback(callback_1);
	configure_led();
	__enable_irq();
	
	while(1){
		__asm__("WFI");
		if( !system_tick())
			continue;
	}
    return(0);
}

void callback_0(){
	toggle_led();
}

void callback_1(){
	if(get_system_time() > 200)
		usbcdc_putchar('a');
}
