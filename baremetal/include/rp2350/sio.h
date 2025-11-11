
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

#ifndef RP2350_SIO_H
#define RP2350_SIO_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t cpuid;
		uint32_t gpio_in;
		uint32_t gpio_hi_in;
		uint32_t RSVD0;
		uint32_t gpio_out;
		uint32_t gpio_hi_out;
		uint32_t gpio_out_set;
		uint32_t gpio_hi_out_set;
		uint32_t gpio_out_clr;
		uint32_t gpio_hi_out_clr;
		uint32_t gpio_out_xor;
		uint32_t gpio_hi_out_xor;
		uint32_t gpio_oe;
		uint32_t gpio_hi_oe;
		uint32_t gpio_oe_set;
		uint32_t gpio_hi_oe_set;
		uint32_t gpio_oe_clr;
		uint32_t gpio_hi_oe_clr;
		uint32_t gpio_oe_xor;
		uint32_t gpio_hi_oe_xor;
		uint32_t fifo_st;
		uint32_t fifo_wr;
		uint32_t fifo_rd;
		uint32_t spinlock_st;
		uint32_t RSVD1[8];
		uint32_t interp0_accum0;
		uint32_t interp0_accum1;
		uint32_t interp0_base0;
		uint32_t interp0_base1;
		uint32_t interp0_base2;
		uint32_t interp0_pop_lane0;
		uint32_t interp0_pop_lane1;
		uint32_t interp0_pop_full;
		uint32_t interp0_peek_lane0;
		uint32_t interp0_peek_lane1;
		uint32_t interp0_peek_full;
		uint32_t interp0_ctrl_lane0;
		uint32_t interp0_ctrl_lane1;
		uint32_t interp0_accum0_add;
		uint32_t interp0_accum1_add;
		uint32_t interp0_base_1and0;
		uint32_t interp1_accum0;
		uint32_t interp1_accum1;
		uint32_t interp1_base0;
		uint32_t interp1_base1;
		uint32_t interp1_base2;
		uint32_t interp1_pop_lane0;
		uint32_t interp1_pop_lane1;
		uint32_t interp1_pop_full;
		uint32_t interp1_peek_lane0;
		uint32_t interp1_peek_lane1;
		uint32_t interp1_peek_full;
		uint32_t interp1_ctrl_lane0;
		uint32_t interp1_ctrl_lane1;
		uint32_t interp1_accum0_add;
		uint32_t interp1_accum1_add;
		uint32_t interp1_base_1and0;
		uint32_t spinlock0;
		uint32_t spinlock1;
		uint32_t spinlock2;
		uint32_t spinlock3;
		uint32_t spinlock4;
		uint32_t spinlock5;
		uint32_t spinlock6;
		uint32_t spinlock7;
		uint32_t spinlock8;
		uint32_t spinlock9;
		uint32_t spinlock10;
		uint32_t spinlock11;
		uint32_t spinlock12;
		uint32_t spinlock13;
		uint32_t spinlock14;
		uint32_t spinlock15;
		uint32_t spinlock16;
		uint32_t spinlock17;
		uint32_t spinlock18;
		uint32_t spinlock19;
		uint32_t spinlock20;
		uint32_t spinlock21;
		uint32_t spinlock22;
		uint32_t spinlock23;
		uint32_t spinlock24;
		uint32_t spinlock25;
		uint32_t spinlock26;
		uint32_t spinlock27;
		uint32_t spinlock28;
		uint32_t spinlock29;
		uint32_t spinlock30;
		uint32_t spinlock31;
		uint32_t doorbell_out_set;
		uint32_t doorbell_out_clr;
		uint32_t doorbell_in_set;
		uint32_t doorbell_in_clr;
		uint32_t peri_nonsec;
		uint32_t RSVD2[3];
		uint32_t riscv_softirq;
		uint32_t mtime_ctrl;
		uint32_t RSVD3[2];
		uint32_t mtime;
		uint32_t mtimeh;
		uint32_t mtimecmp;
		uint32_t mtimecmph;
		uint32_t tmds_ctrl;
		uint32_t tmds_wdata;
		uint32_t tmds_peek_single;
		uint32_t tmds_pop_single;
		uint32_t tmds_peek_double_l0;
		uint32_t tmds_pop_double_l0;
		uint32_t tmds_peek_double_l1;
		uint32_t tmds_pop_double_l1;
		uint32_t tmds_peek_double_l2;
		uint32_t tmds_pop_double_l2;
} SIO_REG_BLOCKS;
typedef struct{
		uint32_t cpuid;
		uint32_t gpio_in;
		uint32_t gpio_hi_in;
		uint32_t RSVD0;
		uint32_t gpio_out;
		uint32_t gpio_hi_out;
		uint32_t gpio_out_set;
		uint32_t gpio_hi_out_set;
		uint32_t gpio_out_clr;
		uint32_t gpio_hi_out_clr;
		uint32_t gpio_out_xor;
		uint32_t gpio_hi_out_xor;
		uint32_t gpio_oe;
		uint32_t gpio_hi_oe;
		uint32_t gpio_oe_set;
		uint32_t gpio_hi_oe_set;
		uint32_t gpio_oe_clr;
		uint32_t gpio_hi_oe_clr;
		uint32_t gpio_oe_xor;
		uint32_t gpio_hi_oe_xor;
		uint32_t fifo_st;
		uint32_t fifo_wr;
		uint32_t fifo_rd;
		uint32_t spinlock_st;
		uint32_t RSVD1[8];
		uint32_t interp0_accum0;
		uint32_t interp0_accum1;
		uint32_t interp0_base0;
		uint32_t interp0_base1;
		uint32_t interp0_base2;
		uint32_t interp0_pop_lane0;
		uint32_t interp0_pop_lane1;
		uint32_t interp0_pop_full;
		uint32_t interp0_peek_lane0;
		uint32_t interp0_peek_lane1;
		uint32_t interp0_peek_full;
		uint32_t interp0_ctrl_lane0;
		uint32_t interp0_ctrl_lane1;
		uint32_t interp0_accum0_add;
		uint32_t interp0_accum1_add;
		uint32_t interp0_base_1and0;
		uint32_t interp1_accum0;
		uint32_t interp1_accum1;
		uint32_t interp1_base0;
		uint32_t interp1_base1;
		uint32_t interp1_base2;
		uint32_t interp1_pop_lane0;
		uint32_t interp1_pop_lane1;
		uint32_t interp1_pop_full;
		uint32_t interp1_peek_lane0;
		uint32_t interp1_peek_lane1;
		uint32_t interp1_peek_full;
		uint32_t interp1_ctrl_lane0;
		uint32_t interp1_ctrl_lane1;
		uint32_t interp1_accum0_add;
		uint32_t interp1_accum1_add;
		uint32_t interp1_base_1and0;
		uint32_t spinlock0;
		uint32_t spinlock1;
		uint32_t spinlock2;
		uint32_t spinlock3;
		uint32_t spinlock4;
		uint32_t spinlock5;
		uint32_t spinlock6;
		uint32_t spinlock7;
		uint32_t spinlock8;
		uint32_t spinlock9;
		uint32_t spinlock10;
		uint32_t spinlock11;
		uint32_t spinlock12;
		uint32_t spinlock13;
		uint32_t spinlock14;
		uint32_t spinlock15;
		uint32_t spinlock16;
		uint32_t spinlock17;
		uint32_t spinlock18;
		uint32_t spinlock19;
		uint32_t spinlock20;
		uint32_t spinlock21;
		uint32_t spinlock22;
		uint32_t spinlock23;
		uint32_t spinlock24;
		uint32_t spinlock25;
		uint32_t spinlock26;
		uint32_t spinlock27;
		uint32_t spinlock28;
		uint32_t spinlock29;
		uint32_t spinlock30;
		uint32_t spinlock31;
		uint32_t doorbell_out_set;
		uint32_t doorbell_out_clr;
		uint32_t doorbell_in_set;
		uint32_t doorbell_in_clr;
		uint32_t peri_nonsec;
		uint32_t RSVD2[3];
		uint32_t riscv_softirq;
		uint32_t mtime_ctrl;
		uint32_t RSVD3[2];
		uint32_t mtime;
		uint32_t mtimeh;
		uint32_t mtimecmp;
		uint32_t mtimecmph;
		uint32_t tmds_ctrl;
		uint32_t tmds_wdata;
		uint32_t tmds_peek_single;
		uint32_t tmds_pop_single;
		uint32_t tmds_peek_double_l0;
		uint32_t tmds_pop_double_l0;
		uint32_t tmds_peek_double_l1;
		uint32_t tmds_pop_double_l1;
		uint32_t tmds_peek_double_l2;
		uint32_t tmds_pop_double_l2;
} SIO_NONSEC_REG_BLOCKS;


/*IO Registers as struct*/

#define sio (*(SIO_REG_BLOCKS volatile *)0xd0000000)



#define sio_nonsec (*(SIO_NONSEC_REG_BLOCKS volatile *)0xd0020000)


/*IO Registers AS MACROS*/

