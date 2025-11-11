/*
header file
declarations of types and functions
*/
#ifndef BUTTON_H
#define BUTTON_H

#include<stdbool.h>

typedef enum {NO_PRESS, SHORT_PRESS, PRESS, LONG_PRESS} button_press_t ;

void configure_button();

_Bool button_is_down();

button_press_t get_button_press();


#endif
