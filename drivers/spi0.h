#ifndef SPI0_H
#define SPI0_H
#include <stdbool.h>
#include <stdint.h>
void configure_spi0();
_Bool spi0_write( uint8_t x);
_Bool spi0_read( uint8_t *x);
#endif