#define SIO_CPUID (*(volatile uint32_t *)0xd0000000)
#define SIO_GPIO_IN (*(volatile uint32_t *)0xd0000004)
#define SIO_GPIO_HI_IN (*(volatile uint32_t *)0xd0000008)
#define SIO_GPIO_OUT (*(volatile uint32_t *)0xd0000010)
#define SIO_GPIO_HI_OUT (*(volatile uint32_t *)0xd0000014)
#define SIO_GPIO_OUT_SET (*(volatile uint32_t *)0xd0000018)
#define SIO_GPIO_HI_OUT_SET (*(volatile uint32_t *)0xd000001c)
#define SIO_GPIO_OUT_CLR (*(volatile uint32_t *)0xd0000020)
#define SIO_GPIO_HI_OUT_CLR (*(volatile uint32_t *)0xd0000024)
#define SIO_GPIO_OUT_XOR (*(volatile uint32_t *)0xd0000028)
#define SIO_GPIO_HI_OUT_XOR (*(volatile uint32_t *)0xd000002c)
#define SIO_GPIO_OE (*(volatile uint32_t *)0xd0000030)
#define SIO_GPIO_HI_OE (*(volatile uint32_t *)0xd0000034)
#define SIO_GPIO_OE_SET (*(volatile uint32_t *)0xd0000038)
#define SIO_GPIO_HI_OE_SET (*(volatile uint32_t *)0xd000003c)
#define SIO_GPIO_OE_CLR (*(volatile uint32_t *)0xd0000040)
#define SIO_GPIO_HI_OE_CLR (*(volatile uint32_t *)0xd0000044)
#define SIO_GPIO_OE_XOR (*(volatile uint32_t *)0xd0000048)
#define SIO_GPIO_HI_OE_XOR (*(volatile uint32_t *)0xd000004c)
#define SIO_FIFO_ST (*(volatile uint32_t *)0xd0000050)
#define SIO_FIFO_WR (*(volatile uint32_t *)0xd0000054)
#define SIO_FIFO_RD (*(volatile uint32_t *)0xd0000058)
#define SIO_SPINLOCK_ST (*(volatile uint32_t *)0xd000005c)
#define SIO_INTERP0_ACCUM0 (*(volatile uint32_t *)0xd0000080)
#define SIO_INTERP0_ACCUM1 (*(volatile uint32_t *)0xd0000084)
#define SIO_INTERP0_BASE0 (*(volatile uint32_t *)0xd0000088)
#define SIO_INTERP0_BASE1 (*(volatile uint32_t *)0xd000008c)
#define SIO_INTERP0_BASE2 (*(volatile uint32_t *)0xd0000090)
#define SIO_INTERP0_POP_LANE0 (*(volatile uint32_t *)0xd0000094)
#define SIO_INTERP0_POP_LANE1 (*(volatile uint32_t *)0xd0000098)
#define SIO_INTERP0_POP_FULL (*(volatile uint32_t *)0xd000009c)
#define SIO_INTERP0_PEEK_LANE0 (*(volatile uint32_t *)0xd00000a0)
#define SIO_INTERP0_PEEK_LANE1 (*(volatile uint32_t *)0xd00000a4)
#define SIO_INTERP0_PEEK_FULL (*(volatile uint32_t *)0xd00000a8)
#define SIO_INTERP0_CTRL_LANE0 (*(volatile uint32_t *)0xd00000ac)
#define SIO_INTERP0_CTRL_LANE1 (*(volatile uint32_t *)0xd00000b0)
#define SIO_INTERP0_ACCUM0_ADD (*(volatile uint32_t *)0xd00000b4)
#define SIO_INTERP0_ACCUM1_ADD (*(volatile uint32_t *)0xd00000b8)
#define SIO_INTERP0_BASE_1AND0 (*(volatile uint32_t *)0xd00000bc)
#define SIO_INTERP1_ACCUM0 (*(volatile uint32_t *)0xd00000c0)
#define SIO_INTERP1_ACCUM1 (*(volatile uint32_t *)0xd00000c4)
#define SIO_INTERP1_BASE0 (*(volatile uint32_t *)0xd00000c8)
#define SIO_INTERP1_BASE1 (*(volatile uint32_t *)0xd00000cc)
#define SIO_INTERP1_BASE2 (*(volatile uint32_t *)0xd00000d0)
#define SIO_INTERP1_POP_LANE0 (*(volatile uint32_t *)0xd00000d4)
#define SIO_INTERP1_POP_LANE1 (*(volatile uint32_t *)0xd00000d8)
#define SIO_INTERP1_POP_FULL (*(volatile uint32_t *)0xd00000dc)
#define SIO_INTERP1_PEEK_LANE0 (*(volatile uint32_t *)0xd00000e0)
#define SIO_INTERP1_PEEK_LANE1 (*(volatile uint32_t *)0xd00000e4)
#define SIO_INTERP1_PEEK_FULL (*(volatile uint32_t *)0xd00000e8)
#define SIO_INTERP1_CTRL_LANE0 (*(volatile uint32_t *)0xd00000ec)
#define SIO_INTERP1_CTRL_LANE1 (*(volatile uint32_t *)0xd00000f0)
#define SIO_INTERP1_ACCUM0_ADD (*(volatile uint32_t *)0xd00000f4)
#define SIO_INTERP1_ACCUM1_ADD (*(volatile uint32_t *)0xd00000f8)
#define SIO_INTERP1_BASE_1AND0 (*(volatile uint32_t *)0xd00000fc)
#define SIO_SPINLOCK0 (*(volatile uint32_t *)0xd0000100)
#define SIO_SPINLOCK1 (*(volatile uint32_t *)0xd0000104)
#define SIO_SPINLOCK2 (*(volatile uint32_t *)0xd0000108)
#define SIO_SPINLOCK3 (*(volatile uint32_t *)0xd000010c)
#define SIO_SPINLOCK4 (*(volatile uint32_t *)0xd0000110)
#define SIO_SPINLOCK5 (*(volatile uint32_t *)0xd0000114)
#define SIO_SPINLOCK6 (*(volatile uint32_t *)0xd0000118)
#define SIO_SPINLOCK7 (*(volatile uint32_t *)0xd000011c)
#define SIO_SPINLOCK8 (*(volatile uint32_t *)0xd0000120)
#define SIO_SPINLOCK9 (*(volatile uint32_t *)0xd0000124)
#define SIO_SPINLOCK10 (*(volatile uint32_t *)0xd0000128)
#define SIO_SPINLOCK11 (*(volatile uint32_t *)0xd000012c)
#define SIO_SPINLOCK12 (*(volatile uint32_t *)0xd0000130)
#define SIO_SPINLOCK13 (*(volatile uint32_t *)0xd0000134)
#define SIO_SPINLOCK14 (*(volatile uint32_t *)0xd0000138)
#define SIO_SPINLOCK15 (*(volatile uint32_t *)0xd000013c)
#define SIO_SPINLOCK16 (*(volatile uint32_t *)0xd0000140)
#define SIO_SPINLOCK17 (*(volatile uint32_t *)0xd0000144)
#define SIO_SPINLOCK18 (*(volatile uint32_t *)0xd0000148)
#define SIO_SPINLOCK19 (*(volatile uint32_t *)0xd000014c)
#define SIO_SPINLOCK20 (*(volatile uint32_t *)0xd0000150)
#define SIO_SPINLOCK21 (*(volatile uint32_t *)0xd0000154)
#define SIO_SPINLOCK22 (*(volatile uint32_t *)0xd0000158)
#define SIO_SPINLOCK23 (*(volatile uint32_t *)0xd000015c)
#define SIO_SPINLOCK24 (*(volatile uint32_t *)0xd0000160)
#define SIO_SPINLOCK25 (*(volatile uint32_t *)0xd0000164)
#define SIO_SPINLOCK26 (*(volatile uint32_t *)0xd0000168)
#define SIO_SPINLOCK27 (*(volatile uint32_t *)0xd000016c)
#define SIO_SPINLOCK28 (*(volatile uint32_t *)0xd0000170)
#define SIO_SPINLOCK29 (*(volatile uint32_t *)0xd0000174)
#define SIO_SPINLOCK30 (*(volatile uint32_t *)0xd0000178)
#define SIO_SPINLOCK31 (*(volatile uint32_t *)0xd000017c)
#define SIO_DOORBELL_OUT_SET (*(volatile uint32_t *)0xd0000180)
#define SIO_DOORBELL_OUT_CLR (*(volatile uint32_t *)0xd0000184)
#define SIO_DOORBELL_IN_SET (*(volatile uint32_t *)0xd0000188)
#define SIO_DOORBELL_IN_CLR (*(volatile uint32_t *)0xd000018c)
#define SIO_PERI_NONSEC (*(volatile uint32_t *)0xd0000190)
#define SIO_RISCV_SOFTIRQ (*(volatile uint32_t *)0xd00001a0)
#define SIO_MTIME_CTRL (*(volatile uint32_t *)0xd00001a4)
#define SIO_MTIME (*(volatile uint32_t *)0xd00001b0)
#define SIO_MTIMEH (*(volatile uint32_t *)0xd00001b4)
#define SIO_MTIMECMP (*(volatile uint32_t *)0xd00001b8)
#define SIO_MTIMECMPH (*(volatile uint32_t *)0xd00001bc)
#define SIO_TMDS_CTRL (*(volatile uint32_t *)0xd00001c0)
#define SIO_TMDS_WDATA (*(volatile uint32_t *)0xd00001c4)
#define SIO_TMDS_PEEK_SINGLE (*(volatile uint32_t *)0xd00001c8)
#define SIO_TMDS_POP_SINGLE (*(volatile uint32_t *)0xd00001cc)
#define SIO_TMDS_PEEK_DOUBLE_L0 (*(volatile uint32_t *)0xd00001d0)
#define SIO_TMDS_POP_DOUBLE_L0 (*(volatile uint32_t *)0xd00001d4)
#define SIO_TMDS_PEEK_DOUBLE_L1 (*(volatile uint32_t *)0xd00001d8)
#define SIO_TMDS_POP_DOUBLE_L1 (*(volatile uint32_t *)0xd00001dc)
#define SIO_TMDS_PEEK_DOUBLE_L2 (*(volatile uint32_t *)0xd00001e0)
#define SIO_TMDS_POP_DOUBLE_L2 (*(volatile uint32_t *)0xd00001e4)
#define SIO_NONSEC_CPUID (*(volatile uint32_t *)0xd0020000)
#define SIO_NONSEC_GPIO_IN (*(volatile uint32_t *)0xd0020004)
#define SIO_NONSEC_GPIO_HI_IN (*(volatile uint32_t *)0xd0020008)
#define SIO_NONSEC_GPIO_OUT (*(volatile uint32_t *)0xd0020010)
#define SIO_NONSEC_GPIO_HI_OUT (*(volatile uint32_t *)0xd0020014)
#define SIO_NONSEC_GPIO_OUT_SET (*(volatile uint32_t *)0xd0020018)
#define SIO_NONSEC_GPIO_HI_OUT_SET (*(volatile uint32_t *)0xd002001c)
#define SIO_NONSEC_GPIO_OUT_CLR (*(volatile uint32_t *)0xd0020020)
#define SIO_NONSEC_GPIO_HI_OUT_CLR (*(volatile uint32_t *)0xd0020024)
#define SIO_NONSEC_GPIO_OUT_XOR (*(volatile uint32_t *)0xd0020028)
#define SIO_NONSEC_GPIO_HI_OUT_XOR (*(volatile uint32_t *)0xd002002c)
#define SIO_NONSEC_GPIO_OE (*(volatile uint32_t *)0xd0020030)
#define SIO_NONSEC_GPIO_HI_OE (*(volatile uint32_t *)0xd0020034)
#define SIO_NONSEC_GPIO_OE_SET (*(volatile uint32_t *)0xd0020038)
#define SIO_NONSEC_GPIO_HI_OE_SET (*(volatile uint32_t *)0xd002003c)
#define SIO_NONSEC_GPIO_OE_CLR (*(volatile uint32_t *)0xd0020040)
#define SIO_NONSEC_GPIO_HI_OE_CLR (*(volatile uint32_t *)0xd0020044)
#define SIO_NONSEC_GPIO_OE_XOR (*(volatile uint32_t *)0xd0020048)
#define SIO_NONSEC_GPIO_HI_OE_XOR (*(volatile uint32_t *)0xd002004c)
#define SIO_NONSEC_FIFO_ST (*(volatile uint32_t *)0xd0020050)
#define SIO_NONSEC_FIFO_WR (*(volatile uint32_t *)0xd0020054)
#define SIO_NONSEC_FIFO_RD (*(volatile uint32_t *)0xd0020058)
#define SIO_NONSEC_SPINLOCK_ST (*(volatile uint32_t *)0xd002005c)
#define SIO_NONSEC_INTERP0_ACCUM0 (*(volatile uint32_t *)0xd0020080)
#define SIO_NONSEC_INTERP0_ACCUM1 (*(volatile uint32_t *)0xd0020084)
#define SIO_NONSEC_INTERP0_BASE0 (*(volatile uint32_t *)0xd0020088)
#define SIO_NONSEC_INTERP0_BASE1 (*(volatile uint32_t *)0xd002008c)
#define SIO_NONSEC_INTERP0_BASE2 (*(volatile uint32_t *)0xd0020090)
#define SIO_NONSEC_INTERP0_POP_LANE0 (*(volatile uint32_t *)0xd0020094)
#define SIO_NONSEC_INTERP0_POP_LANE1 (*(volatile uint32_t *)0xd0020098)
#define SIO_NONSEC_INTERP0_POP_FULL (*(volatile uint32_t *)0xd002009c)
#define SIO_NONSEC_INTERP0_PEEK_LANE0 (*(volatile uint32_t *)0xd00200a0)
#define SIO_NONSEC_INTERP0_PEEK_LANE1 (*(volatile uint32_t *)0xd00200a4)
#define SIO_NONSEC_INTERP0_PEEK_FULL (*(volatile uint32_t *)0xd00200a8)
#define SIO_NONSEC_INTERP0_CTRL_LANE0 (*(volatile uint32_t *)0xd00200ac)
#define SIO_NONSEC_INTERP0_CTRL_LANE1 (*(volatile uint32_t *)0xd00200b0)
#define SIO_NONSEC_INTERP0_ACCUM0_ADD (*(volatile uint32_t *)0xd00200b4)
#define SIO_NONSEC_INTERP0_ACCUM1_ADD (*(volatile uint32_t *)0xd00200b8)
#define SIO_NONSEC_INTERP0_BASE_1AND0 (*(volatile uint32_t *)0xd00200bc)
#define SIO_NONSEC_INTERP1_ACCUM0 (*(volatile uint32_t *)0xd00200c0)
#define SIO_NONSEC_INTERP1_ACCUM1 (*(volatile uint32_t *)0xd00200c4)
#define SIO_NONSEC_INTERP1_BASE0 (*(volatile uint32_t *)0xd00200c8)
#define SIO_NONSEC_INTERP1_BASE1 (*(volatile uint32_t *)0xd00200cc)
#define SIO_NONSEC_INTERP1_BASE2 (*(volatile uint32_t *)0xd00200d0)
#define SIO_NONSEC_INTERP1_POP_LANE0 (*(volatile uint32_t *)0xd00200d4)
#define SIO_NONSEC_INTERP1_POP_LANE1 (*(volatile uint32_t *)0xd00200d8)
#define SIO_NONSEC_INTERP1_POP_FULL (*(volatile uint32_t *)0xd00200dc)
#define SIO_NONSEC_INTERP1_PEEK_LANE0 (*(volatile uint32_t *)0xd00200e0)
#define SIO_NONSEC_INTERP1_PEEK_LANE1 (*(volatile uint32_t *)0xd00200e4)
#define SIO_NONSEC_INTERP1_PEEK_FULL (*(volatile uint32_t *)0xd00200e8)
#define SIO_NONSEC_INTERP1_CTRL_LANE0 (*(volatile uint32_t *)0xd00200ec)
#define SIO_NONSEC_INTERP1_CTRL_LANE1 (*(volatile uint32_t *)0xd00200f0)
#define SIO_NONSEC_INTERP1_ACCUM0_ADD (*(volatile uint32_t *)0xd00200f4)
#define SIO_NONSEC_INTERP1_ACCUM1_ADD (*(volatile uint32_t *)0xd00200f8)
#define SIO_NONSEC_INTERP1_BASE_1AND0 (*(volatile uint32_t *)0xd00200fc)
#define SIO_NONSEC_SPINLOCK0 (*(volatile uint32_t *)0xd0020100)
#define SIO_NONSEC_SPINLOCK1 (*(volatile uint32_t *)0xd0020104)
#define SIO_NONSEC_SPINLOCK2 (*(volatile uint32_t *)0xd0020108)
#define SIO_NONSEC_SPINLOCK3 (*(volatile uint32_t *)0xd002010c)
#define SIO_NONSEC_SPINLOCK4 (*(volatile uint32_t *)0xd0020110)
#define SIO_NONSEC_SPINLOCK5 (*(volatile uint32_t *)0xd0020114)
#define SIO_NONSEC_SPINLOCK6 (*(volatile uint32_t *)0xd0020118)
#define SIO_NONSEC_SPINLOCK7 (*(volatile uint32_t *)0xd002011c)
#define SIO_NONSEC_SPINLOCK8 (*(volatile uint32_t *)0xd0020120)
#define SIO_NONSEC_SPINLOCK9 (*(volatile uint32_t *)0xd0020124)
#define SIO_NONSEC_SPINLOCK10 (*(volatile uint32_t *)0xd0020128)
#define SIO_NONSEC_SPINLOCK11 (*(volatile uint32_t *)0xd002012c)
#define SIO_NONSEC_SPINLOCK12 (*(volatile uint32_t *)0xd0020130)
#define SIO_NONSEC_SPINLOCK13 (*(volatile uint32_t *)0xd0020134)
#define SIO_NONSEC_SPINLOCK14 (*(volatile uint32_t *)0xd0020138)
#define SIO_NONSEC_SPINLOCK15 (*(volatile uint32_t *)0xd002013c)
#define SIO_NONSEC_SPINLOCK16 (*(volatile uint32_t *)0xd0020140)
#define SIO_NONSEC_SPINLOCK17 (*(volatile uint32_t *)0xd0020144)
#define SIO_NONSEC_SPINLOCK18 (*(volatile uint32_t *)0xd0020148)
#define SIO_NONSEC_SPINLOCK19 (*(volatile uint32_t *)0xd002014c)
#define SIO_NONSEC_SPINLOCK20 (*(volatile uint32_t *)0xd0020150)
#define SIO_NONSEC_SPINLOCK21 (*(volatile uint32_t *)0xd0020154)
#define SIO_NONSEC_SPINLOCK22 (*(volatile uint32_t *)0xd0020158)
#define SIO_NONSEC_SPINLOCK23 (*(volatile uint32_t *)0xd002015c)
#define SIO_NONSEC_SPINLOCK24 (*(volatile uint32_t *)0xd0020160)
#define SIO_NONSEC_SPINLOCK25 (*(volatile uint32_t *)0xd0020164)
#define SIO_NONSEC_SPINLOCK26 (*(volatile uint32_t *)0xd0020168)
#define SIO_NONSEC_SPINLOCK27 (*(volatile uint32_t *)0xd002016c)
#define SIO_NONSEC_SPINLOCK28 (*(volatile uint32_t *)0xd0020170)
#define SIO_NONSEC_SPINLOCK29 (*(volatile uint32_t *)0xd0020174)
#define SIO_NONSEC_SPINLOCK30 (*(volatile uint32_t *)0xd0020178)
#define SIO_NONSEC_SPINLOCK31 (*(volatile uint32_t *)0xd002017c)
#define SIO_NONSEC_DOORBELL_OUT_SET (*(volatile uint32_t *)0xd0020180)
#define SIO_NONSEC_DOORBELL_OUT_CLR (*(volatile uint32_t *)0xd0020184)
#define SIO_NONSEC_DOORBELL_IN_SET (*(volatile uint32_t *)0xd0020188)
#define SIO_NONSEC_DOORBELL_IN_CLR (*(volatile uint32_t *)0xd002018c)
#define SIO_NONSEC_PERI_NONSEC (*(volatile uint32_t *)0xd0020190)
#define SIO_NONSEC_RISCV_SOFTIRQ (*(volatile uint32_t *)0xd00201a0)
#define SIO_NONSEC_MTIME_CTRL (*(volatile uint32_t *)0xd00201a4)
#define SIO_NONSEC_MTIME (*(volatile uint32_t *)0xd00201b0)
#define SIO_NONSEC_MTIMEH (*(volatile uint32_t *)0xd00201b4)
#define SIO_NONSEC_MTIMECMP (*(volatile uint32_t *)0xd00201b8)
#define SIO_NONSEC_MTIMECMPH (*(volatile uint32_t *)0xd00201bc)
#define SIO_NONSEC_TMDS_CTRL (*(volatile uint32_t *)0xd00201c0)
#define SIO_NONSEC_TMDS_WDATA (*(volatile uint32_t *)0xd00201c4)
#define SIO_NONSEC_TMDS_PEEK_SINGLE (*(volatile uint32_t *)0xd00201c8)
#define SIO_NONSEC_TMDS_POP_SINGLE (*(volatile uint32_t *)0xd00201cc)
#define SIO_NONSEC_TMDS_PEEK_DOUBLE_L0 (*(volatile uint32_t *)0xd00201d0)
#define SIO_NONSEC_TMDS_POP_DOUBLE_L0 (*(volatile uint32_t *)0xd00201d4)
#define SIO_NONSEC_TMDS_PEEK_DOUBLE_L1 (*(volatile uint32_t *)0xd00201d8)
#define SIO_NONSEC_TMDS_POP_DOUBLE_L1 (*(volatile uint32_t *)0xd00201dc)
#define SIO_NONSEC_TMDS_PEEK_DOUBLE_L2 (*(volatile uint32_t *)0xd00201e0)
#define SIO_NONSEC_TMDS_POP_DOUBLE_L2 (*(volatile uint32_t *)0xd00201e4)

