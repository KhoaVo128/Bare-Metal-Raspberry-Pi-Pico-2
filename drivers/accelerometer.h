/*
    KHOA THANH VO
    ACCELEROMETER DRIVER'S HEADER FILE
    DECLARATION OF FUNCTIONS
*/

#ifndef ACCELEROMETER_H
#define ACCELEROMETER_H
#include <stdint.h>
void configure_accelerometer();
void write_to_reg(uint8_t reg, uint8_t value);
void read_from_reg(uint8_t reg);
void clear_spi_fifo();
uint8_t get_value();
#endif