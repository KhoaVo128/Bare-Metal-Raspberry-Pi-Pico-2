/*
	KHOA THANH VO
	MAIN PROGRAM TO TEST SERVO'S FUNCTIONALITIES
*/
#include <servo.h>
#include <usbcdc.h>
#include <keypad.h>
#include <systick.h>

#define STEP_SIZE 100

static char c;
static int16_t rotate;


void servo_control();
void servo_control_v2();

void main( void ){

	configure_servo();
	configure_usbcdc();
	configure_systick();
	while(1){
		if(!system_tick())
			continue;
		servo_control();
			
	}
}


void servo_control(){
	if(usbcdc_getchar(&c)){
		usbcdc_putchar(c);
		switch(c){
			case 'l':
				rotate=STEP_SIZE;
				break;
			case 'r':
				rotate=-STEP_SIZE;
				break;
			case 'L':
				rotate=2*STEP_SIZE;	
				break;
			case 'R':
				rotate=-2*STEP_SIZE;
				break;
			default:
				break;
			}
			rotate_servo(rotate);
		}
}