/*CPUID Register macros*/


/*GPIO_IN Register macros*/


/*GPIO_HI_IN Register macros*/

#define SIO_GPIO_HI_IN_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_IN_QSPI_SD_MASK SIO_GPIO_HI_IN_QSPI_SD(ALL1)
#define SIO_GPIO_HI_IN_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_IN_QSPI_CSN_MASK SIO_GPIO_HI_IN_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_IN_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_IN_QSPI_SCK_MASK SIO_GPIO_HI_IN_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_IN_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_IN_USB_DM_MASK SIO_GPIO_HI_IN_USB_DM(ALL1)
#define SIO_GPIO_HI_IN_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_IN_USB_DP_MASK SIO_GPIO_HI_IN_USB_DP(ALL1)
#define SIO_GPIO_HI_IN_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_IN_GPIO_MASK SIO_GPIO_HI_IN_GPIO(ALL1)

/*GPIO_OUT Register macros*/


/*GPIO_HI_OUT Register macros*/

#define SIO_GPIO_HI_OUT_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OUT_QSPI_SD_MASK SIO_GPIO_HI_OUT_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OUT_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OUT_QSPI_CSN_MASK SIO_GPIO_HI_OUT_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OUT_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OUT_QSPI_SCK_MASK SIO_GPIO_HI_OUT_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OUT_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OUT_USB_DM_MASK SIO_GPIO_HI_OUT_USB_DM(ALL1)
#define SIO_GPIO_HI_OUT_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OUT_USB_DP_MASK SIO_GPIO_HI_OUT_USB_DP(ALL1)
#define SIO_GPIO_HI_OUT_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OUT_GPIO_MASK SIO_GPIO_HI_OUT_GPIO(ALL1)
#define SIO_GPIO_HI_OUT_SET_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OUT_SET_QSPI_SD_MASK SIO_GPIO_HI_OUT_SET_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OUT_SET_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OUT_SET_QSPI_CSN_MASK SIO_GPIO_HI_OUT_SET_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OUT_SET_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OUT_SET_QSPI_SCK_MASK SIO_GPIO_HI_OUT_SET_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OUT_SET_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OUT_SET_USB_DM_MASK SIO_GPIO_HI_OUT_SET_USB_DM(ALL1)
#define SIO_GPIO_HI_OUT_SET_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OUT_SET_USB_DP_MASK SIO_GPIO_HI_OUT_SET_USB_DP(ALL1)
#define SIO_GPIO_HI_OUT_SET_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OUT_SET_GPIO_MASK SIO_GPIO_HI_OUT_SET_GPIO(ALL1)
#define SIO_GPIO_HI_OUT_CLR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OUT_CLR_QSPI_SD_MASK SIO_GPIO_HI_OUT_CLR_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OUT_CLR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OUT_CLR_QSPI_CSN_MASK SIO_GPIO_HI_OUT_CLR_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OUT_CLR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OUT_CLR_QSPI_SCK_MASK SIO_GPIO_HI_OUT_CLR_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OUT_CLR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OUT_CLR_USB_DM_MASK SIO_GPIO_HI_OUT_CLR_USB_DM(ALL1)
#define SIO_GPIO_HI_OUT_CLR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OUT_CLR_USB_DP_MASK SIO_GPIO_HI_OUT_CLR_USB_DP(ALL1)
#define SIO_GPIO_HI_OUT_CLR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OUT_CLR_GPIO_MASK SIO_GPIO_HI_OUT_CLR_GPIO(ALL1)
#define SIO_GPIO_HI_OUT_XOR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OUT_XOR_QSPI_SD_MASK SIO_GPIO_HI_OUT_XOR_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OUT_XOR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OUT_XOR_QSPI_CSN_MASK SIO_GPIO_HI_OUT_XOR_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OUT_XOR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OUT_XOR_QSPI_SCK_MASK SIO_GPIO_HI_OUT_XOR_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OUT_XOR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OUT_XOR_USB_DM_MASK SIO_GPIO_HI_OUT_XOR_USB_DM(ALL1)
#define SIO_GPIO_HI_OUT_XOR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OUT_XOR_USB_DP_MASK SIO_GPIO_HI_OUT_XOR_USB_DP(ALL1)
#define SIO_GPIO_HI_OUT_XOR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OUT_XOR_GPIO_MASK SIO_GPIO_HI_OUT_XOR_GPIO(ALL1)

/*GPIO_OUT_SET Register macros*/


/*GPIO_HI_OUT_SET Register macros*/

