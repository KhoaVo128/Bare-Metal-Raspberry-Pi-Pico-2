#ifndef ULTRASONIC_SENSOR
#define ULTRASONIC_SENSOR

#include <stdint.h>
#include <stdbool.h>

uint32_t get_distance();
_Bool get_echo();
void configure_ultrasonic_sensor();
void ultrasonic_trigger();
void measure_distance();

#endif