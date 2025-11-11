/*
KHOA THANH VO

KEYPAD TESTING MAIN PROGRAM
*/
#include "usbcdc.h"
#include "systick.h"
#include "keypad.h"
#include "led.h"

static char c;

void callback_0();


int main ( void )
{   
	configure_usbcdc();
	configure_systick();
    configure_keypad();
    configure_led();
    systick_register_callback(callback_0);
    
	while(1){
		if(!system_tick())
			continue;
	}
    return(0);
}

void callback_0(){
    task_keypad_scan();
    if(keypad_getchar(&c)){
        usbcdc_putchar(c);
    }
}