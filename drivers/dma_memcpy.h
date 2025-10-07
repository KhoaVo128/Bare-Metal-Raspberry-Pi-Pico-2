#ifndef DMA_MEMCPY_H
#define DMA_MEMCPY_H

#include <stdint.h>

void memcpy8(  uint8_t  *dest, const uint8_t  *src, uint32_t n);
void memcpy16( uint16_t *dest, const uint16_t *src, uint32_t n);
void memcpy32( uint32_t *dest, const uint32_t *src, uint32_t n);

#endif
