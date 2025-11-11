/*
main program
declares and define helper funcions button_led_behaviour()
declares and defines led_flash() function for long press  
*/

#include <button.h>
#include <systick.h>
#include <led.h>
#include <stdint.h>

static void led_flash(){
	static uint16_t led_pulse_cntr = 0;
    static enum {OFF, ON} led_state = OFF;
	led_pulse_cntr++;
	switch (led_state){
		case OFF:
			if(led_pulse_cntr<900){
				led_state = OFF;
			}else{
				led_state = ON;
				turn_on_led();
			}
			break;
		case ON:
			if(led_pulse_cntr<1000){
				led_state = ON;
			}else{
				led_pulse_cntr=0;
				turn_off_led();
				led_state = OFF;
			}
			break;
		default:
			
			break;
		}
}
static void button_led_behaviour(button_press_t btn){
	if(btn == SHORT_PRESS){
		turn_off_led();
	}
	else if(btn == PRESS){
    	turn_on_led();
	}
	else if(btn == LONG_PRESS){
		led_flash();	
	}
}




int main(){
	configure_button();
    configure_led();
    configure_systick();
    button_press_t btn;
    while(1){
        if(!system_tick())
			continue;
		btn = get_button_press();
        button_led_behaviour(btn);
		
    }
	return(0);
}
