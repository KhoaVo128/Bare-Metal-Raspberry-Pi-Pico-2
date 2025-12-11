#include "systick.h"
#include "led.h"
#include "ultrasonic_sensor.h"


static uint16_t curr_distance;

void detecting(uint16_t distance);

void main(){
	__disable_irq();
	configure_led();	
	configure_systick();
	configure_ultrasonic_sensor();
	systick_register_callback(ultrasonic_trigger);
	systick_register_callback(measure_distance);
	__enable_irq();
	_Bool switch_is_on;

	while(1){
		if(!system_tick()){
			continue;
		}
		curr_distance = get_distance();
		detecting(20);
		feed_the_watchdog();
	}

}
void detecting(uint16_t limit){
	if(curr_distance <= limit && curr_distance >= 1){
		turn_on_led();
	}else{
		turn_off_led();
	}
}