#define SIO_GPIO_HI_OUT_SET_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OUT_SET_QSPI_SD_MASK SIO_GPIO_HI_OUT_SET_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OUT_SET_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OUT_SET_QSPI_CSN_MASK SIO_GPIO_HI_OUT_SET_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OUT_SET_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OUT_SET_QSPI_SCK_MASK SIO_GPIO_HI_OUT_SET_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OUT_SET_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OUT_SET_USB_DM_MASK SIO_GPIO_HI_OUT_SET_USB_DM(ALL1)
#define SIO_GPIO_HI_OUT_SET_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OUT_SET_USB_DP_MASK SIO_GPIO_HI_OUT_SET_USB_DP(ALL1)
#define SIO_GPIO_HI_OUT_SET_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OUT_SET_GPIO_MASK SIO_GPIO_HI_OUT_SET_GPIO(ALL1)

/*GPIO_OUT_CLR Register macros*/


/*GPIO_HI_OUT_CLR Register macros*/

#define SIO_GPIO_HI_OUT_CLR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OUT_CLR_QSPI_SD_MASK SIO_GPIO_HI_OUT_CLR_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OUT_CLR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OUT_CLR_QSPI_CSN_MASK SIO_GPIO_HI_OUT_CLR_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OUT_CLR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OUT_CLR_QSPI_SCK_MASK SIO_GPIO_HI_OUT_CLR_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OUT_CLR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OUT_CLR_USB_DM_MASK SIO_GPIO_HI_OUT_CLR_USB_DM(ALL1)
#define SIO_GPIO_HI_OUT_CLR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OUT_CLR_USB_DP_MASK SIO_GPIO_HI_OUT_CLR_USB_DP(ALL1)
#define SIO_GPIO_HI_OUT_CLR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OUT_CLR_GPIO_MASK SIO_GPIO_HI_OUT_CLR_GPIO(ALL1)

/*GPIO_OUT_XOR Register macros*/


/*GPIO_HI_OUT_XOR Register macros*/

#define SIO_GPIO_HI_OUT_XOR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OUT_XOR_QSPI_SD_MASK SIO_GPIO_HI_OUT_XOR_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OUT_XOR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OUT_XOR_QSPI_CSN_MASK SIO_GPIO_HI_OUT_XOR_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OUT_XOR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OUT_XOR_QSPI_SCK_MASK SIO_GPIO_HI_OUT_XOR_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OUT_XOR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OUT_XOR_USB_DM_MASK SIO_GPIO_HI_OUT_XOR_USB_DM(ALL1)
#define SIO_GPIO_HI_OUT_XOR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OUT_XOR_USB_DP_MASK SIO_GPIO_HI_OUT_XOR_USB_DP(ALL1)
#define SIO_GPIO_HI_OUT_XOR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OUT_XOR_GPIO_MASK SIO_GPIO_HI_OUT_XOR_GPIO(ALL1)

/*GPIO_OE Register macros*/


/*GPIO_HI_OE Register macros*/

#define SIO_GPIO_HI_OE_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OE_QSPI_SD_MASK SIO_GPIO_HI_OE_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OE_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OE_QSPI_CSN_MASK SIO_GPIO_HI_OE_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OE_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OE_QSPI_SCK_MASK SIO_GPIO_HI_OE_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OE_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OE_USB_DM_MASK SIO_GPIO_HI_OE_USB_DM(ALL1)
#define SIO_GPIO_HI_OE_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OE_USB_DP_MASK SIO_GPIO_HI_OE_USB_DP(ALL1)
#define SIO_GPIO_HI_OE_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OE_GPIO_MASK SIO_GPIO_HI_OE_GPIO(ALL1)
#define SIO_GPIO_HI_OE_SET_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OE_SET_QSPI_SD_MASK SIO_GPIO_HI_OE_SET_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OE_SET_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OE_SET_QSPI_CSN_MASK SIO_GPIO_HI_OE_SET_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OE_SET_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OE_SET_QSPI_SCK_MASK SIO_GPIO_HI_OE_SET_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OE_SET_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OE_SET_USB_DM_MASK SIO_GPIO_HI_OE_SET_USB_DM(ALL1)
#define SIO_GPIO_HI_OE_SET_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OE_SET_USB_DP_MASK SIO_GPIO_HI_OE_SET_USB_DP(ALL1)
#define SIO_GPIO_HI_OE_SET_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OE_SET_GPIO_MASK SIO_GPIO_HI_OE_SET_GPIO(ALL1)
#define SIO_GPIO_HI_OE_CLR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OE_CLR_QSPI_SD_MASK SIO_GPIO_HI_OE_CLR_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OE_CLR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OE_CLR_QSPI_CSN_MASK SIO_GPIO_HI_OE_CLR_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OE_CLR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OE_CLR_QSPI_SCK_MASK SIO_GPIO_HI_OE_CLR_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OE_CLR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OE_CLR_USB_DM_MASK SIO_GPIO_HI_OE_CLR_USB_DM(ALL1)
#define SIO_GPIO_HI_OE_CLR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OE_CLR_USB_DP_MASK SIO_GPIO_HI_OE_CLR_USB_DP(ALL1)
#define SIO_GPIO_HI_OE_CLR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OE_CLR_GPIO_MASK SIO_GPIO_HI_OE_CLR_GPIO(ALL1)
#define SIO_GPIO_HI_OE_XOR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OE_XOR_QSPI_SD_MASK SIO_GPIO_HI_OE_XOR_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OE_XOR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OE_XOR_QSPI_CSN_MASK SIO_GPIO_HI_OE_XOR_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OE_XOR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OE_XOR_QSPI_SCK_MASK SIO_GPIO_HI_OE_XOR_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OE_XOR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OE_XOR_USB_DM_MASK SIO_GPIO_HI_OE_XOR_USB_DM(ALL1)
#define SIO_GPIO_HI_OE_XOR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OE_XOR_USB_DP_MASK SIO_GPIO_HI_OE_XOR_USB_DP(ALL1)
#define SIO_GPIO_HI_OE_XOR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OE_XOR_GPIO_MASK SIO_GPIO_HI_OE_XOR_GPIO(ALL1)

/*GPIO_OE_SET Register macros*/


/*GPIO_HI_OE_SET Register macros*/

#define SIO_GPIO_HI_OE_SET_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OE_SET_QSPI_SD_MASK SIO_GPIO_HI_OE_SET_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OE_SET_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OE_SET_QSPI_CSN_MASK SIO_GPIO_HI_OE_SET_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OE_SET_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OE_SET_QSPI_SCK_MASK SIO_GPIO_HI_OE_SET_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OE_SET_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OE_SET_USB_DM_MASK SIO_GPIO_HI_OE_SET_USB_DM(ALL1)
#define SIO_GPIO_HI_OE_SET_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OE_SET_USB_DP_MASK SIO_GPIO_HI_OE_SET_USB_DP(ALL1)
#define SIO_GPIO_HI_OE_SET_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OE_SET_GPIO_MASK SIO_GPIO_HI_OE_SET_GPIO(ALL1)

/*GPIO_OE_CLR Register macros*/


/*GPIO_HI_OE_CLR Register macros*/

#define SIO_GPIO_HI_OE_CLR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OE_CLR_QSPI_SD_MASK SIO_GPIO_HI_OE_CLR_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OE_CLR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OE_CLR_QSPI_CSN_MASK SIO_GPIO_HI_OE_CLR_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OE_CLR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OE_CLR_QSPI_SCK_MASK SIO_GPIO_HI_OE_CLR_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OE_CLR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OE_CLR_USB_DM_MASK SIO_GPIO_HI_OE_CLR_USB_DM(ALL1)
#define SIO_GPIO_HI_OE_CLR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OE_CLR_USB_DP_MASK SIO_GPIO_HI_OE_CLR_USB_DP(ALL1)
#define SIO_GPIO_HI_OE_CLR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OE_CLR_GPIO_MASK SIO_GPIO_HI_OE_CLR_GPIO(ALL1)

/*GPIO_OE_XOR Register macros*/


/*GPIO_HI_OE_XOR Register macros*/

#define SIO_GPIO_HI_OE_XOR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_GPIO_HI_OE_XOR_QSPI_SD_MASK SIO_GPIO_HI_OE_XOR_QSPI_SD(ALL1)
#define SIO_GPIO_HI_OE_XOR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_GPIO_HI_OE_XOR_QSPI_CSN_MASK SIO_GPIO_HI_OE_XOR_QSPI_CSN(ALL1)
#define SIO_GPIO_HI_OE_XOR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_GPIO_HI_OE_XOR_QSPI_SCK_MASK SIO_GPIO_HI_OE_XOR_QSPI_SCK(ALL1)
#define SIO_GPIO_HI_OE_XOR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_GPIO_HI_OE_XOR_USB_DM_MASK SIO_GPIO_HI_OE_XOR_USB_DM(ALL1)
#define SIO_GPIO_HI_OE_XOR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_GPIO_HI_OE_XOR_USB_DP_MASK SIO_GPIO_HI_OE_XOR_USB_DP(ALL1)
#define SIO_GPIO_HI_OE_XOR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_GPIO_HI_OE_XOR_GPIO_MASK SIO_GPIO_HI_OE_XOR_GPIO(ALL1)

/*FIFO_ST Register macros*/

#define SIO_FIFO_ST_ROE(v) (((v)&0x1)<<3)
#define SIO_FIFO_ST_ROE_MASK SIO_FIFO_ST_ROE(ALL1)
#define SIO_FIFO_ST_WOF(v) (((v)&0x1)<<2)
#define SIO_FIFO_ST_WOF_MASK SIO_FIFO_ST_WOF(ALL1)
#define SIO_FIFO_ST_RDY(v) (((v)&0x1)<<1)
#define SIO_FIFO_ST_RDY_MASK SIO_FIFO_ST_RDY(ALL1)
#define SIO_FIFO_ST_VLD(v) (((v)&0x1)<<0)
#define SIO_FIFO_ST_VLD_MASK SIO_FIFO_ST_VLD(ALL1)

/*FIFO_WR Register macros*/


/*FIFO_RD Register macros*/


/*SPINLOCK_ST Register macros*/


/*INTERP0_ACCUM0 Register macros*/


/*INTERP0_ACCUM1 Register macros*/


/*INTERP0_BASE0 Register macros*/


/*INTERP0_BASE1 Register macros*/


/*INTERP0_BASE2 Register macros*/


/*INTERP0_POP_LANE0 Register macros*/


/*INTERP0_POP_LANE1 Register macros*/


/*INTERP0_POP_FULL Register macros*/


/*INTERP0_PEEK_LANE0 Register macros*/


/*INTERP0_PEEK_LANE1 Register macros*/


/*INTERP0_PEEK_FULL Register macros*/


/*INTERP0_CTRL_LANE0 Register macros*/

