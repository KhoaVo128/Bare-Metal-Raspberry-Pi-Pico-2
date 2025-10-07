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
	resets.reset_clr = RESETS_RESET_DMA_MASK;
	while( !(resets.reset_done & RESETS_RESET_DMA_MASK))
		continue;
	dma.ch0_read_addr = (uint32_t)src;
	dma.ch0_write_addr = (uint32_t)dest;
	dma.ch0_trans_count = 
		 DMA_CH0_TRANS_COUNT_MODE(0)
		|DMA_CH0_TRANS_COUNT_COUNT(n);
	dma.ch0_ctrl_trig = 
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


