/*
	KHOA THANH VO
	SERVO DRIVER'S HEADER FILES
	DECLARATION OF FUNCTIONS
*/

#ifndef SERVO_H
#define SERVO_H
#include <stdint.h>
#define SERVO_PIN		  0	 
#define SERVO_OFFSET 	-90
#define SERVO_MAX 	(2500 + SERVO_OFFSET)
#define SERVO_ZERO	(1500 + SERVO_OFFSET)
#define SERVO_MIN	(500  + SERVO_OFFSET)
void configure_servo(void);
void rotate_servo(int16_t rotate);
void servo_automation(uint16_t step_size);
uint16_t get_duty();
uint16_t get_degree();
#endif
