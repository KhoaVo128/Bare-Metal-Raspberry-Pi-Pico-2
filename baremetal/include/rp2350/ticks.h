
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

#ifndef RP2350_TICKS_H
#define RP2350_TICKS_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t proc0_ctrl;
		uint32_t proc0_cycles;
		uint32_t proc0_count;
		uint32_t proc1_ctrl;
		uint32_t proc1_cycles;
		uint32_t proc1_count;
		uint32_t timer0_ctrl;
		uint32_t timer0_cycles;
		uint32_t timer0_count;
		uint32_t timer1_ctrl;
		uint32_t timer1_cycles;
		uint32_t timer1_count;
		uint32_t watchdog_ctrl;
		uint32_t watchdog_cycles;
		uint32_t watchdog_count;
		uint32_t riscv_ctrl;
		uint32_t riscv_cycles;
		uint32_t riscv_count;
		uint32_t RSVD0[1006];
		uint32_t proc0_ctrl_xor;
		uint32_t proc0_cycles_xor;
		uint32_t proc0_count_xor;
		uint32_t proc1_ctrl_xor;
		uint32_t proc1_cycles_xor;
		uint32_t proc1_count_xor;
		uint32_t timer0_ctrl_xor;
		uint32_t timer0_cycles_xor;
		uint32_t timer0_count_xor;
		uint32_t timer1_ctrl_xor;
		uint32_t timer1_cycles_xor;
		uint32_t timer1_count_xor;
		uint32_t watchdog_ctrl_xor;
		uint32_t watchdog_cycles_xor;
		uint32_t watchdog_count_xor;
		uint32_t riscv_ctrl_xor;
		uint32_t riscv_cycles_xor;
		uint32_t riscv_count_xor;
		uint32_t RSVDxor_0[1006];
		uint32_t proc0_ctrl_set;
		uint32_t proc0_cycles_set;
		uint32_t proc0_count_set;
		uint32_t proc1_ctrl_set;
		uint32_t proc1_cycles_set;
		uint32_t proc1_count_set;
		uint32_t timer0_ctrl_set;
		uint32_t timer0_cycles_set;
		uint32_t timer0_count_set;
		uint32_t timer1_ctrl_set;
		uint32_t timer1_cycles_set;
		uint32_t timer1_count_set;
		uint32_t watchdog_ctrl_set;
		uint32_t watchdog_cycles_set;
		uint32_t watchdog_count_set;
		uint32_t riscv_ctrl_set;
		uint32_t riscv_cycles_set;
		uint32_t riscv_count_set;
		uint32_t RSVDset_0[1006];
		uint32_t proc0_ctrl_clr;
		uint32_t proc0_cycles_clr;
		uint32_t proc0_count_clr;
		uint32_t proc1_ctrl_clr;
		uint32_t proc1_cycles_clr;
		uint32_t proc1_count_clr;
		uint32_t timer0_ctrl_clr;
		uint32_t timer0_cycles_clr;
		uint32_t timer0_count_clr;
		uint32_t timer1_ctrl_clr;
		uint32_t timer1_cycles_clr;
		uint32_t timer1_count_clr;
		uint32_t watchdog_ctrl_clr;
		uint32_t watchdog_cycles_clr;
		uint32_t watchdog_count_clr;
		uint32_t riscv_ctrl_clr;
		uint32_t riscv_cycles_clr;
		uint32_t riscv_count_clr;
		uint32_t RSVDclr_0[1006];
} TICKS_REG_BLOCKS;


/*IO Registers as struct*/

#define ticks (*(TICKS_REG_BLOCKS volatile *)0x40108000)


/*IO Registers AS MACROS*/

