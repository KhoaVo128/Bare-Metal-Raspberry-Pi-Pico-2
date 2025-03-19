
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

#ifndef RP2350_BOOTRAM_H
#define RP2350_BOOTRAM_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t RSVD0[512];
		uint32_t write_once0;
		uint32_t write_once1;
		uint32_t bootlock_stat;
		uint32_t bootlock0;
		uint32_t bootlock1;
		uint32_t bootlock2;
		uint32_t bootlock3;
		uint32_t bootlock4;
		uint32_t bootlock5;
		uint32_t bootlock6;
		uint32_t bootlock7;
		uint32_t RSVD1[501];
		uint32_t RSVDxor_0[512];
		uint32_t xor_write_once0;
		uint32_t xor_write_once1;
		uint32_t xor_bootlock_stat;
		uint32_t xor_bootlock0;
		uint32_t xor_bootlock1;
		uint32_t xor_bootlock2;
		uint32_t xor_bootlock3;
		uint32_t xor_bootlock4;
		uint32_t xor_bootlock5;
		uint32_t xor_bootlock6;
		uint32_t xor_bootlock7;
		uint32_t RSVDxor_1[501];
		uint32_t RSVDset_0[512];
		uint32_t set_write_once0;
		uint32_t set_write_once1;
		uint32_t set_bootlock_stat;
		uint32_t set_bootlock0;
		uint32_t set_bootlock1;
		uint32_t set_bootlock2;
		uint32_t set_bootlock3;
		uint32_t set_bootlock4;
		uint32_t set_bootlock5;
		uint32_t set_bootlock6;
		uint32_t set_bootlock7;
		uint32_t RSVDset_1[501];
		uint32_t RSVDclr_0[512];
		uint32_t clr_write_once0;
		uint32_t clr_write_once1;
		uint32_t clr_bootlock_stat;
		uint32_t clr_bootlock0;
		uint32_t clr_bootlock1;
		uint32_t clr_bootlock2;
		uint32_t clr_bootlock3;
		uint32_t clr_bootlock4;
		uint32_t clr_bootlock5;
		uint32_t clr_bootlock6;
		uint32_t clr_bootlock7;
		uint32_t RSVDclr_1[501];
} BOOTRAM_REG_BLOCKS;


/*IO Registers as struct*/

#define bootram (*(BOOTRAM_REG_BLOCKS volatile *)0x400e0000)


/*IO Registers AS MACROS*/

