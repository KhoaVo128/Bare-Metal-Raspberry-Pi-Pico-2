/* Example driver to use DMA to perform memory copy
 *
 * Uses DMA channel 0
 *
 */

#include "dma_memcpy.h"
#include <rp2350/dma.h>
#include <rp2350/resets.h>
#include <stdint.h>

static void memcpy( void *dest, const void *src, uint32_t n, uint8_t size);

void memcpy8( uint8_t *dest, const uint8_t *src, uint32_t n)
{
	memcpy(dest,src,n,0);
}
void memcpy16( uint16_t *dest, const uint16_t *src, uint32_t n)
{
	memcpy(dest,src,n,1);
}
void memcpy32( uint32_t *dest, const uint32_t *src, uint32_t n)
{
	memcpy(dest,src,n,2);
}

static void memcpy( void *dest, const void *src, uint32_t n, uint8_t size)
{
	RESETS_RESET_CLR = RESETS_RESET_DMA_MASK;
	while( !(RESETS_RESET_DONE & RESETS_RESET_DMA_MASK))
		continue;
	DMA_CH0_READ_ADDR = (uint32_t)src;
	DMA_CH0_WRITE_ADDR = (uint32_t)dest;
	DMA_CH0_TRANS_COUNT = 
		 DMA_CH0_TRANS_COUNT_MODE(0)
		|DMA_CH0_TRANS_COUNT_COUNT(n);
	DMA_CH0_CTRL_TRIG = 
		 DMA_CH0_CTRL_TRIG_READ_ERROR(1)
		|DMA_CH0_CTRL_TRIG_WRITE_ERROR(1)
		|DMA_CH0_CTRL_TRIG_SNIFF_EN(0)
		|DMA_CH0_CTRL_TRIG_BSWAP(0)
		|DMA_CH0_CTRL_TRIG_IRQ_QUIET(0)
		|DMA_CH0_CTRL_TRIG_TREQ_SEL(0x3f)
		|DMA_CH0_CTRL_TRIG_CHAIN_TO(0)
		|DMA_CH0_CTRL_TRIG_RING_SEL(0)
		|DMA_CH0_CTRL_TRIG_RING_SIZE(0)
		|DMA_CH0_CTRL_TRIG_INCR_WRITE_REV(0)
		|DMA_CH0_CTRL_TRIG_INCR_WRITE(1)
		|DMA_CH0_CTRL_TRIG_INCR_READ_REV(0)
		|DMA_CH0_CTRL_TRIG_INCR_READ(1)
		|DMA_CH0_CTRL_TRIG_DATA_SIZE(size)
		|DMA_CH0_CTRL_TRIG_HIGH_PRIORITY(0)
		|DMA_CH0_CTRL_TRIG_EN(1);
}


