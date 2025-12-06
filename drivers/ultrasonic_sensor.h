#ifndef ULTRASONIC_SENSOR
#define ULTRASONIC_SENSOR

#include<stdint.h>

uint16_t get_distance();
void configure_ultrasonic_sensor();
void trigger();
void measure_distance();

#endif
