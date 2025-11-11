
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

#ifndef RP2350_BUSCTRL_H
#define RP2350_BUSCTRL_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t bus_priority;
		uint32_t bus_priority_ack;
		uint32_t perfctr_en;
		uint32_t perfctr0;
		uint32_t perfsel0;
		uint32_t perfctr1;
		uint32_t perfsel1;
		uint32_t perfctr2;
		uint32_t perfsel2;
		uint32_t perfctr3;
		uint32_t perfsel3;
		uint32_t RSVD0[1013];
		uint32_t bus_priority_xor;
		uint32_t bus_priority_ack_xor;
		uint32_t perfctr_en_xor;
		uint32_t perfctr0_xor;
		uint32_t perfsel0_xor;
		uint32_t perfctr1_xor;
		uint32_t perfsel1_xor;
		uint32_t perfctr2_xor;
		uint32_t perfsel2_xor;
		uint32_t perfctr3_xor;
		uint32_t perfsel3_xor;
		uint32_t RSVDxor_0[1013];
		uint32_t bus_priority_set;
		uint32_t bus_priority_ack_set;
		uint32_t perfctr_en_set;
		uint32_t perfctr0_set;
		uint32_t perfsel0_set;
		uint32_t perfctr1_set;
		uint32_t perfsel1_set;
		uint32_t perfctr2_set;
		uint32_t perfsel2_set;
		uint32_t perfctr3_set;
		uint32_t perfsel3_set;
		uint32_t RSVDset_0[1013];
		uint32_t bus_priority_clr;
		uint32_t bus_priority_ack_clr;
		uint32_t perfctr_en_clr;
		uint32_t perfctr0_clr;
		uint32_t perfsel0_clr;
		uint32_t perfctr1_clr;
		uint32_t perfsel1_clr;
		uint32_t perfctr2_clr;
		uint32_t perfsel2_clr;
		uint32_t perfctr3_clr;
		uint32_t perfsel3_clr;
		uint32_t RSVDclr_0[1013];
} BUSCTRL_REG_BLOCKS;


/*IO Registers as struct*/

#define busctrl (*(BUSCTRL_REG_BLOCKS volatile *)0x40068000)


/*IO Registers AS MACROS*/