#define BOOTRAM_WRITE_ONCE0 (*(volatile uint32_t *)0x400e0800)
#define BOOTRAM_WRITE_ONCE1 (*(volatile uint32_t *)0x400e0804)
#define BOOTRAM_BOOTLOCK_STAT (*(volatile uint32_t *)0x400e0808)
#define BOOTRAM_BOOTLOCK0 (*(volatile uint32_t *)0x400e080c)
#define BOOTRAM_BOOTLOCK1 (*(volatile uint32_t *)0x400e0810)
#define BOOTRAM_BOOTLOCK2 (*(volatile uint32_t *)0x400e0814)
#define BOOTRAM_BOOTLOCK3 (*(volatile uint32_t *)0x400e0818)
#define BOOTRAM_BOOTLOCK4 (*(volatile uint32_t *)0x400e081c)
#define BOOTRAM_BOOTLOCK5 (*(volatile uint32_t *)0x400e0820)
#define BOOTRAM_BOOTLOCK6 (*(volatile uint32_t *)0x400e0824)
#define BOOTRAM_BOOTLOCK7 (*(volatile uint32_t *)0x400e0828)
#define BOOTRAM_XOR_WRITE_ONCE0 (*(volatile uint32_t *)0x400e1800)
#define BOOTRAM_XOR_WRITE_ONCE1 (*(volatile uint32_t *)0x400e1804)
#define BOOTRAM_XOR_BOOTLOCK_STAT (*(volatile uint32_t *)0x400e1808)
#define BOOTRAM_XOR_BOOTLOCK0 (*(volatile uint32_t *)0x400e180c)
#define BOOTRAM_XOR_BOOTLOCK1 (*(volatile uint32_t *)0x400e1810)
#define BOOTRAM_XOR_BOOTLOCK2 (*(volatile uint32_t *)0x400e1814)
#define BOOTRAM_XOR_BOOTLOCK3 (*(volatile uint32_t *)0x400e1818)
#define BOOTRAM_XOR_BOOTLOCK4 (*(volatile uint32_t *)0x400e181c)
#define BOOTRAM_XOR_BOOTLOCK5 (*(volatile uint32_t *)0x400e1820)
#define BOOTRAM_XOR_BOOTLOCK6 (*(volatile uint32_t *)0x400e1824)
#define BOOTRAM_XOR_BOOTLOCK7 (*(volatile uint32_t *)0x400e1828)
#define BOOTRAM_SET_WRITE_ONCE0 (*(volatile uint32_t *)0x400e2800)
#define BOOTRAM_SET_WRITE_ONCE1 (*(volatile uint32_t *)0x400e2804)
#define BOOTRAM_SET_BOOTLOCK_STAT (*(volatile uint32_t *)0x400e2808)
#define BOOTRAM_SET_BOOTLOCK0 (*(volatile uint32_t *)0x400e280c)
#define BOOTRAM_SET_BOOTLOCK1 (*(volatile uint32_t *)0x400e2810)
#define BOOTRAM_SET_BOOTLOCK2 (*(volatile uint32_t *)0x400e2814)
#define BOOTRAM_SET_BOOTLOCK3 (*(volatile uint32_t *)0x400e2818)
#define BOOTRAM_SET_BOOTLOCK4 (*(volatile uint32_t *)0x400e281c)
#define BOOTRAM_SET_BOOTLOCK5 (*(volatile uint32_t *)0x400e2820)
#define BOOTRAM_SET_BOOTLOCK6 (*(volatile uint32_t *)0x400e2824)
#define BOOTRAM_SET_BOOTLOCK7 (*(volatile uint32_t *)0x400e2828)
#define BOOTRAM_CLR_WRITE_ONCE0 (*(volatile uint32_t *)0x400e3800)
#define BOOTRAM_CLR_WRITE_ONCE1 (*(volatile uint32_t *)0x400e3804)
#define BOOTRAM_CLR_BOOTLOCK_STAT (*(volatile uint32_t *)0x400e3808)
#define BOOTRAM_CLR_BOOTLOCK0 (*(volatile uint32_t *)0x400e380c)
#define BOOTRAM_CLR_BOOTLOCK1 (*(volatile uint32_t *)0x400e3810)
#define BOOTRAM_CLR_BOOTLOCK2 (*(volatile uint32_t *)0x400e3814)
#define BOOTRAM_CLR_BOOTLOCK3 (*(volatile uint32_t *)0x400e3818)
#define BOOTRAM_CLR_BOOTLOCK4 (*(volatile uint32_t *)0x400e381c)
#define BOOTRAM_CLR_BOOTLOCK5 (*(volatile uint32_t *)0x400e3820)
#define BOOTRAM_CLR_BOOTLOCK6 (*(volatile uint32_t *)0x400e3824)
#define BOOTRAM_CLR_BOOTLOCK7 (*(volatile uint32_t *)0x400e3828)

/*WRITE_ONCE0 Register macros*/


/*WRITE_ONCE1 Register macros*/


/*BOOTLOCK_STAT Register macros*/


/*BOOTLOCK0 Register macros*/


/*BOOTLOCK1 Register macros*/


/*BOOTLOCK2 Register macros*/


/*BOOTLOCK3 Register macros*/


/*BOOTLOCK4 Register macros*/


/*BOOTLOCK5 Register macros*/


/*BOOTLOCK6 Register macros*/


/*BOOTLOCK7 Register macros*/


#endif