#define SIO_INTERP0_CTRL_LANE0_OVERF(v) (((v)&0x1)<<25)
#define SIO_INTERP0_CTRL_LANE0_OVERF_MASK SIO_INTERP0_CTRL_LANE0_OVERF(ALL1)
#define SIO_INTERP0_CTRL_LANE0_OVERF1(v) (((v)&0x1)<<24)
#define SIO_INTERP0_CTRL_LANE0_OVERF1_MASK SIO_INTERP0_CTRL_LANE0_OVERF1(ALL1)
#define SIO_INTERP0_CTRL_LANE0_OVERF0(v) (((v)&0x1)<<23)
#define SIO_INTERP0_CTRL_LANE0_OVERF0_MASK SIO_INTERP0_CTRL_LANE0_OVERF0(ALL1)
#define SIO_INTERP0_CTRL_LANE0_BLEND(v) (((v)&0x1)<<21)
#define SIO_INTERP0_CTRL_LANE0_BLEND_MASK SIO_INTERP0_CTRL_LANE0_BLEND(ALL1)
#define SIO_INTERP0_CTRL_LANE0_FORCE_MSB(v) (((v)&0x3)<<19)
#define SIO_INTERP0_CTRL_LANE0_FORCE_MSB_MASK SIO_INTERP0_CTRL_LANE0_FORCE_MSB(ALL1)
#define SIO_INTERP0_CTRL_LANE0_ADD_RAW(v) (((v)&0x1)<<18)
#define SIO_INTERP0_CTRL_LANE0_ADD_RAW_MASK SIO_INTERP0_CTRL_LANE0_ADD_RAW(ALL1)
#define SIO_INTERP0_CTRL_LANE0_CROSS_RESULT(v) (((v)&0x1)<<17)
#define SIO_INTERP0_CTRL_LANE0_CROSS_RESULT_MASK SIO_INTERP0_CTRL_LANE0_CROSS_RESULT(ALL1)
#define SIO_INTERP0_CTRL_LANE0_CROSS_INPUT(v) (((v)&0x1)<<16)
#define SIO_INTERP0_CTRL_LANE0_CROSS_INPUT_MASK SIO_INTERP0_CTRL_LANE0_CROSS_INPUT(ALL1)
#define SIO_INTERP0_CTRL_LANE0_SIGNED(v) (((v)&0x1)<<15)
#define SIO_INTERP0_CTRL_LANE0_SIGNED_MASK SIO_INTERP0_CTRL_LANE0_SIGNED(ALL1)
#define SIO_INTERP0_CTRL_LANE0_MASK_MSB(v) (((v)&0x1f)<<10)
#define SIO_INTERP0_CTRL_LANE0_MASK_MSB_MASK SIO_INTERP0_CTRL_LANE0_MASK_MSB(ALL1)
#define SIO_INTERP0_CTRL_LANE0_MASK_LSB(v) (((v)&0x1f)<<5)
#define SIO_INTERP0_CTRL_LANE0_MASK_LSB_MASK SIO_INTERP0_CTRL_LANE0_MASK_LSB(ALL1)
#define SIO_INTERP0_CTRL_LANE0_SHIFT(v) (((v)&0x1f)<<0)
#define SIO_INTERP0_CTRL_LANE0_SHIFT_MASK SIO_INTERP0_CTRL_LANE0_SHIFT(ALL1)

/*INTERP0_CTRL_LANE1 Register macros*/

#define SIO_INTERP0_CTRL_LANE1_FORCE_MSB(v) (((v)&0x3)<<19)
#define SIO_INTERP0_CTRL_LANE1_FORCE_MSB_MASK SIO_INTERP0_CTRL_LANE1_FORCE_MSB(ALL1)
#define SIO_INTERP0_CTRL_LANE1_ADD_RAW(v) (((v)&0x1)<<18)
#define SIO_INTERP0_CTRL_LANE1_ADD_RAW_MASK SIO_INTERP0_CTRL_LANE1_ADD_RAW(ALL1)
#define SIO_INTERP0_CTRL_LANE1_CROSS_RESULT(v) (((v)&0x1)<<17)
#define SIO_INTERP0_CTRL_LANE1_CROSS_RESULT_MASK SIO_INTERP0_CTRL_LANE1_CROSS_RESULT(ALL1)
#define SIO_INTERP0_CTRL_LANE1_CROSS_INPUT(v) (((v)&0x1)<<16)
#define SIO_INTERP0_CTRL_LANE1_CROSS_INPUT_MASK SIO_INTERP0_CTRL_LANE1_CROSS_INPUT(ALL1)
#define SIO_INTERP0_CTRL_LANE1_SIGNED(v) (((v)&0x1)<<15)
#define SIO_INTERP0_CTRL_LANE1_SIGNED_MASK SIO_INTERP0_CTRL_LANE1_SIGNED(ALL1)
#define SIO_INTERP0_CTRL_LANE1_MASK_MSB(v) (((v)&0x1f)<<10)
#define SIO_INTERP0_CTRL_LANE1_MASK_MSB_MASK SIO_INTERP0_CTRL_LANE1_MASK_MSB(ALL1)
#define SIO_INTERP0_CTRL_LANE1_MASK_LSB(v) (((v)&0x1f)<<5)
#define SIO_INTERP0_CTRL_LANE1_MASK_LSB_MASK SIO_INTERP0_CTRL_LANE1_MASK_LSB(ALL1)
#define SIO_INTERP0_CTRL_LANE1_SHIFT(v) (((v)&0x1f)<<0)
#define SIO_INTERP0_CTRL_LANE1_SHIFT_MASK SIO_INTERP0_CTRL_LANE1_SHIFT(ALL1)

/*INTERP0_ACCUM0_ADD Register macros*/


/*INTERP0_ACCUM1_ADD Register macros*/


/*INTERP0_BASE_1AND0 Register macros*/


/*INTERP1_ACCUM0 Register macros*/


/*INTERP1_ACCUM1 Register macros*/


/*INTERP1_BASE0 Register macros*/


/*INTERP1_BASE1 Register macros*/


/*INTERP1_BASE2 Register macros*/


/*INTERP1_POP_LANE0 Register macros*/


/*INTERP1_POP_LANE1 Register macros*/


/*INTERP1_POP_FULL Register macros*/


/*INTERP1_PEEK_LANE0 Register macros*/


/*INTERP1_PEEK_LANE1 Register macros*/


/*INTERP1_PEEK_FULL Register macros*/


/*INTERP1_CTRL_LANE0 Register macros*/

#define SIO_INTERP1_CTRL_LANE0_OVERF(v) (((v)&0x1)<<25)
#define SIO_INTERP1_CTRL_LANE0_OVERF_MASK SIO_INTERP1_CTRL_LANE0_OVERF(ALL1)
#define SIO_INTERP1_CTRL_LANE0_OVERF1(v) (((v)&0x1)<<24)
#define SIO_INTERP1_CTRL_LANE0_OVERF1_MASK SIO_INTERP1_CTRL_LANE0_OVERF1(ALL1)
#define SIO_INTERP1_CTRL_LANE0_OVERF0(v) (((v)&0x1)<<23)
#define SIO_INTERP1_CTRL_LANE0_OVERF0_MASK SIO_INTERP1_CTRL_LANE0_OVERF0(ALL1)
#define SIO_INTERP1_CTRL_LANE0_CLAMP(v) (((v)&0x1)<<22)
#define SIO_INTERP1_CTRL_LANE0_CLAMP_MASK SIO_INTERP1_CTRL_LANE0_CLAMP(ALL1)
#define SIO_INTERP1_CTRL_LANE0_FORCE_MSB(v) (((v)&0x3)<<19)
#define SIO_INTERP1_CTRL_LANE0_FORCE_MSB_MASK SIO_INTERP1_CTRL_LANE0_FORCE_MSB(ALL1)
#define SIO_INTERP1_CTRL_LANE0_ADD_RAW(v) (((v)&0x1)<<18)
#define SIO_INTERP1_CTRL_LANE0_ADD_RAW_MASK SIO_INTERP1_CTRL_LANE0_ADD_RAW(ALL1)
#define SIO_INTERP1_CTRL_LANE0_CROSS_RESULT(v) (((v)&0x1)<<17)
#define SIO_INTERP1_CTRL_LANE0_CROSS_RESULT_MASK SIO_INTERP1_CTRL_LANE0_CROSS_RESULT(ALL1)
#define SIO_INTERP1_CTRL_LANE0_CROSS_INPUT(v) (((v)&0x1)<<16)
#define SIO_INTERP1_CTRL_LANE0_CROSS_INPUT_MASK SIO_INTERP1_CTRL_LANE0_CROSS_INPUT(ALL1)
#define SIO_INTERP1_CTRL_LANE0_SIGNED(v) (((v)&0x1)<<15)
#define SIO_INTERP1_CTRL_LANE0_SIGNED_MASK SIO_INTERP1_CTRL_LANE0_SIGNED(ALL1)
#define SIO_INTERP1_CTRL_LANE0_MASK_MSB(v) (((v)&0x1f)<<10)
#define SIO_INTERP1_CTRL_LANE0_MASK_MSB_MASK SIO_INTERP1_CTRL_LANE0_MASK_MSB(ALL1)
#define SIO_INTERP1_CTRL_LANE0_MASK_LSB(v) (((v)&0x1f)<<5)
#define SIO_INTERP1_CTRL_LANE0_MASK_LSB_MASK SIO_INTERP1_CTRL_LANE0_MASK_LSB(ALL1)
#define SIO_INTERP1_CTRL_LANE0_SHIFT(v) (((v)&0x1f)<<0)
#define SIO_INTERP1_CTRL_LANE0_SHIFT_MASK SIO_INTERP1_CTRL_LANE0_SHIFT(ALL1)

/*INTERP1_CTRL_LANE1 Register macros*/

#define SIO_INTERP1_CTRL_LANE1_FORCE_MSB(v) (((v)&0x3)<<19)
#define SIO_INTERP1_CTRL_LANE1_FORCE_MSB_MASK SIO_INTERP1_CTRL_LANE1_FORCE_MSB(ALL1)
#define SIO_INTERP1_CTRL_LANE1_ADD_RAW(v) (((v)&0x1)<<18)
#define SIO_INTERP1_CTRL_LANE1_ADD_RAW_MASK SIO_INTERP1_CTRL_LANE1_ADD_RAW(ALL1)
#define SIO_INTERP1_CTRL_LANE1_CROSS_RESULT(v) (((v)&0x1)<<17)
#define SIO_INTERP1_CTRL_LANE1_CROSS_RESULT_MASK SIO_INTERP1_CTRL_LANE1_CROSS_RESULT(ALL1)
#define SIO_INTERP1_CTRL_LANE1_CROSS_INPUT(v) (((v)&0x1)<<16)
#define SIO_INTERP1_CTRL_LANE1_CROSS_INPUT_MASK SIO_INTERP1_CTRL_LANE1_CROSS_INPUT(ALL1)
#define SIO_INTERP1_CTRL_LANE1_SIGNED(v) (((v)&0x1)<<15)
#define SIO_INTERP1_CTRL_LANE1_SIGNED_MASK SIO_INTERP1_CTRL_LANE1_SIGNED(ALL1)
#define SIO_INTERP1_CTRL_LANE1_MASK_MSB(v) (((v)&0x1f)<<10)
#define SIO_INTERP1_CTRL_LANE1_MASK_MSB_MASK SIO_INTERP1_CTRL_LANE1_MASK_MSB(ALL1)
#define SIO_INTERP1_CTRL_LANE1_MASK_LSB(v) (((v)&0x1f)<<5)
#define SIO_INTERP1_CTRL_LANE1_MASK_LSB_MASK SIO_INTERP1_CTRL_LANE1_MASK_LSB(ALL1)
#define SIO_INTERP1_CTRL_LANE1_SHIFT(v) (((v)&0x1f)<<0)
#define SIO_INTERP1_CTRL_LANE1_SHIFT_MASK SIO_INTERP1_CTRL_LANE1_SHIFT(ALL1)

/*INTERP1_ACCUM0_ADD Register macros*/


/*INTERP1_ACCUM1_ADD Register macros*/


/*INTERP1_BASE_1AND0 Register macros*/


/*SPINLOCK0 Register macros*/


/*SPINLOCK1 Register macros*/


/*SPINLOCK2 Register macros*/


/*SPINLOCK3 Register macros*/


/*SPINLOCK4 Register macros*/


/*SPINLOCK5 Register macros*/


/*SPINLOCK6 Register macros*/


/*SPINLOCK7 Register macros*/


/*SPINLOCK8 Register macros*/


/*SPINLOCK9 Register macros*/


/*SPINLOCK10 Register macros*/


/*SPINLOCK11 Register macros*/


/*SPINLOCK12 Register macros*/


/*SPINLOCK13 Register macros*/


/*SPINLOCK14 Register macros*/


/*SPINLOCK15 Register macros*/


/*SPINLOCK16 Register macros*/


/*SPINLOCK17 Register macros*/