#define BUSCTRL_BUS_PRIORITY (*(volatile uint32_t *)0x40068000)
#define BUSCTRL_BUS_PRIORITY_ACK (*(volatile uint32_t *)0x40068004)
#define BUSCTRL_PERFCTR_EN (*(volatile uint32_t *)0x40068008)
#define BUSCTRL_PERFCTR0 (*(volatile uint32_t *)0x4006800c)
#define BUSCTRL_PERFSEL0 (*(volatile uint32_t *)0x40068010)
#define BUSCTRL_PERFCTR1 (*(volatile uint32_t *)0x40068014)
#define BUSCTRL_PERFSEL1 (*(volatile uint32_t *)0x40068018)
#define BUSCTRL_PERFCTR2 (*(volatile uint32_t *)0x4006801c)
#define BUSCTRL_PERFSEL2 (*(volatile uint32_t *)0x40068020)
#define BUSCTRL_PERFCTR3 (*(volatile uint32_t *)0x40068024)
#define BUSCTRL_PERFSEL3 (*(volatile uint32_t *)0x40068028)
#define BUSCTRL_BUS_PRIORITY_XOR (*(volatile uint32_t *)0x40069000)
#define BUSCTRL_BUS_PRIORITY_ACK_XOR (*(volatile uint32_t *)0x40069004)
#define BUSCTRL_PERFCTR_EN_XOR (*(volatile uint32_t *)0x40069008)
#define BUSCTRL_PERFCTR0_XOR (*(volatile uint32_t *)0x4006900c)
#define BUSCTRL_PERFSEL0_XOR (*(volatile uint32_t *)0x40069010)
#define BUSCTRL_PERFCTR1_XOR (*(volatile uint32_t *)0x40069014)
#define BUSCTRL_PERFSEL1_XOR (*(volatile uint32_t *)0x40069018)
#define BUSCTRL_PERFCTR2_XOR (*(volatile uint32_t *)0x4006901c)
#define BUSCTRL_PERFSEL2_XOR (*(volatile uint32_t *)0x40069020)
#define BUSCTRL_PERFCTR3_XOR (*(volatile uint32_t *)0x40069024)
#define BUSCTRL_PERFSEL3_XOR (*(volatile uint32_t *)0x40069028)
#define BUSCTRL_BUS_PRIORITY_SET (*(volatile uint32_t *)0x4006a000)
#define BUSCTRL_BUS_PRIORITY_ACK_SET (*(volatile uint32_t *)0x4006a004)
#define BUSCTRL_PERFCTR_EN_SET (*(volatile uint32_t *)0x4006a008)
#define BUSCTRL_PERFCTR0_SET (*(volatile uint32_t *)0x4006a00c)
#define BUSCTRL_PERFSEL0_SET (*(volatile uint32_t *)0x4006a010)
#define BUSCTRL_PERFCTR1_SET (*(volatile uint32_t *)0x4006a014)
#define BUSCTRL_PERFSEL1_SET (*(volatile uint32_t *)0x4006a018)
#define BUSCTRL_PERFCTR2_SET (*(volatile uint32_t *)0x4006a01c)
#define BUSCTRL_PERFSEL2_SET (*(volatile uint32_t *)0x4006a020)
#define BUSCTRL_PERFCTR3_SET (*(volatile uint32_t *)0x4006a024)
#define BUSCTRL_PERFSEL3_SET (*(volatile uint32_t *)0x4006a028)
#define BUSCTRL_BUS_PRIORITY_CLR (*(volatile uint32_t *)0x4006b000)
#define BUSCTRL_BUS_PRIORITY_ACK_CLR (*(volatile uint32_t *)0x4006b004)
#define BUSCTRL_PERFCTR_EN_CLR (*(volatile uint32_t *)0x4006b008)
#define BUSCTRL_PERFCTR0_CLR (*(volatile uint32_t *)0x4006b00c)
#define BUSCTRL_PERFSEL0_CLR (*(volatile uint32_t *)0x4006b010)
#define BUSCTRL_PERFCTR1_CLR (*(volatile uint32_t *)0x4006b014)
#define BUSCTRL_PERFSEL1_CLR (*(volatile uint32_t *)0x4006b018)
#define BUSCTRL_PERFCTR2_CLR (*(volatile uint32_t *)0x4006b01c)
#define BUSCTRL_PERFSEL2_CLR (*(volatile uint32_t *)0x4006b020)
#define BUSCTRL_PERFCTR3_CLR (*(volatile uint32_t *)0x4006b024)
#define BUSCTRL_PERFSEL3_CLR (*(volatile uint32_t *)0x4006b028)

/*BUS_PRIORITY Register macros*/

#define BUSCTRL_BUS_PRIORITY_DMA_W(v) (((v)&0x1)<<12)
#define BUSCTRL_BUS_PRIORITY_DMA_W_MASK BUSCTRL_BUS_PRIORITY_DMA_W(ALL1)
#define BUSCTRL_BUS_PRIORITY_DMA_R(v) (((v)&0x1)<<8)
#define BUSCTRL_BUS_PRIORITY_DMA_R_MASK BUSCTRL_BUS_PRIORITY_DMA_R(ALL1)
#define BUSCTRL_BUS_PRIORITY_PROC1(v) (((v)&0x1)<<4)
#define BUSCTRL_BUS_PRIORITY_PROC1_MASK BUSCTRL_BUS_PRIORITY_PROC1(ALL1)
#define BUSCTRL_BUS_PRIORITY_PROC0(v) (((v)&0x1)<<0)
#define BUSCTRL_BUS_PRIORITY_PROC0_MASK BUSCTRL_BUS_PRIORITY_PROC0(ALL1)

/*BUS_PRIORITY_ACK Register macros*/


/*PERFCTR_EN Register macros*/


/*PERFCTR0 Register macros*/


/*PERFSEL0 Register macros*/


/*PERFCTR1 Register macros*/


/*PERFSEL1 Register macros*/


/*PERFCTR2 Register macros*/


/*PERFSEL2 Register macros*/


/*PERFCTR3 Register macros*/


/*PERFSEL3 Register macros*/


#endif

