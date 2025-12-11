#include "systick.h"
#include "led.h"
#include "rotary_encoder.h"
#include "servo.h"
#include "ultrasonic_sensor.h"
#include "watchdog.h"
#include "switch_irq.h"
#include "interrupt.h"
#include "gpio_irq.h"


#define STEP_SIZE_ROTATE 50
#define STEP_SIZE_AUTO 5

static int16_t rotate;
static uint16_t curr_distance;
static uint16_t step_size_auto;
static uint16_t step_size_rotate;

void servo_control(rotary_t knub_rotate,uint16_t step_size);
void detecting(uint16_t distance);

void main(){
	__disable_irq();
	configure_servo();
	configure_rotary_encoder();
	configure_led();	
	configure_systick();
	configure_ultrasonic_sensor();
	systick_register_callback(ultrasonic_trigger);
	systick_register_callback(measure_distance);
	configure_switch();
	configure_watchdog(75);
	__enable_irq();
	rotary_t rotation;
	_Bool switch_is_on;

	while(1){
		if(!system_tick()){
			continue;
		}
		switch_is_on = get_switch();
		rotation = get_rotation();

		if(switch_is_on){
			step_size_auto = 0;
			step_size_rotate = STEP_SIZE_ROTATE;
		}else{
			step_size_auto = STEP_SIZE_AUTO;
			step_size_rotate = 0;
		}

		servo_automation(step_size_auto);
		servo_control(rotation,step_size_rotate);
		curr_distance = get_distance();
		detecting(20);
		
		feed_the_watchdog();
	}

}
void servo_control(rotary_t knub_rotate,uint16_t step_size){
	rotate = 0;
	if(knub_rotate == CLOCKWISE){
		rotate = -step_size;
	}
	else if(knub_rotate == ANTI_CLOCKWISE){
		rotate = step_size;
	}
	rotate_servo(rotate);
}
void detecting(uint16_t limit){
	if(curr_distance <= limit && curr_distance >= 1){
		turn_on_led();
	}else{
		turn_off_led();
	}
}