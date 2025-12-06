/*
	KHOA THANH VO
	ROTARY ENCODER DRIVER'S HEADER FILES
	DECLARATION OF FUNCTIONS
*/
#ifndef ROTARY_ENCODER_H
#define ROTARY_ENCODER_H

#include<stdbool.h>

typedef enum {NONE , CLOCKWISE , ANTI_CLOCKWISE } rotary_t ;

void configure_rotary_encoder();

rotary_t get_rotation();

#endif
