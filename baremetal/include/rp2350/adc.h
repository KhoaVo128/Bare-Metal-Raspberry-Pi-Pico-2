
/* Copyright (c) 2024-2025 Douglas H. Summerville (dsummer@binghamton.edu) 
 *
 * Created from scraped data which is Copyright (c) 2024 Raspberry Pi
 * (Trading) Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef RP2350_ADC_H
#define RP2350_ADC_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t cs;
		uint32_t result;
		uint32_t fcs;
		uint32_t fifo;
		uint32_t div;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[1015];
		uint32_t xor_cs;
		uint32_t xor_result;
		uint32_t xor_fcs;
		uint32_t xor_fifo;
		uint32_t xor_div;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_0[1015];
		uint32_t set_cs;
		uint32_t set_result;
		uint32_t set_fcs;
		uint32_t set_fifo;
		uint32_t set_div;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_0[1015];
		uint32_t clr_cs;
		uint32_t clr_result;
		uint32_t clr_fcs;
		uint32_t clr_fifo;
		uint32_t clr_div;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_0[1015];
} ADC_REG_BLOCKS;


/*IO Registers as struct*/

#define adc (*(ADC_REG_BLOCKS volatile *)0x400a0000)


/*IO Registers AS MACROS*/

#define ADC_CS (*(volatile uint32_t *)0x400a0000)
#define ADC_RESULT (*(volatile uint32_t *)0x400a0004)
#define ADC_FCS (*(volatile uint32_t *)0x400a0008)
#define ADC_FIFO (*(volatile uint32_t *)0x400a000c)
#define ADC_DIV (*(volatile uint32_t *)0x400a0010)
#define ADC_INTR (*(volatile uint32_t *)0x400a0014)
#define ADC_INTE (*(volatile uint32_t *)0x400a0018)
#define ADC_INTF (*(volatile uint32_t *)0x400a001c)
#define ADC_INTS (*(volatile uint32_t *)0x400a0020)
#define ADC_XOR_CS (*(volatile uint32_t *)0x400a1000)
#define ADC_XOR_RESULT (*(volatile uint32_t *)0x400a1004)
#define ADC_XOR_FCS (*(volatile uint32_t *)0x400a1008)
#define ADC_XOR_FIFO (*(volatile uint32_t *)0x400a100c)
#define ADC_XOR_DIV (*(volatile uint32_t *)0x400a1010)
#define ADC_XOR_INTR (*(volatile uint32_t *)0x400a1014)
#define ADC_XOR_INTE (*(volatile uint32_t *)0x400a1018)
#define ADC_XOR_INTF (*(volatile uint32_t *)0x400a101c)
#define ADC_XOR_INTS (*(volatile uint32_t *)0x400a1020)
#define ADC_SET_CS (*(volatile uint32_t *)0x400a2000)
#define ADC_SET_RESULT (*(volatile uint32_t *)0x400a2004)
#define ADC_SET_FCS (*(volatile uint32_t *)0x400a2008)
#define ADC_SET_FIFO (*(volatile uint32_t *)0x400a200c)
#define ADC_SET_DIV (*(volatile uint32_t *)0x400a2010)
#define ADC_SET_INTR (*(volatile uint32_t *)0x400a2014)
#define ADC_SET_INTE (*(volatile uint32_t *)0x400a2018)
#define ADC_SET_INTF (*(volatile uint32_t *)0x400a201c)
#define ADC_SET_INTS (*(volatile uint32_t *)0x400a2020)
#define ADC_CLR_CS (*(volatile uint32_t *)0x400a3000)
#define ADC_CLR_RESULT (*(volatile uint32_t *)0x400a3004)
#define ADC_CLR_FCS (*(volatile uint32_t *)0x400a3008)
#define ADC_CLR_FIFO (*(volatile uint32_t *)0x400a300c)
#define ADC_CLR_DIV (*(volatile uint32_t *)0x400a3010)
#define ADC_CLR_INTR (*(volatile uint32_t *)0x400a3014)
#define ADC_CLR_INTE (*(volatile uint32_t *)0x400a3018)
#define ADC_CLR_INTF (*(volatile uint32_t *)0x400a301c)
#define ADC_CLR_INTS (*(volatile uint32_t *)0x400a3020)

/*CS Register macros*/

