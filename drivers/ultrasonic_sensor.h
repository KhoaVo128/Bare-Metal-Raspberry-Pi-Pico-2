#ifndef ULTRASONIC_SENSOR
#define ULTRASONIC_SENSOR

#include<stdint.h>

static uint16_t distance;

void configure_ultrasonic_sensor();

uint16_t get_distance();

#endif