/*SPINLOCK18 Register macros*/


/*SPINLOCK19 Register macros*/


/*SPINLOCK20 Register macros*/


/*SPINLOCK21 Register macros*/


/*SPINLOCK22 Register macros*/


/*SPINLOCK23 Register macros*/


/*SPINLOCK24 Register macros*/


/*SPINLOCK25 Register macros*/


/*SPINLOCK26 Register macros*/


/*SPINLOCK27 Register macros*/


/*SPINLOCK28 Register macros*/


/*SPINLOCK29 Register macros*/


/*SPINLOCK30 Register macros*/


/*SPINLOCK31 Register macros*/


/*DOORBELL_OUT_SET Register macros*/


/*DOORBELL_OUT_CLR Register macros*/


/*DOORBELL_IN_SET Register macros*/


/*DOORBELL_IN_CLR Register macros*/


/*PERI_NONSEC Register macros*/

#define SIO_PERI_NONSEC_TMDS(v) (((v)&0x1)<<5)
#define SIO_PERI_NONSEC_TMDS_MASK SIO_PERI_NONSEC_TMDS(ALL1)
#define SIO_PERI_NONSEC_INTERP1(v) (((v)&0x1)<<1)
#define SIO_PERI_NONSEC_INTERP1_MASK SIO_PERI_NONSEC_INTERP1(ALL1)
#define SIO_PERI_NONSEC_INTERP0(v) (((v)&0x1)<<0)
#define SIO_PERI_NONSEC_INTERP0_MASK SIO_PERI_NONSEC_INTERP0(ALL1)

/*RISCV_SOFTIRQ Register macros*/

#define SIO_RISCV_SOFTIRQ_CORE1_CLR(v) (((v)&0x1)<<9)
#define SIO_RISCV_SOFTIRQ_CORE1_CLR_MASK SIO_RISCV_SOFTIRQ_CORE1_CLR(ALL1)
#define SIO_RISCV_SOFTIRQ_CORE0_CLR(v) (((v)&0x1)<<8)
#define SIO_RISCV_SOFTIRQ_CORE0_CLR_MASK SIO_RISCV_SOFTIRQ_CORE0_CLR(ALL1)
#define SIO_RISCV_SOFTIRQ_CORE1_SET(v) (((v)&0x1)<<1)
#define SIO_RISCV_SOFTIRQ_CORE1_SET_MASK SIO_RISCV_SOFTIRQ_CORE1_SET(ALL1)
#define SIO_RISCV_SOFTIRQ_CORE0_SET(v) (((v)&0x1)<<0)
#define SIO_RISCV_SOFTIRQ_CORE0_SET_MASK SIO_RISCV_SOFTIRQ_CORE0_SET(ALL1)

/*MTIME_CTRL Register macros*/

#define SIO_MTIME_CTRL_DBGPAUSE_CORE1(v) (((v)&0x1)<<3)
#define SIO_MTIME_CTRL_DBGPAUSE_CORE1_MASK SIO_MTIME_CTRL_DBGPAUSE_CORE1(ALL1)
#define SIO_MTIME_CTRL_DBGPAUSE_CORE0(v) (((v)&0x1)<<2)
#define SIO_MTIME_CTRL_DBGPAUSE_CORE0_MASK SIO_MTIME_CTRL_DBGPAUSE_CORE0(ALL1)
#define SIO_MTIME_CTRL_FULLSPEED(v) (((v)&0x1)<<1)
#define SIO_MTIME_CTRL_FULLSPEED_MASK SIO_MTIME_CTRL_FULLSPEED(ALL1)
#define SIO_MTIME_CTRL_EN(v) (((v)&0x1)<<0)
#define SIO_MTIME_CTRL_EN_MASK SIO_MTIME_CTRL_EN(ALL1)

/*MTIME Register macros*/

#define SIO_MTIME_CTRL_DBGPAUSE_CORE1(v) (((v)&0x1)<<3)
#define SIO_MTIME_CTRL_DBGPAUSE_CORE1_MASK SIO_MTIME_CTRL_DBGPAUSE_CORE1(ALL1)
#define SIO_MTIME_CTRL_DBGPAUSE_CORE0(v) (((v)&0x1)<<2)
#define SIO_MTIME_CTRL_DBGPAUSE_CORE0_MASK SIO_MTIME_CTRL_DBGPAUSE_CORE0(ALL1)
#define SIO_MTIME_CTRL_FULLSPEED(v) (((v)&0x1)<<1)
#define SIO_MTIME_CTRL_FULLSPEED_MASK SIO_MTIME_CTRL_FULLSPEED(ALL1)
#define SIO_MTIME_CTRL_EN(v) (((v)&0x1)<<0)
#define SIO_MTIME_CTRL_EN_MASK SIO_MTIME_CTRL_EN(ALL1)

/*MTIMEH Register macros*/


/*MTIMECMP Register macros*/


/*MTIMECMPH Register macros*/


/*TMDS_CTRL Register macros*/

#define SIO_TMDS_CTRL_CLEAR_BALANCE(v) (((v)&0x1)<<28)
#define SIO_TMDS_CTRL_CLEAR_BALANCE_MASK SIO_TMDS_CTRL_CLEAR_BALANCE(ALL1)
#define SIO_TMDS_CTRL_PIX2_NOSHIFT(v) (((v)&0x1)<<27)
#define SIO_TMDS_CTRL_PIX2_NOSHIFT_MASK SIO_TMDS_CTRL_PIX2_NOSHIFT(ALL1)
#define SIO_TMDS_CTRL_PIX_SHIFT(v) (((v)&0x7)<<24)
#define SIO_TMDS_CTRL_PIX_SHIFT_MASK SIO_TMDS_CTRL_PIX_SHIFT(ALL1)
#define SIO_TMDS_CTRL_INTERLEAVE(v) (((v)&0x1)<<23)
#define SIO_TMDS_CTRL_INTERLEAVE_MASK SIO_TMDS_CTRL_INTERLEAVE(ALL1)
#define SIO_TMDS_CTRL_L2_NBITS(v) (((v)&0x7)<<18)
#define SIO_TMDS_CTRL_L2_NBITS_MASK SIO_TMDS_CTRL_L2_NBITS(ALL1)
#define SIO_TMDS_CTRL_L1_NBITS(v) (((v)&0x7)<<15)
#define SIO_TMDS_CTRL_L1_NBITS_MASK SIO_TMDS_CTRL_L1_NBITS(ALL1)
#define SIO_TMDS_CTRL_L0_NBITS(v) (((v)&0x7)<<12)
#define SIO_TMDS_CTRL_L0_NBITS_MASK SIO_TMDS_CTRL_L0_NBITS(ALL1)
#define SIO_TMDS_CTRL_L2_ROT(v) (((v)&0xf)<<8)
#define SIO_TMDS_CTRL_L2_ROT_MASK SIO_TMDS_CTRL_L2_ROT(ALL1)
#define SIO_TMDS_CTRL_L1_ROT(v) (((v)&0xf)<<4)
#define SIO_TMDS_CTRL_L1_ROT_MASK SIO_TMDS_CTRL_L1_ROT(ALL1)
#define SIO_TMDS_CTRL_L0_ROT(v) (((v)&0xf)<<0)
#define SIO_TMDS_CTRL_L0_ROT_MASK SIO_TMDS_CTRL_L0_ROT(ALL1)

/*TMDS_WDATA Register macros*/


/*TMDS_PEEK_SINGLE Register macros*/


/*TMDS_POP_SINGLE Register macros*/


/*TMDS_PEEK_DOUBLE_L0 Register macros*/


/*TMDS_POP_DOUBLE_L0 Register macros*/


/*TMDS_PEEK_DOUBLE_L1 Register macros*/


/*TMDS_POP_DOUBLE_L1 Register macros*/


/*TMDS_PEEK_DOUBLE_L2 Register macros*/


/*TMDS_POP_DOUBLE_L2 Register macros*/


/*CPUID Register macros*/


/*GPIO_IN Register macros*/


/*GPIO_HI_IN Register macros*/

#define SIO_NONSEC_GPIO_HI_IN_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_IN_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_IN_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_IN_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_IN_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_IN_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_IN_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_IN_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_IN_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_IN_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_IN_USB_DM_MASK SIO_NONSEC_GPIO_HI_IN_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_IN_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_IN_USB_DP_MASK SIO_NONSEC_GPIO_HI_IN_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_IN_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_IN_GPIO_MASK SIO_NONSEC_GPIO_HI_IN_GPIO(ALL1)

/*GPIO_OUT Register macros*/


/*GPIO_HI_OUT Register macros*/

#define SIO_NONSEC_GPIO_HI_OUT_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OUT_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OUT_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OUT_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OUT_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OUT_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OUT_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OUT_USB_DM_MASK SIO_NONSEC_GPIO_HI_OUT_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OUT_USB_DP_MASK SIO_NONSEC_GPIO_HI_OUT_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OUT_GPIO_MASK SIO_NONSEC_GPIO_HI_OUT_GPIO(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_SET_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OUT_SET_USB_DM_MASK SIO_NONSEC_GPIO_HI_OUT_SET_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_SET_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OUT_SET_USB_DP_MASK SIO_NONSEC_GPIO_HI_OUT_SET_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_SET_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OUT_SET_GPIO_MASK SIO_NONSEC_GPIO_HI_OUT_SET_GPIO(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_USB_DM_MASK SIO_NONSEC_GPIO_HI_OUT_CLR_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_USB_DP_MASK SIO_NONSEC_GPIO_HI_OUT_CLR_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_GPIO_MASK SIO_NONSEC_GPIO_HI_OUT_CLR_GPIO(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_USB_DM_MASK SIO_NONSEC_GPIO_HI_OUT_XOR_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_USB_DP_MASK SIO_NONSEC_GPIO_HI_OUT_XOR_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_GPIO_MASK SIO_NONSEC_GPIO_HI_OUT_XOR_GPIO(ALL1)

/*GPIO_OUT_SET Register macros*/


/*GPIO_HI_OUT_SET Register macros*/

#define SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OUT_SET_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_SET_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OUT_SET_USB_DM_MASK SIO_NONSEC_GPIO_HI_OUT_SET_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_SET_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OUT_SET_USB_DP_MASK SIO_NONSEC_GPIO_HI_OUT_SET_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_SET_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OUT_SET_GPIO_MASK SIO_NONSEC_GPIO_HI_OUT_SET_GPIO(ALL1)

/*GPIO_OUT_CLR Register macros*/


/*GPIO_HI_OUT_CLR Register macros*/

#define SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OUT_CLR_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_USB_DM_MASK SIO_NONSEC_GPIO_HI_OUT_CLR_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_USB_DP_MASK SIO_NONSEC_GPIO_HI_OUT_CLR_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OUT_CLR_GPIO_MASK SIO_NONSEC_GPIO_HI_OUT_CLR_GPIO(ALL1)

/*GPIO_OUT_XOR Register macros*/


/*GPIO_HI_OUT_XOR Register macros*/

#define SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OUT_XOR_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_USB_DM_MASK SIO_NONSEC_GPIO_HI_OUT_XOR_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_USB_DP_MASK SIO_NONSEC_GPIO_HI_OUT_XOR_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OUT_XOR_GPIO_MASK SIO_NONSEC_GPIO_HI_OUT_XOR_GPIO(ALL1)

/*GPIO_OE Register macros*/


/*GPIO_HI_OE Register macros*/

