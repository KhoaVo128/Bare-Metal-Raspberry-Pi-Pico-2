/*
	KHOA THANH VO
	MAIN PROGRAM TO TEST INTEGRATI0N OF SERVO AND ROTARY KNOB
*/
#include <servo.h>
#include <systick.h>
#include <rotary_encoder.h>

#define STEP_SIZE 100

static int16_t rotate;


void servo_control(rotary_t knub_rotate);

void main( void ){

	configure_servo();
	configure_rotary_encoder();
	configure_systick();
	rotary_t rotation;
	while(1){
		if(!system_tick())
			continue;
		rotation = get_rotation();
		servo_control(rotation);
			
	}
}


void servo_control(rotary_t knub_rotate){
	rotate = 0;
	if(knub_rotate == CLOCKWISE){
		rotate = STEP_SIZE;
	}
	else if(knub_rotate == ANTI_CLOCKWISE){
		rotate = - STEP_SIZE;
	}
	rotate_servo(rotate);
	
}