#define TICKS_PROC0_CTRL (*(volatile uint32_t *)0x40108000)
#define TICKS_PROC0_CYCLES (*(volatile uint32_t *)0x40108004)
#define TICKS_PROC0_COUNT (*(volatile uint32_t *)0x40108008)
#define TICKS_PROC1_CTRL (*(volatile uint32_t *)0x4010800c)
#define TICKS_PROC1_CYCLES (*(volatile uint32_t *)0x40108010)
#define TICKS_PROC1_COUNT (*(volatile uint32_t *)0x40108014)
#define TICKS_TIMER0_CTRL (*(volatile uint32_t *)0x40108018)
#define TICKS_TIMER0_CYCLES (*(volatile uint32_t *)0x4010801c)
#define TICKS_TIMER0_COUNT (*(volatile uint32_t *)0x40108020)
#define TICKS_TIMER1_CTRL (*(volatile uint32_t *)0x40108024)
#define TICKS_TIMER1_CYCLES (*(volatile uint32_t *)0x40108028)
#define TICKS_TIMER1_COUNT (*(volatile uint32_t *)0x4010802c)
#define TICKS_WATCHDOG_CTRL (*(volatile uint32_t *)0x40108030)
#define TICKS_WATCHDOG_CYCLES (*(volatile uint32_t *)0x40108034)
#define TICKS_WATCHDOG_COUNT (*(volatile uint32_t *)0x40108038)
#define TICKS_RISCV_CTRL (*(volatile uint32_t *)0x4010803c)
#define TICKS_RISCV_CYCLES (*(volatile uint32_t *)0x40108040)
#define TICKS_RISCV_COUNT (*(volatile uint32_t *)0x40108044)
#define TICKS_PROC0_CTRL_XOR (*(volatile uint32_t *)0x40109000)
#define TICKS_PROC0_CYCLES_XOR (*(volatile uint32_t *)0x40109004)
#define TICKS_PROC0_COUNT_XOR (*(volatile uint32_t *)0x40109008)
#define TICKS_PROC1_CTRL_XOR (*(volatile uint32_t *)0x4010900c)
#define TICKS_PROC1_CYCLES_XOR (*(volatile uint32_t *)0x40109010)
#define TICKS_PROC1_COUNT_XOR (*(volatile uint32_t *)0x40109014)
#define TICKS_TIMER0_CTRL_XOR (*(volatile uint32_t *)0x40109018)
#define TICKS_TIMER0_CYCLES_XOR (*(volatile uint32_t *)0x4010901c)
#define TICKS_TIMER0_COUNT_XOR (*(volatile uint32_t *)0x40109020)
#define TICKS_TIMER1_CTRL_XOR (*(volatile uint32_t *)0x40109024)
#define TICKS_TIMER1_CYCLES_XOR (*(volatile uint32_t *)0x40109028)
#define TICKS_TIMER1_COUNT_XOR (*(volatile uint32_t *)0x4010902c)
#define TICKS_WATCHDOG_CTRL_XOR (*(volatile uint32_t *)0x40109030)
#define TICKS_WATCHDOG_CYCLES_XOR (*(volatile uint32_t *)0x40109034)
#define TICKS_WATCHDOG_COUNT_XOR (*(volatile uint32_t *)0x40109038)
#define TICKS_RISCV_CTRL_XOR (*(volatile uint32_t *)0x4010903c)
#define TICKS_RISCV_CYCLES_XOR (*(volatile uint32_t *)0x40109040)
#define TICKS_RISCV_COUNT_XOR (*(volatile uint32_t *)0x40109044)
#define TICKS_PROC0_CTRL_SET (*(volatile uint32_t *)0x4010a000)
#define TICKS_PROC0_CYCLES_SET (*(volatile uint32_t *)0x4010a004)
#define TICKS_PROC0_COUNT_SET (*(volatile uint32_t *)0x4010a008)
#define TICKS_PROC1_CTRL_SET (*(volatile uint32_t *)0x4010a00c)
#define TICKS_PROC1_CYCLES_SET (*(volatile uint32_t *)0x4010a010)
#define TICKS_PROC1_COUNT_SET (*(volatile uint32_t *)0x4010a014)
#define TICKS_TIMER0_CTRL_SET (*(volatile uint32_t *)0x4010a018)
#define TICKS_TIMER0_CYCLES_SET (*(volatile uint32_t *)0x4010a01c)
#define TICKS_TIMER0_COUNT_SET (*(volatile uint32_t *)0x4010a020)
#define TICKS_TIMER1_CTRL_SET (*(volatile uint32_t *)0x4010a024)
#define TICKS_TIMER1_CYCLES_SET (*(volatile uint32_t *)0x4010a028)
#define TICKS_TIMER1_COUNT_SET (*(volatile uint32_t *)0x4010a02c)
#define TICKS_WATCHDOG_CTRL_SET (*(volatile uint32_t *)0x4010a030)
#define TICKS_WATCHDOG_CYCLES_SET (*(volatile uint32_t *)0x4010a034)
#define TICKS_WATCHDOG_COUNT_SET (*(volatile uint32_t *)0x4010a038)
#define TICKS_RISCV_CTRL_SET (*(volatile uint32_t *)0x4010a03c)
#define TICKS_RISCV_CYCLES_SET (*(volatile uint32_t *)0x4010a040)
#define TICKS_RISCV_COUNT_SET (*(volatile uint32_t *)0x4010a044)
#define TICKS_PROC0_CTRL_CLR (*(volatile uint32_t *)0x4010b000)
#define TICKS_PROC0_CYCLES_CLR (*(volatile uint32_t *)0x4010b004)
#define TICKS_PROC0_COUNT_CLR (*(volatile uint32_t *)0x4010b008)
#define TICKS_PROC1_CTRL_CLR (*(volatile uint32_t *)0x4010b00c)
#define TICKS_PROC1_CYCLES_CLR (*(volatile uint32_t *)0x4010b010)
#define TICKS_PROC1_COUNT_CLR (*(volatile uint32_t *)0x4010b014)
#define TICKS_TIMER0_CTRL_CLR (*(volatile uint32_t *)0x4010b018)
#define TICKS_TIMER0_CYCLES_CLR (*(volatile uint32_t *)0x4010b01c)
#define TICKS_TIMER0_COUNT_CLR (*(volatile uint32_t *)0x4010b020)
#define TICKS_TIMER1_CTRL_CLR (*(volatile uint32_t *)0x4010b024)
#define TICKS_TIMER1_CYCLES_CLR (*(volatile uint32_t *)0x4010b028)
#define TICKS_TIMER1_COUNT_CLR (*(volatile uint32_t *)0x4010b02c)
#define TICKS_WATCHDOG_CTRL_CLR (*(volatile uint32_t *)0x4010b030)
#define TICKS_WATCHDOG_CYCLES_CLR (*(volatile uint32_t *)0x4010b034)
#define TICKS_WATCHDOG_COUNT_CLR (*(volatile uint32_t *)0x4010b038)
#define TICKS_RISCV_CTRL_CLR (*(volatile uint32_t *)0x4010b03c)
#define TICKS_RISCV_CYCLES_CLR (*(volatile uint32_t *)0x4010b040)
#define TICKS_RISCV_COUNT_CLR (*(volatile uint32_t *)0x4010b044)