#define SIO_NONSEC_GPIO_HI_OE_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OE_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OE_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OE_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OE_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OE_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OE_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OE_USB_DM_MASK SIO_NONSEC_GPIO_HI_OE_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OE_USB_DP_MASK SIO_NONSEC_GPIO_HI_OE_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OE_GPIO_MASK SIO_NONSEC_GPIO_HI_OE_GPIO(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_SET_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OE_SET_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OE_SET_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_SET_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OE_SET_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OE_SET_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_SET_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OE_SET_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OE_SET_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_SET_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OE_SET_USB_DM_MASK SIO_NONSEC_GPIO_HI_OE_SET_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_SET_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OE_SET_USB_DP_MASK SIO_NONSEC_GPIO_HI_OE_SET_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_SET_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OE_SET_GPIO_MASK SIO_NONSEC_GPIO_HI_OE_SET_GPIO(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_CLR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OE_CLR_USB_DM_MASK SIO_NONSEC_GPIO_HI_OE_CLR_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_CLR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OE_CLR_USB_DP_MASK SIO_NONSEC_GPIO_HI_OE_CLR_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_CLR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OE_CLR_GPIO_MASK SIO_NONSEC_GPIO_HI_OE_CLR_GPIO(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_XOR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OE_XOR_USB_DM_MASK SIO_NONSEC_GPIO_HI_OE_XOR_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_XOR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OE_XOR_USB_DP_MASK SIO_NONSEC_GPIO_HI_OE_XOR_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_XOR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OE_XOR_GPIO_MASK SIO_NONSEC_GPIO_HI_OE_XOR_GPIO(ALL1)

/*GPIO_OE_SET Register macros*/


/*GPIO_HI_OE_SET Register macros*/

#define SIO_NONSEC_GPIO_HI_OE_SET_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OE_SET_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OE_SET_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_SET_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OE_SET_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OE_SET_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_SET_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OE_SET_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OE_SET_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_SET_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OE_SET_USB_DM_MASK SIO_NONSEC_GPIO_HI_OE_SET_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_SET_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OE_SET_USB_DP_MASK SIO_NONSEC_GPIO_HI_OE_SET_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_SET_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OE_SET_GPIO_MASK SIO_NONSEC_GPIO_HI_OE_SET_GPIO(ALL1)

/*GPIO_OE_CLR Register macros*/


/*GPIO_HI_OE_CLR Register macros*/

#define SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OE_CLR_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_CLR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OE_CLR_USB_DM_MASK SIO_NONSEC_GPIO_HI_OE_CLR_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_CLR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OE_CLR_USB_DP_MASK SIO_NONSEC_GPIO_HI_OE_CLR_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_CLR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OE_CLR_GPIO_MASK SIO_NONSEC_GPIO_HI_OE_CLR_GPIO(ALL1)

/*GPIO_OE_XOR Register macros*/


/*GPIO_HI_OE_XOR Register macros*/

#define SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_SD(v) (((v)&0xf)<<28)
#define SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_SD_MASK SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_SD(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_CSN(v) (((v)&0x1)<<27)
#define SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_CSN_MASK SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_CSN(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_SCK(v) (((v)&0x1)<<26)
#define SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_SCK_MASK SIO_NONSEC_GPIO_HI_OE_XOR_QSPI_SCK(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_XOR_USB_DM(v) (((v)&0x1)<<25)
#define SIO_NONSEC_GPIO_HI_OE_XOR_USB_DM_MASK SIO_NONSEC_GPIO_HI_OE_XOR_USB_DM(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_XOR_USB_DP(v) (((v)&0x1)<<24)
#define SIO_NONSEC_GPIO_HI_OE_XOR_USB_DP_MASK SIO_NONSEC_GPIO_HI_OE_XOR_USB_DP(ALL1)
#define SIO_NONSEC_GPIO_HI_OE_XOR_GPIO(v) (((v)&0xffff)<<0)
#define SIO_NONSEC_GPIO_HI_OE_XOR_GPIO_MASK SIO_NONSEC_GPIO_HI_OE_XOR_GPIO(ALL1)

/*FIFO_ST Register macros*/

#define SIO_NONSEC_FIFO_ST_ROE(v) (((v)&0x1)<<3)
#define SIO_NONSEC_FIFO_ST_ROE_MASK SIO_NONSEC_FIFO_ST_ROE(ALL1)
#define SIO_NONSEC_FIFO_ST_WOF(v) (((v)&0x1)<<2)
#define SIO_NONSEC_FIFO_ST_WOF_MASK SIO_NONSEC_FIFO_ST_WOF(ALL1)
#define SIO_NONSEC_FIFO_ST_RDY(v) (((v)&0x1)<<1)
#define SIO_NONSEC_FIFO_ST_RDY_MASK SIO_NONSEC_FIFO_ST_RDY(ALL1)
#define SIO_NONSEC_FIFO_ST_VLD(v) (((v)&0x1)<<0)
#define SIO_NONSEC_FIFO_ST_VLD_MASK SIO_NONSEC_FIFO_ST_VLD(ALL1)

/*FIFO_WR Register macros*/


/*FIFO_RD Register macros*/


/*SPINLOCK_ST Register macros*/


/*INTERP0_ACCUM0 Register macros*/


/*INTERP0_ACCUM1 Register macros*/


/*INTERP0_BASE0 Register macros*/


/*INTERP0_BASE1 Register macros*/


/*INTERP0_BASE2 Register macros*/


/*INTERP0_POP_LANE0 Register macros*/


/*INTERP0_POP_LANE1 Register macros*/


/*INTERP0_POP_FULL Register macros*/


/*INTERP0_PEEK_LANE0 Register macros*/


/*INTERP0_PEEK_LANE1 Register macros*/


/*INTERP0_PEEK_FULL Register macros*/


/*INTERP0_CTRL_LANE0 Register macros*/

#define SIO_NONSEC_INTERP0_CTRL_LANE0_OVERF(v) (((v)&0x1)<<25)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_OVERF_MASK SIO_NONSEC_INTERP0_CTRL_LANE0_OVERF(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_OVERF1(v) (((v)&0x1)<<24)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_OVERF1_MASK SIO_NONSEC_INTERP0_CTRL_LANE0_OVERF1(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_OVERF0(v) (((v)&0x1)<<23)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_OVERF0_MASK SIO_NONSEC_INTERP0_CTRL_LANE0_OVERF0(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_BLEND(v) (((v)&0x1)<<21)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_BLEND_MASK SIO_NONSEC_INTERP0_CTRL_LANE0_BLEND(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_FORCE_MSB(v) (((v)&0x3)<<19)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_FORCE_MSB_MASK SIO_NONSEC_INTERP0_CTRL_LANE0_FORCE_MSB(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_ADD_RAW(v) (((v)&0x1)<<18)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_ADD_RAW_MASK SIO_NONSEC_INTERP0_CTRL_LANE0_ADD_RAW(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_CROSS_RESULT(v) (((v)&0x1)<<17)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_CROSS_RESULT_MASK SIO_NONSEC_INTERP0_CTRL_LANE0_CROSS_RESULT(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_CROSS_INPUT(v) (((v)&0x1)<<16)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_CROSS_INPUT_MASK SIO_NONSEC_INTERP0_CTRL_LANE0_CROSS_INPUT(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_SIGNED(v) (((v)&0x1)<<15)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_SIGNED_MASK SIO_NONSEC_INTERP0_CTRL_LANE0_SIGNED(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_MASK_MSB(v) (((v)&0x1f)<<10)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_MASK_MSB_MASK SIO_NONSEC_INTERP0_CTRL_LANE0_MASK_MSB(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_MASK_LSB(v) (((v)&0x1f)<<5)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_MASK_LSB_MASK SIO_NONSEC_INTERP0_CTRL_LANE0_MASK_LSB(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_SHIFT(v) (((v)&0x1f)<<0)
#define SIO_NONSEC_INTERP0_CTRL_LANE0_SHIFT_MASK SIO_NONSEC_INTERP0_CTRL_LANE0_SHIFT(ALL1)

/*INTERP0_CTRL_LANE1 Register macros*/

#define SIO_NONSEC_INTERP0_CTRL_LANE1_FORCE_MSB(v) (((v)&0x3)<<19)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_FORCE_MSB_MASK SIO_NONSEC_INTERP0_CTRL_LANE1_FORCE_MSB(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_ADD_RAW(v) (((v)&0x1)<<18)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_ADD_RAW_MASK SIO_NONSEC_INTERP0_CTRL_LANE1_ADD_RAW(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_CROSS_RESULT(v) (((v)&0x1)<<17)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_CROSS_RESULT_MASK SIO_NONSEC_INTERP0_CTRL_LANE1_CROSS_RESULT(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_CROSS_INPUT(v) (((v)&0x1)<<16)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_CROSS_INPUT_MASK SIO_NONSEC_INTERP0_CTRL_LANE1_CROSS_INPUT(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_SIGNED(v) (((v)&0x1)<<15)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_SIGNED_MASK SIO_NONSEC_INTERP0_CTRL_LANE1_SIGNED(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_MASK_MSB(v) (((v)&0x1f)<<10)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_MASK_MSB_MASK SIO_NONSEC_INTERP0_CTRL_LANE1_MASK_MSB(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_MASK_LSB(v) (((v)&0x1f)<<5)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_MASK_LSB_MASK SIO_NONSEC_INTERP0_CTRL_LANE1_MASK_LSB(ALL1)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_SHIFT(v) (((v)&0x1f)<<0)
#define SIO_NONSEC_INTERP0_CTRL_LANE1_SHIFT_MASK SIO_NONSEC_INTERP0_CTRL_LANE1_SHIFT(ALL1)

/*INTERP0_ACCUM0_ADD Register macros*/


/*INTERP0_ACCUM1_ADD Register macros*/


/*INTERP0_BASE_1AND0 Register macros*/


/*INTERP1_ACCUM0 Register macros*/


/*INTERP1_ACCUM1 Register macros*/


/*INTERP1_BASE0 Register macros*/


/*INTERP1_BASE1 Register macros*/


/*INTERP1_BASE2 Register macros*/


/*INTERP1_POP_LANE0 Register macros*/


/*INTERP1_POP_LANE1 Register macros*/


/*INTERP1_POP_FULL Register macros*/


/*INTERP1_PEEK_LANE0 Register macros*/


/*INTERP1_PEEK_LANE1 Register macros*/


/*INTERP1_PEEK_FULL Register macros*/


/*INTERP1_CTRL_LANE0 Register macros*/

#define SIO_NONSEC_INTERP1_CTRL_LANE0_OVERF(v) (((v)&0x1)<<25)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_OVERF_MASK SIO_NONSEC_INTERP1_CTRL_LANE0_OVERF(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_OVERF1(v) (((v)&0x1)<<24)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_OVERF1_MASK SIO_NONSEC_INTERP1_CTRL_LANE0_OVERF1(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_OVERF0(v) (((v)&0x1)<<23)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_OVERF0_MASK SIO_NONSEC_INTERP1_CTRL_LANE0_OVERF0(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_CLAMP(v) (((v)&0x1)<<22)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_CLAMP_MASK SIO_NONSEC_INTERP1_CTRL_LANE0_CLAMP(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_FORCE_MSB(v) (((v)&0x3)<<19)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_FORCE_MSB_MASK SIO_NONSEC_INTERP1_CTRL_LANE0_FORCE_MSB(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_ADD_RAW(v) (((v)&0x1)<<18)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_ADD_RAW_MASK SIO_NONSEC_INTERP1_CTRL_LANE0_ADD_RAW(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_CROSS_RESULT(v) (((v)&0x1)<<17)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_CROSS_RESULT_MASK SIO_NONSEC_INTERP1_CTRL_LANE0_CROSS_RESULT(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_CROSS_INPUT(v) (((v)&0x1)<<16)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_CROSS_INPUT_MASK SIO_NONSEC_INTERP1_CTRL_LANE0_CROSS_INPUT(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_SIGNED(v) (((v)&0x1)<<15)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_SIGNED_MASK SIO_NONSEC_INTERP1_CTRL_LANE0_SIGNED(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_MASK_MSB(v) (((v)&0x1f)<<10)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_MASK_MSB_MASK SIO_NONSEC_INTERP1_CTRL_LANE0_MASK_MSB(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_MASK_LSB(v) (((v)&0x1f)<<5)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_MASK_LSB_MASK SIO_NONSEC_INTERP1_CTRL_LANE0_MASK_LSB(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_SHIFT(v) (((v)&0x1f)<<0)
#define SIO_NONSEC_INTERP1_CTRL_LANE0_SHIFT_MASK SIO_NONSEC_INTERP1_CTRL_LANE0_SHIFT(ALL1)

