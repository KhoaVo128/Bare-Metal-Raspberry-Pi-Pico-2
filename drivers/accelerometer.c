/*
	KHOA THANH VO

	DEFINITIONS OF FUNCTIONS IN ACCELEROMETER HEADER FILE
	DEFINES MACROS, FILE SCOPE VARIABLE(S), AND HELPER FUNCTIONS

*/
#include "accelerometer.h"
#include "spi0.h"

#define READ_CMD (1<<7)
#define WRITE_CMD 0
#define DUMMY 0


static uint8_t value;

uint8_t get_value(){
    return value;
}

void configure_accelerometer(){
    configure_spi0();
}

void read_from_reg(uint8_t reg){
	spi0_write(READ_CMD | reg);
	spi0_write(DUMMY);
}

void write_to_reg(uint8_t reg, uint8_t wvalue){
	spi0_write(WRITE_CMD | reg);
	spi0_write(wvalue);
}



void clear_spi_fifo(){
    while(spi0_read(&value)){
		spi0_read(&value);
	}
}