#define ADC_CS_RROBIN(v) (((v)&0x1ff)<<16)
#define ADC_CS_RROBIN_MASK ADC_CS_RROBIN(ALL1)
#define ADC_CS_AINSEL(v) (((v)&0xf)<<12)
#define ADC_CS_AINSEL_MASK ADC_CS_AINSEL(ALL1)
#define ADC_CS_ERR_STICKY(v) (((v)&0x1)<<10)
#define ADC_CS_ERR_STICKY_MASK ADC_CS_ERR_STICKY(ALL1)
#define ADC_CS_ERR(v) (((v)&0x1)<<9)
#define ADC_CS_ERR_MASK ADC_CS_ERR(ALL1)
#define ADC_CS_READY(v) (((v)&0x1)<<8)
#define ADC_CS_READY_MASK ADC_CS_READY(ALL1)
#define ADC_CS_START_MANY(v) (((v)&0x1)<<3)
#define ADC_CS_START_MANY_MASK ADC_CS_START_MANY(ALL1)
#define ADC_CS_START_ONCE(v) (((v)&0x1)<<2)
#define ADC_CS_START_ONCE_MASK ADC_CS_START_ONCE(ALL1)
#define ADC_CS_TS_EN(v) (((v)&0x1)<<1)
#define ADC_CS_TS_EN_MASK ADC_CS_TS_EN(ALL1)
#define ADC_CS_EN(v) (((v)&0x1)<<0)
#define ADC_CS_EN_MASK ADC_CS_EN(ALL1)

/*RESULT Register macros*/


/*FCS Register macros*/

#define ADC_FCS_THRESH(v) (((v)&0xf)<<24)
#define ADC_FCS_THRESH_MASK ADC_FCS_THRESH(ALL1)
#define ADC_FCS_LEVEL(v) (((v)&0xf)<<16)
#define ADC_FCS_LEVEL_MASK ADC_FCS_LEVEL(ALL1)
#define ADC_FCS_OVER(v) (((v)&0x1)<<11)
#define ADC_FCS_OVER_MASK ADC_FCS_OVER(ALL1)
#define ADC_FCS_UNDER(v) (((v)&0x1)<<10)
#define ADC_FCS_UNDER_MASK ADC_FCS_UNDER(ALL1)
#define ADC_FCS_FULL(v) (((v)&0x1)<<9)
#define ADC_FCS_FULL_MASK ADC_FCS_FULL(ALL1)
#define ADC_FCS_EMPTY(v) (((v)&0x1)<<8)
#define ADC_FCS_EMPTY_MASK ADC_FCS_EMPTY(ALL1)
#define ADC_FCS_DREQ_EN(v) (((v)&0x1)<<3)
#define ADC_FCS_DREQ_EN_MASK ADC_FCS_DREQ_EN(ALL1)
#define ADC_FCS_ERR(v) (((v)&0x1)<<2)
#define ADC_FCS_ERR_MASK ADC_FCS_ERR(ALL1)
#define ADC_FCS_SHIFT(v) (((v)&0x1)<<1)
#define ADC_FCS_SHIFT_MASK ADC_FCS_SHIFT(ALL1)
#define ADC_FCS_EN(v) (((v)&0x1)<<0)
#define ADC_FCS_EN_MASK ADC_FCS_EN(ALL1)

/*FIFO Register macros*/

#define ADC_FIFO_ERR(v) (((v)&0x1)<<15)
#define ADC_FIFO_ERR_MASK ADC_FIFO_ERR(ALL1)
#define ADC_FIFO_VAL(v) (((v)&0xfff)<<0)
#define ADC_FIFO_VAL_MASK ADC_FIFO_VAL(ALL1)

/*DIV Register macros*/

#define ADC_DIV_INT(v) (((v)&0xffff)<<8)
#define ADC_DIV_INT_MASK ADC_DIV_INT(ALL1)
#define ADC_DIV_FRAC(v) (((v)&0xff)<<0)
#define ADC_DIV_FRAC_MASK ADC_DIV_FRAC(ALL1)

/*INTR Register macros*/

#define ADC_INTR_FIFO(v) (((v)&0x1)<<0)
#define ADC_INTR_FIFO_MASK ADC_INTR_FIFO(ALL1)

/*INTE Register macros*/

#define ADC_INTE_FIFO(v) (((v)&0x1)<<0)
#define ADC_INTE_FIFO_MASK ADC_INTE_FIFO(ALL1)

/*INTF Register macros*/

#define ADC_INTF_FIFO(v) (((v)&0x1)<<0)
#define ADC_INTF_FIFO_MASK ADC_INTF_FIFO(ALL1)

/*INTS Register macros*/

#define ADC_INTS_FIFO(v) (((v)&0x1)<<0)
#define ADC_INTS_FIFO_MASK ADC_INTS_FIFO(ALL1)

#endif

