#ifndef ROTARY_ENCODER_H
#define ROTARY_ENCODER_H

#include<stdbool.h>

typedef enum {NONE , CLOCKWISE , ANTI_CLOCKWISE } rotary_t ;

_Bool get_A_low();
_Bool get_B_low();
void configure_rotary_encoder();

rotary_t get_rotation();

#endif