/*INTERP1_CTRL_LANE1 Register macros*/

#define SIO_NONSEC_INTERP1_CTRL_LANE1_FORCE_MSB(v) (((v)&0x3)<<19)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_FORCE_MSB_MASK SIO_NONSEC_INTERP1_CTRL_LANE1_FORCE_MSB(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_ADD_RAW(v) (((v)&0x1)<<18)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_ADD_RAW_MASK SIO_NONSEC_INTERP1_CTRL_LANE1_ADD_RAW(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_CROSS_RESULT(v) (((v)&0x1)<<17)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_CROSS_RESULT_MASK SIO_NONSEC_INTERP1_CTRL_LANE1_CROSS_RESULT(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_CROSS_INPUT(v) (((v)&0x1)<<16)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_CROSS_INPUT_MASK SIO_NONSEC_INTERP1_CTRL_LANE1_CROSS_INPUT(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_SIGNED(v) (((v)&0x1)<<15)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_SIGNED_MASK SIO_NONSEC_INTERP1_CTRL_LANE1_SIGNED(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_MASK_MSB(v) (((v)&0x1f)<<10)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_MASK_MSB_MASK SIO_NONSEC_INTERP1_CTRL_LANE1_MASK_MSB(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_MASK_LSB(v) (((v)&0x1f)<<5)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_MASK_LSB_MASK SIO_NONSEC_INTERP1_CTRL_LANE1_MASK_LSB(ALL1)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_SHIFT(v) (((v)&0x1f)<<0)
#define SIO_NONSEC_INTERP1_CTRL_LANE1_SHIFT_MASK SIO_NONSEC_INTERP1_CTRL_LANE1_SHIFT(ALL1)

/*INTERP1_ACCUM0_ADD Register macros*/


/*INTERP1_ACCUM1_ADD Register macros*/


/*INTERP1_BASE_1AND0 Register macros*/


/*SPINLOCK0 Register macros*/


/*SPINLOCK1 Register macros*/


/*SPINLOCK2 Register macros*/


/*SPINLOCK3 Register macros*/


/*SPINLOCK4 Register macros*/


/*SPINLOCK5 Register macros*/


/*SPINLOCK6 Register macros*/


/*SPINLOCK7 Register macros*/


/*SPINLOCK8 Register macros*/


/*SPINLOCK9 Register macros*/


/*SPINLOCK10 Register macros*/


/*SPINLOCK11 Register macros*/


/*SPINLOCK12 Register macros*/


/*SPINLOCK13 Register macros*/


/*SPINLOCK14 Register macros*/


/*SPINLOCK15 Register macros*/


/*SPINLOCK16 Register macros*/


/*SPINLOCK17 Register macros*/


/*SPINLOCK18 Register macros*/


/*SPINLOCK19 Register macros*/


/*SPINLOCK20 Register macros*/


/*SPINLOCK21 Register macros*/


/*SPINLOCK22 Register macros*/


/*SPINLOCK23 Register macros*/


/*SPINLOCK24 Register macros*/


/*SPINLOCK25 Register macros*/


/*SPINLOCK26 Register macros*/


/*SPINLOCK27 Register macros*/


/*SPINLOCK28 Register macros*/


/*SPINLOCK29 Register macros*/


/*SPINLOCK30 Register macros*/


/*SPINLOCK31 Register macros*/


/*DOORBELL_OUT_SET Register macros*/


/*DOORBELL_OUT_CLR Register macros*/


/*DOORBELL_IN_SET Register macros*/


/*DOORBELL_IN_CLR Register macros*/


/*PERI_NONSEC Register macros*/

#define SIO_NONSEC_PERI_NONSEC_TMDS(v) (((v)&0x1)<<5)
#define SIO_NONSEC_PERI_NONSEC_TMDS_MASK SIO_NONSEC_PERI_NONSEC_TMDS(ALL1)
#define SIO_NONSEC_PERI_NONSEC_INTERP1(v) (((v)&0x1)<<1)
#define SIO_NONSEC_PERI_NONSEC_INTERP1_MASK SIO_NONSEC_PERI_NONSEC_INTERP1(ALL1)
#define SIO_NONSEC_PERI_NONSEC_INTERP0(v) (((v)&0x1)<<0)
#define SIO_NONSEC_PERI_NONSEC_INTERP0_MASK SIO_NONSEC_PERI_NONSEC_INTERP0(ALL1)

/*RISCV_SOFTIRQ Register macros*/

#define SIO_NONSEC_RISCV_SOFTIRQ_CORE1_CLR(v) (((v)&0x1)<<9)
#define SIO_NONSEC_RISCV_SOFTIRQ_CORE1_CLR_MASK SIO_NONSEC_RISCV_SOFTIRQ_CORE1_CLR(ALL1)
#define SIO_NONSEC_RISCV_SOFTIRQ_CORE0_CLR(v) (((v)&0x1)<<8)
#define SIO_NONSEC_RISCV_SOFTIRQ_CORE0_CLR_MASK SIO_NONSEC_RISCV_SOFTIRQ_CORE0_CLR(ALL1)
#define SIO_NONSEC_RISCV_SOFTIRQ_CORE1_SET(v) (((v)&0x1)<<1)
#define SIO_NONSEC_RISCV_SOFTIRQ_CORE1_SET_MASK SIO_NONSEC_RISCV_SOFTIRQ_CORE1_SET(ALL1)
#define SIO_NONSEC_RISCV_SOFTIRQ_CORE0_SET(v) (((v)&0x1)<<0)
#define SIO_NONSEC_RISCV_SOFTIRQ_CORE0_SET_MASK SIO_NONSEC_RISCV_SOFTIRQ_CORE0_SET(ALL1)

/*MTIME_CTRL Register macros*/

#define SIO_NONSEC_MTIME_CTRL_DBGPAUSE_CORE1(v) (((v)&0x1)<<3)
#define SIO_NONSEC_MTIME_CTRL_DBGPAUSE_CORE1_MASK SIO_NONSEC_MTIME_CTRL_DBGPAUSE_CORE1(ALL1)
#define SIO_NONSEC_MTIME_CTRL_DBGPAUSE_CORE0(v) (((v)&0x1)<<2)
#define SIO_NONSEC_MTIME_CTRL_DBGPAUSE_CORE0_MASK SIO_NONSEC_MTIME_CTRL_DBGPAUSE_CORE0(ALL1)
#define SIO_NONSEC_MTIME_CTRL_FULLSPEED(v) (((v)&0x1)<<1)
#define SIO_NONSEC_MTIME_CTRL_FULLSPEED_MASK SIO_NONSEC_MTIME_CTRL_FULLSPEED(ALL1)
#define SIO_NONSEC_MTIME_CTRL_EN(v) (((v)&0x1)<<0)
#define SIO_NONSEC_MTIME_CTRL_EN_MASK SIO_NONSEC_MTIME_CTRL_EN(ALL1)

/*MTIME Register macros*/

#define SIO_NONSEC_MTIME_CTRL_DBGPAUSE_CORE1(v) (((v)&0x1)<<3)
#define SIO_NONSEC_MTIME_CTRL_DBGPAUSE_CORE1_MASK SIO_NONSEC_MTIME_CTRL_DBGPAUSE_CORE1(ALL1)
#define SIO_NONSEC_MTIME_CTRL_DBGPAUSE_CORE0(v) (((v)&0x1)<<2)
#define SIO_NONSEC_MTIME_CTRL_DBGPAUSE_CORE0_MASK SIO_NONSEC_MTIME_CTRL_DBGPAUSE_CORE0(ALL1)
#define SIO_NONSEC_MTIME_CTRL_FULLSPEED(v) (((v)&0x1)<<1)
#define SIO_NONSEC_MTIME_CTRL_FULLSPEED_MASK SIO_NONSEC_MTIME_CTRL_FULLSPEED(ALL1)
#define SIO_NONSEC_MTIME_CTRL_EN(v) (((v)&0x1)<<0)
#define SIO_NONSEC_MTIME_CTRL_EN_MASK SIO_NONSEC_MTIME_CTRL_EN(ALL1)

/*MTIMEH Register macros*/


/*MTIMECMP Register macros*/


/*MTIMECMPH Register macros*/


/*TMDS_CTRL Register macros*/

#define SIO_NONSEC_TMDS_CTRL_CLEAR_BALANCE(v) (((v)&0x1)<<28)
#define SIO_NONSEC_TMDS_CTRL_CLEAR_BALANCE_MASK SIO_NONSEC_TMDS_CTRL_CLEAR_BALANCE(ALL1)
#define SIO_NONSEC_TMDS_CTRL_PIX2_NOSHIFT(v) (((v)&0x1)<<27)
#define SIO_NONSEC_TMDS_CTRL_PIX2_NOSHIFT_MASK SIO_NONSEC_TMDS_CTRL_PIX2_NOSHIFT(ALL1)
#define SIO_NONSEC_TMDS_CTRL_PIX_SHIFT(v) (((v)&0x7)<<24)
#define SIO_NONSEC_TMDS_CTRL_PIX_SHIFT_MASK SIO_NONSEC_TMDS_CTRL_PIX_SHIFT(ALL1)
#define SIO_NONSEC_TMDS_CTRL_INTERLEAVE(v) (((v)&0x1)<<23)
#define SIO_NONSEC_TMDS_CTRL_INTERLEAVE_MASK SIO_NONSEC_TMDS_CTRL_INTERLEAVE(ALL1)
#define SIO_NONSEC_TMDS_CTRL_L2_NBITS(v) (((v)&0x7)<<18)
#define SIO_NONSEC_TMDS_CTRL_L2_NBITS_MASK SIO_NONSEC_TMDS_CTRL_L2_NBITS(ALL1)
#define SIO_NONSEC_TMDS_CTRL_L1_NBITS(v) (((v)&0x7)<<15)
#define SIO_NONSEC_TMDS_CTRL_L1_NBITS_MASK SIO_NONSEC_TMDS_CTRL_L1_NBITS(ALL1)
#define SIO_NONSEC_TMDS_CTRL_L0_NBITS(v) (((v)&0x7)<<12)
#define SIO_NONSEC_TMDS_CTRL_L0_NBITS_MASK SIO_NONSEC_TMDS_CTRL_L0_NBITS(ALL1)
#define SIO_NONSEC_TMDS_CTRL_L2_ROT(v) (((v)&0xf)<<8)
#define SIO_NONSEC_TMDS_CTRL_L2_ROT_MASK SIO_NONSEC_TMDS_CTRL_L2_ROT(ALL1)
#define SIO_NONSEC_TMDS_CTRL_L1_ROT(v) (((v)&0xf)<<4)
#define SIO_NONSEC_TMDS_CTRL_L1_ROT_MASK SIO_NONSEC_TMDS_CTRL_L1_ROT(ALL1)
#define SIO_NONSEC_TMDS_CTRL_L0_ROT(v) (((v)&0xf)<<0)
#define SIO_NONSEC_TMDS_CTRL_L0_ROT_MASK SIO_NONSEC_TMDS_CTRL_L0_ROT(ALL1)

/*TMDS_WDATA Register macros*/


/*TMDS_PEEK_SINGLE Register macros*/


/*TMDS_POP_SINGLE Register macros*/


/*TMDS_PEEK_DOUBLE_L0 Register macros*/


/*TMDS_POP_DOUBLE_L0 Register macros*/


/*TMDS_PEEK_DOUBLE_L1 Register macros*/


/*TMDS_POP_DOUBLE_L1 Register macros*/


/*TMDS_PEEK_DOUBLE_L2 Register macros*/


/*TMDS_POP_DOUBLE_L2 Register macros*/


#endif