/*PROC0_CTRL Register macros*/

#define TICKS_PROC0_CTRL_RUNNING(v) (((v)&0x1)<<1)
#define TICKS_PROC0_CTRL_RUNNING_MASK TICKS_PROC0_CTRL_RUNNING(ALL1)
#define TICKS_PROC0_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define TICKS_PROC0_CTRL_ENABLE_MASK TICKS_PROC0_CTRL_ENABLE(ALL1)

/*PROC0_CYCLES Register macros*/


/*PROC0_COUNT Register macros*/


/*PROC1_CTRL Register macros*/

#define TICKS_PROC1_CTRL_RUNNING(v) (((v)&0x1)<<1)
#define TICKS_PROC1_CTRL_RUNNING_MASK TICKS_PROC1_CTRL_RUNNING(ALL1)
#define TICKS_PROC1_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define TICKS_PROC1_CTRL_ENABLE_MASK TICKS_PROC1_CTRL_ENABLE(ALL1)

/*PROC1_CYCLES Register macros*/


/*PROC1_COUNT Register macros*/


/*TIMER0_CTRL Register macros*/

#define TICKS_TIMER0_CTRL_RUNNING(v) (((v)&0x1)<<1)
#define TICKS_TIMER0_CTRL_RUNNING_MASK TICKS_TIMER0_CTRL_RUNNING(ALL1)
#define TICKS_TIMER0_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define TICKS_TIMER0_CTRL_ENABLE_MASK TICKS_TIMER0_CTRL_ENABLE(ALL1)

/*TIMER0_CYCLES Register macros*/


/*TIMER0_COUNT Register macros*/


/*TIMER1_CTRL Register macros*/

#define TICKS_TIMER1_CTRL_RUNNING(v) (((v)&0x1)<<1)
#define TICKS_TIMER1_CTRL_RUNNING_MASK TICKS_TIMER1_CTRL_RUNNING(ALL1)
#define TICKS_TIMER1_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define TICKS_TIMER1_CTRL_ENABLE_MASK TICKS_TIMER1_CTRL_ENABLE(ALL1)

/*TIMER1_CYCLES Register macros*/


/*TIMER1_COUNT Register macros*/


/*WATCHDOG_CTRL Register macros*/

#define TICKS_WATCHDOG_CTRL_RUNNING(v) (((v)&0x1)<<1)
#define TICKS_WATCHDOG_CTRL_RUNNING_MASK TICKS_WATCHDOG_CTRL_RUNNING(ALL1)
#define TICKS_WATCHDOG_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define TICKS_WATCHDOG_CTRL_ENABLE_MASK TICKS_WATCHDOG_CTRL_ENABLE(ALL1)

/*WATCHDOG_CYCLES Register macros*/


/*WATCHDOG_COUNT Register macros*/


/*RISCV_CTRL Register macros*/

#define TICKS_RISCV_CTRL_RUNNING(v) (((v)&0x1)<<1)
#define TICKS_RISCV_CTRL_RUNNING_MASK TICKS_RISCV_CTRL_RUNNING(ALL1)
#define TICKS_RISCV_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define TICKS_RISCV_CTRL_ENABLE_MASK TICKS_RISCV_CTRL_ENABLE(ALL1)

/*RISCV_CYCLES Register macros*/


/*RISCV_COUNT Register macros*/


#endif

