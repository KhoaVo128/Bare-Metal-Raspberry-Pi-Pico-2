
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

#ifndef RP2350_PIO_H
#define RP2350_PIO_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ctrl;
		uint32_t fstat;
		uint32_t fdebug;
		uint32_t flevel;
		uint32_t txf0;
		uint32_t txf1;
		uint32_t txf2;
		uint32_t txf3;
		uint32_t rxf0;
		uint32_t rxf1;
		uint32_t rxf2;
		uint32_t rxf3;
		uint32_t irq;
		uint32_t irq_force;
		uint32_t input_sync_bypass;
		uint32_t dbg_padout;
		uint32_t dbg_padoe;
		uint32_t dbg_cfginfo;
		uint32_t instr_mem0;
		uint32_t instr_mem1;
		uint32_t instr_mem2;
		uint32_t instr_mem3;
		uint32_t instr_mem4;
		uint32_t instr_mem5;
		uint32_t instr_mem6;
		uint32_t instr_mem7;
		uint32_t instr_mem8;
		uint32_t instr_mem9;
		uint32_t instr_mem10;
		uint32_t instr_mem11;
		uint32_t instr_mem12;
		uint32_t instr_mem13;
		uint32_t instr_mem14;
		uint32_t instr_mem15;
		uint32_t instr_mem16;
		uint32_t instr_mem17;
		uint32_t instr_mem18;
		uint32_t instr_mem19;
		uint32_t instr_mem20;
		uint32_t instr_mem21;
		uint32_t instr_mem22;
		uint32_t instr_mem23;
		uint32_t instr_mem24;
		uint32_t instr_mem25;
		uint32_t instr_mem26;
		uint32_t instr_mem27;
		uint32_t instr_mem28;
		uint32_t instr_mem29;
		uint32_t instr_mem30;
		uint32_t instr_mem31;
		uint32_t sm0_clkdiv;
		uint32_t sm0_execctrl;
		uint32_t sm0_shiftctrl;
		uint32_t sm0_addr;
		uint32_t sm0_instr;
		uint32_t sm0_pinctrl;
		uint32_t sm1_clkdiv;
		uint32_t sm1_execctrl;
		uint32_t sm1_shiftctrl;
		uint32_t sm1_addr;
		uint32_t sm1_instr;
		uint32_t sm1_pinctrl;
		uint32_t sm2_clkdiv;
		uint32_t sm2_execctrl;
		uint32_t sm2_shiftctrl;
		uint32_t sm2_addr;
		uint32_t sm2_instr;
		uint32_t sm2_pinctrl;
		uint32_t sm3_clkdiv;
		uint32_t sm3_execctrl;
		uint32_t sm3_shiftctrl;
		uint32_t sm3_addr;
		uint32_t sm3_instr;
		uint32_t sm3_pinctrl;
		uint32_t rxf0_putget0;
		uint32_t rxf0_putget1;
		uint32_t rxf0_putget2;
		uint32_t rxf0_putget3;
		uint32_t rxf1_putget0;
		uint32_t rxf1_putget1;
		uint32_t rxf1_putget2;
		uint32_t rxf1_putget3;
		uint32_t rxf2_putget0;
		uint32_t rxf2_putget1;
		uint32_t rxf2_putget2;
		uint32_t rxf2_putget3;
		uint32_t rxf3_putget0;
		uint32_t rxf3_putget1;
		uint32_t rxf3_putget2;
		uint32_t rxf3_putget3;
		uint32_t gpiobase;
		uint32_t intr;
		uint32_t irq0_inte;
		uint32_t irq0_intf;
		uint32_t irq0_ints;
		uint32_t irq1_inte;
		uint32_t irq1_intf;
		uint32_t irq1_ints;
		uint32_t RSVD0[926];
		uint32_t xor_ctrl;
		uint32_t xor_fstat;
		uint32_t xor_fdebug;
		uint32_t xor_flevel;
		uint32_t xor_txf0;
		uint32_t xor_txf1;
		uint32_t xor_txf2;
		uint32_t xor_txf3;
		uint32_t xor_rxf0;
		uint32_t xor_rxf1;
		uint32_t xor_rxf2;
		uint32_t xor_rxf3;
		uint32_t xor_irq;
		uint32_t xor_irq_force;
		uint32_t xor_input_sync_bypass;
		uint32_t xor_dbg_padout;
		uint32_t xor_dbg_padoe;
		uint32_t xor_dbg_cfginfo;
		uint32_t xor_instr_mem0;
		uint32_t xor_instr_mem1;
		uint32_t xor_instr_mem2;
		uint32_t xor_instr_mem3;
		uint32_t xor_instr_mem4;
		uint32_t xor_instr_mem5;
		uint32_t xor_instr_mem6;
		uint32_t xor_instr_mem7;
		uint32_t xor_instr_mem8;
		uint32_t xor_instr_mem9;
		uint32_t xor_instr_mem10;
		uint32_t xor_instr_mem11;
		uint32_t xor_instr_mem12;
		uint32_t xor_instr_mem13;
		uint32_t xor_instr_mem14;
		uint32_t xor_instr_mem15;
		uint32_t xor_instr_mem16;
		uint32_t xor_instr_mem17;
		uint32_t xor_instr_mem18;
		uint32_t xor_instr_mem19;
		uint32_t xor_instr_mem20;
		uint32_t xor_instr_mem21;
		uint32_t xor_instr_mem22;
		uint32_t xor_instr_mem23;
		uint32_t xor_instr_mem24;
		uint32_t xor_instr_mem25;
		uint32_t xor_instr_mem26;
		uint32_t xor_instr_mem27;
		uint32_t xor_instr_mem28;
		uint32_t xor_instr_mem29;
		uint32_t xor_instr_mem30;
		uint32_t xor_instr_mem31;
		uint32_t xor_sm0_clkdiv;
		uint32_t xor_sm0_execctrl;
		uint32_t xor_sm0_shiftctrl;
		uint32_t xor_sm0_addr;
		uint32_t xor_sm0_instr;
		uint32_t xor_sm0_pinctrl;
		uint32_t xor_sm1_clkdiv;
		uint32_t xor_sm1_execctrl;
		uint32_t xor_sm1_shiftctrl;
		uint32_t xor_sm1_addr;
		uint32_t xor_sm1_instr;
		uint32_t xor_sm1_pinctrl;
		uint32_t xor_sm2_clkdiv;
		uint32_t xor_sm2_execctrl;
		uint32_t xor_sm2_shiftctrl;
		uint32_t xor_sm2_addr;
		uint32_t xor_sm2_instr;
		uint32_t xor_sm2_pinctrl;
		uint32_t xor_sm3_clkdiv;
		uint32_t xor_sm3_execctrl;
		uint32_t xor_sm3_shiftctrl;
		uint32_t xor_sm3_addr;
		uint32_t xor_sm3_instr;
		uint32_t xor_sm3_pinctrl;
		uint32_t xor_rxf0_putget0;
		uint32_t xor_rxf0_putget1;
		uint32_t xor_rxf0_putget2;
		uint32_t xor_rxf0_putget3;
		uint32_t xor_rxf1_putget0;
		uint32_t xor_rxf1_putget1;
		uint32_t xor_rxf1_putget2;
		uint32_t xor_rxf1_putget3;
		uint32_t xor_rxf2_putget0;
		uint32_t xor_rxf2_putget1;
		uint32_t xor_rxf2_putget2;
		uint32_t xor_rxf2_putget3;
		uint32_t xor_rxf3_putget0;
		uint32_t xor_rxf3_putget1;
		uint32_t xor_rxf3_putget2;
		uint32_t xor_rxf3_putget3;
		uint32_t xor_gpiobase;
		uint32_t xor_intr;
		uint32_t xor_irq0_inte;
		uint32_t xor_irq0_intf;
		uint32_t xor_irq0_ints;
		uint32_t xor_irq1_inte;
		uint32_t xor_irq1_intf;
		uint32_t xor_irq1_ints;
		uint32_t RSVDxor_0[926];
		uint32_t set_ctrl;
		uint32_t set_fstat;
		uint32_t set_fdebug;
		uint32_t set_flevel;
		uint32_t set_txf0;
		uint32_t set_txf1;
		uint32_t set_txf2;
		uint32_t set_txf3;
		uint32_t set_rxf0;
		uint32_t set_rxf1;
		uint32_t set_rxf2;
		uint32_t set_rxf3;
		uint32_t set_irq;
		uint32_t set_irq_force;
		uint32_t set_input_sync_bypass;
		uint32_t set_dbg_padout;
		uint32_t set_dbg_padoe;
		uint32_t set_dbg_cfginfo;
		uint32_t set_instr_mem0;
		uint32_t set_instr_mem1;
		uint32_t set_instr_mem2;
		uint32_t set_instr_mem3;
		uint32_t set_instr_mem4;
		uint32_t set_instr_mem5;
		uint32_t set_instr_mem6;
		uint32_t set_instr_mem7;
		uint32_t set_instr_mem8;
		uint32_t set_instr_mem9;
		uint32_t set_instr_mem10;
		uint32_t set_instr_mem11;
		uint32_t set_instr_mem12;
		uint32_t set_instr_mem13;
		uint32_t set_instr_mem14;
		uint32_t set_instr_mem15;
		uint32_t set_instr_mem16;
		uint32_t set_instr_mem17;
		uint32_t set_instr_mem18;
		uint32_t set_instr_mem19;
		uint32_t set_instr_mem20;
		uint32_t set_instr_mem21;
		uint32_t set_instr_mem22;
		uint32_t set_instr_mem23;
		uint32_t set_instr_mem24;
		uint32_t set_instr_mem25;
		uint32_t set_instr_mem26;
		uint32_t set_instr_mem27;
		uint32_t set_instr_mem28;
		uint32_t set_instr_mem29;
		uint32_t set_instr_mem30;
		uint32_t set_instr_mem31;
		uint32_t set_sm0_clkdiv;
		uint32_t set_sm0_execctrl;
		uint32_t set_sm0_shiftctrl;
		uint32_t set_sm0_addr;
		uint32_t set_sm0_instr;
		uint32_t set_sm0_pinctrl;
		uint32_t set_sm1_clkdiv;
		uint32_t set_sm1_execctrl;
		uint32_t set_sm1_shiftctrl;
		uint32_t set_sm1_addr;
		uint32_t set_sm1_instr;
		uint32_t set_sm1_pinctrl;
		uint32_t set_sm2_clkdiv;
		uint32_t set_sm2_execctrl;
		uint32_t set_sm2_shiftctrl;
		uint32_t set_sm2_addr;
		uint32_t set_sm2_instr;
		uint32_t set_sm2_pinctrl;
		uint32_t set_sm3_clkdiv;
		uint32_t set_sm3_execctrl;
		uint32_t set_sm3_shiftctrl;
		uint32_t set_sm3_addr;
		uint32_t set_sm3_instr;
		uint32_t set_sm3_pinctrl;
		uint32_t set_rxf0_putget0;
		uint32_t set_rxf0_putget1;
		uint32_t set_rxf0_putget2;
		uint32_t set_rxf0_putget3;
		uint32_t set_rxf1_putget0;
		uint32_t set_rxf1_putget1;
		uint32_t set_rxf1_putget2;
		uint32_t set_rxf1_putget3;
		uint32_t set_rxf2_putget0;
		uint32_t set_rxf2_putget1;
		uint32_t set_rxf2_putget2;
		uint32_t set_rxf2_putget3;
		uint32_t set_rxf3_putget0;
		uint32_t set_rxf3_putget1;
		uint32_t set_rxf3_putget2;
		uint32_t set_rxf3_putget3;
		uint32_t set_gpiobase;
		uint32_t set_intr;
		uint32_t set_irq0_inte;
		uint32_t set_irq0_intf;
		uint32_t set_irq0_ints;
		uint32_t set_irq1_inte;
		uint32_t set_irq1_intf;
		uint32_t set_irq1_ints;
		uint32_t RSVDset_0[926];
		uint32_t clr_ctrl;
		uint32_t clr_fstat;
		uint32_t clr_fdebug;
		uint32_t clr_flevel;
		uint32_t clr_txf0;
		uint32_t clr_txf1;
		uint32_t clr_txf2;
		uint32_t clr_txf3;
		uint32_t clr_rxf0;
		uint32_t clr_rxf1;
		uint32_t clr_rxf2;
		uint32_t clr_rxf3;
		uint32_t clr_irq;
		uint32_t clr_irq_force;
		uint32_t clr_input_sync_bypass;
		uint32_t clr_dbg_padout;
		uint32_t clr_dbg_padoe;
		uint32_t clr_dbg_cfginfo;
		uint32_t clr_instr_mem0;
		uint32_t clr_instr_mem1;
		uint32_t clr_instr_mem2;
		uint32_t clr_instr_mem3;
		uint32_t clr_instr_mem4;
		uint32_t clr_instr_mem5;
		uint32_t clr_instr_mem6;
		uint32_t clr_instr_mem7;
		uint32_t clr_instr_mem8;
		uint32_t clr_instr_mem9;
		uint32_t clr_instr_mem10;
		uint32_t clr_instr_mem11;
		uint32_t clr_instr_mem12;
		uint32_t clr_instr_mem13;
		uint32_t clr_instr_mem14;
		uint32_t clr_instr_mem15;
		uint32_t clr_instr_mem16;
		uint32_t clr_instr_mem17;
		uint32_t clr_instr_mem18;
		uint32_t clr_instr_mem19;
		uint32_t clr_instr_mem20;
		uint32_t clr_instr_mem21;
		uint32_t clr_instr_mem22;
		uint32_t clr_instr_mem23;
		uint32_t clr_instr_mem24;
		uint32_t clr_instr_mem25;
		uint32_t clr_instr_mem26;
		uint32_t clr_instr_mem27;
		uint32_t clr_instr_mem28;
		uint32_t clr_instr_mem29;
		uint32_t clr_instr_mem30;
		uint32_t clr_instr_mem31;
		uint32_t clr_sm0_clkdiv;
		uint32_t clr_sm0_execctrl;
		uint32_t clr_sm0_shiftctrl;
		uint32_t clr_sm0_addr;
		uint32_t clr_sm0_instr;
		uint32_t clr_sm0_pinctrl;
		uint32_t clr_sm1_clkdiv;
		uint32_t clr_sm1_execctrl;
		uint32_t clr_sm1_shiftctrl;
		uint32_t clr_sm1_addr;
		uint32_t clr_sm1_instr;
		uint32_t clr_sm1_pinctrl;
		uint32_t clr_sm2_clkdiv;
		uint32_t clr_sm2_execctrl;
		uint32_t clr_sm2_shiftctrl;
		uint32_t clr_sm2_addr;
		uint32_t clr_sm2_instr;
		uint32_t clr_sm2_pinctrl;
		uint32_t clr_sm3_clkdiv;
		uint32_t clr_sm3_execctrl;
		uint32_t clr_sm3_shiftctrl;
		uint32_t clr_sm3_addr;
		uint32_t clr_sm3_instr;
		uint32_t clr_sm3_pinctrl;
		uint32_t clr_rxf0_putget0;
		uint32_t clr_rxf0_putget1;
		uint32_t clr_rxf0_putget2;
		uint32_t clr_rxf0_putget3;
		uint32_t clr_rxf1_putget0;
		uint32_t clr_rxf1_putget1;
		uint32_t clr_rxf1_putget2;
		uint32_t clr_rxf1_putget3;
		uint32_t clr_rxf2_putget0;
		uint32_t clr_rxf2_putget1;
		uint32_t clr_rxf2_putget2;
		uint32_t clr_rxf2_putget3;
		uint32_t clr_rxf3_putget0;
		uint32_t clr_rxf3_putget1;
		uint32_t clr_rxf3_putget2;
		uint32_t clr_rxf3_putget3;
		uint32_t clr_gpiobase;
		uint32_t clr_intr;
		uint32_t clr_irq0_inte;
		uint32_t clr_irq0_intf;
		uint32_t clr_irq0_ints;
		uint32_t clr_irq1_inte;
		uint32_t clr_irq1_intf;
		uint32_t clr_irq1_ints;
		uint32_t RSVDclr_0[926];
} PIO0_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t fstat;
		uint32_t fdebug;
		uint32_t flevel;
		uint32_t txf0;
		uint32_t txf1;
		uint32_t txf2;
		uint32_t txf3;
		uint32_t rxf0;
		uint32_t rxf1;
		uint32_t rxf2;
		uint32_t rxf3;
		uint32_t irq;
		uint32_t irq_force;
		uint32_t input_sync_bypass;
		uint32_t dbg_padout;
		uint32_t dbg_padoe;
		uint32_t dbg_cfginfo;
		uint32_t instr_mem0;
		uint32_t instr_mem1;
		uint32_t instr_mem2;
		uint32_t instr_mem3;
		uint32_t instr_mem4;
		uint32_t instr_mem5;
		uint32_t instr_mem6;
		uint32_t instr_mem7;
		uint32_t instr_mem8;
		uint32_t instr_mem9;
		uint32_t instr_mem10;
		uint32_t instr_mem11;
		uint32_t instr_mem12;
		uint32_t instr_mem13;
		uint32_t instr_mem14;
		uint32_t instr_mem15;
		uint32_t instr_mem16;
		uint32_t instr_mem17;
		uint32_t instr_mem18;
		uint32_t instr_mem19;
		uint32_t instr_mem20;
		uint32_t instr_mem21;
		uint32_t instr_mem22;
		uint32_t instr_mem23;
		uint32_t instr_mem24;
		uint32_t instr_mem25;
		uint32_t instr_mem26;
		uint32_t instr_mem27;
		uint32_t instr_mem28;
		uint32_t instr_mem29;
		uint32_t instr_mem30;
		uint32_t instr_mem31;
		uint32_t sm0_clkdiv;
		uint32_t sm0_execctrl;
		uint32_t sm0_shiftctrl;
		uint32_t sm0_addr;
		uint32_t sm0_instr;
		uint32_t sm0_pinctrl;
		uint32_t sm1_clkdiv;
		uint32_t sm1_execctrl;
		uint32_t sm1_shiftctrl;
		uint32_t sm1_addr;
		uint32_t sm1_instr;
		uint32_t sm1_pinctrl;
		uint32_t sm2_clkdiv;
		uint32_t sm2_execctrl;
		uint32_t sm2_shiftctrl;
		uint32_t sm2_addr;
		uint32_t sm2_instr;
		uint32_t sm2_pinctrl;
		uint32_t sm3_clkdiv;
		uint32_t sm3_execctrl;
		uint32_t sm3_shiftctrl;
		uint32_t sm3_addr;
		uint32_t sm3_instr;
		uint32_t sm3_pinctrl;
		uint32_t rxf0_putget0;
		uint32_t rxf0_putget1;
		uint32_t rxf0_putget2;
		uint32_t rxf0_putget3;
		uint32_t rxf1_putget0;
		uint32_t rxf1_putget1;
		uint32_t rxf1_putget2;
		uint32_t rxf1_putget3;
		uint32_t rxf2_putget0;
		uint32_t rxf2_putget1;
		uint32_t rxf2_putget2;
		uint32_t rxf2_putget3;
		uint32_t rxf3_putget0;
		uint32_t rxf3_putget1;
		uint32_t rxf3_putget2;
		uint32_t rxf3_putget3;
		uint32_t gpiobase;
		uint32_t intr;
		uint32_t irq0_inte;
		uint32_t irq0_intf;
		uint32_t irq0_ints;
		uint32_t irq1_inte;
		uint32_t irq1_intf;
		uint32_t irq1_ints;
		uint32_t RSVD0[926];
		uint32_t xor_ctrl;
		uint32_t xor_fstat;
		uint32_t xor_fdebug;
		uint32_t xor_flevel;
		uint32_t xor_txf0;
		uint32_t xor_txf1;
		uint32_t xor_txf2;
		uint32_t xor_txf3;
		uint32_t xor_rxf0;
		uint32_t xor_rxf1;
		uint32_t xor_rxf2;
		uint32_t xor_rxf3;
		uint32_t xor_irq;
		uint32_t xor_irq_force;
		uint32_t xor_input_sync_bypass;
		uint32_t xor_dbg_padout;
		uint32_t xor_dbg_padoe;
		uint32_t xor_dbg_cfginfo;
		uint32_t xor_instr_mem0;
		uint32_t xor_instr_mem1;
		uint32_t xor_instr_mem2;
		uint32_t xor_instr_mem3;
		uint32_t xor_instr_mem4;
		uint32_t xor_instr_mem5;
		uint32_t xor_instr_mem6;
		uint32_t xor_instr_mem7;
		uint32_t xor_instr_mem8;
		uint32_t xor_instr_mem9;
		uint32_t xor_instr_mem10;
		uint32_t xor_instr_mem11;
		uint32_t xor_instr_mem12;
		uint32_t xor_instr_mem13;
		uint32_t xor_instr_mem14;
		uint32_t xor_instr_mem15;
		uint32_t xor_instr_mem16;
		uint32_t xor_instr_mem17;
		uint32_t xor_instr_mem18;
		uint32_t xor_instr_mem19;
		uint32_t xor_instr_mem20;
		uint32_t xor_instr_mem21;
		uint32_t xor_instr_mem22;
		uint32_t xor_instr_mem23;
		uint32_t xor_instr_mem24;
		uint32_t xor_instr_mem25;
		uint32_t xor_instr_mem26;
		uint32_t xor_instr_mem27;
		uint32_t xor_instr_mem28;
		uint32_t xor_instr_mem29;
		uint32_t xor_instr_mem30;
		uint32_t xor_instr_mem31;
		uint32_t xor_sm0_clkdiv;
		uint32_t xor_sm0_execctrl;
		uint32_t xor_sm0_shiftctrl;
		uint32_t xor_sm0_addr;
		uint32_t xor_sm0_instr;
		uint32_t xor_sm0_pinctrl;
		uint32_t xor_sm1_clkdiv;
		uint32_t xor_sm1_execctrl;
		uint32_t xor_sm1_shiftctrl;
		uint32_t xor_sm1_addr;
		uint32_t xor_sm1_instr;
		uint32_t xor_sm1_pinctrl;
		uint32_t xor_sm2_clkdiv;
		uint32_t xor_sm2_execctrl;
		uint32_t xor_sm2_shiftctrl;
		uint32_t xor_sm2_addr;
		uint32_t xor_sm2_instr;
		uint32_t xor_sm2_pinctrl;
		uint32_t xor_sm3_clkdiv;
		uint32_t xor_sm3_execctrl;
		uint32_t xor_sm3_shiftctrl;
		uint32_t xor_sm3_addr;
		uint32_t xor_sm3_instr;
		uint32_t xor_sm3_pinctrl;
		uint32_t xor_rxf0_putget0;
		uint32_t xor_rxf0_putget1;
		uint32_t xor_rxf0_putget2;
		uint32_t xor_rxf0_putget3;
		uint32_t xor_rxf1_putget0;
		uint32_t xor_rxf1_putget1;
		uint32_t xor_rxf1_putget2;
		uint32_t xor_rxf1_putget3;
		uint32_t xor_rxf2_putget0;
		uint32_t xor_rxf2_putget1;
		uint32_t xor_rxf2_putget2;
		uint32_t xor_rxf2_putget3;
		uint32_t xor_rxf3_putget0;
		uint32_t xor_rxf3_putget1;
		uint32_t xor_rxf3_putget2;
		uint32_t xor_rxf3_putget3;
		uint32_t xor_gpiobase;
		uint32_t xor_intr;
		uint32_t xor_irq0_inte;
		uint32_t xor_irq0_intf;
		uint32_t xor_irq0_ints;
		uint32_t xor_irq1_inte;
		uint32_t xor_irq1_intf;
		uint32_t xor_irq1_ints;
		uint32_t RSVDxor_0[926];
		uint32_t set_ctrl;
		uint32_t set_fstat;
		uint32_t set_fdebug;
		uint32_t set_flevel;
		uint32_t set_txf0;
		uint32_t set_txf1;
		uint32_t set_txf2;
		uint32_t set_txf3;
		uint32_t set_rxf0;
		uint32_t set_rxf1;
		uint32_t set_rxf2;
		uint32_t set_rxf3;
		uint32_t set_irq;
		uint32_t set_irq_force;
		uint32_t set_input_sync_bypass;
		uint32_t set_dbg_padout;
		uint32_t set_dbg_padoe;
		uint32_t set_dbg_cfginfo;
		uint32_t set_instr_mem0;
		uint32_t set_instr_mem1;
		uint32_t set_instr_mem2;
		uint32_t set_instr_mem3;
		uint32_t set_instr_mem4;
		uint32_t set_instr_mem5;
		uint32_t set_instr_mem6;
		uint32_t set_instr_mem7;
		uint32_t set_instr_mem8;
		uint32_t set_instr_mem9;
		uint32_t set_instr_mem10;
		uint32_t set_instr_mem11;
		uint32_t set_instr_mem12;
		uint32_t set_instr_mem13;
		uint32_t set_instr_mem14;
		uint32_t set_instr_mem15;
		uint32_t set_instr_mem16;
		uint32_t set_instr_mem17;
		uint32_t set_instr_mem18;
		uint32_t set_instr_mem19;
		uint32_t set_instr_mem20;
		uint32_t set_instr_mem21;
		uint32_t set_instr_mem22;
		uint32_t set_instr_mem23;
		uint32_t set_instr_mem24;
		uint32_t set_instr_mem25;
		uint32_t set_instr_mem26;
		uint32_t set_instr_mem27;
		uint32_t set_instr_mem28;
		uint32_t set_instr_mem29;
		uint32_t set_instr_mem30;
		uint32_t set_instr_mem31;
		uint32_t set_sm0_clkdiv;
		uint32_t set_sm0_execctrl;
		uint32_t set_sm0_shiftctrl;
		uint32_t set_sm0_addr;
		uint32_t set_sm0_instr;
		uint32_t set_sm0_pinctrl;
		uint32_t set_sm1_clkdiv;
		uint32_t set_sm1_execctrl;
		uint32_t set_sm1_shiftctrl;
		uint32_t set_sm1_addr;
		uint32_t set_sm1_instr;
		uint32_t set_sm1_pinctrl;
		uint32_t set_sm2_clkdiv;
		uint32_t set_sm2_execctrl;
		uint32_t set_sm2_shiftctrl;
		uint32_t set_sm2_addr;
		uint32_t set_sm2_instr;
		uint32_t set_sm2_pinctrl;
		uint32_t set_sm3_clkdiv;
		uint32_t set_sm3_execctrl;
		uint32_t set_sm3_shiftctrl;
		uint32_t set_sm3_addr;
		uint32_t set_sm3_instr;
		uint32_t set_sm3_pinctrl;
		uint32_t set_rxf0_putget0;
		uint32_t set_rxf0_putget1;
		uint32_t set_rxf0_putget2;
		uint32_t set_rxf0_putget3;
		uint32_t set_rxf1_putget0;
		uint32_t set_rxf1_putget1;
		uint32_t set_rxf1_putget2;
		uint32_t set_rxf1_putget3;
		uint32_t set_rxf2_putget0;
		uint32_t set_rxf2_putget1;
		uint32_t set_rxf2_putget2;
		uint32_t set_rxf2_putget3;
		uint32_t set_rxf3_putget0;
		uint32_t set_rxf3_putget1;
		uint32_t set_rxf3_putget2;
		uint32_t set_rxf3_putget3;
		uint32_t set_gpiobase;
		uint32_t set_intr;
		uint32_t set_irq0_inte;
		uint32_t set_irq0_intf;
		uint32_t set_irq0_ints;
		uint32_t set_irq1_inte;
		uint32_t set_irq1_intf;
		uint32_t set_irq1_ints;
		uint32_t RSVDset_0[926];
		uint32_t clr_ctrl;
		uint32_t clr_fstat;
		uint32_t clr_fdebug;
		uint32_t clr_flevel;
		uint32_t clr_txf0;
		uint32_t clr_txf1;
		uint32_t clr_txf2;
		uint32_t clr_txf3;
		uint32_t clr_rxf0;
		uint32_t clr_rxf1;
		uint32_t clr_rxf2;
		uint32_t clr_rxf3;
		uint32_t clr_irq;
		uint32_t clr_irq_force;
		uint32_t clr_input_sync_bypass;
		uint32_t clr_dbg_padout;
		uint32_t clr_dbg_padoe;
		uint32_t clr_dbg_cfginfo;
		uint32_t clr_instr_mem0;
		uint32_t clr_instr_mem1;
		uint32_t clr_instr_mem2;
		uint32_t clr_instr_mem3;
		uint32_t clr_instr_mem4;
		uint32_t clr_instr_mem5;
		uint32_t clr_instr_mem6;
		uint32_t clr_instr_mem7;
		uint32_t clr_instr_mem8;
		uint32_t clr_instr_mem9;
		uint32_t clr_instr_mem10;
		uint32_t clr_instr_mem11;
		uint32_t clr_instr_mem12;
		uint32_t clr_instr_mem13;
		uint32_t clr_instr_mem14;
		uint32_t clr_instr_mem15;
		uint32_t clr_instr_mem16;
		uint32_t clr_instr_mem17;
		uint32_t clr_instr_mem18;
		uint32_t clr_instr_mem19;
		uint32_t clr_instr_mem20;
		uint32_t clr_instr_mem21;
		uint32_t clr_instr_mem22;
		uint32_t clr_instr_mem23;
		uint32_t clr_instr_mem24;
		uint32_t clr_instr_mem25;
		uint32_t clr_instr_mem26;
		uint32_t clr_instr_mem27;
		uint32_t clr_instr_mem28;
		uint32_t clr_instr_mem29;
		uint32_t clr_instr_mem30;
		uint32_t clr_instr_mem31;
		uint32_t clr_sm0_clkdiv;
		uint32_t clr_sm0_execctrl;
		uint32_t clr_sm0_shiftctrl;
		uint32_t clr_sm0_addr;
		uint32_t clr_sm0_instr;
		uint32_t clr_sm0_pinctrl;
		uint32_t clr_sm1_clkdiv;
		uint32_t clr_sm1_execctrl;
		uint32_t clr_sm1_shiftctrl;
		uint32_t clr_sm1_addr;
		uint32_t clr_sm1_instr;
		uint32_t clr_sm1_pinctrl;
		uint32_t clr_sm2_clkdiv;
		uint32_t clr_sm2_execctrl;
		uint32_t clr_sm2_shiftctrl;
		uint32_t clr_sm2_addr;
		uint32_t clr_sm2_instr;
		uint32_t clr_sm2_pinctrl;
		uint32_t clr_sm3_clkdiv;
		uint32_t clr_sm3_execctrl;
		uint32_t clr_sm3_shiftctrl;
		uint32_t clr_sm3_addr;
		uint32_t clr_sm3_instr;
		uint32_t clr_sm3_pinctrl;
		uint32_t clr_rxf0_putget0;
		uint32_t clr_rxf0_putget1;
		uint32_t clr_rxf0_putget2;
		uint32_t clr_rxf0_putget3;
		uint32_t clr_rxf1_putget0;
		uint32_t clr_rxf1_putget1;
		uint32_t clr_rxf1_putget2;
		uint32_t clr_rxf1_putget3;
		uint32_t clr_rxf2_putget0;
		uint32_t clr_rxf2_putget1;
		uint32_t clr_rxf2_putget2;
		uint32_t clr_rxf2_putget3;
		uint32_t clr_rxf3_putget0;
		uint32_t clr_rxf3_putget1;
		uint32_t clr_rxf3_putget2;
		uint32_t clr_rxf3_putget3;
		uint32_t clr_gpiobase;
		uint32_t clr_intr;
		uint32_t clr_irq0_inte;
		uint32_t clr_irq0_intf;
		uint32_t clr_irq0_ints;
		uint32_t clr_irq1_inte;
		uint32_t clr_irq1_intf;
		uint32_t clr_irq1_ints;
		uint32_t RSVDclr_0[926];
} PIO1_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t fstat;
		uint32_t fdebug;
		uint32_t flevel;
		uint32_t txf0;
		uint32_t txf1;
		uint32_t txf2;
		uint32_t txf3;
		uint32_t rxf0;
		uint32_t rxf1;
		uint32_t rxf2;
		uint32_t rxf3;
		uint32_t irq;
		uint32_t irq_force;
		uint32_t input_sync_bypass;
		uint32_t dbg_padout;
		uint32_t dbg_padoe;
		uint32_t dbg_cfginfo;
		uint32_t instr_mem0;
		uint32_t instr_mem1;
		uint32_t instr_mem2;
		uint32_t instr_mem3;
		uint32_t instr_mem4;
		uint32_t instr_mem5;
		uint32_t instr_mem6;
		uint32_t instr_mem7;
		uint32_t instr_mem8;
		uint32_t instr_mem9;
		uint32_t instr_mem10;
		uint32_t instr_mem11;
		uint32_t instr_mem12;
		uint32_t instr_mem13;
		uint32_t instr_mem14;
		uint32_t instr_mem15;
		uint32_t instr_mem16;
		uint32_t instr_mem17;
		uint32_t instr_mem18;
		uint32_t instr_mem19;
		uint32_t instr_mem20;
		uint32_t instr_mem21;
		uint32_t instr_mem22;
		uint32_t instr_mem23;
		uint32_t instr_mem24;
		uint32_t instr_mem25;
		uint32_t instr_mem26;
		uint32_t instr_mem27;
		uint32_t instr_mem28;
		uint32_t instr_mem29;
		uint32_t instr_mem30;
		uint32_t instr_mem31;
		uint32_t sm0_clkdiv;
		uint32_t sm0_execctrl;
		uint32_t sm0_shiftctrl;
		uint32_t sm0_addr;
		uint32_t sm0_instr;
		uint32_t sm0_pinctrl;
		uint32_t sm1_clkdiv;
		uint32_t sm1_execctrl;
		uint32_t sm1_shiftctrl;
		uint32_t sm1_addr;
		uint32_t sm1_instr;
		uint32_t sm1_pinctrl;
		uint32_t sm2_clkdiv;
		uint32_t sm2_execctrl;
		uint32_t sm2_shiftctrl;
		uint32_t sm2_addr;
		uint32_t sm2_instr;
		uint32_t sm2_pinctrl;
		uint32_t sm3_clkdiv;
		uint32_t sm3_execctrl;
		uint32_t sm3_shiftctrl;
		uint32_t sm3_addr;
		uint32_t sm3_instr;
		uint32_t sm3_pinctrl;
		uint32_t rxf0_putget0;
		uint32_t rxf0_putget1;
		uint32_t rxf0_putget2;
		uint32_t rxf0_putget3;
		uint32_t rxf1_putget0;
		uint32_t rxf1_putget1;
		uint32_t rxf1_putget2;
		uint32_t rxf1_putget3;
		uint32_t rxf2_putget0;
		uint32_t rxf2_putget1;
		uint32_t rxf2_putget2;
		uint32_t rxf2_putget3;
		uint32_t rxf3_putget0;
		uint32_t rxf3_putget1;
		uint32_t rxf3_putget2;
		uint32_t rxf3_putget3;
		uint32_t gpiobase;
		uint32_t intr;
		uint32_t irq0_inte;
		uint32_t irq0_intf;
		uint32_t irq0_ints;
		uint32_t irq1_inte;
		uint32_t irq1_intf;
		uint32_t irq1_ints;
		uint32_t RSVD0[926];
		uint32_t xor_ctrl;
		uint32_t xor_fstat;
		uint32_t xor_fdebug;
		uint32_t xor_flevel;
		uint32_t xor_txf0;
		uint32_t xor_txf1;
		uint32_t xor_txf2;
		uint32_t xor_txf3;
		uint32_t xor_rxf0;
		uint32_t xor_rxf1;
		uint32_t xor_rxf2;
		uint32_t xor_rxf3;
		uint32_t xor_irq;
		uint32_t xor_irq_force;
		uint32_t xor_input_sync_bypass;
		uint32_t xor_dbg_padout;
		uint32_t xor_dbg_padoe;
		uint32_t xor_dbg_cfginfo;
		uint32_t xor_instr_mem0;
		uint32_t xor_instr_mem1;
		uint32_t xor_instr_mem2;
		uint32_t xor_instr_mem3;
		uint32_t xor_instr_mem4;
		uint32_t xor_instr_mem5;
		uint32_t xor_instr_mem6;
		uint32_t xor_instr_mem7;
		uint32_t xor_instr_mem8;
		uint32_t xor_instr_mem9;
		uint32_t xor_instr_mem10;
		uint32_t xor_instr_mem11;
		uint32_t xor_instr_mem12;
		uint32_t xor_instr_mem13;
		uint32_t xor_instr_mem14;
		uint32_t xor_instr_mem15;
		uint32_t xor_instr_mem16;
		uint32_t xor_instr_mem17;
		uint32_t xor_instr_mem18;
		uint32_t xor_instr_mem19;
		uint32_t xor_instr_mem20;
		uint32_t xor_instr_mem21;
		uint32_t xor_instr_mem22;
		uint32_t xor_instr_mem23;
		uint32_t xor_instr_mem24;
		uint32_t xor_instr_mem25;
		uint32_t xor_instr_mem26;
		uint32_t xor_instr_mem27;
		uint32_t xor_instr_mem28;
		uint32_t xor_instr_mem29;
		uint32_t xor_instr_mem30;
		uint32_t xor_instr_mem31;
		uint32_t xor_sm0_clkdiv;
		uint32_t xor_sm0_execctrl;
		uint32_t xor_sm0_shiftctrl;
		uint32_t xor_sm0_addr;
		uint32_t xor_sm0_instr;
		uint32_t xor_sm0_pinctrl;
		uint32_t xor_sm1_clkdiv;
		uint32_t xor_sm1_execctrl;
		uint32_t xor_sm1_shiftctrl;
		uint32_t xor_sm1_addr;
		uint32_t xor_sm1_instr;
		uint32_t xor_sm1_pinctrl;
		uint32_t xor_sm2_clkdiv;
		uint32_t xor_sm2_execctrl;
		uint32_t xor_sm2_shiftctrl;
		uint32_t xor_sm2_addr;
		uint32_t xor_sm2_instr;
		uint32_t xor_sm2_pinctrl;
		uint32_t xor_sm3_clkdiv;
		uint32_t xor_sm3_execctrl;
		uint32_t xor_sm3_shiftctrl;
		uint32_t xor_sm3_addr;
		uint32_t xor_sm3_instr;
		uint32_t xor_sm3_pinctrl;
		uint32_t xor_rxf0_putget0;
		uint32_t xor_rxf0_putget1;
		uint32_t xor_rxf0_putget2;
		uint32_t xor_rxf0_putget3;
		uint32_t xor_rxf1_putget0;
		uint32_t xor_rxf1_putget1;
		uint32_t xor_rxf1_putget2;
		uint32_t xor_rxf1_putget3;
		uint32_t xor_rxf2_putget0;
		uint32_t xor_rxf2_putget1;
		uint32_t xor_rxf2_putget2;
		uint32_t xor_rxf2_putget3;
		uint32_t xor_rxf3_putget0;
		uint32_t xor_rxf3_putget1;
		uint32_t xor_rxf3_putget2;
		uint32_t xor_rxf3_putget3;
		uint32_t xor_gpiobase;
		uint32_t xor_intr;
		uint32_t xor_irq0_inte;
		uint32_t xor_irq0_intf;
		uint32_t xor_irq0_ints;
		uint32_t xor_irq1_inte;
		uint32_t xor_irq1_intf;
		uint32_t xor_irq1_ints;
		uint32_t RSVDxor_0[926];
		uint32_t set_ctrl;
		uint32_t set_fstat;
		uint32_t set_fdebug;
		uint32_t set_flevel;
		uint32_t set_txf0;
		uint32_t set_txf1;
		uint32_t set_txf2;
		uint32_t set_txf3;
		uint32_t set_rxf0;
		uint32_t set_rxf1;
		uint32_t set_rxf2;
		uint32_t set_rxf3;
		uint32_t set_irq;
		uint32_t set_irq_force;
		uint32_t set_input_sync_bypass;
		uint32_t set_dbg_padout;
		uint32_t set_dbg_padoe;
		uint32_t set_dbg_cfginfo;
		uint32_t set_instr_mem0;
		uint32_t set_instr_mem1;
		uint32_t set_instr_mem2;
		uint32_t set_instr_mem3;
		uint32_t set_instr_mem4;
		uint32_t set_instr_mem5;
		uint32_t set_instr_mem6;
		uint32_t set_instr_mem7;
		uint32_t set_instr_mem8;
		uint32_t set_instr_mem9;
		uint32_t set_instr_mem10;
		uint32_t set_instr_mem11;
		uint32_t set_instr_mem12;
		uint32_t set_instr_mem13;
		uint32_t set_instr_mem14;
		uint32_t set_instr_mem15;
		uint32_t set_instr_mem16;
		uint32_t set_instr_mem17;
		uint32_t set_instr_mem18;
		uint32_t set_instr_mem19;
		uint32_t set_instr_mem20;
		uint32_t set_instr_mem21;
		uint32_t set_instr_mem22;
		uint32_t set_instr_mem23;
		uint32_t set_instr_mem24;
		uint32_t set_instr_mem25;
		uint32_t set_instr_mem26;
		uint32_t set_instr_mem27;
		uint32_t set_instr_mem28;
		uint32_t set_instr_mem29;
		uint32_t set_instr_mem30;
		uint32_t set_instr_mem31;
		uint32_t set_sm0_clkdiv;
		uint32_t set_sm0_execctrl;
		uint32_t set_sm0_shiftctrl;
		uint32_t set_sm0_addr;
		uint32_t set_sm0_instr;
		uint32_t set_sm0_pinctrl;
		uint32_t set_sm1_clkdiv;
		uint32_t set_sm1_execctrl;
		uint32_t set_sm1_shiftctrl;
		uint32_t set_sm1_addr;
		uint32_t set_sm1_instr;
		uint32_t set_sm1_pinctrl;
		uint32_t set_sm2_clkdiv;
		uint32_t set_sm2_execctrl;
		uint32_t set_sm2_shiftctrl;
		uint32_t set_sm2_addr;
		uint32_t set_sm2_instr;
		uint32_t set_sm2_pinctrl;
		uint32_t set_sm3_clkdiv;
		uint32_t set_sm3_execctrl;
		uint32_t set_sm3_shiftctrl;
		uint32_t set_sm3_addr;
		uint32_t set_sm3_instr;
		uint32_t set_sm3_pinctrl;
		uint32_t set_rxf0_putget0;
		uint32_t set_rxf0_putget1;
		uint32_t set_rxf0_putget2;
		uint32_t set_rxf0_putget3;
		uint32_t set_rxf1_putget0;
		uint32_t set_rxf1_putget1;
		uint32_t set_rxf1_putget2;
		uint32_t set_rxf1_putget3;
		uint32_t set_rxf2_putget0;
		uint32_t set_rxf2_putget1;
		uint32_t set_rxf2_putget2;
		uint32_t set_rxf2_putget3;
		uint32_t set_rxf3_putget0;
		uint32_t set_rxf3_putget1;
		uint32_t set_rxf3_putget2;
		uint32_t set_rxf3_putget3;
		uint32_t set_gpiobase;
		uint32_t set_intr;
		uint32_t set_irq0_inte;
		uint32_t set_irq0_intf;
		uint32_t set_irq0_ints;
		uint32_t set_irq1_inte;
		uint32_t set_irq1_intf;
		uint32_t set_irq1_ints;
		uint32_t RSVDset_0[926];
		uint32_t clr_ctrl;
		uint32_t clr_fstat;
		uint32_t clr_fdebug;
		uint32_t clr_flevel;
		uint32_t clr_txf0;
		uint32_t clr_txf1;
		uint32_t clr_txf2;
		uint32_t clr_txf3;
		uint32_t clr_rxf0;
		uint32_t clr_rxf1;
		uint32_t clr_rxf2;
		uint32_t clr_rxf3;
		uint32_t clr_irq;
		uint32_t clr_irq_force;
		uint32_t clr_input_sync_bypass;
		uint32_t clr_dbg_padout;
		uint32_t clr_dbg_padoe;
		uint32_t clr_dbg_cfginfo;
		uint32_t clr_instr_mem0;
		uint32_t clr_instr_mem1;
		uint32_t clr_instr_mem2;
		uint32_t clr_instr_mem3;
		uint32_t clr_instr_mem4;
		uint32_t clr_instr_mem5;
		uint32_t clr_instr_mem6;
		uint32_t clr_instr_mem7;
		uint32_t clr_instr_mem8;
		uint32_t clr_instr_mem9;
		uint32_t clr_instr_mem10;
		uint32_t clr_instr_mem11;
		uint32_t clr_instr_mem12;
		uint32_t clr_instr_mem13;
		uint32_t clr_instr_mem14;
		uint32_t clr_instr_mem15;
		uint32_t clr_instr_mem16;
		uint32_t clr_instr_mem17;
		uint32_t clr_instr_mem18;
		uint32_t clr_instr_mem19;
		uint32_t clr_instr_mem20;
		uint32_t clr_instr_mem21;
		uint32_t clr_instr_mem22;
		uint32_t clr_instr_mem23;
		uint32_t clr_instr_mem24;
		uint32_t clr_instr_mem25;
		uint32_t clr_instr_mem26;
		uint32_t clr_instr_mem27;
		uint32_t clr_instr_mem28;
		uint32_t clr_instr_mem29;
		uint32_t clr_instr_mem30;
		uint32_t clr_instr_mem31;
		uint32_t clr_sm0_clkdiv;
		uint32_t clr_sm0_execctrl;
		uint32_t clr_sm0_shiftctrl;
		uint32_t clr_sm0_addr;
		uint32_t clr_sm0_instr;
		uint32_t clr_sm0_pinctrl;
		uint32_t clr_sm1_clkdiv;
		uint32_t clr_sm1_execctrl;
		uint32_t clr_sm1_shiftctrl;
		uint32_t clr_sm1_addr;
		uint32_t clr_sm1_instr;
		uint32_t clr_sm1_pinctrl;
		uint32_t clr_sm2_clkdiv;
		uint32_t clr_sm2_execctrl;
		uint32_t clr_sm2_shiftctrl;
		uint32_t clr_sm2_addr;
		uint32_t clr_sm2_instr;
		uint32_t clr_sm2_pinctrl;
		uint32_t clr_sm3_clkdiv;
		uint32_t clr_sm3_execctrl;
		uint32_t clr_sm3_shiftctrl;
		uint32_t clr_sm3_addr;
		uint32_t clr_sm3_instr;
		uint32_t clr_sm3_pinctrl;
		uint32_t clr_rxf0_putget0;
		uint32_t clr_rxf0_putget1;
		uint32_t clr_rxf0_putget2;
		uint32_t clr_rxf0_putget3;
		uint32_t clr_rxf1_putget0;
		uint32_t clr_rxf1_putget1;
		uint32_t clr_rxf1_putget2;
		uint32_t clr_rxf1_putget3;
		uint32_t clr_rxf2_putget0;
		uint32_t clr_rxf2_putget1;
		uint32_t clr_rxf2_putget2;
		uint32_t clr_rxf2_putget3;
		uint32_t clr_rxf3_putget0;
		uint32_t clr_rxf3_putget1;
		uint32_t clr_rxf3_putget2;
		uint32_t clr_rxf3_putget3;
		uint32_t clr_gpiobase;
		uint32_t clr_intr;
		uint32_t clr_irq0_inte;
		uint32_t clr_irq0_intf;
		uint32_t clr_irq0_ints;
		uint32_t clr_irq1_inte;
		uint32_t clr_irq1_intf;
		uint32_t clr_irq1_ints;
		uint32_t RSVDclr_0[926];
} PIO2_REG_BLOCKS;


/*IO Registers as struct*/

#define pio0 (*(PIO0_REG_BLOCKS volatile *)0x50200000)



#define pio1 (*(PIO1_REG_BLOCKS volatile *)0x50300000)



#define pio2 (*(PIO2_REG_BLOCKS volatile *)0x50400000)


/*IO Registers AS MACROS*/

#define PIO0_CTRL (*(volatile uint32_t *)0x50200000)
#define PIO0_FSTAT (*(volatile uint32_t *)0x50200004)
#define PIO0_FDEBUG (*(volatile uint32_t *)0x50200008)
#define PIO0_FLEVEL (*(volatile uint32_t *)0x5020000c)
#define PIO0_TXF0 (*(volatile uint32_t *)0x50200010)
#define PIO0_TXF1 (*(volatile uint32_t *)0x50200014)
#define PIO0_TXF2 (*(volatile uint32_t *)0x50200018)
#define PIO0_TXF3 (*(volatile uint32_t *)0x5020001c)
#define PIO0_RXF0 (*(volatile uint32_t *)0x50200020)
#define PIO0_RXF1 (*(volatile uint32_t *)0x50200024)
#define PIO0_RXF2 (*(volatile uint32_t *)0x50200028)
#define PIO0_RXF3 (*(volatile uint32_t *)0x5020002c)
#define PIO0_IRQ (*(volatile uint32_t *)0x50200030)
#define PIO0_IRQ_FORCE (*(volatile uint32_t *)0x50200034)
#define PIO0_INPUT_SYNC_BYPASS (*(volatile uint32_t *)0x50200038)
#define PIO0_DBG_PADOUT (*(volatile uint32_t *)0x5020003c)
#define PIO0_DBG_PADOE (*(volatile uint32_t *)0x50200040)
#define PIO0_DBG_CFGINFO (*(volatile uint32_t *)0x50200044)
#define PIO0_INSTR_MEM0 (*(volatile uint32_t *)0x50200048)
#define PIO0_INSTR_MEM1 (*(volatile uint32_t *)0x5020004c)
#define PIO0_INSTR_MEM2 (*(volatile uint32_t *)0x50200050)
#define PIO0_INSTR_MEM3 (*(volatile uint32_t *)0x50200054)
#define PIO0_INSTR_MEM4 (*(volatile uint32_t *)0x50200058)
#define PIO0_INSTR_MEM5 (*(volatile uint32_t *)0x5020005c)
#define PIO0_INSTR_MEM6 (*(volatile uint32_t *)0x50200060)
#define PIO0_INSTR_MEM7 (*(volatile uint32_t *)0x50200064)
#define PIO0_INSTR_MEM8 (*(volatile uint32_t *)0x50200068)
#define PIO0_INSTR_MEM9 (*(volatile uint32_t *)0x5020006c)
#define PIO0_INSTR_MEM10 (*(volatile uint32_t *)0x50200070)
#define PIO0_INSTR_MEM11 (*(volatile uint32_t *)0x50200074)
#define PIO0_INSTR_MEM12 (*(volatile uint32_t *)0x50200078)
#define PIO0_INSTR_MEM13 (*(volatile uint32_t *)0x5020007c)
#define PIO0_INSTR_MEM14 (*(volatile uint32_t *)0x50200080)
#define PIO0_INSTR_MEM15 (*(volatile uint32_t *)0x50200084)
#define PIO0_INSTR_MEM16 (*(volatile uint32_t *)0x50200088)
#define PIO0_INSTR_MEM17 (*(volatile uint32_t *)0x5020008c)
#define PIO0_INSTR_MEM18 (*(volatile uint32_t *)0x50200090)
#define PIO0_INSTR_MEM19 (*(volatile uint32_t *)0x50200094)
#define PIO0_INSTR_MEM20 (*(volatile uint32_t *)0x50200098)
#define PIO0_INSTR_MEM21 (*(volatile uint32_t *)0x5020009c)
#define PIO0_INSTR_MEM22 (*(volatile uint32_t *)0x502000a0)
#define PIO0_INSTR_MEM23 (*(volatile uint32_t *)0x502000a4)
#define PIO0_INSTR_MEM24 (*(volatile uint32_t *)0x502000a8)
#define PIO0_INSTR_MEM25 (*(volatile uint32_t *)0x502000ac)
#define PIO0_INSTR_MEM26 (*(volatile uint32_t *)0x502000b0)
#define PIO0_INSTR_MEM27 (*(volatile uint32_t *)0x502000b4)
#define PIO0_INSTR_MEM28 (*(volatile uint32_t *)0x502000b8)
#define PIO0_INSTR_MEM29 (*(volatile uint32_t *)0x502000bc)
#define PIO0_INSTR_MEM30 (*(volatile uint32_t *)0x502000c0)
#define PIO0_INSTR_MEM31 (*(volatile uint32_t *)0x502000c4)
#define PIO0_SM0_CLKDIV (*(volatile uint32_t *)0x502000c8)
#define PIO0_SM0_EXECCTRL (*(volatile uint32_t *)0x502000cc)
#define PIO0_SM0_SHIFTCTRL (*(volatile uint32_t *)0x502000d0)
#define PIO0_SM0_ADDR (*(volatile uint32_t *)0x502000d4)
#define PIO0_SM0_INSTR (*(volatile uint32_t *)0x502000d8)
#define PIO0_SM0_PINCTRL (*(volatile uint32_t *)0x502000dc)
#define PIO0_SM1_CLKDIV (*(volatile uint32_t *)0x502000e0)
#define PIO0_SM1_EXECCTRL (*(volatile uint32_t *)0x502000e4)
#define PIO0_SM1_SHIFTCTRL (*(volatile uint32_t *)0x502000e8)
#define PIO0_SM1_ADDR (*(volatile uint32_t *)0x502000ec)
#define PIO0_SM1_INSTR (*(volatile uint32_t *)0x502000f0)
#define PIO0_SM1_PINCTRL (*(volatile uint32_t *)0x502000f4)
#define PIO0_SM2_CLKDIV (*(volatile uint32_t *)0x502000f8)
#define PIO0_SM2_EXECCTRL (*(volatile uint32_t *)0x502000fc)
#define PIO0_SM2_SHIFTCTRL (*(volatile uint32_t *)0x50200100)
#define PIO0_SM2_ADDR (*(volatile uint32_t *)0x50200104)
#define PIO0_SM2_INSTR (*(volatile uint32_t *)0x50200108)
#define PIO0_SM2_PINCTRL (*(volatile uint32_t *)0x5020010c)
#define PIO0_SM3_CLKDIV (*(volatile uint32_t *)0x50200110)
#define PIO0_SM3_EXECCTRL (*(volatile uint32_t *)0x50200114)
#define PIO0_SM3_SHIFTCTRL (*(volatile uint32_t *)0x50200118)
#define PIO0_SM3_ADDR (*(volatile uint32_t *)0x5020011c)
#define PIO0_SM3_INSTR (*(volatile uint32_t *)0x50200120)
#define PIO0_SM3_PINCTRL (*(volatile uint32_t *)0x50200124)
#define PIO0_RXF0_PUTGET0 (*(volatile uint32_t *)0x50200128)
#define PIO0_RXF0_PUTGET1 (*(volatile uint32_t *)0x5020012c)
#define PIO0_RXF0_PUTGET2 (*(volatile uint32_t *)0x50200130)
#define PIO0_RXF0_PUTGET3 (*(volatile uint32_t *)0x50200134)
#define PIO0_RXF1_PUTGET0 (*(volatile uint32_t *)0x50200138)
#define PIO0_RXF1_PUTGET1 (*(volatile uint32_t *)0x5020013c)
#define PIO0_RXF1_PUTGET2 (*(volatile uint32_t *)0x50200140)
#define PIO0_RXF1_PUTGET3 (*(volatile uint32_t *)0x50200144)
#define PIO0_RXF2_PUTGET0 (*(volatile uint32_t *)0x50200148)
#define PIO0_RXF2_PUTGET1 (*(volatile uint32_t *)0x5020014c)
#define PIO0_RXF2_PUTGET2 (*(volatile uint32_t *)0x50200150)
#define PIO0_RXF2_PUTGET3 (*(volatile uint32_t *)0x50200154)
#define PIO0_RXF3_PUTGET0 (*(volatile uint32_t *)0x50200158)
#define PIO0_RXF3_PUTGET1 (*(volatile uint32_t *)0x5020015c)
#define PIO0_RXF3_PUTGET2 (*(volatile uint32_t *)0x50200160)
#define PIO0_RXF3_PUTGET3 (*(volatile uint32_t *)0x50200164)
#define PIO0_GPIOBASE (*(volatile uint32_t *)0x50200168)
#define PIO0_INTR (*(volatile uint32_t *)0x5020016c)
#define PIO0_IRQ0_INTE (*(volatile uint32_t *)0x50200170)
#define PIO0_IRQ0_INTF (*(volatile uint32_t *)0x50200174)
#define PIO0_IRQ0_INTS (*(volatile uint32_t *)0x50200178)
#define PIO0_IRQ1_INTE (*(volatile uint32_t *)0x5020017c)
#define PIO0_IRQ1_INTF (*(volatile uint32_t *)0x50200180)
#define PIO0_IRQ1_INTS (*(volatile uint32_t *)0x50200184)
#define PIO0_XOR_CTRL (*(volatile uint32_t *)0x50201000)
#define PIO0_XOR_FSTAT (*(volatile uint32_t *)0x50201004)
#define PIO0_XOR_FDEBUG (*(volatile uint32_t *)0x50201008)
#define PIO0_XOR_FLEVEL (*(volatile uint32_t *)0x5020100c)
#define PIO0_XOR_TXF0 (*(volatile uint32_t *)0x50201010)
#define PIO0_XOR_TXF1 (*(volatile uint32_t *)0x50201014)
#define PIO0_XOR_TXF2 (*(volatile uint32_t *)0x50201018)
#define PIO0_XOR_TXF3 (*(volatile uint32_t *)0x5020101c)
#define PIO0_XOR_RXF0 (*(volatile uint32_t *)0x50201020)
#define PIO0_XOR_RXF1 (*(volatile uint32_t *)0x50201024)
#define PIO0_XOR_RXF2 (*(volatile uint32_t *)0x50201028)
#define PIO0_XOR_RXF3 (*(volatile uint32_t *)0x5020102c)
#define PIO0_XOR_IRQ (*(volatile uint32_t *)0x50201030)
#define PIO0_XOR_IRQ_FORCE (*(volatile uint32_t *)0x50201034)
#define PIO0_XOR_INPUT_SYNC_BYPASS (*(volatile uint32_t *)0x50201038)
#define PIO0_XOR_DBG_PADOUT (*(volatile uint32_t *)0x5020103c)
#define PIO0_XOR_DBG_PADOE (*(volatile uint32_t *)0x50201040)
#define PIO0_XOR_DBG_CFGINFO (*(volatile uint32_t *)0x50201044)
#define PIO0_XOR_INSTR_MEM0 (*(volatile uint32_t *)0x50201048)
#define PIO0_XOR_INSTR_MEM1 (*(volatile uint32_t *)0x5020104c)
#define PIO0_XOR_INSTR_MEM2 (*(volatile uint32_t *)0x50201050)
#define PIO0_XOR_INSTR_MEM3 (*(volatile uint32_t *)0x50201054)
#define PIO0_XOR_INSTR_MEM4 (*(volatile uint32_t *)0x50201058)
#define PIO0_XOR_INSTR_MEM5 (*(volatile uint32_t *)0x5020105c)
#define PIO0_XOR_INSTR_MEM6 (*(volatile uint32_t *)0x50201060)
#define PIO0_XOR_INSTR_MEM7 (*(volatile uint32_t *)0x50201064)
#define PIO0_XOR_INSTR_MEM8 (*(volatile uint32_t *)0x50201068)
#define PIO0_XOR_INSTR_MEM9 (*(volatile uint32_t *)0x5020106c)
#define PIO0_XOR_INSTR_MEM10 (*(volatile uint32_t *)0x50201070)
#define PIO0_XOR_INSTR_MEM11 (*(volatile uint32_t *)0x50201074)
#define PIO0_XOR_INSTR_MEM12 (*(volatile uint32_t *)0x50201078)
#define PIO0_XOR_INSTR_MEM13 (*(volatile uint32_t *)0x5020107c)
#define PIO0_XOR_INSTR_MEM14 (*(volatile uint32_t *)0x50201080)
#define PIO0_XOR_INSTR_MEM15 (*(volatile uint32_t *)0x50201084)
#define PIO0_XOR_INSTR_MEM16 (*(volatile uint32_t *)0x50201088)
#define PIO0_XOR_INSTR_MEM17 (*(volatile uint32_t *)0x5020108c)
#define PIO0_XOR_INSTR_MEM18 (*(volatile uint32_t *)0x50201090)
#define PIO0_XOR_INSTR_MEM19 (*(volatile uint32_t *)0x50201094)
#define PIO0_XOR_INSTR_MEM20 (*(volatile uint32_t *)0x50201098)
#define PIO0_XOR_INSTR_MEM21 (*(volatile uint32_t *)0x5020109c)
#define PIO0_XOR_INSTR_MEM22 (*(volatile uint32_t *)0x502010a0)
#define PIO0_XOR_INSTR_MEM23 (*(volatile uint32_t *)0x502010a4)
#define PIO0_XOR_INSTR_MEM24 (*(volatile uint32_t *)0x502010a8)
#define PIO0_XOR_INSTR_MEM25 (*(volatile uint32_t *)0x502010ac)
#define PIO0_XOR_INSTR_MEM26 (*(volatile uint32_t *)0x502010b0)
#define PIO0_XOR_INSTR_MEM27 (*(volatile uint32_t *)0x502010b4)
#define PIO0_XOR_INSTR_MEM28 (*(volatile uint32_t *)0x502010b8)
#define PIO0_XOR_INSTR_MEM29 (*(volatile uint32_t *)0x502010bc)
#define PIO0_XOR_INSTR_MEM30 (*(volatile uint32_t *)0x502010c0)
#define PIO0_XOR_INSTR_MEM31 (*(volatile uint32_t *)0x502010c4)
#define PIO0_XOR_SM0_CLKDIV (*(volatile uint32_t *)0x502010c8)
#define PIO0_XOR_SM0_EXECCTRL (*(volatile uint32_t *)0x502010cc)
#define PIO0_XOR_SM0_SHIFTCTRL (*(volatile uint32_t *)0x502010d0)
#define PIO0_XOR_SM0_ADDR (*(volatile uint32_t *)0x502010d4)
#define PIO0_XOR_SM0_INSTR (*(volatile uint32_t *)0x502010d8)
#define PIO0_XOR_SM0_PINCTRL (*(volatile uint32_t *)0x502010dc)
#define PIO0_XOR_SM1_CLKDIV (*(volatile uint32_t *)0x502010e0)
#define PIO0_XOR_SM1_EXECCTRL (*(volatile uint32_t *)0x502010e4)
#define PIO0_XOR_SM1_SHIFTCTRL (*(volatile uint32_t *)0x502010e8)
#define PIO0_XOR_SM1_ADDR (*(volatile uint32_t *)0x502010ec)
#define PIO0_XOR_SM1_INSTR (*(volatile uint32_t *)0x502010f0)
#define PIO0_XOR_SM1_PINCTRL (*(volatile uint32_t *)0x502010f4)
#define PIO0_XOR_SM2_CLKDIV (*(volatile uint32_t *)0x502010f8)
#define PIO0_XOR_SM2_EXECCTRL (*(volatile uint32_t *)0x502010fc)
#define PIO0_XOR_SM2_SHIFTCTRL (*(volatile uint32_t *)0x50201100)
#define PIO0_XOR_SM2_ADDR (*(volatile uint32_t *)0x50201104)
#define PIO0_XOR_SM2_INSTR (*(volatile uint32_t *)0x50201108)
#define PIO0_XOR_SM2_PINCTRL (*(volatile uint32_t *)0x5020110c)
#define PIO0_XOR_SM3_CLKDIV (*(volatile uint32_t *)0x50201110)
#define PIO0_XOR_SM3_EXECCTRL (*(volatile uint32_t *)0x50201114)
#define PIO0_XOR_SM3_SHIFTCTRL (*(volatile uint32_t *)0x50201118)
#define PIO0_XOR_SM3_ADDR (*(volatile uint32_t *)0x5020111c)
#define PIO0_XOR_SM3_INSTR (*(volatile uint32_t *)0x50201120)
#define PIO0_XOR_SM3_PINCTRL (*(volatile uint32_t *)0x50201124)
#define PIO0_XOR_RXF0_PUTGET0 (*(volatile uint32_t *)0x50201128)
#define PIO0_XOR_RXF0_PUTGET1 (*(volatile uint32_t *)0x5020112c)
#define PIO0_XOR_RXF0_PUTGET2 (*(volatile uint32_t *)0x50201130)
#define PIO0_XOR_RXF0_PUTGET3 (*(volatile uint32_t *)0x50201134)
#define PIO0_XOR_RXF1_PUTGET0 (*(volatile uint32_t *)0x50201138)
#define PIO0_XOR_RXF1_PUTGET1 (*(volatile uint32_t *)0x5020113c)
#define PIO0_XOR_RXF1_PUTGET2 (*(volatile uint32_t *)0x50201140)
#define PIO0_XOR_RXF1_PUTGET3 (*(volatile uint32_t *)0x50201144)
#define PIO0_XOR_RXF2_PUTGET0 (*(volatile uint32_t *)0x50201148)
#define PIO0_XOR_RXF2_PUTGET1 (*(volatile uint32_t *)0x5020114c)
#define PIO0_XOR_RXF2_PUTGET2 (*(volatile uint32_t *)0x50201150)
#define PIO0_XOR_RXF2_PUTGET3 (*(volatile uint32_t *)0x50201154)
#define PIO0_XOR_RXF3_PUTGET0 (*(volatile uint32_t *)0x50201158)
#define PIO0_XOR_RXF3_PUTGET1 (*(volatile uint32_t *)0x5020115c)
#define PIO0_XOR_RXF3_PUTGET2 (*(volatile uint32_t *)0x50201160)
#define PIO0_XOR_RXF3_PUTGET3 (*(volatile uint32_t *)0x50201164)
#define PIO0_XOR_GPIOBASE (*(volatile uint32_t *)0x50201168)
#define PIO0_XOR_INTR (*(volatile uint32_t *)0x5020116c)
#define PIO0_XOR_IRQ0_INTE (*(volatile uint32_t *)0x50201170)
#define PIO0_XOR_IRQ0_INTF (*(volatile uint32_t *)0x50201174)
#define PIO0_XOR_IRQ0_INTS (*(volatile uint32_t *)0x50201178)
#define PIO0_XOR_IRQ1_INTE (*(volatile uint32_t *)0x5020117c)
#define PIO0_XOR_IRQ1_INTF (*(volatile uint32_t *)0x50201180)
#define PIO0_XOR_IRQ1_INTS (*(volatile uint32_t *)0x50201184)
#define PIO0_SET_CTRL (*(volatile uint32_t *)0x50202000)
#define PIO0_SET_FSTAT (*(volatile uint32_t *)0x50202004)
#define PIO0_SET_FDEBUG (*(volatile uint32_t *)0x50202008)
#define PIO0_SET_FLEVEL (*(volatile uint32_t *)0x5020200c)
#define PIO0_SET_TXF0 (*(volatile uint32_t *)0x50202010)
#define PIO0_SET_TXF1 (*(volatile uint32_t *)0x50202014)
#define PIO0_SET_TXF2 (*(volatile uint32_t *)0x50202018)
#define PIO0_SET_TXF3 (*(volatile uint32_t *)0x5020201c)
#define PIO0_SET_RXF0 (*(volatile uint32_t *)0x50202020)
#define PIO0_SET_RXF1 (*(volatile uint32_t *)0x50202024)
#define PIO0_SET_RXF2 (*(volatile uint32_t *)0x50202028)
#define PIO0_SET_RXF3 (*(volatile uint32_t *)0x5020202c)
#define PIO0_SET_IRQ (*(volatile uint32_t *)0x50202030)
#define PIO0_SET_IRQ_FORCE (*(volatile uint32_t *)0x50202034)
#define PIO0_SET_INPUT_SYNC_BYPASS (*(volatile uint32_t *)0x50202038)
#define PIO0_SET_DBG_PADOUT (*(volatile uint32_t *)0x5020203c)
#define PIO0_SET_DBG_PADOE (*(volatile uint32_t *)0x50202040)
#define PIO0_SET_DBG_CFGINFO (*(volatile uint32_t *)0x50202044)
#define PIO0_SET_INSTR_MEM0 (*(volatile uint32_t *)0x50202048)
#define PIO0_SET_INSTR_MEM1 (*(volatile uint32_t *)0x5020204c)
#define PIO0_SET_INSTR_MEM2 (*(volatile uint32_t *)0x50202050)
#define PIO0_SET_INSTR_MEM3 (*(volatile uint32_t *)0x50202054)
#define PIO0_SET_INSTR_MEM4 (*(volatile uint32_t *)0x50202058)
#define PIO0_SET_INSTR_MEM5 (*(volatile uint32_t *)0x5020205c)
#define PIO0_SET_INSTR_MEM6 (*(volatile uint32_t *)0x50202060)
#define PIO0_SET_INSTR_MEM7 (*(volatile uint32_t *)0x50202064)
#define PIO0_SET_INSTR_MEM8 (*(volatile uint32_t *)0x50202068)
#define PIO0_SET_INSTR_MEM9 (*(volatile uint32_t *)0x5020206c)
#define PIO0_SET_INSTR_MEM10 (*(volatile uint32_t *)0x50202070)
#define PIO0_SET_INSTR_MEM11 (*(volatile uint32_t *)0x50202074)
#define PIO0_SET_INSTR_MEM12 (*(volatile uint32_t *)0x50202078)
#define PIO0_SET_INSTR_MEM13 (*(volatile uint32_t *)0x5020207c)
#define PIO0_SET_INSTR_MEM14 (*(volatile uint32_t *)0x50202080)
#define PIO0_SET_INSTR_MEM15 (*(volatile uint32_t *)0x50202084)
#define PIO0_SET_INSTR_MEM16 (*(volatile uint32_t *)0x50202088)
#define PIO0_SET_INSTR_MEM17 (*(volatile uint32_t *)0x5020208c)
#define PIO0_SET_INSTR_MEM18 (*(volatile uint32_t *)0x50202090)
#define PIO0_SET_INSTR_MEM19 (*(volatile uint32_t *)0x50202094)
#define PIO0_SET_INSTR_MEM20 (*(volatile uint32_t *)0x50202098)
#define PIO0_SET_INSTR_MEM21 (*(volatile uint32_t *)0x5020209c)
#define PIO0_SET_INSTR_MEM22 (*(volatile uint32_t *)0x502020a0)
#define PIO0_SET_INSTR_MEM23 (*(volatile uint32_t *)0x502020a4)
#define PIO0_SET_INSTR_MEM24 (*(volatile uint32_t *)0x502020a8)
#define PIO0_SET_INSTR_MEM25 (*(volatile uint32_t *)0x502020ac)
#define PIO0_SET_INSTR_MEM26 (*(volatile uint32_t *)0x502020b0)
#define PIO0_SET_INSTR_MEM27 (*(volatile uint32_t *)0x502020b4)
#define PIO0_SET_INSTR_MEM28 (*(volatile uint32_t *)0x502020b8)
#define PIO0_SET_INSTR_MEM29 (*(volatile uint32_t *)0x502020bc)
#define PIO0_SET_INSTR_MEM30 (*(volatile uint32_t *)0x502020c0)
#define PIO0_SET_INSTR_MEM31 (*(volatile uint32_t *)0x502020c4)
#define PIO0_SET_SM0_CLKDIV (*(volatile uint32_t *)0x502020c8)
#define PIO0_SET_SM0_EXECCTRL (*(volatile uint32_t *)0x502020cc)
#define PIO0_SET_SM0_SHIFTCTRL (*(volatile uint32_t *)0x502020d0)
#define PIO0_SET_SM0_ADDR (*(volatile uint32_t *)0x502020d4)
#define PIO0_SET_SM0_INSTR (*(volatile uint32_t *)0x502020d8)
#define PIO0_SET_SM0_PINCTRL (*(volatile uint32_t *)0x502020dc)
#define PIO0_SET_SM1_CLKDIV (*(volatile uint32_t *)0x502020e0)
#define PIO0_SET_SM1_EXECCTRL (*(volatile uint32_t *)0x502020e4)
#define PIO0_SET_SM1_SHIFTCTRL (*(volatile uint32_t *)0x502020e8)
#define PIO0_SET_SM1_ADDR (*(volatile uint32_t *)0x502020ec)
#define PIO0_SET_SM1_INSTR (*(volatile uint32_t *)0x502020f0)
#define PIO0_SET_SM1_PINCTRL (*(volatile uint32_t *)0x502020f4)
#define PIO0_SET_SM2_CLKDIV (*(volatile uint32_t *)0x502020f8)
#define PIO0_SET_SM2_EXECCTRL (*(volatile uint32_t *)0x502020fc)
#define PIO0_SET_SM2_SHIFTCTRL (*(volatile uint32_t *)0x50202100)
#define PIO0_SET_SM2_ADDR (*(volatile uint32_t *)0x50202104)
#define PIO0_SET_SM2_INSTR (*(volatile uint32_t *)0x50202108)
#define PIO0_SET_SM2_PINCTRL (*(volatile uint32_t *)0x5020210c)
#define PIO0_SET_SM3_CLKDIV (*(volatile uint32_t *)0x50202110)
#define PIO0_SET_SM3_EXECCTRL (*(volatile uint32_t *)0x50202114)
#define PIO0_SET_SM3_SHIFTCTRL (*(volatile uint32_t *)0x50202118)
#define PIO0_SET_SM3_ADDR (*(volatile uint32_t *)0x5020211c)
#define PIO0_SET_SM3_INSTR (*(volatile uint32_t *)0x50202120)
#define PIO0_SET_SM3_PINCTRL (*(volatile uint32_t *)0x50202124)
#define PIO0_SET_RXF0_PUTGET0 (*(volatile uint32_t *)0x50202128)
#define PIO0_SET_RXF0_PUTGET1 (*(volatile uint32_t *)0x5020212c)
#define PIO0_SET_RXF0_PUTGET2 (*(volatile uint32_t *)0x50202130)
#define PIO0_SET_RXF0_PUTGET3 (*(volatile uint32_t *)0x50202134)
#define PIO0_SET_RXF1_PUTGET0 (*(volatile uint32_t *)0x50202138)
#define PIO0_SET_RXF1_PUTGET1 (*(volatile uint32_t *)0x5020213c)
#define PIO0_SET_RXF1_PUTGET2 (*(volatile uint32_t *)0x50202140)
#define PIO0_SET_RXF1_PUTGET3 (*(volatile uint32_t *)0x50202144)
#define PIO0_SET_RXF2_PUTGET0 (*(volatile uint32_t *)0x50202148)
#define PIO0_SET_RXF2_PUTGET1 (*(volatile uint32_t *)0x5020214c)
#define PIO0_SET_RXF2_PUTGET2 (*(volatile uint32_t *)0x50202150)
#define PIO0_SET_RXF2_PUTGET3 (*(volatile uint32_t *)0x50202154)
#define PIO0_SET_RXF3_PUTGET0 (*(volatile uint32_t *)0x50202158)
#define PIO0_SET_RXF3_PUTGET1 (*(volatile uint32_t *)0x5020215c)
#define PIO0_SET_RXF3_PUTGET2 (*(volatile uint32_t *)0x50202160)
#define PIO0_SET_RXF3_PUTGET3 (*(volatile uint32_t *)0x50202164)
#define PIO0_SET_GPIOBASE (*(volatile uint32_t *)0x50202168)
#define PIO0_SET_INTR (*(volatile uint32_t *)0x5020216c)
#define PIO0_SET_IRQ0_INTE (*(volatile uint32_t *)0x50202170)
#define PIO0_SET_IRQ0_INTF (*(volatile uint32_t *)0x50202174)
#define PIO0_SET_IRQ0_INTS (*(volatile uint32_t *)0x50202178)
#define PIO0_SET_IRQ1_INTE (*(volatile uint32_t *)0x5020217c)
#define PIO0_SET_IRQ1_INTF (*(volatile uint32_t *)0x50202180)
#define PIO0_SET_IRQ1_INTS (*(volatile uint32_t *)0x50202184)
#define PIO0_CLR_CTRL (*(volatile uint32_t *)0x50203000)
#define PIO0_CLR_FSTAT (*(volatile uint32_t *)0x50203004)
#define PIO0_CLR_FDEBUG (*(volatile uint32_t *)0x50203008)
#define PIO0_CLR_FLEVEL (*(volatile uint32_t *)0x5020300c)
#define PIO0_CLR_TXF0 (*(volatile uint32_t *)0x50203010)
#define PIO0_CLR_TXF1 (*(volatile uint32_t *)0x50203014)
#define PIO0_CLR_TXF2 (*(volatile uint32_t *)0x50203018)
#define PIO0_CLR_TXF3 (*(volatile uint32_t *)0x5020301c)
#define PIO0_CLR_RXF0 (*(volatile uint32_t *)0x50203020)
#define PIO0_CLR_RXF1 (*(volatile uint32_t *)0x50203024)
#define PIO0_CLR_RXF2 (*(volatile uint32_t *)0x50203028)
#define PIO0_CLR_RXF3 (*(volatile uint32_t *)0x5020302c)
#define PIO0_CLR_IRQ (*(volatile uint32_t *)0x50203030)
#define PIO0_CLR_IRQ_FORCE (*(volatile uint32_t *)0x50203034)
#define PIO0_CLR_INPUT_SYNC_BYPASS (*(volatile uint32_t *)0x50203038)
#define PIO0_CLR_DBG_PADOUT (*(volatile uint32_t *)0x5020303c)
#define PIO0_CLR_DBG_PADOE (*(volatile uint32_t *)0x50203040)
#define PIO0_CLR_DBG_CFGINFO (*(volatile uint32_t *)0x50203044)
#define PIO0_CLR_INSTR_MEM0 (*(volatile uint32_t *)0x50203048)
#define PIO0_CLR_INSTR_MEM1 (*(volatile uint32_t *)0x5020304c)
#define PIO0_CLR_INSTR_MEM2 (*(volatile uint32_t *)0x50203050)
#define PIO0_CLR_INSTR_MEM3 (*(volatile uint32_t *)0x50203054)
#define PIO0_CLR_INSTR_MEM4 (*(volatile uint32_t *)0x50203058)
#define PIO0_CLR_INSTR_MEM5 (*(volatile uint32_t *)0x5020305c)
#define PIO0_CLR_INSTR_MEM6 (*(volatile uint32_t *)0x50203060)
#define PIO0_CLR_INSTR_MEM7 (*(volatile uint32_t *)0x50203064)
#define PIO0_CLR_INSTR_MEM8 (*(volatile uint32_t *)0x50203068)
#define PIO0_CLR_INSTR_MEM9 (*(volatile uint32_t *)0x5020306c)
#define PIO0_CLR_INSTR_MEM10 (*(volatile uint32_t *)0x50203070)
#define PIO0_CLR_INSTR_MEM11 (*(volatile uint32_t *)0x50203074)
#define PIO0_CLR_INSTR_MEM12 (*(volatile uint32_t *)0x50203078)
#define PIO0_CLR_INSTR_MEM13 (*(volatile uint32_t *)0x5020307c)
#define PIO0_CLR_INSTR_MEM14 (*(volatile uint32_t *)0x50203080)
#define PIO0_CLR_INSTR_MEM15 (*(volatile uint32_t *)0x50203084)
#define PIO0_CLR_INSTR_MEM16 (*(volatile uint32_t *)0x50203088)
#define PIO0_CLR_INSTR_MEM17 (*(volatile uint32_t *)0x5020308c)
#define PIO0_CLR_INSTR_MEM18 (*(volatile uint32_t *)0x50203090)
#define PIO0_CLR_INSTR_MEM19 (*(volatile uint32_t *)0x50203094)
#define PIO0_CLR_INSTR_MEM20 (*(volatile uint32_t *)0x50203098)
#define PIO0_CLR_INSTR_MEM21 (*(volatile uint32_t *)0x5020309c)
#define PIO0_CLR_INSTR_MEM22 (*(volatile uint32_t *)0x502030a0)
#define PIO0_CLR_INSTR_MEM23 (*(volatile uint32_t *)0x502030a4)
#define PIO0_CLR_INSTR_MEM24 (*(volatile uint32_t *)0x502030a8)
#define PIO0_CLR_INSTR_MEM25 (*(volatile uint32_t *)0x502030ac)
#define PIO0_CLR_INSTR_MEM26 (*(volatile uint32_t *)0x502030b0)
#define PIO0_CLR_INSTR_MEM27 (*(volatile uint32_t *)0x502030b4)
#define PIO0_CLR_INSTR_MEM28 (*(volatile uint32_t *)0x502030b8)
#define PIO0_CLR_INSTR_MEM29 (*(volatile uint32_t *)0x502030bc)
#define PIO0_CLR_INSTR_MEM30 (*(volatile uint32_t *)0x502030c0)
#define PIO0_CLR_INSTR_MEM31 (*(volatile uint32_t *)0x502030c4)
#define PIO0_CLR_SM0_CLKDIV (*(volatile uint32_t *)0x502030c8)
#define PIO0_CLR_SM0_EXECCTRL (*(volatile uint32_t *)0x502030cc)
#define PIO0_CLR_SM0_SHIFTCTRL (*(volatile uint32_t *)0x502030d0)
#define PIO0_CLR_SM0_ADDR (*(volatile uint32_t *)0x502030d4)
#define PIO0_CLR_SM0_INSTR (*(volatile uint32_t *)0x502030d8)
#define PIO0_CLR_SM0_PINCTRL (*(volatile uint32_t *)0x502030dc)
#define PIO0_CLR_SM1_CLKDIV (*(volatile uint32_t *)0x502030e0)
#define PIO0_CLR_SM1_EXECCTRL (*(volatile uint32_t *)0x502030e4)
#define PIO0_CLR_SM1_SHIFTCTRL (*(volatile uint32_t *)0x502030e8)
#define PIO0_CLR_SM1_ADDR (*(volatile uint32_t *)0x502030ec)
#define PIO0_CLR_SM1_INSTR (*(volatile uint32_t *)0x502030f0)
#define PIO0_CLR_SM1_PINCTRL (*(volatile uint32_t *)0x502030f4)
#define PIO0_CLR_SM2_CLKDIV (*(volatile uint32_t *)0x502030f8)
#define PIO0_CLR_SM2_EXECCTRL (*(volatile uint32_t *)0x502030fc)
#define PIO0_CLR_SM2_SHIFTCTRL (*(volatile uint32_t *)0x50203100)
#define PIO0_CLR_SM2_ADDR (*(volatile uint32_t *)0x50203104)
#define PIO0_CLR_SM2_INSTR (*(volatile uint32_t *)0x50203108)
#define PIO0_CLR_SM2_PINCTRL (*(volatile uint32_t *)0x5020310c)
#define PIO0_CLR_SM3_CLKDIV (*(volatile uint32_t *)0x50203110)
#define PIO0_CLR_SM3_EXECCTRL (*(volatile uint32_t *)0x50203114)
#define PIO0_CLR_SM3_SHIFTCTRL (*(volatile uint32_t *)0x50203118)
#define PIO0_CLR_SM3_ADDR (*(volatile uint32_t *)0x5020311c)
#define PIO0_CLR_SM3_INSTR (*(volatile uint32_t *)0x50203120)
#define PIO0_CLR_SM3_PINCTRL (*(volatile uint32_t *)0x50203124)
#define PIO0_CLR_RXF0_PUTGET0 (*(volatile uint32_t *)0x50203128)
#define PIO0_CLR_RXF0_PUTGET1 (*(volatile uint32_t *)0x5020312c)
#define PIO0_CLR_RXF0_PUTGET2 (*(volatile uint32_t *)0x50203130)
#define PIO0_CLR_RXF0_PUTGET3 (*(volatile uint32_t *)0x50203134)
#define PIO0_CLR_RXF1_PUTGET0 (*(volatile uint32_t *)0x50203138)
#define PIO0_CLR_RXF1_PUTGET1 (*(volatile uint32_t *)0x5020313c)
#define PIO0_CLR_RXF1_PUTGET2 (*(volatile uint32_t *)0x50203140)
#define PIO0_CLR_RXF1_PUTGET3 (*(volatile uint32_t *)0x50203144)
#define PIO0_CLR_RXF2_PUTGET0 (*(volatile uint32_t *)0x50203148)
#define PIO0_CLR_RXF2_PUTGET1 (*(volatile uint32_t *)0x5020314c)
#define PIO0_CLR_RXF2_PUTGET2 (*(volatile uint32_t *)0x50203150)
#define PIO0_CLR_RXF2_PUTGET3 (*(volatile uint32_t *)0x50203154)
#define PIO0_CLR_RXF3_PUTGET0 (*(volatile uint32_t *)0x50203158)
#define PIO0_CLR_RXF3_PUTGET1 (*(volatile uint32_t *)0x5020315c)
#define PIO0_CLR_RXF3_PUTGET2 (*(volatile uint32_t *)0x50203160)
#define PIO0_CLR_RXF3_PUTGET3 (*(volatile uint32_t *)0x50203164)
#define PIO0_CLR_GPIOBASE (*(volatile uint32_t *)0x50203168)
#define PIO0_CLR_INTR (*(volatile uint32_t *)0x5020316c)
#define PIO0_CLR_IRQ0_INTE (*(volatile uint32_t *)0x50203170)
#define PIO0_CLR_IRQ0_INTF (*(volatile uint32_t *)0x50203174)
#define PIO0_CLR_IRQ0_INTS (*(volatile uint32_t *)0x50203178)
#define PIO0_CLR_IRQ1_INTE (*(volatile uint32_t *)0x5020317c)
#define PIO0_CLR_IRQ1_INTF (*(volatile uint32_t *)0x50203180)
#define PIO0_CLR_IRQ1_INTS (*(volatile uint32_t *)0x50203184)
#define PIO1_CTRL (*(volatile uint32_t *)0x50300000)
#define PIO1_FSTAT (*(volatile uint32_t *)0x50300004)
#define PIO1_FDEBUG (*(volatile uint32_t *)0x50300008)
#define PIO1_FLEVEL (*(volatile uint32_t *)0x5030000c)
#define PIO1_TXF0 (*(volatile uint32_t *)0x50300010)
#define PIO1_TXF1 (*(volatile uint32_t *)0x50300014)
#define PIO1_TXF2 (*(volatile uint32_t *)0x50300018)
#define PIO1_TXF3 (*(volatile uint32_t *)0x5030001c)
#define PIO1_RXF0 (*(volatile uint32_t *)0x50300020)
#define PIO1_RXF1 (*(volatile uint32_t *)0x50300024)
#define PIO1_RXF2 (*(volatile uint32_t *)0x50300028)
#define PIO1_RXF3 (*(volatile uint32_t *)0x5030002c)
#define PIO1_IRQ (*(volatile uint32_t *)0x50300030)
#define PIO1_IRQ_FORCE (*(volatile uint32_t *)0x50300034)
#define PIO1_INPUT_SYNC_BYPASS (*(volatile uint32_t *)0x50300038)
#define PIO1_DBG_PADOUT (*(volatile uint32_t *)0x5030003c)
#define PIO1_DBG_PADOE (*(volatile uint32_t *)0x50300040)
#define PIO1_DBG_CFGINFO (*(volatile uint32_t *)0x50300044)
#define PIO1_INSTR_MEM0 (*(volatile uint32_t *)0x50300048)
#define PIO1_INSTR_MEM1 (*(volatile uint32_t *)0x5030004c)
#define PIO1_INSTR_MEM2 (*(volatile uint32_t *)0x50300050)
#define PIO1_INSTR_MEM3 (*(volatile uint32_t *)0x50300054)
#define PIO1_INSTR_MEM4 (*(volatile uint32_t *)0x50300058)
#define PIO1_INSTR_MEM5 (*(volatile uint32_t *)0x5030005c)
#define PIO1_INSTR_MEM6 (*(volatile uint32_t *)0x50300060)
#define PIO1_INSTR_MEM7 (*(volatile uint32_t *)0x50300064)
#define PIO1_INSTR_MEM8 (*(volatile uint32_t *)0x50300068)
#define PIO1_INSTR_MEM9 (*(volatile uint32_t *)0x5030006c)
#define PIO1_INSTR_MEM10 (*(volatile uint32_t *)0x50300070)
#define PIO1_INSTR_MEM11 (*(volatile uint32_t *)0x50300074)
#define PIO1_INSTR_MEM12 (*(volatile uint32_t *)0x50300078)
#define PIO1_INSTR_MEM13 (*(volatile uint32_t *)0x5030007c)
#define PIO1_INSTR_MEM14 (*(volatile uint32_t *)0x50300080)
#define PIO1_INSTR_MEM15 (*(volatile uint32_t *)0x50300084)
#define PIO1_INSTR_MEM16 (*(volatile uint32_t *)0x50300088)
#define PIO1_INSTR_MEM17 (*(volatile uint32_t *)0x5030008c)
#define PIO1_INSTR_MEM18 (*(volatile uint32_t *)0x50300090)
#define PIO1_INSTR_MEM19 (*(volatile uint32_t *)0x50300094)
#define PIO1_INSTR_MEM20 (*(volatile uint32_t *)0x50300098)
#define PIO1_INSTR_MEM21 (*(volatile uint32_t *)0x5030009c)
#define PIO1_INSTR_MEM22 (*(volatile uint32_t *)0x503000a0)
#define PIO1_INSTR_MEM23 (*(volatile uint32_t *)0x503000a4)
#define PIO1_INSTR_MEM24 (*(volatile uint32_t *)0x503000a8)
#define PIO1_INSTR_MEM25 (*(volatile uint32_t *)0x503000ac)
#define PIO1_INSTR_MEM26 (*(volatile uint32_t *)0x503000b0)
#define PIO1_INSTR_MEM27 (*(volatile uint32_t *)0x503000b4)
#define PIO1_INSTR_MEM28 (*(volatile uint32_t *)0x503000b8)
#define PIO1_INSTR_MEM29 (*(volatile uint32_t *)0x503000bc)
#define PIO1_INSTR_MEM30 (*(volatile uint32_t *)0x503000c0)
#define PIO1_INSTR_MEM31 (*(volatile uint32_t *)0x503000c4)
#define PIO1_SM0_CLKDIV (*(volatile uint32_t *)0x503000c8)
#define PIO1_SM0_EXECCTRL (*(volatile uint32_t *)0x503000cc)
#define PIO1_SM0_SHIFTCTRL (*(volatile uint32_t *)0x503000d0)
#define PIO1_SM0_ADDR (*(volatile uint32_t *)0x503000d4)
#define PIO1_SM0_INSTR (*(volatile uint32_t *)0x503000d8)
#define PIO1_SM0_PINCTRL (*(volatile uint32_t *)0x503000dc)
#define PIO1_SM1_CLKDIV (*(volatile uint32_t *)0x503000e0)
#define PIO1_SM1_EXECCTRL (*(volatile uint32_t *)0x503000e4)
#define PIO1_SM1_SHIFTCTRL (*(volatile uint32_t *)0x503000e8)
#define PIO1_SM1_ADDR (*(volatile uint32_t *)0x503000ec)
#define PIO1_SM1_INSTR (*(volatile uint32_t *)0x503000f0)
#define PIO1_SM1_PINCTRL (*(volatile uint32_t *)0x503000f4)
#define PIO1_SM2_CLKDIV (*(volatile uint32_t *)0x503000f8)
#define PIO1_SM2_EXECCTRL (*(volatile uint32_t *)0x503000fc)
#define PIO1_SM2_SHIFTCTRL (*(volatile uint32_t *)0x50300100)
#define PIO1_SM2_ADDR (*(volatile uint32_t *)0x50300104)
#define PIO1_SM2_INSTR (*(volatile uint32_t *)0x50300108)
#define PIO1_SM2_PINCTRL (*(volatile uint32_t *)0x5030010c)
#define PIO1_SM3_CLKDIV (*(volatile uint32_t *)0x50300110)
#define PIO1_SM3_EXECCTRL (*(volatile uint32_t *)0x50300114)
#define PIO1_SM3_SHIFTCTRL (*(volatile uint32_t *)0x50300118)
#define PIO1_SM3_ADDR (*(volatile uint32_t *)0x5030011c)
#define PIO1_SM3_INSTR (*(volatile uint32_t *)0x50300120)
#define PIO1_SM3_PINCTRL (*(volatile uint32_t *)0x50300124)
#define PIO1_RXF0_PUTGET0 (*(volatile uint32_t *)0x50300128)
#define PIO1_RXF0_PUTGET1 (*(volatile uint32_t *)0x5030012c)
#define PIO1_RXF0_PUTGET2 (*(volatile uint32_t *)0x50300130)
#define PIO1_RXF0_PUTGET3 (*(volatile uint32_t *)0x50300134)
#define PIO1_RXF1_PUTGET0 (*(volatile uint32_t *)0x50300138)
#define PIO1_RXF1_PUTGET1 (*(volatile uint32_t *)0x5030013c)
#define PIO1_RXF1_PUTGET2 (*(volatile uint32_t *)0x50300140)
#define PIO1_RXF1_PUTGET3 (*(volatile uint32_t *)0x50300144)
#define PIO1_RXF2_PUTGET0 (*(volatile uint32_t *)0x50300148)
#define PIO1_RXF2_PUTGET1 (*(volatile uint32_t *)0x5030014c)
#define PIO1_RXF2_PUTGET2 (*(volatile uint32_t *)0x50300150)
#define PIO1_RXF2_PUTGET3 (*(volatile uint32_t *)0x50300154)
#define PIO1_RXF3_PUTGET0 (*(volatile uint32_t *)0x50300158)
#define PIO1_RXF3_PUTGET1 (*(volatile uint32_t *)0x5030015c)
#define PIO1_RXF3_PUTGET2 (*(volatile uint32_t *)0x50300160)
#define PIO1_RXF3_PUTGET3 (*(volatile uint32_t *)0x50300164)
#define PIO1_GPIOBASE (*(volatile uint32_t *)0x50300168)
#define PIO1_INTR (*(volatile uint32_t *)0x5030016c)
#define PIO1_IRQ0_INTE (*(volatile uint32_t *)0x50300170)
#define PIO1_IRQ0_INTF (*(volatile uint32_t *)0x50300174)
#define PIO1_IRQ0_INTS (*(volatile uint32_t *)0x50300178)
#define PIO1_IRQ1_INTE (*(volatile uint32_t *)0x5030017c)
#define PIO1_IRQ1_INTF (*(volatile uint32_t *)0x50300180)
#define PIO1_IRQ1_INTS (*(volatile uint32_t *)0x50300184)
#define PIO1_XOR_CTRL (*(volatile uint32_t *)0x50301000)
#define PIO1_XOR_FSTAT (*(volatile uint32_t *)0x50301004)
#define PIO1_XOR_FDEBUG (*(volatile uint32_t *)0x50301008)
#define PIO1_XOR_FLEVEL (*(volatile uint32_t *)0x5030100c)
#define PIO1_XOR_TXF0 (*(volatile uint32_t *)0x50301010)
#define PIO1_XOR_TXF1 (*(volatile uint32_t *)0x50301014)
#define PIO1_XOR_TXF2 (*(volatile uint32_t *)0x50301018)
#define PIO1_XOR_TXF3 (*(volatile uint32_t *)0x5030101c)
#define PIO1_XOR_RXF0 (*(volatile uint32_t *)0x50301020)
#define PIO1_XOR_RXF1 (*(volatile uint32_t *)0x50301024)
#define PIO1_XOR_RXF2 (*(volatile uint32_t *)0x50301028)
#define PIO1_XOR_RXF3 (*(volatile uint32_t *)0x5030102c)
#define PIO1_XOR_IRQ (*(volatile uint32_t *)0x50301030)
#define PIO1_XOR_IRQ_FORCE (*(volatile uint32_t *)0x50301034)
#define PIO1_XOR_INPUT_SYNC_BYPASS (*(volatile uint32_t *)0x50301038)
#define PIO1_XOR_DBG_PADOUT (*(volatile uint32_t *)0x5030103c)
#define PIO1_XOR_DBG_PADOE (*(volatile uint32_t *)0x50301040)
#define PIO1_XOR_DBG_CFGINFO (*(volatile uint32_t *)0x50301044)
#define PIO1_XOR_INSTR_MEM0 (*(volatile uint32_t *)0x50301048)
#define PIO1_XOR_INSTR_MEM1 (*(volatile uint32_t *)0x5030104c)
#define PIO1_XOR_INSTR_MEM2 (*(volatile uint32_t *)0x50301050)
#define PIO1_XOR_INSTR_MEM3 (*(volatile uint32_t *)0x50301054)
#define PIO1_XOR_INSTR_MEM4 (*(volatile uint32_t *)0x50301058)
#define PIO1_XOR_INSTR_MEM5 (*(volatile uint32_t *)0x5030105c)
#define PIO1_XOR_INSTR_MEM6 (*(volatile uint32_t *)0x50301060)
#define PIO1_XOR_INSTR_MEM7 (*(volatile uint32_t *)0x50301064)
#define PIO1_XOR_INSTR_MEM8 (*(volatile uint32_t *)0x50301068)
#define PIO1_XOR_INSTR_MEM9 (*(volatile uint32_t *)0x5030106c)
#define PIO1_XOR_INSTR_MEM10 (*(volatile uint32_t *)0x50301070)
#define PIO1_XOR_INSTR_MEM11 (*(volatile uint32_t *)0x50301074)
#define PIO1_XOR_INSTR_MEM12 (*(volatile uint32_t *)0x50301078)
#define PIO1_XOR_INSTR_MEM13 (*(volatile uint32_t *)0x5030107c)
#define PIO1_XOR_INSTR_MEM14 (*(volatile uint32_t *)0x50301080)
#define PIO1_XOR_INSTR_MEM15 (*(volatile uint32_t *)0x50301084)
#define PIO1_XOR_INSTR_MEM16 (*(volatile uint32_t *)0x50301088)
#define PIO1_XOR_INSTR_MEM17 (*(volatile uint32_t *)0x5030108c)
#define PIO1_XOR_INSTR_MEM18 (*(volatile uint32_t *)0x50301090)
#define PIO1_XOR_INSTR_MEM19 (*(volatile uint32_t *)0x50301094)
#define PIO1_XOR_INSTR_MEM20 (*(volatile uint32_t *)0x50301098)
#define PIO1_XOR_INSTR_MEM21 (*(volatile uint32_t *)0x5030109c)
#define PIO1_XOR_INSTR_MEM22 (*(volatile uint32_t *)0x503010a0)
#define PIO1_XOR_INSTR_MEM23 (*(volatile uint32_t *)0x503010a4)
#define PIO1_XOR_INSTR_MEM24 (*(volatile uint32_t *)0x503010a8)
#define PIO1_XOR_INSTR_MEM25 (*(volatile uint32_t *)0x503010ac)
#define PIO1_XOR_INSTR_MEM26 (*(volatile uint32_t *)0x503010b0)
#define PIO1_XOR_INSTR_MEM27 (*(volatile uint32_t *)0x503010b4)
#define PIO1_XOR_INSTR_MEM28 (*(volatile uint32_t *)0x503010b8)
#define PIO1_XOR_INSTR_MEM29 (*(volatile uint32_t *)0x503010bc)
#define PIO1_XOR_INSTR_MEM30 (*(volatile uint32_t *)0x503010c0)
#define PIO1_XOR_INSTR_MEM31 (*(volatile uint32_t *)0x503010c4)
#define PIO1_XOR_SM0_CLKDIV (*(volatile uint32_t *)0x503010c8)
#define PIO1_XOR_SM0_EXECCTRL (*(volatile uint32_t *)0x503010cc)
#define PIO1_XOR_SM0_SHIFTCTRL (*(volatile uint32_t *)0x503010d0)
#define PIO1_XOR_SM0_ADDR (*(volatile uint32_t *)0x503010d4)
#define PIO1_XOR_SM0_INSTR (*(volatile uint32_t *)0x503010d8)
#define PIO1_XOR_SM0_PINCTRL (*(volatile uint32_t *)0x503010dc)
#define PIO1_XOR_SM1_CLKDIV (*(volatile uint32_t *)0x503010e0)
#define PIO1_XOR_SM1_EXECCTRL (*(volatile uint32_t *)0x503010e4)
#define PIO1_XOR_SM1_SHIFTCTRL (*(volatile uint32_t *)0x503010e8)
#define PIO1_XOR_SM1_ADDR (*(volatile uint32_t *)0x503010ec)
#define PIO1_XOR_SM1_INSTR (*(volatile uint32_t *)0x503010f0)
#define PIO1_XOR_SM1_PINCTRL (*(volatile uint32_t *)0x503010f4)
#define PIO1_XOR_SM2_CLKDIV (*(volatile uint32_t *)0x503010f8)
#define PIO1_XOR_SM2_EXECCTRL (*(volatile uint32_t *)0x503010fc)
#define PIO1_XOR_SM2_SHIFTCTRL (*(volatile uint32_t *)0x50301100)
#define PIO1_XOR_SM2_ADDR (*(volatile uint32_t *)0x50301104)
#define PIO1_XOR_SM2_INSTR (*(volatile uint32_t *)0x50301108)
#define PIO1_XOR_SM2_PINCTRL (*(volatile uint32_t *)0x5030110c)
#define PIO1_XOR_SM3_CLKDIV (*(volatile uint32_t *)0x50301110)
#define PIO1_XOR_SM3_EXECCTRL (*(volatile uint32_t *)0x50301114)
#define PIO1_XOR_SM3_SHIFTCTRL (*(volatile uint32_t *)0x50301118)
#define PIO1_XOR_SM3_ADDR (*(volatile uint32_t *)0x5030111c)
#define PIO1_XOR_SM3_INSTR (*(volatile uint32_t *)0x50301120)
#define PIO1_XOR_SM3_PINCTRL (*(volatile uint32_t *)0x50301124)
#define PIO1_XOR_RXF0_PUTGET0 (*(volatile uint32_t *)0x50301128)
#define PIO1_XOR_RXF0_PUTGET1 (*(volatile uint32_t *)0x5030112c)
#define PIO1_XOR_RXF0_PUTGET2 (*(volatile uint32_t *)0x50301130)
#define PIO1_XOR_RXF0_PUTGET3 (*(volatile uint32_t *)0x50301134)
#define PIO1_XOR_RXF1_PUTGET0 (*(volatile uint32_t *)0x50301138)
#define PIO1_XOR_RXF1_PUTGET1 (*(volatile uint32_t *)0x5030113c)
#define PIO1_XOR_RXF1_PUTGET2 (*(volatile uint32_t *)0x50301140)
#define PIO1_XOR_RXF1_PUTGET3 (*(volatile uint32_t *)0x50301144)
#define PIO1_XOR_RXF2_PUTGET0 (*(volatile uint32_t *)0x50301148)
#define PIO1_XOR_RXF2_PUTGET1 (*(volatile uint32_t *)0x5030114c)
#define PIO1_XOR_RXF2_PUTGET2 (*(volatile uint32_t *)0x50301150)
#define PIO1_XOR_RXF2_PUTGET3 (*(volatile uint32_t *)0x50301154)
#define PIO1_XOR_RXF3_PUTGET0 (*(volatile uint32_t *)0x50301158)
#define PIO1_XOR_RXF3_PUTGET1 (*(volatile uint32_t *)0x5030115c)
#define PIO1_XOR_RXF3_PUTGET2 (*(volatile uint32_t *)0x50301160)
#define PIO1_XOR_RXF3_PUTGET3 (*(volatile uint32_t *)0x50301164)
#define PIO1_XOR_GPIOBASE (*(volatile uint32_t *)0x50301168)
#define PIO1_XOR_INTR (*(volatile uint32_t *)0x5030116c)
#define PIO1_XOR_IRQ0_INTE (*(volatile uint32_t *)0x50301170)
#define PIO1_XOR_IRQ0_INTF (*(volatile uint32_t *)0x50301174)
#define PIO1_XOR_IRQ0_INTS (*(volatile uint32_t *)0x50301178)
#define PIO1_XOR_IRQ1_INTE (*(volatile uint32_t *)0x5030117c)
#define PIO1_XOR_IRQ1_INTF (*(volatile uint32_t *)0x50301180)
#define PIO1_XOR_IRQ1_INTS (*(volatile uint32_t *)0x50301184)
#define PIO1_SET_CTRL (*(volatile uint32_t *)0x50302000)
#define PIO1_SET_FSTAT (*(volatile uint32_t *)0x50302004)
#define PIO1_SET_FDEBUG (*(volatile uint32_t *)0x50302008)
#define PIO1_SET_FLEVEL (*(volatile uint32_t *)0x5030200c)
#define PIO1_SET_TXF0 (*(volatile uint32_t *)0x50302010)
#define PIO1_SET_TXF1 (*(volatile uint32_t *)0x50302014)
#define PIO1_SET_TXF2 (*(volatile uint32_t *)0x50302018)
#define PIO1_SET_TXF3 (*(volatile uint32_t *)0x5030201c)
#define PIO1_SET_RXF0 (*(volatile uint32_t *)0x50302020)
#define PIO1_SET_RXF1 (*(volatile uint32_t *)0x50302024)
#define PIO1_SET_RXF2 (*(volatile uint32_t *)0x50302028)
#define PIO1_SET_RXF3 (*(volatile uint32_t *)0x5030202c)
#define PIO1_SET_IRQ (*(volatile uint32_t *)0x50302030)
#define PIO1_SET_IRQ_FORCE (*(volatile uint32_t *)0x50302034)
#define PIO1_SET_INPUT_SYNC_BYPASS (*(volatile uint32_t *)0x50302038)
#define PIO1_SET_DBG_PADOUT (*(volatile uint32_t *)0x5030203c)
#define PIO1_SET_DBG_PADOE (*(volatile uint32_t *)0x50302040)
#define PIO1_SET_DBG_CFGINFO (*(volatile uint32_t *)0x50302044)
#define PIO1_SET_INSTR_MEM0 (*(volatile uint32_t *)0x50302048)
#define PIO1_SET_INSTR_MEM1 (*(volatile uint32_t *)0x5030204c)
#define PIO1_SET_INSTR_MEM2 (*(volatile uint32_t *)0x50302050)
#define PIO1_SET_INSTR_MEM3 (*(volatile uint32_t *)0x50302054)
#define PIO1_SET_INSTR_MEM4 (*(volatile uint32_t *)0x50302058)
#define PIO1_SET_INSTR_MEM5 (*(volatile uint32_t *)0x5030205c)
#define PIO1_SET_INSTR_MEM6 (*(volatile uint32_t *)0x50302060)
#define PIO1_SET_INSTR_MEM7 (*(volatile uint32_t *)0x50302064)
#define PIO1_SET_INSTR_MEM8 (*(volatile uint32_t *)0x50302068)
#define PIO1_SET_INSTR_MEM9 (*(volatile uint32_t *)0x5030206c)
#define PIO1_SET_INSTR_MEM10 (*(volatile uint32_t *)0x50302070)
#define PIO1_SET_INSTR_MEM11 (*(volatile uint32_t *)0x50302074)
#define PIO1_SET_INSTR_MEM12 (*(volatile uint32_t *)0x50302078)
#define PIO1_SET_INSTR_MEM13 (*(volatile uint32_t *)0x5030207c)
#define PIO1_SET_INSTR_MEM14 (*(volatile uint32_t *)0x50302080)
#define PIO1_SET_INSTR_MEM15 (*(volatile uint32_t *)0x50302084)
#define PIO1_SET_INSTR_MEM16 (*(volatile uint32_t *)0x50302088)
#define PIO1_SET_INSTR_MEM17 (*(volatile uint32_t *)0x5030208c)
#define PIO1_SET_INSTR_MEM18 (*(volatile uint32_t *)0x50302090)
#define PIO1_SET_INSTR_MEM19 (*(volatile uint32_t *)0x50302094)
#define PIO1_SET_INSTR_MEM20 (*(volatile uint32_t *)0x50302098)
#define PIO1_SET_INSTR_MEM21 (*(volatile uint32_t *)0x5030209c)
#define PIO1_SET_INSTR_MEM22 (*(volatile uint32_t *)0x503020a0)
#define PIO1_SET_INSTR_MEM23 (*(volatile uint32_t *)0x503020a4)
#define PIO1_SET_INSTR_MEM24 (*(volatile uint32_t *)0x503020a8)
#define PIO1_SET_INSTR_MEM25 (*(volatile uint32_t *)0x503020ac)
#define PIO1_SET_INSTR_MEM26 (*(volatile uint32_t *)0x503020b0)
#define PIO1_SET_INSTR_MEM27 (*(volatile uint32_t *)0x503020b4)
#define PIO1_SET_INSTR_MEM28 (*(volatile uint32_t *)0x503020b8)
#define PIO1_SET_INSTR_MEM29 (*(volatile uint32_t *)0x503020bc)
#define PIO1_SET_INSTR_MEM30 (*(volatile uint32_t *)0x503020c0)
#define PIO1_SET_INSTR_MEM31 (*(volatile uint32_t *)0x503020c4)
#define PIO1_SET_SM0_CLKDIV (*(volatile uint32_t *)0x503020c8)
#define PIO1_SET_SM0_EXECCTRL (*(volatile uint32_t *)0x503020cc)
#define PIO1_SET_SM0_SHIFTCTRL (*(volatile uint32_t *)0x503020d0)
#define PIO1_SET_SM0_ADDR (*(volatile uint32_t *)0x503020d4)
#define PIO1_SET_SM0_INSTR (*(volatile uint32_t *)0x503020d8)
#define PIO1_SET_SM0_PINCTRL (*(volatile uint32_t *)0x503020dc)
#define PIO1_SET_SM1_CLKDIV (*(volatile uint32_t *)0x503020e0)
#define PIO1_SET_SM1_EXECCTRL (*(volatile uint32_t *)0x503020e4)
#define PIO1_SET_SM1_SHIFTCTRL (*(volatile uint32_t *)0x503020e8)
#define PIO1_SET_SM1_ADDR (*(volatile uint32_t *)0x503020ec)
#define PIO1_SET_SM1_INSTR (*(volatile uint32_t *)0x503020f0)
#define PIO1_SET_SM1_PINCTRL (*(volatile uint32_t *)0x503020f4)
#define PIO1_SET_SM2_CLKDIV (*(volatile uint32_t *)0x503020f8)
#define PIO1_SET_SM2_EXECCTRL (*(volatile uint32_t *)0x503020fc)
#define PIO1_SET_SM2_SHIFTCTRL (*(volatile uint32_t *)0x50302100)
#define PIO1_SET_SM2_ADDR (*(volatile uint32_t *)0x50302104)
#define PIO1_SET_SM2_INSTR (*(volatile uint32_t *)0x50302108)
#define PIO1_SET_SM2_PINCTRL (*(volatile uint32_t *)0x5030210c)
#define PIO1_SET_SM3_CLKDIV (*(volatile uint32_t *)0x50302110)
#define PIO1_SET_SM3_EXECCTRL (*(volatile uint32_t *)0x50302114)
#define PIO1_SET_SM3_SHIFTCTRL (*(volatile uint32_t *)0x50302118)
#define PIO1_SET_SM3_ADDR (*(volatile uint32_t *)0x5030211c)
#define PIO1_SET_SM3_INSTR (*(volatile uint32_t *)0x50302120)
#define PIO1_SET_SM3_PINCTRL (*(volatile uint32_t *)0x50302124)
#define PIO1_SET_RXF0_PUTGET0 (*(volatile uint32_t *)0x50302128)
#define PIO1_SET_RXF0_PUTGET1 (*(volatile uint32_t *)0x5030212c)
#define PIO1_SET_RXF0_PUTGET2 (*(volatile uint32_t *)0x50302130)
#define PIO1_SET_RXF0_PUTGET3 (*(volatile uint32_t *)0x50302134)
#define PIO1_SET_RXF1_PUTGET0 (*(volatile uint32_t *)0x50302138)
#define PIO1_SET_RXF1_PUTGET1 (*(volatile uint32_t *)0x5030213c)
#define PIO1_SET_RXF1_PUTGET2 (*(volatile uint32_t *)0x50302140)
#define PIO1_SET_RXF1_PUTGET3 (*(volatile uint32_t *)0x50302144)
#define PIO1_SET_RXF2_PUTGET0 (*(volatile uint32_t *)0x50302148)
#define PIO1_SET_RXF2_PUTGET1 (*(volatile uint32_t *)0x5030214c)
#define PIO1_SET_RXF2_PUTGET2 (*(volatile uint32_t *)0x50302150)
#define PIO1_SET_RXF2_PUTGET3 (*(volatile uint32_t *)0x50302154)
#define PIO1_SET_RXF3_PUTGET0 (*(volatile uint32_t *)0x50302158)
#define PIO1_SET_RXF3_PUTGET1 (*(volatile uint32_t *)0x5030215c)
#define PIO1_SET_RXF3_PUTGET2 (*(volatile uint32_t *)0x50302160)
#define PIO1_SET_RXF3_PUTGET3 (*(volatile uint32_t *)0x50302164)
#define PIO1_SET_GPIOBASE (*(volatile uint32_t *)0x50302168)
#define PIO1_SET_INTR (*(volatile uint32_t *)0x5030216c)
#define PIO1_SET_IRQ0_INTE (*(volatile uint32_t *)0x50302170)
#define PIO1_SET_IRQ0_INTF (*(volatile uint32_t *)0x50302174)
#define PIO1_SET_IRQ0_INTS (*(volatile uint32_t *)0x50302178)
#define PIO1_SET_IRQ1_INTE (*(volatile uint32_t *)0x5030217c)
#define PIO1_SET_IRQ1_INTF (*(volatile uint32_t *)0x50302180)
#define PIO1_SET_IRQ1_INTS (*(volatile uint32_t *)0x50302184)
#define PIO1_CLR_CTRL (*(volatile uint32_t *)0x50303000)
#define PIO1_CLR_FSTAT (*(volatile uint32_t *)0x50303004)
#define PIO1_CLR_FDEBUG (*(volatile uint32_t *)0x50303008)
#define PIO1_CLR_FLEVEL (*(volatile uint32_t *)0x5030300c)
#define PIO1_CLR_TXF0 (*(volatile uint32_t *)0x50303010)
#define PIO1_CLR_TXF1 (*(volatile uint32_t *)0x50303014)
#define PIO1_CLR_TXF2 (*(volatile uint32_t *)0x50303018)
#define PIO1_CLR_TXF3 (*(volatile uint32_t *)0x5030301c)
#define PIO1_CLR_RXF0 (*(volatile uint32_t *)0x50303020)
#define PIO1_CLR_RXF1 (*(volatile uint32_t *)0x50303024)
#define PIO1_CLR_RXF2 (*(volatile uint32_t *)0x50303028)
#define PIO1_CLR_RXF3 (*(volatile uint32_t *)0x5030302c)
#define PIO1_CLR_IRQ (*(volatile uint32_t *)0x50303030)
#define PIO1_CLR_IRQ_FORCE (*(volatile uint32_t *)0x50303034)
#define PIO1_CLR_INPUT_SYNC_BYPASS (*(volatile uint32_t *)0x50303038)
#define PIO1_CLR_DBG_PADOUT (*(volatile uint32_t *)0x5030303c)
#define PIO1_CLR_DBG_PADOE (*(volatile uint32_t *)0x50303040)
#define PIO1_CLR_DBG_CFGINFO (*(volatile uint32_t *)0x50303044)
#define PIO1_CLR_INSTR_MEM0 (*(volatile uint32_t *)0x50303048)
#define PIO1_CLR_INSTR_MEM1 (*(volatile uint32_t *)0x5030304c)
#define PIO1_CLR_INSTR_MEM2 (*(volatile uint32_t *)0x50303050)
#define PIO1_CLR_INSTR_MEM3 (*(volatile uint32_t *)0x50303054)
#define PIO1_CLR_INSTR_MEM4 (*(volatile uint32_t *)0x50303058)
#define PIO1_CLR_INSTR_MEM5 (*(volatile uint32_t *)0x5030305c)
#define PIO1_CLR_INSTR_MEM6 (*(volatile uint32_t *)0x50303060)
#define PIO1_CLR_INSTR_MEM7 (*(volatile uint32_t *)0x50303064)
#define PIO1_CLR_INSTR_MEM8 (*(volatile uint32_t *)0x50303068)
#define PIO1_CLR_INSTR_MEM9 (*(volatile uint32_t *)0x5030306c)
#define PIO1_CLR_INSTR_MEM10 (*(volatile uint32_t *)0x50303070)
#define PIO1_CLR_INSTR_MEM11 (*(volatile uint32_t *)0x50303074)
#define PIO1_CLR_INSTR_MEM12 (*(volatile uint32_t *)0x50303078)
#define PIO1_CLR_INSTR_MEM13 (*(volatile uint32_t *)0x5030307c)
#define PIO1_CLR_INSTR_MEM14 (*(volatile uint32_t *)0x50303080)
#define PIO1_CLR_INSTR_MEM15 (*(volatile uint32_t *)0x50303084)
#define PIO1_CLR_INSTR_MEM16 (*(volatile uint32_t *)0x50303088)
#define PIO1_CLR_INSTR_MEM17 (*(volatile uint32_t *)0x5030308c)
#define PIO1_CLR_INSTR_MEM18 (*(volatile uint32_t *)0x50303090)
#define PIO1_CLR_INSTR_MEM19 (*(volatile uint32_t *)0x50303094)
#define PIO1_CLR_INSTR_MEM20 (*(volatile uint32_t *)0x50303098)
#define PIO1_CLR_INSTR_MEM21 (*(volatile uint32_t *)0x5030309c)
#define PIO1_CLR_INSTR_MEM22 (*(volatile uint32_t *)0x503030a0)
#define PIO1_CLR_INSTR_MEM23 (*(volatile uint32_t *)0x503030a4)
#define PIO1_CLR_INSTR_MEM24 (*(volatile uint32_t *)0x503030a8)
#define PIO1_CLR_INSTR_MEM25 (*(volatile uint32_t *)0x503030ac)
#define PIO1_CLR_INSTR_MEM26 (*(volatile uint32_t *)0x503030b0)
#define PIO1_CLR_INSTR_MEM27 (*(volatile uint32_t *)0x503030b4)
#define PIO1_CLR_INSTR_MEM28 (*(volatile uint32_t *)0x503030b8)
#define PIO1_CLR_INSTR_MEM29 (*(volatile uint32_t *)0x503030bc)
#define PIO1_CLR_INSTR_MEM30 (*(volatile uint32_t *)0x503030c0)
#define PIO1_CLR_INSTR_MEM31 (*(volatile uint32_t *)0x503030c4)
#define PIO1_CLR_SM0_CLKDIV (*(volatile uint32_t *)0x503030c8)
#define PIO1_CLR_SM0_EXECCTRL (*(volatile uint32_t *)0x503030cc)
#define PIO1_CLR_SM0_SHIFTCTRL (*(volatile uint32_t *)0x503030d0)
#define PIO1_CLR_SM0_ADDR (*(volatile uint32_t *)0x503030d4)
#define PIO1_CLR_SM0_INSTR (*(volatile uint32_t *)0x503030d8)
#define PIO1_CLR_SM0_PINCTRL (*(volatile uint32_t *)0x503030dc)
#define PIO1_CLR_SM1_CLKDIV (*(volatile uint32_t *)0x503030e0)
#define PIO1_CLR_SM1_EXECCTRL (*(volatile uint32_t *)0x503030e4)
#define PIO1_CLR_SM1_SHIFTCTRL (*(volatile uint32_t *)0x503030e8)
#define PIO1_CLR_SM1_ADDR (*(volatile uint32_t *)0x503030ec)
#define PIO1_CLR_SM1_INSTR (*(volatile uint32_t *)0x503030f0)
#define PIO1_CLR_SM1_PINCTRL (*(volatile uint32_t *)0x503030f4)
#define PIO1_CLR_SM2_CLKDIV (*(volatile uint32_t *)0x503030f8)
#define PIO1_CLR_SM2_EXECCTRL (*(volatile uint32_t *)0x503030fc)
#define PIO1_CLR_SM2_SHIFTCTRL (*(volatile uint32_t *)0x50303100)
#define PIO1_CLR_SM2_ADDR (*(volatile uint32_t *)0x50303104)
#define PIO1_CLR_SM2_INSTR (*(volatile uint32_t *)0x50303108)
#define PIO1_CLR_SM2_PINCTRL (*(volatile uint32_t *)0x5030310c)
#define PIO1_CLR_SM3_CLKDIV (*(volatile uint32_t *)0x50303110)
#define PIO1_CLR_SM3_EXECCTRL (*(volatile uint32_t *)0x50303114)
#define PIO1_CLR_SM3_SHIFTCTRL (*(volatile uint32_t *)0x50303118)
#define PIO1_CLR_SM3_ADDR (*(volatile uint32_t *)0x5030311c)
#define PIO1_CLR_SM3_INSTR (*(volatile uint32_t *)0x50303120)
#define PIO1_CLR_SM3_PINCTRL (*(volatile uint32_t *)0x50303124)
#define PIO1_CLR_RXF0_PUTGET0 (*(volatile uint32_t *)0x50303128)
#define PIO1_CLR_RXF0_PUTGET1 (*(volatile uint32_t *)0x5030312c)
#define PIO1_CLR_RXF0_PUTGET2 (*(volatile uint32_t *)0x50303130)
#define PIO1_CLR_RXF0_PUTGET3 (*(volatile uint32_t *)0x50303134)
#define PIO1_CLR_RXF1_PUTGET0 (*(volatile uint32_t *)0x50303138)
#define PIO1_CLR_RXF1_PUTGET1 (*(volatile uint32_t *)0x5030313c)
#define PIO1_CLR_RXF1_PUTGET2 (*(volatile uint32_t *)0x50303140)
#define PIO1_CLR_RXF1_PUTGET3 (*(volatile uint32_t *)0x50303144)
#define PIO1_CLR_RXF2_PUTGET0 (*(volatile uint32_t *)0x50303148)
#define PIO1_CLR_RXF2_PUTGET1 (*(volatile uint32_t *)0x5030314c)
#define PIO1_CLR_RXF2_PUTGET2 (*(volatile uint32_t *)0x50303150)
#define PIO1_CLR_RXF2_PUTGET3 (*(volatile uint32_t *)0x50303154)
#define PIO1_CLR_RXF3_PUTGET0 (*(volatile uint32_t *)0x50303158)
#define PIO1_CLR_RXF3_PUTGET1 (*(volatile uint32_t *)0x5030315c)
#define PIO1_CLR_RXF3_PUTGET2 (*(volatile uint32_t *)0x50303160)
#define PIO1_CLR_RXF3_PUTGET3 (*(volatile uint32_t *)0x50303164)
#define PIO1_CLR_GPIOBASE (*(volatile uint32_t *)0x50303168)
#define PIO1_CLR_INTR (*(volatile uint32_t *)0x5030316c)
#define PIO1_CLR_IRQ0_INTE (*(volatile uint32_t *)0x50303170)
#define PIO1_CLR_IRQ0_INTF (*(volatile uint32_t *)0x50303174)
#define PIO1_CLR_IRQ0_INTS (*(volatile uint32_t *)0x50303178)
#define PIO1_CLR_IRQ1_INTE (*(volatile uint32_t *)0x5030317c)
#define PIO1_CLR_IRQ1_INTF (*(volatile uint32_t *)0x50303180)
#define PIO1_CLR_IRQ1_INTS (*(volatile uint32_t *)0x50303184)
#define PIO2_CTRL (*(volatile uint32_t *)0x50400000)
#define PIO2_FSTAT (*(volatile uint32_t *)0x50400004)
#define PIO2_FDEBUG (*(volatile uint32_t *)0x50400008)
#define PIO2_FLEVEL (*(volatile uint32_t *)0x5040000c)
#define PIO2_TXF0 (*(volatile uint32_t *)0x50400010)
#define PIO2_TXF1 (*(volatile uint32_t *)0x50400014)
#define PIO2_TXF2 (*(volatile uint32_t *)0x50400018)
#define PIO2_TXF3 (*(volatile uint32_t *)0x5040001c)
#define PIO2_RXF0 (*(volatile uint32_t *)0x50400020)
#define PIO2_RXF1 (*(volatile uint32_t *)0x50400024)
#define PIO2_RXF2 (*(volatile uint32_t *)0x50400028)
#define PIO2_RXF3 (*(volatile uint32_t *)0x5040002c)
#define PIO2_IRQ (*(volatile uint32_t *)0x50400030)
#define PIO2_IRQ_FORCE (*(volatile uint32_t *)0x50400034)
#define PIO2_INPUT_SYNC_BYPASS (*(volatile uint32_t *)0x50400038)
#define PIO2_DBG_PADOUT (*(volatile uint32_t *)0x5040003c)
#define PIO2_DBG_PADOE (*(volatile uint32_t *)0x50400040)
#define PIO2_DBG_CFGINFO (*(volatile uint32_t *)0x50400044)
#define PIO2_INSTR_MEM0 (*(volatile uint32_t *)0x50400048)
#define PIO2_INSTR_MEM1 (*(volatile uint32_t *)0x5040004c)
#define PIO2_INSTR_MEM2 (*(volatile uint32_t *)0x50400050)
#define PIO2_INSTR_MEM3 (*(volatile uint32_t *)0x50400054)
#define PIO2_INSTR_MEM4 (*(volatile uint32_t *)0x50400058)
#define PIO2_INSTR_MEM5 (*(volatile uint32_t *)0x5040005c)
#define PIO2_INSTR_MEM6 (*(volatile uint32_t *)0x50400060)
#define PIO2_INSTR_MEM7 (*(volatile uint32_t *)0x50400064)
#define PIO2_INSTR_MEM8 (*(volatile uint32_t *)0x50400068)
#define PIO2_INSTR_MEM9 (*(volatile uint32_t *)0x5040006c)
#define PIO2_INSTR_MEM10 (*(volatile uint32_t *)0x50400070)
#define PIO2_INSTR_MEM11 (*(volatile uint32_t *)0x50400074)
#define PIO2_INSTR_MEM12 (*(volatile uint32_t *)0x50400078)
#define PIO2_INSTR_MEM13 (*(volatile uint32_t *)0x5040007c)
#define PIO2_INSTR_MEM14 (*(volatile uint32_t *)0x50400080)
#define PIO2_INSTR_MEM15 (*(volatile uint32_t *)0x50400084)
#define PIO2_INSTR_MEM16 (*(volatile uint32_t *)0x50400088)
#define PIO2_INSTR_MEM17 (*(volatile uint32_t *)0x5040008c)
#define PIO2_INSTR_MEM18 (*(volatile uint32_t *)0x50400090)
#define PIO2_INSTR_MEM19 (*(volatile uint32_t *)0x50400094)
#define PIO2_INSTR_MEM20 (*(volatile uint32_t *)0x50400098)
#define PIO2_INSTR_MEM21 (*(volatile uint32_t *)0x5040009c)
#define PIO2_INSTR_MEM22 (*(volatile uint32_t *)0x504000a0)
#define PIO2_INSTR_MEM23 (*(volatile uint32_t *)0x504000a4)
#define PIO2_INSTR_MEM24 (*(volatile uint32_t *)0x504000a8)
#define PIO2_INSTR_MEM25 (*(volatile uint32_t *)0x504000ac)
#define PIO2_INSTR_MEM26 (*(volatile uint32_t *)0x504000b0)
#define PIO2_INSTR_MEM27 (*(volatile uint32_t *)0x504000b4)
#define PIO2_INSTR_MEM28 (*(volatile uint32_t *)0x504000b8)
#define PIO2_INSTR_MEM29 (*(volatile uint32_t *)0x504000bc)
#define PIO2_INSTR_MEM30 (*(volatile uint32_t *)0x504000c0)
#define PIO2_INSTR_MEM31 (*(volatile uint32_t *)0x504000c4)
#define PIO2_SM0_CLKDIV (*(volatile uint32_t *)0x504000c8)
#define PIO2_SM0_EXECCTRL (*(volatile uint32_t *)0x504000cc)
#define PIO2_SM0_SHIFTCTRL (*(volatile uint32_t *)0x504000d0)
#define PIO2_SM0_ADDR (*(volatile uint32_t *)0x504000d4)
#define PIO2_SM0_INSTR (*(volatile uint32_t *)0x504000d8)
#define PIO2_SM0_PINCTRL (*(volatile uint32_t *)0x504000dc)
#define PIO2_SM1_CLKDIV (*(volatile uint32_t *)0x504000e0)
#define PIO2_SM1_EXECCTRL (*(volatile uint32_t *)0x504000e4)
#define PIO2_SM1_SHIFTCTRL (*(volatile uint32_t *)0x504000e8)
#define PIO2_SM1_ADDR (*(volatile uint32_t *)0x504000ec)
#define PIO2_SM1_INSTR (*(volatile uint32_t *)0x504000f0)
#define PIO2_SM1_PINCTRL (*(volatile uint32_t *)0x504000f4)
#define PIO2_SM2_CLKDIV (*(volatile uint32_t *)0x504000f8)
#define PIO2_SM2_EXECCTRL (*(volatile uint32_t *)0x504000fc)
#define PIO2_SM2_SHIFTCTRL (*(volatile uint32_t *)0x50400100)
#define PIO2_SM2_ADDR (*(volatile uint32_t *)0x50400104)
#define PIO2_SM2_INSTR (*(volatile uint32_t *)0x50400108)
#define PIO2_SM2_PINCTRL (*(volatile uint32_t *)0x5040010c)
#define PIO2_SM3_CLKDIV (*(volatile uint32_t *)0x50400110)
#define PIO2_SM3_EXECCTRL (*(volatile uint32_t *)0x50400114)
#define PIO2_SM3_SHIFTCTRL (*(volatile uint32_t *)0x50400118)
#define PIO2_SM3_ADDR (*(volatile uint32_t *)0x5040011c)
#define PIO2_SM3_INSTR (*(volatile uint32_t *)0x50400120)
#define PIO2_SM3_PINCTRL (*(volatile uint32_t *)0x50400124)
#define PIO2_RXF0_PUTGET0 (*(volatile uint32_t *)0x50400128)
#define PIO2_RXF0_PUTGET1 (*(volatile uint32_t *)0x5040012c)
#define PIO2_RXF0_PUTGET2 (*(volatile uint32_t *)0x50400130)
#define PIO2_RXF0_PUTGET3 (*(volatile uint32_t *)0x50400134)
#define PIO2_RXF1_PUTGET0 (*(volatile uint32_t *)0x50400138)
#define PIO2_RXF1_PUTGET1 (*(volatile uint32_t *)0x5040013c)
#define PIO2_RXF1_PUTGET2 (*(volatile uint32_t *)0x50400140)
#define PIO2_RXF1_PUTGET3 (*(volatile uint32_t *)0x50400144)
#define PIO2_RXF2_PUTGET0 (*(volatile uint32_t *)0x50400148)
#define PIO2_RXF2_PUTGET1 (*(volatile uint32_t *)0x5040014c)
#define PIO2_RXF2_PUTGET2 (*(volatile uint32_t *)0x50400150)
#define PIO2_RXF2_PUTGET3 (*(volatile uint32_t *)0x50400154)
#define PIO2_RXF3_PUTGET0 (*(volatile uint32_t *)0x50400158)
#define PIO2_RXF3_PUTGET1 (*(volatile uint32_t *)0x5040015c)
#define PIO2_RXF3_PUTGET2 (*(volatile uint32_t *)0x50400160)
#define PIO2_RXF3_PUTGET3 (*(volatile uint32_t *)0x50400164)
#define PIO2_GPIOBASE (*(volatile uint32_t *)0x50400168)
#define PIO2_INTR (*(volatile uint32_t *)0x5040016c)
#define PIO2_IRQ0_INTE (*(volatile uint32_t *)0x50400170)
#define PIO2_IRQ0_INTF (*(volatile uint32_t *)0x50400174)
#define PIO2_IRQ0_INTS (*(volatile uint32_t *)0x50400178)
#define PIO2_IRQ1_INTE (*(volatile uint32_t *)0x5040017c)
#define PIO2_IRQ1_INTF (*(volatile uint32_t *)0x50400180)
#define PIO2_IRQ1_INTS (*(volatile uint32_t *)0x50400184)
#define PIO2_XOR_CTRL (*(volatile uint32_t *)0x50401000)
#define PIO2_XOR_FSTAT (*(volatile uint32_t *)0x50401004)
#define PIO2_XOR_FDEBUG (*(volatile uint32_t *)0x50401008)
#define PIO2_XOR_FLEVEL (*(volatile uint32_t *)0x5040100c)
#define PIO2_XOR_TXF0 (*(volatile uint32_t *)0x50401010)
#define PIO2_XOR_TXF1 (*(volatile uint32_t *)0x50401014)
#define PIO2_XOR_TXF2 (*(volatile uint32_t *)0x50401018)
#define PIO2_XOR_TXF3 (*(volatile uint32_t *)0x5040101c)
#define PIO2_XOR_RXF0 (*(volatile uint32_t *)0x50401020)
#define PIO2_XOR_RXF1 (*(volatile uint32_t *)0x50401024)
#define PIO2_XOR_RXF2 (*(volatile uint32_t *)0x50401028)
#define PIO2_XOR_RXF3 (*(volatile uint32_t *)0x5040102c)
#define PIO2_XOR_IRQ (*(volatile uint32_t *)0x50401030)
#define PIO2_XOR_IRQ_FORCE (*(volatile uint32_t *)0x50401034)
#define PIO2_XOR_INPUT_SYNC_BYPASS (*(volatile uint32_t *)0x50401038)
#define PIO2_XOR_DBG_PADOUT (*(volatile uint32_t *)0x5040103c)
#define PIO2_XOR_DBG_PADOE (*(volatile uint32_t *)0x50401040)
#define PIO2_XOR_DBG_CFGINFO (*(volatile uint32_t *)0x50401044)
#define PIO2_XOR_INSTR_MEM0 (*(volatile uint32_t *)0x50401048)
#define PIO2_XOR_INSTR_MEM1 (*(volatile uint32_t *)0x5040104c)
#define PIO2_XOR_INSTR_MEM2 (*(volatile uint32_t *)0x50401050)
#define PIO2_XOR_INSTR_MEM3 (*(volatile uint32_t *)0x50401054)
#define PIO2_XOR_INSTR_MEM4 (*(volatile uint32_t *)0x50401058)
#define PIO2_XOR_INSTR_MEM5 (*(volatile uint32_t *)0x5040105c)
#define PIO2_XOR_INSTR_MEM6 (*(volatile uint32_t *)0x50401060)
#define PIO2_XOR_INSTR_MEM7 (*(volatile uint32_t *)0x50401064)
#define PIO2_XOR_INSTR_MEM8 (*(volatile uint32_t *)0x50401068)
#define PIO2_XOR_INSTR_MEM9 (*(volatile uint32_t *)0x5040106c)
#define PIO2_XOR_INSTR_MEM10 (*(volatile uint32_t *)0x50401070)
#define PIO2_XOR_INSTR_MEM11 (*(volatile uint32_t *)0x50401074)
#define PIO2_XOR_INSTR_MEM12 (*(volatile uint32_t *)0x50401078)
#define PIO2_XOR_INSTR_MEM13 (*(volatile uint32_t *)0x5040107c)
#define PIO2_XOR_INSTR_MEM14 (*(volatile uint32_t *)0x50401080)
#define PIO2_XOR_INSTR_MEM15 (*(volatile uint32_t *)0x50401084)
#define PIO2_XOR_INSTR_MEM16 (*(volatile uint32_t *)0x50401088)
#define PIO2_XOR_INSTR_MEM17 (*(volatile uint32_t *)0x5040108c)
#define PIO2_XOR_INSTR_MEM18 (*(volatile uint32_t *)0x50401090)
#define PIO2_XOR_INSTR_MEM19 (*(volatile uint32_t *)0x50401094)
#define PIO2_XOR_INSTR_MEM20 (*(volatile uint32_t *)0x50401098)
#define PIO2_XOR_INSTR_MEM21 (*(volatile uint32_t *)0x5040109c)
#define PIO2_XOR_INSTR_MEM22 (*(volatile uint32_t *)0x504010a0)
#define PIO2_XOR_INSTR_MEM23 (*(volatile uint32_t *)0x504010a4)
#define PIO2_XOR_INSTR_MEM24 (*(volatile uint32_t *)0x504010a8)
#define PIO2_XOR_INSTR_MEM25 (*(volatile uint32_t *)0x504010ac)
#define PIO2_XOR_INSTR_MEM26 (*(volatile uint32_t *)0x504010b0)
#define PIO2_XOR_INSTR_MEM27 (*(volatile uint32_t *)0x504010b4)
#define PIO2_XOR_INSTR_MEM28 (*(volatile uint32_t *)0x504010b8)
#define PIO2_XOR_INSTR_MEM29 (*(volatile uint32_t *)0x504010bc)
#define PIO2_XOR_INSTR_MEM30 (*(volatile uint32_t *)0x504010c0)
#define PIO2_XOR_INSTR_MEM31 (*(volatile uint32_t *)0x504010c4)
#define PIO2_XOR_SM0_CLKDIV (*(volatile uint32_t *)0x504010c8)
#define PIO2_XOR_SM0_EXECCTRL (*(volatile uint32_t *)0x504010cc)
#define PIO2_XOR_SM0_SHIFTCTRL (*(volatile uint32_t *)0x504010d0)
#define PIO2_XOR_SM0_ADDR (*(volatile uint32_t *)0x504010d4)
#define PIO2_XOR_SM0_INSTR (*(volatile uint32_t *)0x504010d8)
#define PIO2_XOR_SM0_PINCTRL (*(volatile uint32_t *)0x504010dc)
#define PIO2_XOR_SM1_CLKDIV (*(volatile uint32_t *)0x504010e0)
#define PIO2_XOR_SM1_EXECCTRL (*(volatile uint32_t *)0x504010e4)
#define PIO2_XOR_SM1_SHIFTCTRL (*(volatile uint32_t *)0x504010e8)
#define PIO2_XOR_SM1_ADDR (*(volatile uint32_t *)0x504010ec)
#define PIO2_XOR_SM1_INSTR (*(volatile uint32_t *)0x504010f0)
#define PIO2_XOR_SM1_PINCTRL (*(volatile uint32_t *)0x504010f4)
#define PIO2_XOR_SM2_CLKDIV (*(volatile uint32_t *)0x504010f8)
#define PIO2_XOR_SM2_EXECCTRL (*(volatile uint32_t *)0x504010fc)
#define PIO2_XOR_SM2_SHIFTCTRL (*(volatile uint32_t *)0x50401100)
#define PIO2_XOR_SM2_ADDR (*(volatile uint32_t *)0x50401104)
#define PIO2_XOR_SM2_INSTR (*(volatile uint32_t *)0x50401108)
#define PIO2_XOR_SM2_PINCTRL (*(volatile uint32_t *)0x5040110c)
#define PIO2_XOR_SM3_CLKDIV (*(volatile uint32_t *)0x50401110)
#define PIO2_XOR_SM3_EXECCTRL (*(volatile uint32_t *)0x50401114)
#define PIO2_XOR_SM3_SHIFTCTRL (*(volatile uint32_t *)0x50401118)
#define PIO2_XOR_SM3_ADDR (*(volatile uint32_t *)0x5040111c)
#define PIO2_XOR_SM3_INSTR (*(volatile uint32_t *)0x50401120)
#define PIO2_XOR_SM3_PINCTRL (*(volatile uint32_t *)0x50401124)
#define PIO2_XOR_RXF0_PUTGET0 (*(volatile uint32_t *)0x50401128)
#define PIO2_XOR_RXF0_PUTGET1 (*(volatile uint32_t *)0x5040112c)
#define PIO2_XOR_RXF0_PUTGET2 (*(volatile uint32_t *)0x50401130)
#define PIO2_XOR_RXF0_PUTGET3 (*(volatile uint32_t *)0x50401134)
#define PIO2_XOR_RXF1_PUTGET0 (*(volatile uint32_t *)0x50401138)
#define PIO2_XOR_RXF1_PUTGET1 (*(volatile uint32_t *)0x5040113c)
#define PIO2_XOR_RXF1_PUTGET2 (*(volatile uint32_t *)0x50401140)
#define PIO2_XOR_RXF1_PUTGET3 (*(volatile uint32_t *)0x50401144)
#define PIO2_XOR_RXF2_PUTGET0 (*(volatile uint32_t *)0x50401148)
#define PIO2_XOR_RXF2_PUTGET1 (*(volatile uint32_t *)0x5040114c)
#define PIO2_XOR_RXF2_PUTGET2 (*(volatile uint32_t *)0x50401150)
#define PIO2_XOR_RXF2_PUTGET3 (*(volatile uint32_t *)0x50401154)
#define PIO2_XOR_RXF3_PUTGET0 (*(volatile uint32_t *)0x50401158)
#define PIO2_XOR_RXF3_PUTGET1 (*(volatile uint32_t *)0x5040115c)
#define PIO2_XOR_RXF3_PUTGET2 (*(volatile uint32_t *)0x50401160)
#define PIO2_XOR_RXF3_PUTGET3 (*(volatile uint32_t *)0x50401164)
#define PIO2_XOR_GPIOBASE (*(volatile uint32_t *)0x50401168)
#define PIO2_XOR_INTR (*(volatile uint32_t *)0x5040116c)
#define PIO2_XOR_IRQ0_INTE (*(volatile uint32_t *)0x50401170)
#define PIO2_XOR_IRQ0_INTF (*(volatile uint32_t *)0x50401174)
#define PIO2_XOR_IRQ0_INTS (*(volatile uint32_t *)0x50401178)
#define PIO2_XOR_IRQ1_INTE (*(volatile uint32_t *)0x5040117c)
#define PIO2_XOR_IRQ1_INTF (*(volatile uint32_t *)0x50401180)
#define PIO2_XOR_IRQ1_INTS (*(volatile uint32_t *)0x50401184)
#define PIO2_SET_CTRL (*(volatile uint32_t *)0x50402000)
#define PIO2_SET_FSTAT (*(volatile uint32_t *)0x50402004)
#define PIO2_SET_FDEBUG (*(volatile uint32_t *)0x50402008)
#define PIO2_SET_FLEVEL (*(volatile uint32_t *)0x5040200c)
#define PIO2_SET_TXF0 (*(volatile uint32_t *)0x50402010)
#define PIO2_SET_TXF1 (*(volatile uint32_t *)0x50402014)
#define PIO2_SET_TXF2 (*(volatile uint32_t *)0x50402018)
#define PIO2_SET_TXF3 (*(volatile uint32_t *)0x5040201c)
#define PIO2_SET_RXF0 (*(volatile uint32_t *)0x50402020)
#define PIO2_SET_RXF1 (*(volatile uint32_t *)0x50402024)
#define PIO2_SET_RXF2 (*(volatile uint32_t *)0x50402028)
#define PIO2_SET_RXF3 (*(volatile uint32_t *)0x5040202c)
#define PIO2_SET_IRQ (*(volatile uint32_t *)0x50402030)
#define PIO2_SET_IRQ_FORCE (*(volatile uint32_t *)0x50402034)
#define PIO2_SET_INPUT_SYNC_BYPASS (*(volatile uint32_t *)0x50402038)
#define PIO2_SET_DBG_PADOUT (*(volatile uint32_t *)0x5040203c)
#define PIO2_SET_DBG_PADOE (*(volatile uint32_t *)0x50402040)
#define PIO2_SET_DBG_CFGINFO (*(volatile uint32_t *)0x50402044)
#define PIO2_SET_INSTR_MEM0 (*(volatile uint32_t *)0x50402048)
#define PIO2_SET_INSTR_MEM1 (*(volatile uint32_t *)0x5040204c)
#define PIO2_SET_INSTR_MEM2 (*(volatile uint32_t *)0x50402050)
#define PIO2_SET_INSTR_MEM3 (*(volatile uint32_t *)0x50402054)
#define PIO2_SET_INSTR_MEM4 (*(volatile uint32_t *)0x50402058)
#define PIO2_SET_INSTR_MEM5 (*(volatile uint32_t *)0x5040205c)
#define PIO2_SET_INSTR_MEM6 (*(volatile uint32_t *)0x50402060)
#define PIO2_SET_INSTR_MEM7 (*(volatile uint32_t *)0x50402064)
#define PIO2_SET_INSTR_MEM8 (*(volatile uint32_t *)0x50402068)
#define PIO2_SET_INSTR_MEM9 (*(volatile uint32_t *)0x5040206c)
#define PIO2_SET_INSTR_MEM10 (*(volatile uint32_t *)0x50402070)
#define PIO2_SET_INSTR_MEM11 (*(volatile uint32_t *)0x50402074)
#define PIO2_SET_INSTR_MEM12 (*(volatile uint32_t *)0x50402078)
#define PIO2_SET_INSTR_MEM13 (*(volatile uint32_t *)0x5040207c)
#define PIO2_SET_INSTR_MEM14 (*(volatile uint32_t *)0x50402080)
#define PIO2_SET_INSTR_MEM15 (*(volatile uint32_t *)0x50402084)
#define PIO2_SET_INSTR_MEM16 (*(volatile uint32_t *)0x50402088)
#define PIO2_SET_INSTR_MEM17 (*(volatile uint32_t *)0x5040208c)
#define PIO2_SET_INSTR_MEM18 (*(volatile uint32_t *)0x50402090)
#define PIO2_SET_INSTR_MEM19 (*(volatile uint32_t *)0x50402094)
#define PIO2_SET_INSTR_MEM20 (*(volatile uint32_t *)0x50402098)
#define PIO2_SET_INSTR_MEM21 (*(volatile uint32_t *)0x5040209c)
#define PIO2_SET_INSTR_MEM22 (*(volatile uint32_t *)0x504020a0)
#define PIO2_SET_INSTR_MEM23 (*(volatile uint32_t *)0x504020a4)
#define PIO2_SET_INSTR_MEM24 (*(volatile uint32_t *)0x504020a8)
#define PIO2_SET_INSTR_MEM25 (*(volatile uint32_t *)0x504020ac)
#define PIO2_SET_INSTR_MEM26 (*(volatile uint32_t *)0x504020b0)
#define PIO2_SET_INSTR_MEM27 (*(volatile uint32_t *)0x504020b4)
#define PIO2_SET_INSTR_MEM28 (*(volatile uint32_t *)0x504020b8)
#define PIO2_SET_INSTR_MEM29 (*(volatile uint32_t *)0x504020bc)
#define PIO2_SET_INSTR_MEM30 (*(volatile uint32_t *)0x504020c0)
#define PIO2_SET_INSTR_MEM31 (*(volatile uint32_t *)0x504020c4)
#define PIO2_SET_SM0_CLKDIV (*(volatile uint32_t *)0x504020c8)
#define PIO2_SET_SM0_EXECCTRL (*(volatile uint32_t *)0x504020cc)
#define PIO2_SET_SM0_SHIFTCTRL (*(volatile uint32_t *)0x504020d0)
#define PIO2_SET_SM0_ADDR (*(volatile uint32_t *)0x504020d4)
#define PIO2_SET_SM0_INSTR (*(volatile uint32_t *)0x504020d8)
#define PIO2_SET_SM0_PINCTRL (*(volatile uint32_t *)0x504020dc)
#define PIO2_SET_SM1_CLKDIV (*(volatile uint32_t *)0x504020e0)
#define PIO2_SET_SM1_EXECCTRL (*(volatile uint32_t *)0x504020e4)
#define PIO2_SET_SM1_SHIFTCTRL (*(volatile uint32_t *)0x504020e8)
#define PIO2_SET_SM1_ADDR (*(volatile uint32_t *)0x504020ec)
#define PIO2_SET_SM1_INSTR (*(volatile uint32_t *)0x504020f0)
#define PIO2_SET_SM1_PINCTRL (*(volatile uint32_t *)0x504020f4)
#define PIO2_SET_SM2_CLKDIV (*(volatile uint32_t *)0x504020f8)
#define PIO2_SET_SM2_EXECCTRL (*(volatile uint32_t *)0x504020fc)
#define PIO2_SET_SM2_SHIFTCTRL (*(volatile uint32_t *)0x50402100)
#define PIO2_SET_SM2_ADDR (*(volatile uint32_t *)0x50402104)
#define PIO2_SET_SM2_INSTR (*(volatile uint32_t *)0x50402108)
#define PIO2_SET_SM2_PINCTRL (*(volatile uint32_t *)0x5040210c)
#define PIO2_SET_SM3_CLKDIV (*(volatile uint32_t *)0x50402110)
#define PIO2_SET_SM3_EXECCTRL (*(volatile uint32_t *)0x50402114)
#define PIO2_SET_SM3_SHIFTCTRL (*(volatile uint32_t *)0x50402118)
#define PIO2_SET_SM3_ADDR (*(volatile uint32_t *)0x5040211c)
#define PIO2_SET_SM3_INSTR (*(volatile uint32_t *)0x50402120)
#define PIO2_SET_SM3_PINCTRL (*(volatile uint32_t *)0x50402124)
#define PIO2_SET_RXF0_PUTGET0 (*(volatile uint32_t *)0x50402128)
#define PIO2_SET_RXF0_PUTGET1 (*(volatile uint32_t *)0x5040212c)
#define PIO2_SET_RXF0_PUTGET2 (*(volatile uint32_t *)0x50402130)
#define PIO2_SET_RXF0_PUTGET3 (*(volatile uint32_t *)0x50402134)
#define PIO2_SET_RXF1_PUTGET0 (*(volatile uint32_t *)0x50402138)
#define PIO2_SET_RXF1_PUTGET1 (*(volatile uint32_t *)0x5040213c)
#define PIO2_SET_RXF1_PUTGET2 (*(volatile uint32_t *)0x50402140)
#define PIO2_SET_RXF1_PUTGET3 (*(volatile uint32_t *)0x50402144)
#define PIO2_SET_RXF2_PUTGET0 (*(volatile uint32_t *)0x50402148)
#define PIO2_SET_RXF2_PUTGET1 (*(volatile uint32_t *)0x5040214c)
#define PIO2_SET_RXF2_PUTGET2 (*(volatile uint32_t *)0x50402150)
#define PIO2_SET_RXF2_PUTGET3 (*(volatile uint32_t *)0x50402154)
#define PIO2_SET_RXF3_PUTGET0 (*(volatile uint32_t *)0x50402158)
#define PIO2_SET_RXF3_PUTGET1 (*(volatile uint32_t *)0x5040215c)
#define PIO2_SET_RXF3_PUTGET2 (*(volatile uint32_t *)0x50402160)
#define PIO2_SET_RXF3_PUTGET3 (*(volatile uint32_t *)0x50402164)
#define PIO2_SET_GPIOBASE (*(volatile uint32_t *)0x50402168)
#define PIO2_SET_INTR (*(volatile uint32_t *)0x5040216c)
#define PIO2_SET_IRQ0_INTE (*(volatile uint32_t *)0x50402170)
#define PIO2_SET_IRQ0_INTF (*(volatile uint32_t *)0x50402174)
#define PIO2_SET_IRQ0_INTS (*(volatile uint32_t *)0x50402178)
#define PIO2_SET_IRQ1_INTE (*(volatile uint32_t *)0x5040217c)
#define PIO2_SET_IRQ1_INTF (*(volatile uint32_t *)0x50402180)
#define PIO2_SET_IRQ1_INTS (*(volatile uint32_t *)0x50402184)
#define PIO2_CLR_CTRL (*(volatile uint32_t *)0x50403000)
#define PIO2_CLR_FSTAT (*(volatile uint32_t *)0x50403004)
#define PIO2_CLR_FDEBUG (*(volatile uint32_t *)0x50403008)
#define PIO2_CLR_FLEVEL (*(volatile uint32_t *)0x5040300c)
#define PIO2_CLR_TXF0 (*(volatile uint32_t *)0x50403010)
#define PIO2_CLR_TXF1 (*(volatile uint32_t *)0x50403014)
#define PIO2_CLR_TXF2 (*(volatile uint32_t *)0x50403018)
#define PIO2_CLR_TXF3 (*(volatile uint32_t *)0x5040301c)
#define PIO2_CLR_RXF0 (*(volatile uint32_t *)0x50403020)
#define PIO2_CLR_RXF1 (*(volatile uint32_t *)0x50403024)
#define PIO2_CLR_RXF2 (*(volatile uint32_t *)0x50403028)
#define PIO2_CLR_RXF3 (*(volatile uint32_t *)0x5040302c)
#define PIO2_CLR_IRQ (*(volatile uint32_t *)0x50403030)
#define PIO2_CLR_IRQ_FORCE (*(volatile uint32_t *)0x50403034)
#define PIO2_CLR_INPUT_SYNC_BYPASS (*(volatile uint32_t *)0x50403038)
#define PIO2_CLR_DBG_PADOUT (*(volatile uint32_t *)0x5040303c)
#define PIO2_CLR_DBG_PADOE (*(volatile uint32_t *)0x50403040)
#define PIO2_CLR_DBG_CFGINFO (*(volatile uint32_t *)0x50403044)
#define PIO2_CLR_INSTR_MEM0 (*(volatile uint32_t *)0x50403048)
#define PIO2_CLR_INSTR_MEM1 (*(volatile uint32_t *)0x5040304c)
#define PIO2_CLR_INSTR_MEM2 (*(volatile uint32_t *)0x50403050)
#define PIO2_CLR_INSTR_MEM3 (*(volatile uint32_t *)0x50403054)
#define PIO2_CLR_INSTR_MEM4 (*(volatile uint32_t *)0x50403058)
#define PIO2_CLR_INSTR_MEM5 (*(volatile uint32_t *)0x5040305c)
#define PIO2_CLR_INSTR_MEM6 (*(volatile uint32_t *)0x50403060)
#define PIO2_CLR_INSTR_MEM7 (*(volatile uint32_t *)0x50403064)
#define PIO2_CLR_INSTR_MEM8 (*(volatile uint32_t *)0x50403068)
#define PIO2_CLR_INSTR_MEM9 (*(volatile uint32_t *)0x5040306c)
#define PIO2_CLR_INSTR_MEM10 (*(volatile uint32_t *)0x50403070)
#define PIO2_CLR_INSTR_MEM11 (*(volatile uint32_t *)0x50403074)
#define PIO2_CLR_INSTR_MEM12 (*(volatile uint32_t *)0x50403078)
#define PIO2_CLR_INSTR_MEM13 (*(volatile uint32_t *)0x5040307c)
#define PIO2_CLR_INSTR_MEM14 (*(volatile uint32_t *)0x50403080)
#define PIO2_CLR_INSTR_MEM15 (*(volatile uint32_t *)0x50403084)
#define PIO2_CLR_INSTR_MEM16 (*(volatile uint32_t *)0x50403088)
#define PIO2_CLR_INSTR_MEM17 (*(volatile uint32_t *)0x5040308c)
#define PIO2_CLR_INSTR_MEM18 (*(volatile uint32_t *)0x50403090)
#define PIO2_CLR_INSTR_MEM19 (*(volatile uint32_t *)0x50403094)
#define PIO2_CLR_INSTR_MEM20 (*(volatile uint32_t *)0x50403098)
#define PIO2_CLR_INSTR_MEM21 (*(volatile uint32_t *)0x5040309c)
#define PIO2_CLR_INSTR_MEM22 (*(volatile uint32_t *)0x504030a0)
#define PIO2_CLR_INSTR_MEM23 (*(volatile uint32_t *)0x504030a4)
#define PIO2_CLR_INSTR_MEM24 (*(volatile uint32_t *)0x504030a8)
#define PIO2_CLR_INSTR_MEM25 (*(volatile uint32_t *)0x504030ac)
#define PIO2_CLR_INSTR_MEM26 (*(volatile uint32_t *)0x504030b0)
#define PIO2_CLR_INSTR_MEM27 (*(volatile uint32_t *)0x504030b4)
#define PIO2_CLR_INSTR_MEM28 (*(volatile uint32_t *)0x504030b8)
#define PIO2_CLR_INSTR_MEM29 (*(volatile uint32_t *)0x504030bc)
#define PIO2_CLR_INSTR_MEM30 (*(volatile uint32_t *)0x504030c0)
#define PIO2_CLR_INSTR_MEM31 (*(volatile uint32_t *)0x504030c4)
#define PIO2_CLR_SM0_CLKDIV (*(volatile uint32_t *)0x504030c8)
#define PIO2_CLR_SM0_EXECCTRL (*(volatile uint32_t *)0x504030cc)
#define PIO2_CLR_SM0_SHIFTCTRL (*(volatile uint32_t *)0x504030d0)
#define PIO2_CLR_SM0_ADDR (*(volatile uint32_t *)0x504030d4)
#define PIO2_CLR_SM0_INSTR (*(volatile uint32_t *)0x504030d8)
#define PIO2_CLR_SM0_PINCTRL (*(volatile uint32_t *)0x504030dc)
#define PIO2_CLR_SM1_CLKDIV (*(volatile uint32_t *)0x504030e0)
#define PIO2_CLR_SM1_EXECCTRL (*(volatile uint32_t *)0x504030e4)
#define PIO2_CLR_SM1_SHIFTCTRL (*(volatile uint32_t *)0x504030e8)
#define PIO2_CLR_SM1_ADDR (*(volatile uint32_t *)0x504030ec)
#define PIO2_CLR_SM1_INSTR (*(volatile uint32_t *)0x504030f0)
#define PIO2_CLR_SM1_PINCTRL (*(volatile uint32_t *)0x504030f4)
#define PIO2_CLR_SM2_CLKDIV (*(volatile uint32_t *)0x504030f8)
#define PIO2_CLR_SM2_EXECCTRL (*(volatile uint32_t *)0x504030fc)
#define PIO2_CLR_SM2_SHIFTCTRL (*(volatile uint32_t *)0x50403100)
#define PIO2_CLR_SM2_ADDR (*(volatile uint32_t *)0x50403104)
#define PIO2_CLR_SM2_INSTR (*(volatile uint32_t *)0x50403108)
#define PIO2_CLR_SM2_PINCTRL (*(volatile uint32_t *)0x5040310c)
#define PIO2_CLR_SM3_CLKDIV (*(volatile uint32_t *)0x50403110)
#define PIO2_CLR_SM3_EXECCTRL (*(volatile uint32_t *)0x50403114)
#define PIO2_CLR_SM3_SHIFTCTRL (*(volatile uint32_t *)0x50403118)
#define PIO2_CLR_SM3_ADDR (*(volatile uint32_t *)0x5040311c)
#define PIO2_CLR_SM3_INSTR (*(volatile uint32_t *)0x50403120)
#define PIO2_CLR_SM3_PINCTRL (*(volatile uint32_t *)0x50403124)
#define PIO2_CLR_RXF0_PUTGET0 (*(volatile uint32_t *)0x50403128)
#define PIO2_CLR_RXF0_PUTGET1 (*(volatile uint32_t *)0x5040312c)
#define PIO2_CLR_RXF0_PUTGET2 (*(volatile uint32_t *)0x50403130)
#define PIO2_CLR_RXF0_PUTGET3 (*(volatile uint32_t *)0x50403134)
#define PIO2_CLR_RXF1_PUTGET0 (*(volatile uint32_t *)0x50403138)
#define PIO2_CLR_RXF1_PUTGET1 (*(volatile uint32_t *)0x5040313c)
#define PIO2_CLR_RXF1_PUTGET2 (*(volatile uint32_t *)0x50403140)
#define PIO2_CLR_RXF1_PUTGET3 (*(volatile uint32_t *)0x50403144)
#define PIO2_CLR_RXF2_PUTGET0 (*(volatile uint32_t *)0x50403148)
#define PIO2_CLR_RXF2_PUTGET1 (*(volatile uint32_t *)0x5040314c)
#define PIO2_CLR_RXF2_PUTGET2 (*(volatile uint32_t *)0x50403150)
#define PIO2_CLR_RXF2_PUTGET3 (*(volatile uint32_t *)0x50403154)
#define PIO2_CLR_RXF3_PUTGET0 (*(volatile uint32_t *)0x50403158)
#define PIO2_CLR_RXF3_PUTGET1 (*(volatile uint32_t *)0x5040315c)
#define PIO2_CLR_RXF3_PUTGET2 (*(volatile uint32_t *)0x50403160)
#define PIO2_CLR_RXF3_PUTGET3 (*(volatile uint32_t *)0x50403164)
#define PIO2_CLR_GPIOBASE (*(volatile uint32_t *)0x50403168)
#define PIO2_CLR_INTR (*(volatile uint32_t *)0x5040316c)
#define PIO2_CLR_IRQ0_INTE (*(volatile uint32_t *)0x50403170)
#define PIO2_CLR_IRQ0_INTF (*(volatile uint32_t *)0x50403174)
#define PIO2_CLR_IRQ0_INTS (*(volatile uint32_t *)0x50403178)
#define PIO2_CLR_IRQ1_INTE (*(volatile uint32_t *)0x5040317c)
#define PIO2_CLR_IRQ1_INTF (*(volatile uint32_t *)0x50403180)
#define PIO2_CLR_IRQ1_INTS (*(volatile uint32_t *)0x50403184)

/*CTRL Register macros*/

#define PIO0_CTRL_NEXTPREV_CLKDIV_RESTART(v) (((v)&0x1)<<26)
#define PIO0_CTRL_NEXTPREV_CLKDIV_RESTART_MASK PIO0_CTRL_NEXTPREV_CLKDIV_RESTART(ALL1)
#define PIO0_CTRL_NEXTPREV_SM_DISABLE(v) (((v)&0x1)<<25)
#define PIO0_CTRL_NEXTPREV_SM_DISABLE_MASK PIO0_CTRL_NEXTPREV_SM_DISABLE(ALL1)
#define PIO0_CTRL_NEXTPREV_SM_ENABLE(v) (((v)&0x1)<<24)
#define PIO0_CTRL_NEXTPREV_SM_ENABLE_MASK PIO0_CTRL_NEXTPREV_SM_ENABLE(ALL1)
#define PIO0_CTRL_NEXT_PIO_MASK(v) (((v)&0xf)<<20)
#define PIO0_CTRL_NEXT_PIO_MASK_MASK PIO0_CTRL_NEXT_PIO_MASK(ALL1)
#define PIO0_CTRL_PREV_PIO_MASK(v) (((v)&0xf)<<16)
#define PIO0_CTRL_PREV_PIO_MASK_MASK PIO0_CTRL_PREV_PIO_MASK(ALL1)
#define PIO0_CTRL_CLKDIV_RESTART(v) (((v)&0xf)<<8)
#define PIO0_CTRL_CLKDIV_RESTART_MASK PIO0_CTRL_CLKDIV_RESTART(ALL1)
#define PIO0_CTRL_SM_RESTART(v) (((v)&0xf)<<4)
#define PIO0_CTRL_SM_RESTART_MASK PIO0_CTRL_SM_RESTART(ALL1)
#define PIO0_CTRL_SM_ENABLE(v) (((v)&0xf)<<0)
#define PIO0_CTRL_SM_ENABLE_MASK PIO0_CTRL_SM_ENABLE(ALL1)

/*FSTAT Register macros*/

#define PIO0_FSTAT_TXEMPTY(v) (((v)&0xf)<<24)
#define PIO0_FSTAT_TXEMPTY_MASK PIO0_FSTAT_TXEMPTY(ALL1)
#define PIO0_FSTAT_TXFULL(v) (((v)&0xf)<<16)
#define PIO0_FSTAT_TXFULL_MASK PIO0_FSTAT_TXFULL(ALL1)
#define PIO0_FSTAT_RXEMPTY(v) (((v)&0xf)<<8)
#define PIO0_FSTAT_RXEMPTY_MASK PIO0_FSTAT_RXEMPTY(ALL1)
#define PIO0_FSTAT_RXFULL(v) (((v)&0xf)<<0)
#define PIO0_FSTAT_RXFULL_MASK PIO0_FSTAT_RXFULL(ALL1)

/*FDEBUG Register macros*/

#define PIO0_FDEBUG_TXSTALL(v) (((v)&0xf)<<24)
#define PIO0_FDEBUG_TXSTALL_MASK PIO0_FDEBUG_TXSTALL(ALL1)
#define PIO0_FDEBUG_TXOVER(v) (((v)&0xf)<<16)
#define PIO0_FDEBUG_TXOVER_MASK PIO0_FDEBUG_TXOVER(ALL1)
#define PIO0_FDEBUG_RXUNDER(v) (((v)&0xf)<<8)
#define PIO0_FDEBUG_RXUNDER_MASK PIO0_FDEBUG_RXUNDER(ALL1)
#define PIO0_FDEBUG_RXSTALL(v) (((v)&0xf)<<0)
#define PIO0_FDEBUG_RXSTALL_MASK PIO0_FDEBUG_RXSTALL(ALL1)

/*FLEVEL Register macros*/

#define PIO0_FLEVEL_RX3(v) (((v)&0xf)<<28)
#define PIO0_FLEVEL_RX3_MASK PIO0_FLEVEL_RX3(ALL1)
#define PIO0_FLEVEL_TX3(v) (((v)&0xf)<<24)
#define PIO0_FLEVEL_TX3_MASK PIO0_FLEVEL_TX3(ALL1)
#define PIO0_FLEVEL_RX2(v) (((v)&0xf)<<20)
#define PIO0_FLEVEL_RX2_MASK PIO0_FLEVEL_RX2(ALL1)
#define PIO0_FLEVEL_TX2(v) (((v)&0xf)<<16)
#define PIO0_FLEVEL_TX2_MASK PIO0_FLEVEL_TX2(ALL1)
#define PIO0_FLEVEL_RX1(v) (((v)&0xf)<<12)
#define PIO0_FLEVEL_RX1_MASK PIO0_FLEVEL_RX1(ALL1)
#define PIO0_FLEVEL_TX1(v) (((v)&0xf)<<8)
#define PIO0_FLEVEL_TX1_MASK PIO0_FLEVEL_TX1(ALL1)
#define PIO0_FLEVEL_RX0(v) (((v)&0xf)<<4)
#define PIO0_FLEVEL_RX0_MASK PIO0_FLEVEL_RX0(ALL1)
#define PIO0_FLEVEL_TX0(v) (((v)&0xf)<<0)
#define PIO0_FLEVEL_TX0_MASK PIO0_FLEVEL_TX0(ALL1)

/*TXF0 Register macros*/


/*TXF1 Register macros*/


/*TXF2 Register macros*/


/*TXF3 Register macros*/


/*RXF0 Register macros*/


/*RXF1 Register macros*/


/*RXF2 Register macros*/


/*RXF3 Register macros*/


/*IRQ Register macros*/


/*IRQ_FORCE Register macros*/


/*INPUT_SYNC_BYPASS Register macros*/


/*DBG_PADOUT Register macros*/


/*DBG_PADOE Register macros*/


/*DBG_CFGINFO Register macros*/

#define PIO0_DBG_CFGINFO_VERSION(v) (((v)&0xf)<<28)
#define PIO0_DBG_CFGINFO_VERSION_MASK PIO0_DBG_CFGINFO_VERSION(ALL1)
#define PIO0_DBG_CFGINFO_IMEM_SIZE(v) (((v)&0x3f)<<16)
#define PIO0_DBG_CFGINFO_IMEM_SIZE_MASK PIO0_DBG_CFGINFO_IMEM_SIZE(ALL1)
#define PIO0_DBG_CFGINFO_SM_COUNT(v) (((v)&0xf)<<8)
#define PIO0_DBG_CFGINFO_SM_COUNT_MASK PIO0_DBG_CFGINFO_SM_COUNT(ALL1)
#define PIO0_DBG_CFGINFO_FIFO_DEPTH(v) (((v)&0x3f)<<0)
#define PIO0_DBG_CFGINFO_FIFO_DEPTH_MASK PIO0_DBG_CFGINFO_FIFO_DEPTH(ALL1)

/*INSTR_MEM0 Register macros*/


/*INSTR_MEM1 Register macros*/


/*INSTR_MEM2 Register macros*/


/*INSTR_MEM3 Register macros*/


/*INSTR_MEM4 Register macros*/


/*INSTR_MEM5 Register macros*/


/*INSTR_MEM6 Register macros*/


/*INSTR_MEM7 Register macros*/


/*INSTR_MEM8 Register macros*/


/*INSTR_MEM9 Register macros*/


/*INSTR_MEM10 Register macros*/


/*INSTR_MEM11 Register macros*/


/*INSTR_MEM12 Register macros*/


/*INSTR_MEM13 Register macros*/


/*INSTR_MEM14 Register macros*/


/*INSTR_MEM15 Register macros*/


/*INSTR_MEM16 Register macros*/


/*INSTR_MEM17 Register macros*/


/*INSTR_MEM18 Register macros*/


/*INSTR_MEM19 Register macros*/


/*INSTR_MEM20 Register macros*/


/*INSTR_MEM21 Register macros*/


/*INSTR_MEM22 Register macros*/


/*INSTR_MEM23 Register macros*/


/*INSTR_MEM24 Register macros*/


/*INSTR_MEM25 Register macros*/


/*INSTR_MEM26 Register macros*/


/*INSTR_MEM27 Register macros*/


/*INSTR_MEM28 Register macros*/


/*INSTR_MEM29 Register macros*/


/*INSTR_MEM30 Register macros*/


/*INSTR_MEM31 Register macros*/


/*SM0_CLKDIV Register macros*/

#define PIO0_SM0_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO0_SM0_CLKDIV_INT_MASK PIO0_SM0_CLKDIV_INT(ALL1)
#define PIO0_SM0_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO0_SM0_CLKDIV_FRAC_MASK PIO0_SM0_CLKDIV_FRAC(ALL1)

/*SM0_EXECCTRL Register macros*/

#define PIO0_SM0_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO0_SM0_EXECCTRL_EXEC_STALLED_MASK PIO0_SM0_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO0_SM0_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO0_SM0_EXECCTRL_SIDE_EN_MASK PIO0_SM0_EXECCTRL_SIDE_EN(ALL1)
#define PIO0_SM0_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO0_SM0_EXECCTRL_SIDE_PINDIR_MASK PIO0_SM0_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO0_SM0_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO0_SM0_EXECCTRL_JMP_PIN_MASK PIO0_SM0_EXECCTRL_JMP_PIN(ALL1)
#define PIO0_SM0_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO0_SM0_EXECCTRL_OUT_EN_SEL_MASK PIO0_SM0_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO0_SM0_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO0_SM0_EXECCTRL_INLINE_OUT_EN_MASK PIO0_SM0_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO0_SM0_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO0_SM0_EXECCTRL_OUT_STICKY_MASK PIO0_SM0_EXECCTRL_OUT_STICKY(ALL1)
#define PIO0_SM0_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO0_SM0_EXECCTRL_WRAP_TOP_MASK PIO0_SM0_EXECCTRL_WRAP_TOP(ALL1)
#define PIO0_SM0_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO0_SM0_EXECCTRL_WRAP_BOTTOM_MASK PIO0_SM0_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO0_SM0_EXECCTRL_STATUS_SEL(v) (((v)&0x3)<<5)
#define PIO0_SM0_EXECCTRL_STATUS_SEL_MASK PIO0_SM0_EXECCTRL_STATUS_SEL(ALL1)
#define PIO0_SM0_EXECCTRL_STATUS_N(v) (((v)&0x1f)<<0)
#define PIO0_SM0_EXECCTRL_STATUS_N_MASK PIO0_SM0_EXECCTRL_STATUS_N(ALL1)

/*SM0_SHIFTCTRL Register macros*/

#define PIO0_SM0_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO0_SM0_SHIFTCTRL_FJOIN_RX_MASK PIO0_SM0_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO0_SM0_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO0_SM0_SHIFTCTRL_FJOIN_TX_MASK PIO0_SM0_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO0_SM0_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO0_SM0_SHIFTCTRL_PULL_THRESH_MASK PIO0_SM0_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO0_SM0_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO0_SM0_SHIFTCTRL_PUSH_THRESH_MASK PIO0_SM0_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO0_SM0_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO0_SM0_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO0_SM0_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO0_SM0_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO0_SM0_SHIFTCTRL_IN_SHIFTDIR_MASK PIO0_SM0_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO0_SM0_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO0_SM0_SHIFTCTRL_AUTOPULL_MASK PIO0_SM0_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO0_SM0_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO0_SM0_SHIFTCTRL_AUTOPUSH_MASK PIO0_SM0_SHIFTCTRL_AUTOPUSH(ALL1)
#define PIO0_SM0_SHIFTCTRL_FJOIN_RX_PUT(v) (((v)&0x1)<<15)
#define PIO0_SM0_SHIFTCTRL_FJOIN_RX_PUT_MASK PIO0_SM0_SHIFTCTRL_FJOIN_RX_PUT(ALL1)
#define PIO0_SM0_SHIFTCTRL_FJOIN_RX_GET(v) (((v)&0x1)<<14)
#define PIO0_SM0_SHIFTCTRL_FJOIN_RX_GET_MASK PIO0_SM0_SHIFTCTRL_FJOIN_RX_GET(ALL1)
#define PIO0_SM0_SHIFTCTRL_IN_COUNT(v) (((v)&0x1f)<<0)
#define PIO0_SM0_SHIFTCTRL_IN_COUNT_MASK PIO0_SM0_SHIFTCTRL_IN_COUNT(ALL1)

/*SM0_ADDR Register macros*/


/*SM0_INSTR Register macros*/


/*SM0_PINCTRL Register macros*/

#define PIO0_SM0_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO0_SM0_PINCTRL_SIDESET_COUNT_MASK PIO0_SM0_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO0_SM0_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO0_SM0_PINCTRL_SET_COUNT_MASK PIO0_SM0_PINCTRL_SET_COUNT(ALL1)
#define PIO0_SM0_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO0_SM0_PINCTRL_OUT_COUNT_MASK PIO0_SM0_PINCTRL_OUT_COUNT(ALL1)
#define PIO0_SM0_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO0_SM0_PINCTRL_IN_BASE_MASK PIO0_SM0_PINCTRL_IN_BASE(ALL1)
#define PIO0_SM0_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO0_SM0_PINCTRL_SIDESET_BASE_MASK PIO0_SM0_PINCTRL_SIDESET_BASE(ALL1)
#define PIO0_SM0_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO0_SM0_PINCTRL_SET_BASE_MASK PIO0_SM0_PINCTRL_SET_BASE(ALL1)
#define PIO0_SM0_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO0_SM0_PINCTRL_OUT_BASE_MASK PIO0_SM0_PINCTRL_OUT_BASE(ALL1)

/*SM1_CLKDIV Register macros*/

#define PIO0_SM1_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO0_SM1_CLKDIV_INT_MASK PIO0_SM1_CLKDIV_INT(ALL1)
#define PIO0_SM1_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO0_SM1_CLKDIV_FRAC_MASK PIO0_SM1_CLKDIV_FRAC(ALL1)

/*SM1_EXECCTRL Register macros*/

#define PIO0_SM1_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO0_SM1_EXECCTRL_EXEC_STALLED_MASK PIO0_SM1_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO0_SM1_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO0_SM1_EXECCTRL_SIDE_EN_MASK PIO0_SM1_EXECCTRL_SIDE_EN(ALL1)
#define PIO0_SM1_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO0_SM1_EXECCTRL_SIDE_PINDIR_MASK PIO0_SM1_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO0_SM1_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO0_SM1_EXECCTRL_JMP_PIN_MASK PIO0_SM1_EXECCTRL_JMP_PIN(ALL1)
#define PIO0_SM1_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO0_SM1_EXECCTRL_OUT_EN_SEL_MASK PIO0_SM1_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO0_SM1_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO0_SM1_EXECCTRL_INLINE_OUT_EN_MASK PIO0_SM1_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO0_SM1_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO0_SM1_EXECCTRL_OUT_STICKY_MASK PIO0_SM1_EXECCTRL_OUT_STICKY(ALL1)
#define PIO0_SM1_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO0_SM1_EXECCTRL_WRAP_TOP_MASK PIO0_SM1_EXECCTRL_WRAP_TOP(ALL1)
#define PIO0_SM1_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO0_SM1_EXECCTRL_WRAP_BOTTOM_MASK PIO0_SM1_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO0_SM1_EXECCTRL_STATUS_SEL(v) (((v)&0x3)<<5)
#define PIO0_SM1_EXECCTRL_STATUS_SEL_MASK PIO0_SM1_EXECCTRL_STATUS_SEL(ALL1)
#define PIO0_SM1_EXECCTRL_STATUS_N(v) (((v)&0x1f)<<0)
#define PIO0_SM1_EXECCTRL_STATUS_N_MASK PIO0_SM1_EXECCTRL_STATUS_N(ALL1)

/*SM1_SHIFTCTRL Register macros*/

#define PIO0_SM1_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO0_SM1_SHIFTCTRL_FJOIN_RX_MASK PIO0_SM1_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO0_SM1_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO0_SM1_SHIFTCTRL_FJOIN_TX_MASK PIO0_SM1_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO0_SM1_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO0_SM1_SHIFTCTRL_PULL_THRESH_MASK PIO0_SM1_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO0_SM1_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO0_SM1_SHIFTCTRL_PUSH_THRESH_MASK PIO0_SM1_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO0_SM1_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO0_SM1_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO0_SM1_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO0_SM1_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO0_SM1_SHIFTCTRL_IN_SHIFTDIR_MASK PIO0_SM1_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO0_SM1_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO0_SM1_SHIFTCTRL_AUTOPULL_MASK PIO0_SM1_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO0_SM1_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO0_SM1_SHIFTCTRL_AUTOPUSH_MASK PIO0_SM1_SHIFTCTRL_AUTOPUSH(ALL1)
#define PIO0_SM1_SHIFTCTRL_FJOIN_RX_PUT(v) (((v)&0x1)<<15)
#define PIO0_SM1_SHIFTCTRL_FJOIN_RX_PUT_MASK PIO0_SM1_SHIFTCTRL_FJOIN_RX_PUT(ALL1)
#define PIO0_SM1_SHIFTCTRL_FJOIN_RX_GET(v) (((v)&0x1)<<14)
#define PIO0_SM1_SHIFTCTRL_FJOIN_RX_GET_MASK PIO0_SM1_SHIFTCTRL_FJOIN_RX_GET(ALL1)
#define PIO0_SM1_SHIFTCTRL_IN_COUNT(v) (((v)&0x1f)<<0)
#define PIO0_SM1_SHIFTCTRL_IN_COUNT_MASK PIO0_SM1_SHIFTCTRL_IN_COUNT(ALL1)

/*SM1_ADDR Register macros*/


/*SM1_INSTR Register macros*/


/*SM1_PINCTRL Register macros*/

#define PIO0_SM1_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO0_SM1_PINCTRL_SIDESET_COUNT_MASK PIO0_SM1_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO0_SM1_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO0_SM1_PINCTRL_SET_COUNT_MASK PIO0_SM1_PINCTRL_SET_COUNT(ALL1)
#define PIO0_SM1_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO0_SM1_PINCTRL_OUT_COUNT_MASK PIO0_SM1_PINCTRL_OUT_COUNT(ALL1)
#define PIO0_SM1_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO0_SM1_PINCTRL_IN_BASE_MASK PIO0_SM1_PINCTRL_IN_BASE(ALL1)
#define PIO0_SM1_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO0_SM1_PINCTRL_SIDESET_BASE_MASK PIO0_SM1_PINCTRL_SIDESET_BASE(ALL1)
#define PIO0_SM1_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO0_SM1_PINCTRL_SET_BASE_MASK PIO0_SM1_PINCTRL_SET_BASE(ALL1)
#define PIO0_SM1_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO0_SM1_PINCTRL_OUT_BASE_MASK PIO0_SM1_PINCTRL_OUT_BASE(ALL1)

/*SM2_CLKDIV Register macros*/

#define PIO0_SM2_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO0_SM2_CLKDIV_INT_MASK PIO0_SM2_CLKDIV_INT(ALL1)
#define PIO0_SM2_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO0_SM2_CLKDIV_FRAC_MASK PIO0_SM2_CLKDIV_FRAC(ALL1)

/*SM2_EXECCTRL Register macros*/

#define PIO0_SM2_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO0_SM2_EXECCTRL_EXEC_STALLED_MASK PIO0_SM2_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO0_SM2_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO0_SM2_EXECCTRL_SIDE_EN_MASK PIO0_SM2_EXECCTRL_SIDE_EN(ALL1)
#define PIO0_SM2_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO0_SM2_EXECCTRL_SIDE_PINDIR_MASK PIO0_SM2_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO0_SM2_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO0_SM2_EXECCTRL_JMP_PIN_MASK PIO0_SM2_EXECCTRL_JMP_PIN(ALL1)
#define PIO0_SM2_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO0_SM2_EXECCTRL_OUT_EN_SEL_MASK PIO0_SM2_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO0_SM2_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO0_SM2_EXECCTRL_INLINE_OUT_EN_MASK PIO0_SM2_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO0_SM2_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO0_SM2_EXECCTRL_OUT_STICKY_MASK PIO0_SM2_EXECCTRL_OUT_STICKY(ALL1)
#define PIO0_SM2_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO0_SM2_EXECCTRL_WRAP_TOP_MASK PIO0_SM2_EXECCTRL_WRAP_TOP(ALL1)
#define PIO0_SM2_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO0_SM2_EXECCTRL_WRAP_BOTTOM_MASK PIO0_SM2_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO0_SM2_EXECCTRL_STATUS_SEL(v) (((v)&0x3)<<5)
#define PIO0_SM2_EXECCTRL_STATUS_SEL_MASK PIO0_SM2_EXECCTRL_STATUS_SEL(ALL1)
#define PIO0_SM2_EXECCTRL_STATUS_N(v) (((v)&0x1f)<<0)
#define PIO0_SM2_EXECCTRL_STATUS_N_MASK PIO0_SM2_EXECCTRL_STATUS_N(ALL1)

/*SM2_SHIFTCTRL Register macros*/

#define PIO0_SM2_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO0_SM2_SHIFTCTRL_FJOIN_RX_MASK PIO0_SM2_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO0_SM2_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO0_SM2_SHIFTCTRL_FJOIN_TX_MASK PIO0_SM2_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO0_SM2_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO0_SM2_SHIFTCTRL_PULL_THRESH_MASK PIO0_SM2_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO0_SM2_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO0_SM2_SHIFTCTRL_PUSH_THRESH_MASK PIO0_SM2_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO0_SM2_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO0_SM2_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO0_SM2_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO0_SM2_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO0_SM2_SHIFTCTRL_IN_SHIFTDIR_MASK PIO0_SM2_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO0_SM2_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO0_SM2_SHIFTCTRL_AUTOPULL_MASK PIO0_SM2_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO0_SM2_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO0_SM2_SHIFTCTRL_AUTOPUSH_MASK PIO0_SM2_SHIFTCTRL_AUTOPUSH(ALL1)
#define PIO0_SM2_SHIFTCTRL_FJOIN_RX_PUT(v) (((v)&0x1)<<15)
#define PIO0_SM2_SHIFTCTRL_FJOIN_RX_PUT_MASK PIO0_SM2_SHIFTCTRL_FJOIN_RX_PUT(ALL1)
#define PIO0_SM2_SHIFTCTRL_FJOIN_RX_GET(v) (((v)&0x1)<<14)
#define PIO0_SM2_SHIFTCTRL_FJOIN_RX_GET_MASK PIO0_SM2_SHIFTCTRL_FJOIN_RX_GET(ALL1)
#define PIO0_SM2_SHIFTCTRL_IN_COUNT(v) (((v)&0x1f)<<0)
#define PIO0_SM2_SHIFTCTRL_IN_COUNT_MASK PIO0_SM2_SHIFTCTRL_IN_COUNT(ALL1)

/*SM2_ADDR Register macros*/


/*SM2_INSTR Register macros*/


/*SM2_PINCTRL Register macros*/

#define PIO0_SM2_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO0_SM2_PINCTRL_SIDESET_COUNT_MASK PIO0_SM2_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO0_SM2_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO0_SM2_PINCTRL_SET_COUNT_MASK PIO0_SM2_PINCTRL_SET_COUNT(ALL1)
#define PIO0_SM2_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO0_SM2_PINCTRL_OUT_COUNT_MASK PIO0_SM2_PINCTRL_OUT_COUNT(ALL1)
#define PIO0_SM2_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO0_SM2_PINCTRL_IN_BASE_MASK PIO0_SM2_PINCTRL_IN_BASE(ALL1)
#define PIO0_SM2_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO0_SM2_PINCTRL_SIDESET_BASE_MASK PIO0_SM2_PINCTRL_SIDESET_BASE(ALL1)
#define PIO0_SM2_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO0_SM2_PINCTRL_SET_BASE_MASK PIO0_SM2_PINCTRL_SET_BASE(ALL1)
#define PIO0_SM2_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO0_SM2_PINCTRL_OUT_BASE_MASK PIO0_SM2_PINCTRL_OUT_BASE(ALL1)

/*SM3_CLKDIV Register macros*/

#define PIO0_SM3_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO0_SM3_CLKDIV_INT_MASK PIO0_SM3_CLKDIV_INT(ALL1)
#define PIO0_SM3_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO0_SM3_CLKDIV_FRAC_MASK PIO0_SM3_CLKDIV_FRAC(ALL1)

/*SM3_EXECCTRL Register macros*/

#define PIO0_SM3_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO0_SM3_EXECCTRL_EXEC_STALLED_MASK PIO0_SM3_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO0_SM3_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO0_SM3_EXECCTRL_SIDE_EN_MASK PIO0_SM3_EXECCTRL_SIDE_EN(ALL1)
#define PIO0_SM3_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO0_SM3_EXECCTRL_SIDE_PINDIR_MASK PIO0_SM3_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO0_SM3_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO0_SM3_EXECCTRL_JMP_PIN_MASK PIO0_SM3_EXECCTRL_JMP_PIN(ALL1)
#define PIO0_SM3_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO0_SM3_EXECCTRL_OUT_EN_SEL_MASK PIO0_SM3_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO0_SM3_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO0_SM3_EXECCTRL_INLINE_OUT_EN_MASK PIO0_SM3_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO0_SM3_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO0_SM3_EXECCTRL_OUT_STICKY_MASK PIO0_SM3_EXECCTRL_OUT_STICKY(ALL1)
#define PIO0_SM3_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO0_SM3_EXECCTRL_WRAP_TOP_MASK PIO0_SM3_EXECCTRL_WRAP_TOP(ALL1)
#define PIO0_SM3_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO0_SM3_EXECCTRL_WRAP_BOTTOM_MASK PIO0_SM3_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO0_SM3_EXECCTRL_STATUS_SEL(v) (((v)&0x3)<<5)
#define PIO0_SM3_EXECCTRL_STATUS_SEL_MASK PIO0_SM3_EXECCTRL_STATUS_SEL(ALL1)
#define PIO0_SM3_EXECCTRL_STATUS_N(v) (((v)&0x1f)<<0)
#define PIO0_SM3_EXECCTRL_STATUS_N_MASK PIO0_SM3_EXECCTRL_STATUS_N(ALL1)

/*SM3_SHIFTCTRL Register macros*/

#define PIO0_SM3_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO0_SM3_SHIFTCTRL_FJOIN_RX_MASK PIO0_SM3_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO0_SM3_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO0_SM3_SHIFTCTRL_FJOIN_TX_MASK PIO0_SM3_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO0_SM3_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO0_SM3_SHIFTCTRL_PULL_THRESH_MASK PIO0_SM3_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO0_SM3_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO0_SM3_SHIFTCTRL_PUSH_THRESH_MASK PIO0_SM3_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO0_SM3_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO0_SM3_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO0_SM3_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO0_SM3_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO0_SM3_SHIFTCTRL_IN_SHIFTDIR_MASK PIO0_SM3_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO0_SM3_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO0_SM3_SHIFTCTRL_AUTOPULL_MASK PIO0_SM3_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO0_SM3_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO0_SM3_SHIFTCTRL_AUTOPUSH_MASK PIO0_SM3_SHIFTCTRL_AUTOPUSH(ALL1)
#define PIO0_SM3_SHIFTCTRL_FJOIN_RX_PUT(v) (((v)&0x1)<<15)
#define PIO0_SM3_SHIFTCTRL_FJOIN_RX_PUT_MASK PIO0_SM3_SHIFTCTRL_FJOIN_RX_PUT(ALL1)
#define PIO0_SM3_SHIFTCTRL_FJOIN_RX_GET(v) (((v)&0x1)<<14)
#define PIO0_SM3_SHIFTCTRL_FJOIN_RX_GET_MASK PIO0_SM3_SHIFTCTRL_FJOIN_RX_GET(ALL1)
#define PIO0_SM3_SHIFTCTRL_IN_COUNT(v) (((v)&0x1f)<<0)
#define PIO0_SM3_SHIFTCTRL_IN_COUNT_MASK PIO0_SM3_SHIFTCTRL_IN_COUNT(ALL1)

/*SM3_ADDR Register macros*/


/*SM3_INSTR Register macros*/


/*SM3_PINCTRL Register macros*/

#define PIO0_SM3_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO0_SM3_PINCTRL_SIDESET_COUNT_MASK PIO0_SM3_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO0_SM3_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO0_SM3_PINCTRL_SET_COUNT_MASK PIO0_SM3_PINCTRL_SET_COUNT(ALL1)
#define PIO0_SM3_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO0_SM3_PINCTRL_OUT_COUNT_MASK PIO0_SM3_PINCTRL_OUT_COUNT(ALL1)
#define PIO0_SM3_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO0_SM3_PINCTRL_IN_BASE_MASK PIO0_SM3_PINCTRL_IN_BASE(ALL1)
#define PIO0_SM3_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO0_SM3_PINCTRL_SIDESET_BASE_MASK PIO0_SM3_PINCTRL_SIDESET_BASE(ALL1)
#define PIO0_SM3_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO0_SM3_PINCTRL_SET_BASE_MASK PIO0_SM3_PINCTRL_SET_BASE(ALL1)
#define PIO0_SM3_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO0_SM3_PINCTRL_OUT_BASE_MASK PIO0_SM3_PINCTRL_OUT_BASE(ALL1)

/*RXF0_PUTGET0 Register macros*/


/*RXF0_PUTGET1 Register macros*/


/*RXF0_PUTGET2 Register macros*/


/*RXF0_PUTGET3 Register macros*/


/*RXF1_PUTGET0 Register macros*/


/*RXF1_PUTGET1 Register macros*/


/*RXF1_PUTGET2 Register macros*/


/*RXF1_PUTGET3 Register macros*/


/*RXF2_PUTGET0 Register macros*/


/*RXF2_PUTGET1 Register macros*/


/*RXF2_PUTGET2 Register macros*/


/*RXF2_PUTGET3 Register macros*/


/*RXF3_PUTGET0 Register macros*/


/*RXF3_PUTGET1 Register macros*/


/*RXF3_PUTGET2 Register macros*/


/*RXF3_PUTGET3 Register macros*/


/*GPIOBASE Register macros*/


/*INTR Register macros*/

#define PIO0_INTR_SM7(v) (((v)&0x1)<<15)
#define PIO0_INTR_SM7_MASK PIO0_INTR_SM7(ALL1)
#define PIO0_INTR_SM6(v) (((v)&0x1)<<14)
#define PIO0_INTR_SM6_MASK PIO0_INTR_SM6(ALL1)
#define PIO0_INTR_SM5(v) (((v)&0x1)<<13)
#define PIO0_INTR_SM5_MASK PIO0_INTR_SM5(ALL1)
#define PIO0_INTR_SM4(v) (((v)&0x1)<<12)
#define PIO0_INTR_SM4_MASK PIO0_INTR_SM4(ALL1)
#define PIO0_INTR_SM3(v) (((v)&0x1)<<11)
#define PIO0_INTR_SM3_MASK PIO0_INTR_SM3(ALL1)
#define PIO0_INTR_SM2(v) (((v)&0x1)<<10)
#define PIO0_INTR_SM2_MASK PIO0_INTR_SM2(ALL1)
#define PIO0_INTR_SM1(v) (((v)&0x1)<<9)
#define PIO0_INTR_SM1_MASK PIO0_INTR_SM1(ALL1)
#define PIO0_INTR_SM0(v) (((v)&0x1)<<8)
#define PIO0_INTR_SM0_MASK PIO0_INTR_SM0(ALL1)
#define PIO0_INTR_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_INTR_SM3_TXNFULL_MASK PIO0_INTR_SM3_TXNFULL(ALL1)
#define PIO0_INTR_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_INTR_SM2_TXNFULL_MASK PIO0_INTR_SM2_TXNFULL(ALL1)
#define PIO0_INTR_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_INTR_SM1_TXNFULL_MASK PIO0_INTR_SM1_TXNFULL(ALL1)
#define PIO0_INTR_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_INTR_SM0_TXNFULL_MASK PIO0_INTR_SM0_TXNFULL(ALL1)
#define PIO0_INTR_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_INTR_SM3_RXNEMPTY_MASK PIO0_INTR_SM3_RXNEMPTY(ALL1)
#define PIO0_INTR_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_INTR_SM2_RXNEMPTY_MASK PIO0_INTR_SM2_RXNEMPTY(ALL1)
#define PIO0_INTR_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_INTR_SM1_RXNEMPTY_MASK PIO0_INTR_SM1_RXNEMPTY(ALL1)
#define PIO0_INTR_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_INTR_SM0_RXNEMPTY_MASK PIO0_INTR_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTE Register macros*/

#define PIO0_IRQ0_INTE_SM7(v) (((v)&0x1)<<15)
#define PIO0_IRQ0_INTE_SM7_MASK PIO0_IRQ0_INTE_SM7(ALL1)
#define PIO0_IRQ0_INTE_SM6(v) (((v)&0x1)<<14)
#define PIO0_IRQ0_INTE_SM6_MASK PIO0_IRQ0_INTE_SM6(ALL1)
#define PIO0_IRQ0_INTE_SM5(v) (((v)&0x1)<<13)
#define PIO0_IRQ0_INTE_SM5_MASK PIO0_IRQ0_INTE_SM5(ALL1)
#define PIO0_IRQ0_INTE_SM4(v) (((v)&0x1)<<12)
#define PIO0_IRQ0_INTE_SM4_MASK PIO0_IRQ0_INTE_SM4(ALL1)
#define PIO0_IRQ0_INTE_SM3(v) (((v)&0x1)<<11)
#define PIO0_IRQ0_INTE_SM3_MASK PIO0_IRQ0_INTE_SM3(ALL1)
#define PIO0_IRQ0_INTE_SM2(v) (((v)&0x1)<<10)
#define PIO0_IRQ0_INTE_SM2_MASK PIO0_IRQ0_INTE_SM2(ALL1)
#define PIO0_IRQ0_INTE_SM1(v) (((v)&0x1)<<9)
#define PIO0_IRQ0_INTE_SM1_MASK PIO0_IRQ0_INTE_SM1(ALL1)
#define PIO0_IRQ0_INTE_SM0(v) (((v)&0x1)<<8)
#define PIO0_IRQ0_INTE_SM0_MASK PIO0_IRQ0_INTE_SM0(ALL1)
#define PIO0_IRQ0_INTE_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_IRQ0_INTE_SM3_TXNFULL_MASK PIO0_IRQ0_INTE_SM3_TXNFULL(ALL1)
#define PIO0_IRQ0_INTE_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_IRQ0_INTE_SM2_TXNFULL_MASK PIO0_IRQ0_INTE_SM2_TXNFULL(ALL1)
#define PIO0_IRQ0_INTE_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_IRQ0_INTE_SM1_TXNFULL_MASK PIO0_IRQ0_INTE_SM1_TXNFULL(ALL1)
#define PIO0_IRQ0_INTE_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_IRQ0_INTE_SM0_TXNFULL_MASK PIO0_IRQ0_INTE_SM0_TXNFULL(ALL1)
#define PIO0_IRQ0_INTE_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_IRQ0_INTE_SM3_RXNEMPTY_MASK PIO0_IRQ0_INTE_SM3_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTE_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_IRQ0_INTE_SM2_RXNEMPTY_MASK PIO0_IRQ0_INTE_SM2_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTE_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_IRQ0_INTE_SM1_RXNEMPTY_MASK PIO0_IRQ0_INTE_SM1_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTE_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_IRQ0_INTE_SM0_RXNEMPTY_MASK PIO0_IRQ0_INTE_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTF Register macros*/

#define PIO0_IRQ0_INTF_SM7(v) (((v)&0x1)<<15)
#define PIO0_IRQ0_INTF_SM7_MASK PIO0_IRQ0_INTF_SM7(ALL1)
#define PIO0_IRQ0_INTF_SM6(v) (((v)&0x1)<<14)
#define PIO0_IRQ0_INTF_SM6_MASK PIO0_IRQ0_INTF_SM6(ALL1)
#define PIO0_IRQ0_INTF_SM5(v) (((v)&0x1)<<13)
#define PIO0_IRQ0_INTF_SM5_MASK PIO0_IRQ0_INTF_SM5(ALL1)
#define PIO0_IRQ0_INTF_SM4(v) (((v)&0x1)<<12)
#define PIO0_IRQ0_INTF_SM4_MASK PIO0_IRQ0_INTF_SM4(ALL1)
#define PIO0_IRQ0_INTF_SM3(v) (((v)&0x1)<<11)
#define PIO0_IRQ0_INTF_SM3_MASK PIO0_IRQ0_INTF_SM3(ALL1)
#define PIO0_IRQ0_INTF_SM2(v) (((v)&0x1)<<10)
#define PIO0_IRQ0_INTF_SM2_MASK PIO0_IRQ0_INTF_SM2(ALL1)
#define PIO0_IRQ0_INTF_SM1(v) (((v)&0x1)<<9)
#define PIO0_IRQ0_INTF_SM1_MASK PIO0_IRQ0_INTF_SM1(ALL1)
#define PIO0_IRQ0_INTF_SM0(v) (((v)&0x1)<<8)
#define PIO0_IRQ0_INTF_SM0_MASK PIO0_IRQ0_INTF_SM0(ALL1)
#define PIO0_IRQ0_INTF_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_IRQ0_INTF_SM3_TXNFULL_MASK PIO0_IRQ0_INTF_SM3_TXNFULL(ALL1)
#define PIO0_IRQ0_INTF_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_IRQ0_INTF_SM2_TXNFULL_MASK PIO0_IRQ0_INTF_SM2_TXNFULL(ALL1)
#define PIO0_IRQ0_INTF_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_IRQ0_INTF_SM1_TXNFULL_MASK PIO0_IRQ0_INTF_SM1_TXNFULL(ALL1)
#define PIO0_IRQ0_INTF_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_IRQ0_INTF_SM0_TXNFULL_MASK PIO0_IRQ0_INTF_SM0_TXNFULL(ALL1)
#define PIO0_IRQ0_INTF_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_IRQ0_INTF_SM3_RXNEMPTY_MASK PIO0_IRQ0_INTF_SM3_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTF_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_IRQ0_INTF_SM2_RXNEMPTY_MASK PIO0_IRQ0_INTF_SM2_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTF_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_IRQ0_INTF_SM1_RXNEMPTY_MASK PIO0_IRQ0_INTF_SM1_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTF_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_IRQ0_INTF_SM0_RXNEMPTY_MASK PIO0_IRQ0_INTF_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTS Register macros*/

#define PIO0_IRQ0_INTS_SM7(v) (((v)&0x1)<<15)
#define PIO0_IRQ0_INTS_SM7_MASK PIO0_IRQ0_INTS_SM7(ALL1)
#define PIO0_IRQ0_INTS_SM6(v) (((v)&0x1)<<14)
#define PIO0_IRQ0_INTS_SM6_MASK PIO0_IRQ0_INTS_SM6(ALL1)
#define PIO0_IRQ0_INTS_SM5(v) (((v)&0x1)<<13)
#define PIO0_IRQ0_INTS_SM5_MASK PIO0_IRQ0_INTS_SM5(ALL1)
#define PIO0_IRQ0_INTS_SM4(v) (((v)&0x1)<<12)
#define PIO0_IRQ0_INTS_SM4_MASK PIO0_IRQ0_INTS_SM4(ALL1)
#define PIO0_IRQ0_INTS_SM3(v) (((v)&0x1)<<11)
#define PIO0_IRQ0_INTS_SM3_MASK PIO0_IRQ0_INTS_SM3(ALL1)
#define PIO0_IRQ0_INTS_SM2(v) (((v)&0x1)<<10)
#define PIO0_IRQ0_INTS_SM2_MASK PIO0_IRQ0_INTS_SM2(ALL1)
#define PIO0_IRQ0_INTS_SM1(v) (((v)&0x1)<<9)
#define PIO0_IRQ0_INTS_SM1_MASK PIO0_IRQ0_INTS_SM1(ALL1)
#define PIO0_IRQ0_INTS_SM0(v) (((v)&0x1)<<8)
#define PIO0_IRQ0_INTS_SM0_MASK PIO0_IRQ0_INTS_SM0(ALL1)
#define PIO0_IRQ0_INTS_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_IRQ0_INTS_SM3_TXNFULL_MASK PIO0_IRQ0_INTS_SM3_TXNFULL(ALL1)
#define PIO0_IRQ0_INTS_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_IRQ0_INTS_SM2_TXNFULL_MASK PIO0_IRQ0_INTS_SM2_TXNFULL(ALL1)
#define PIO0_IRQ0_INTS_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_IRQ0_INTS_SM1_TXNFULL_MASK PIO0_IRQ0_INTS_SM1_TXNFULL(ALL1)
#define PIO0_IRQ0_INTS_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_IRQ0_INTS_SM0_TXNFULL_MASK PIO0_IRQ0_INTS_SM0_TXNFULL(ALL1)
#define PIO0_IRQ0_INTS_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_IRQ0_INTS_SM3_RXNEMPTY_MASK PIO0_IRQ0_INTS_SM3_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTS_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_IRQ0_INTS_SM2_RXNEMPTY_MASK PIO0_IRQ0_INTS_SM2_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTS_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_IRQ0_INTS_SM1_RXNEMPTY_MASK PIO0_IRQ0_INTS_SM1_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTS_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_IRQ0_INTS_SM0_RXNEMPTY_MASK PIO0_IRQ0_INTS_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTE Register macros*/

#define PIO0_IRQ1_INTE_SM7(v) (((v)&0x1)<<15)
#define PIO0_IRQ1_INTE_SM7_MASK PIO0_IRQ1_INTE_SM7(ALL1)
#define PIO0_IRQ1_INTE_SM6(v) (((v)&0x1)<<14)
#define PIO0_IRQ1_INTE_SM6_MASK PIO0_IRQ1_INTE_SM6(ALL1)
#define PIO0_IRQ1_INTE_SM5(v) (((v)&0x1)<<13)
#define PIO0_IRQ1_INTE_SM5_MASK PIO0_IRQ1_INTE_SM5(ALL1)
#define PIO0_IRQ1_INTE_SM4(v) (((v)&0x1)<<12)
#define PIO0_IRQ1_INTE_SM4_MASK PIO0_IRQ1_INTE_SM4(ALL1)
#define PIO0_IRQ1_INTE_SM3(v) (((v)&0x1)<<11)
#define PIO0_IRQ1_INTE_SM3_MASK PIO0_IRQ1_INTE_SM3(ALL1)
#define PIO0_IRQ1_INTE_SM2(v) (((v)&0x1)<<10)
#define PIO0_IRQ1_INTE_SM2_MASK PIO0_IRQ1_INTE_SM2(ALL1)
#define PIO0_IRQ1_INTE_SM1(v) (((v)&0x1)<<9)
#define PIO0_IRQ1_INTE_SM1_MASK PIO0_IRQ1_INTE_SM1(ALL1)
#define PIO0_IRQ1_INTE_SM0(v) (((v)&0x1)<<8)
#define PIO0_IRQ1_INTE_SM0_MASK PIO0_IRQ1_INTE_SM0(ALL1)
#define PIO0_IRQ1_INTE_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_IRQ1_INTE_SM3_TXNFULL_MASK PIO0_IRQ1_INTE_SM3_TXNFULL(ALL1)
#define PIO0_IRQ1_INTE_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_IRQ1_INTE_SM2_TXNFULL_MASK PIO0_IRQ1_INTE_SM2_TXNFULL(ALL1)
#define PIO0_IRQ1_INTE_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_IRQ1_INTE_SM1_TXNFULL_MASK PIO0_IRQ1_INTE_SM1_TXNFULL(ALL1)
#define PIO0_IRQ1_INTE_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_IRQ1_INTE_SM0_TXNFULL_MASK PIO0_IRQ1_INTE_SM0_TXNFULL(ALL1)
#define PIO0_IRQ1_INTE_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_IRQ1_INTE_SM3_RXNEMPTY_MASK PIO0_IRQ1_INTE_SM3_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTE_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_IRQ1_INTE_SM2_RXNEMPTY_MASK PIO0_IRQ1_INTE_SM2_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTE_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_IRQ1_INTE_SM1_RXNEMPTY_MASK PIO0_IRQ1_INTE_SM1_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTE_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_IRQ1_INTE_SM0_RXNEMPTY_MASK PIO0_IRQ1_INTE_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTF Register macros*/

#define PIO0_IRQ1_INTF_SM7(v) (((v)&0x1)<<15)
#define PIO0_IRQ1_INTF_SM7_MASK PIO0_IRQ1_INTF_SM7(ALL1)
#define PIO0_IRQ1_INTF_SM6(v) (((v)&0x1)<<14)
#define PIO0_IRQ1_INTF_SM6_MASK PIO0_IRQ1_INTF_SM6(ALL1)
#define PIO0_IRQ1_INTF_SM5(v) (((v)&0x1)<<13)
#define PIO0_IRQ1_INTF_SM5_MASK PIO0_IRQ1_INTF_SM5(ALL1)
#define PIO0_IRQ1_INTF_SM4(v) (((v)&0x1)<<12)
#define PIO0_IRQ1_INTF_SM4_MASK PIO0_IRQ1_INTF_SM4(ALL1)
#define PIO0_IRQ1_INTF_SM3(v) (((v)&0x1)<<11)
#define PIO0_IRQ1_INTF_SM3_MASK PIO0_IRQ1_INTF_SM3(ALL1)
#define PIO0_IRQ1_INTF_SM2(v) (((v)&0x1)<<10)
#define PIO0_IRQ1_INTF_SM2_MASK PIO0_IRQ1_INTF_SM2(ALL1)
#define PIO0_IRQ1_INTF_SM1(v) (((v)&0x1)<<9)
#define PIO0_IRQ1_INTF_SM1_MASK PIO0_IRQ1_INTF_SM1(ALL1)
#define PIO0_IRQ1_INTF_SM0(v) (((v)&0x1)<<8)
#define PIO0_IRQ1_INTF_SM0_MASK PIO0_IRQ1_INTF_SM0(ALL1)
#define PIO0_IRQ1_INTF_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_IRQ1_INTF_SM3_TXNFULL_MASK PIO0_IRQ1_INTF_SM3_TXNFULL(ALL1)
#define PIO0_IRQ1_INTF_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_IRQ1_INTF_SM2_TXNFULL_MASK PIO0_IRQ1_INTF_SM2_TXNFULL(ALL1)
#define PIO0_IRQ1_INTF_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_IRQ1_INTF_SM1_TXNFULL_MASK PIO0_IRQ1_INTF_SM1_TXNFULL(ALL1)
#define PIO0_IRQ1_INTF_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_IRQ1_INTF_SM0_TXNFULL_MASK PIO0_IRQ1_INTF_SM0_TXNFULL(ALL1)
#define PIO0_IRQ1_INTF_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_IRQ1_INTF_SM3_RXNEMPTY_MASK PIO0_IRQ1_INTF_SM3_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTF_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_IRQ1_INTF_SM2_RXNEMPTY_MASK PIO0_IRQ1_INTF_SM2_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTF_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_IRQ1_INTF_SM1_RXNEMPTY_MASK PIO0_IRQ1_INTF_SM1_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTF_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_IRQ1_INTF_SM0_RXNEMPTY_MASK PIO0_IRQ1_INTF_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTS Register macros*/

#define PIO0_IRQ1_INTS_SM7(v) (((v)&0x1)<<15)
#define PIO0_IRQ1_INTS_SM7_MASK PIO0_IRQ1_INTS_SM7(ALL1)
#define PIO0_IRQ1_INTS_SM6(v) (((v)&0x1)<<14)
#define PIO0_IRQ1_INTS_SM6_MASK PIO0_IRQ1_INTS_SM6(ALL1)
#define PIO0_IRQ1_INTS_SM5(v) (((v)&0x1)<<13)
#define PIO0_IRQ1_INTS_SM5_MASK PIO0_IRQ1_INTS_SM5(ALL1)
#define PIO0_IRQ1_INTS_SM4(v) (((v)&0x1)<<12)
#define PIO0_IRQ1_INTS_SM4_MASK PIO0_IRQ1_INTS_SM4(ALL1)
#define PIO0_IRQ1_INTS_SM3(v) (((v)&0x1)<<11)
#define PIO0_IRQ1_INTS_SM3_MASK PIO0_IRQ1_INTS_SM3(ALL1)
#define PIO0_IRQ1_INTS_SM2(v) (((v)&0x1)<<10)
#define PIO0_IRQ1_INTS_SM2_MASK PIO0_IRQ1_INTS_SM2(ALL1)
#define PIO0_IRQ1_INTS_SM1(v) (((v)&0x1)<<9)
#define PIO0_IRQ1_INTS_SM1_MASK PIO0_IRQ1_INTS_SM1(ALL1)
#define PIO0_IRQ1_INTS_SM0(v) (((v)&0x1)<<8)
#define PIO0_IRQ1_INTS_SM0_MASK PIO0_IRQ1_INTS_SM0(ALL1)
#define PIO0_IRQ1_INTS_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_IRQ1_INTS_SM3_TXNFULL_MASK PIO0_IRQ1_INTS_SM3_TXNFULL(ALL1)
#define PIO0_IRQ1_INTS_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_IRQ1_INTS_SM2_TXNFULL_MASK PIO0_IRQ1_INTS_SM2_TXNFULL(ALL1)
#define PIO0_IRQ1_INTS_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_IRQ1_INTS_SM1_TXNFULL_MASK PIO0_IRQ1_INTS_SM1_TXNFULL(ALL1)
#define PIO0_IRQ1_INTS_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_IRQ1_INTS_SM0_TXNFULL_MASK PIO0_IRQ1_INTS_SM0_TXNFULL(ALL1)
#define PIO0_IRQ1_INTS_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_IRQ1_INTS_SM3_RXNEMPTY_MASK PIO0_IRQ1_INTS_SM3_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTS_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_IRQ1_INTS_SM2_RXNEMPTY_MASK PIO0_IRQ1_INTS_SM2_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTS_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_IRQ1_INTS_SM1_RXNEMPTY_MASK PIO0_IRQ1_INTS_SM1_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTS_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_IRQ1_INTS_SM0_RXNEMPTY_MASK PIO0_IRQ1_INTS_SM0_RXNEMPTY(ALL1)

/*CTRL Register macros*/

#define PIO1_CTRL_NEXTPREV_CLKDIV_RESTART(v) (((v)&0x1)<<26)
#define PIO1_CTRL_NEXTPREV_CLKDIV_RESTART_MASK PIO1_CTRL_NEXTPREV_CLKDIV_RESTART(ALL1)
#define PIO1_CTRL_NEXTPREV_SM_DISABLE(v) (((v)&0x1)<<25)
#define PIO1_CTRL_NEXTPREV_SM_DISABLE_MASK PIO1_CTRL_NEXTPREV_SM_DISABLE(ALL1)
#define PIO1_CTRL_NEXTPREV_SM_ENABLE(v) (((v)&0x1)<<24)
#define PIO1_CTRL_NEXTPREV_SM_ENABLE_MASK PIO1_CTRL_NEXTPREV_SM_ENABLE(ALL1)
#define PIO1_CTRL_NEXT_PIO_MASK(v) (((v)&0xf)<<20)
#define PIO1_CTRL_NEXT_PIO_MASK_MASK PIO1_CTRL_NEXT_PIO_MASK(ALL1)
#define PIO1_CTRL_PREV_PIO_MASK(v) (((v)&0xf)<<16)
#define PIO1_CTRL_PREV_PIO_MASK_MASK PIO1_CTRL_PREV_PIO_MASK(ALL1)
#define PIO1_CTRL_CLKDIV_RESTART(v) (((v)&0xf)<<8)
#define PIO1_CTRL_CLKDIV_RESTART_MASK PIO1_CTRL_CLKDIV_RESTART(ALL1)
#define PIO1_CTRL_SM_RESTART(v) (((v)&0xf)<<4)
#define PIO1_CTRL_SM_RESTART_MASK PIO1_CTRL_SM_RESTART(ALL1)
#define PIO1_CTRL_SM_ENABLE(v) (((v)&0xf)<<0)
#define PIO1_CTRL_SM_ENABLE_MASK PIO1_CTRL_SM_ENABLE(ALL1)

/*FSTAT Register macros*/

#define PIO1_FSTAT_TXEMPTY(v) (((v)&0xf)<<24)
#define PIO1_FSTAT_TXEMPTY_MASK PIO1_FSTAT_TXEMPTY(ALL1)
#define PIO1_FSTAT_TXFULL(v) (((v)&0xf)<<16)
#define PIO1_FSTAT_TXFULL_MASK PIO1_FSTAT_TXFULL(ALL1)
#define PIO1_FSTAT_RXEMPTY(v) (((v)&0xf)<<8)
#define PIO1_FSTAT_RXEMPTY_MASK PIO1_FSTAT_RXEMPTY(ALL1)
#define PIO1_FSTAT_RXFULL(v) (((v)&0xf)<<0)
#define PIO1_FSTAT_RXFULL_MASK PIO1_FSTAT_RXFULL(ALL1)

/*FDEBUG Register macros*/

#define PIO1_FDEBUG_TXSTALL(v) (((v)&0xf)<<24)
#define PIO1_FDEBUG_TXSTALL_MASK PIO1_FDEBUG_TXSTALL(ALL1)
#define PIO1_FDEBUG_TXOVER(v) (((v)&0xf)<<16)
#define PIO1_FDEBUG_TXOVER_MASK PIO1_FDEBUG_TXOVER(ALL1)
#define PIO1_FDEBUG_RXUNDER(v) (((v)&0xf)<<8)
#define PIO1_FDEBUG_RXUNDER_MASK PIO1_FDEBUG_RXUNDER(ALL1)
#define PIO1_FDEBUG_RXSTALL(v) (((v)&0xf)<<0)
#define PIO1_FDEBUG_RXSTALL_MASK PIO1_FDEBUG_RXSTALL(ALL1)

/*FLEVEL Register macros*/

#define PIO1_FLEVEL_RX3(v) (((v)&0xf)<<28)
#define PIO1_FLEVEL_RX3_MASK PIO1_FLEVEL_RX3(ALL1)
#define PIO1_FLEVEL_TX3(v) (((v)&0xf)<<24)
#define PIO1_FLEVEL_TX3_MASK PIO1_FLEVEL_TX3(ALL1)
#define PIO1_FLEVEL_RX2(v) (((v)&0xf)<<20)
#define PIO1_FLEVEL_RX2_MASK PIO1_FLEVEL_RX2(ALL1)
#define PIO1_FLEVEL_TX2(v) (((v)&0xf)<<16)
#define PIO1_FLEVEL_TX2_MASK PIO1_FLEVEL_TX2(ALL1)
#define PIO1_FLEVEL_RX1(v) (((v)&0xf)<<12)
#define PIO1_FLEVEL_RX1_MASK PIO1_FLEVEL_RX1(ALL1)
#define PIO1_FLEVEL_TX1(v) (((v)&0xf)<<8)
#define PIO1_FLEVEL_TX1_MASK PIO1_FLEVEL_TX1(ALL1)
#define PIO1_FLEVEL_RX0(v) (((v)&0xf)<<4)
#define PIO1_FLEVEL_RX0_MASK PIO1_FLEVEL_RX0(ALL1)
#define PIO1_FLEVEL_TX0(v) (((v)&0xf)<<0)
#define PIO1_FLEVEL_TX0_MASK PIO1_FLEVEL_TX0(ALL1)

/*TXF0 Register macros*/


/*TXF1 Register macros*/


/*TXF2 Register macros*/


/*TXF3 Register macros*/


/*RXF0 Register macros*/


/*RXF1 Register macros*/


/*RXF2 Register macros*/


/*RXF3 Register macros*/


/*IRQ Register macros*/


/*IRQ_FORCE Register macros*/


/*INPUT_SYNC_BYPASS Register macros*/


/*DBG_PADOUT Register macros*/


/*DBG_PADOE Register macros*/


/*DBG_CFGINFO Register macros*/

#define PIO1_DBG_CFGINFO_VERSION(v) (((v)&0xf)<<28)
#define PIO1_DBG_CFGINFO_VERSION_MASK PIO1_DBG_CFGINFO_VERSION(ALL1)
#define PIO1_DBG_CFGINFO_IMEM_SIZE(v) (((v)&0x3f)<<16)
#define PIO1_DBG_CFGINFO_IMEM_SIZE_MASK PIO1_DBG_CFGINFO_IMEM_SIZE(ALL1)
#define PIO1_DBG_CFGINFO_SM_COUNT(v) (((v)&0xf)<<8)
#define PIO1_DBG_CFGINFO_SM_COUNT_MASK PIO1_DBG_CFGINFO_SM_COUNT(ALL1)
#define PIO1_DBG_CFGINFO_FIFO_DEPTH(v) (((v)&0x3f)<<0)
#define PIO1_DBG_CFGINFO_FIFO_DEPTH_MASK PIO1_DBG_CFGINFO_FIFO_DEPTH(ALL1)

/*INSTR_MEM0 Register macros*/


/*INSTR_MEM1 Register macros*/


/*INSTR_MEM2 Register macros*/


/*INSTR_MEM3 Register macros*/


/*INSTR_MEM4 Register macros*/


/*INSTR_MEM5 Register macros*/


/*INSTR_MEM6 Register macros*/


/*INSTR_MEM7 Register macros*/


/*INSTR_MEM8 Register macros*/


/*INSTR_MEM9 Register macros*/


/*INSTR_MEM10 Register macros*/


/*INSTR_MEM11 Register macros*/


/*INSTR_MEM12 Register macros*/


/*INSTR_MEM13 Register macros*/


/*INSTR_MEM14 Register macros*/


/*INSTR_MEM15 Register macros*/


/*INSTR_MEM16 Register macros*/


/*INSTR_MEM17 Register macros*/


/*INSTR_MEM18 Register macros*/


/*INSTR_MEM19 Register macros*/


/*INSTR_MEM20 Register macros*/


/*INSTR_MEM21 Register macros*/


/*INSTR_MEM22 Register macros*/


/*INSTR_MEM23 Register macros*/


/*INSTR_MEM24 Register macros*/


/*INSTR_MEM25 Register macros*/


/*INSTR_MEM26 Register macros*/


/*INSTR_MEM27 Register macros*/


/*INSTR_MEM28 Register macros*/


/*INSTR_MEM29 Register macros*/


/*INSTR_MEM30 Register macros*/


/*INSTR_MEM31 Register macros*/


/*SM0_CLKDIV Register macros*/

#define PIO1_SM0_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO1_SM0_CLKDIV_INT_MASK PIO1_SM0_CLKDIV_INT(ALL1)
#define PIO1_SM0_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO1_SM0_CLKDIV_FRAC_MASK PIO1_SM0_CLKDIV_FRAC(ALL1)

/*SM0_EXECCTRL Register macros*/

#define PIO1_SM0_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO1_SM0_EXECCTRL_EXEC_STALLED_MASK PIO1_SM0_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO1_SM0_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO1_SM0_EXECCTRL_SIDE_EN_MASK PIO1_SM0_EXECCTRL_SIDE_EN(ALL1)
#define PIO1_SM0_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO1_SM0_EXECCTRL_SIDE_PINDIR_MASK PIO1_SM0_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO1_SM0_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO1_SM0_EXECCTRL_JMP_PIN_MASK PIO1_SM0_EXECCTRL_JMP_PIN(ALL1)
#define PIO1_SM0_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO1_SM0_EXECCTRL_OUT_EN_SEL_MASK PIO1_SM0_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO1_SM0_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO1_SM0_EXECCTRL_INLINE_OUT_EN_MASK PIO1_SM0_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO1_SM0_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO1_SM0_EXECCTRL_OUT_STICKY_MASK PIO1_SM0_EXECCTRL_OUT_STICKY(ALL1)
#define PIO1_SM0_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO1_SM0_EXECCTRL_WRAP_TOP_MASK PIO1_SM0_EXECCTRL_WRAP_TOP(ALL1)
#define PIO1_SM0_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO1_SM0_EXECCTRL_WRAP_BOTTOM_MASK PIO1_SM0_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO1_SM0_EXECCTRL_STATUS_SEL(v) (((v)&0x3)<<5)
#define PIO1_SM0_EXECCTRL_STATUS_SEL_MASK PIO1_SM0_EXECCTRL_STATUS_SEL(ALL1)
#define PIO1_SM0_EXECCTRL_STATUS_N(v) (((v)&0x1f)<<0)
#define PIO1_SM0_EXECCTRL_STATUS_N_MASK PIO1_SM0_EXECCTRL_STATUS_N(ALL1)

/*SM0_SHIFTCTRL Register macros*/

#define PIO1_SM0_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO1_SM0_SHIFTCTRL_FJOIN_RX_MASK PIO1_SM0_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO1_SM0_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO1_SM0_SHIFTCTRL_FJOIN_TX_MASK PIO1_SM0_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO1_SM0_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO1_SM0_SHIFTCTRL_PULL_THRESH_MASK PIO1_SM0_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO1_SM0_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO1_SM0_SHIFTCTRL_PUSH_THRESH_MASK PIO1_SM0_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO1_SM0_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO1_SM0_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO1_SM0_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO1_SM0_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO1_SM0_SHIFTCTRL_IN_SHIFTDIR_MASK PIO1_SM0_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO1_SM0_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO1_SM0_SHIFTCTRL_AUTOPULL_MASK PIO1_SM0_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO1_SM0_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO1_SM0_SHIFTCTRL_AUTOPUSH_MASK PIO1_SM0_SHIFTCTRL_AUTOPUSH(ALL1)
#define PIO1_SM0_SHIFTCTRL_FJOIN_RX_PUT(v) (((v)&0x1)<<15)
#define PIO1_SM0_SHIFTCTRL_FJOIN_RX_PUT_MASK PIO1_SM0_SHIFTCTRL_FJOIN_RX_PUT(ALL1)
#define PIO1_SM0_SHIFTCTRL_FJOIN_RX_GET(v) (((v)&0x1)<<14)
#define PIO1_SM0_SHIFTCTRL_FJOIN_RX_GET_MASK PIO1_SM0_SHIFTCTRL_FJOIN_RX_GET(ALL1)
#define PIO1_SM0_SHIFTCTRL_IN_COUNT(v) (((v)&0x1f)<<0)
#define PIO1_SM0_SHIFTCTRL_IN_COUNT_MASK PIO1_SM0_SHIFTCTRL_IN_COUNT(ALL1)

/*SM0_ADDR Register macros*/


/*SM0_INSTR Register macros*/


/*SM0_PINCTRL Register macros*/

#define PIO1_SM0_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO1_SM0_PINCTRL_SIDESET_COUNT_MASK PIO1_SM0_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO1_SM0_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO1_SM0_PINCTRL_SET_COUNT_MASK PIO1_SM0_PINCTRL_SET_COUNT(ALL1)
#define PIO1_SM0_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO1_SM0_PINCTRL_OUT_COUNT_MASK PIO1_SM0_PINCTRL_OUT_COUNT(ALL1)
#define PIO1_SM0_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO1_SM0_PINCTRL_IN_BASE_MASK PIO1_SM0_PINCTRL_IN_BASE(ALL1)
#define PIO1_SM0_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO1_SM0_PINCTRL_SIDESET_BASE_MASK PIO1_SM0_PINCTRL_SIDESET_BASE(ALL1)
#define PIO1_SM0_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO1_SM0_PINCTRL_SET_BASE_MASK PIO1_SM0_PINCTRL_SET_BASE(ALL1)
#define PIO1_SM0_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO1_SM0_PINCTRL_OUT_BASE_MASK PIO1_SM0_PINCTRL_OUT_BASE(ALL1)

/*SM1_CLKDIV Register macros*/

#define PIO1_SM1_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO1_SM1_CLKDIV_INT_MASK PIO1_SM1_CLKDIV_INT(ALL1)
#define PIO1_SM1_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO1_SM1_CLKDIV_FRAC_MASK PIO1_SM1_CLKDIV_FRAC(ALL1)

/*SM1_EXECCTRL Register macros*/

#define PIO1_SM1_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO1_SM1_EXECCTRL_EXEC_STALLED_MASK PIO1_SM1_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO1_SM1_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO1_SM1_EXECCTRL_SIDE_EN_MASK PIO1_SM1_EXECCTRL_SIDE_EN(ALL1)
#define PIO1_SM1_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO1_SM1_EXECCTRL_SIDE_PINDIR_MASK PIO1_SM1_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO1_SM1_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO1_SM1_EXECCTRL_JMP_PIN_MASK PIO1_SM1_EXECCTRL_JMP_PIN(ALL1)
#define PIO1_SM1_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO1_SM1_EXECCTRL_OUT_EN_SEL_MASK PIO1_SM1_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO1_SM1_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO1_SM1_EXECCTRL_INLINE_OUT_EN_MASK PIO1_SM1_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO1_SM1_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO1_SM1_EXECCTRL_OUT_STICKY_MASK PIO1_SM1_EXECCTRL_OUT_STICKY(ALL1)
#define PIO1_SM1_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO1_SM1_EXECCTRL_WRAP_TOP_MASK PIO1_SM1_EXECCTRL_WRAP_TOP(ALL1)
#define PIO1_SM1_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO1_SM1_EXECCTRL_WRAP_BOTTOM_MASK PIO1_SM1_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO1_SM1_EXECCTRL_STATUS_SEL(v) (((v)&0x3)<<5)
#define PIO1_SM1_EXECCTRL_STATUS_SEL_MASK PIO1_SM1_EXECCTRL_STATUS_SEL(ALL1)
#define PIO1_SM1_EXECCTRL_STATUS_N(v) (((v)&0x1f)<<0)
#define PIO1_SM1_EXECCTRL_STATUS_N_MASK PIO1_SM1_EXECCTRL_STATUS_N(ALL1)

/*SM1_SHIFTCTRL Register macros*/

#define PIO1_SM1_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO1_SM1_SHIFTCTRL_FJOIN_RX_MASK PIO1_SM1_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO1_SM1_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO1_SM1_SHIFTCTRL_FJOIN_TX_MASK PIO1_SM1_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO1_SM1_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO1_SM1_SHIFTCTRL_PULL_THRESH_MASK PIO1_SM1_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO1_SM1_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO1_SM1_SHIFTCTRL_PUSH_THRESH_MASK PIO1_SM1_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO1_SM1_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO1_SM1_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO1_SM1_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO1_SM1_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO1_SM1_SHIFTCTRL_IN_SHIFTDIR_MASK PIO1_SM1_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO1_SM1_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO1_SM1_SHIFTCTRL_AUTOPULL_MASK PIO1_SM1_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO1_SM1_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO1_SM1_SHIFTCTRL_AUTOPUSH_MASK PIO1_SM1_SHIFTCTRL_AUTOPUSH(ALL1)
#define PIO1_SM1_SHIFTCTRL_FJOIN_RX_PUT(v) (((v)&0x1)<<15)
#define PIO1_SM1_SHIFTCTRL_FJOIN_RX_PUT_MASK PIO1_SM1_SHIFTCTRL_FJOIN_RX_PUT(ALL1)
#define PIO1_SM1_SHIFTCTRL_FJOIN_RX_GET(v) (((v)&0x1)<<14)
#define PIO1_SM1_SHIFTCTRL_FJOIN_RX_GET_MASK PIO1_SM1_SHIFTCTRL_FJOIN_RX_GET(ALL1)
#define PIO1_SM1_SHIFTCTRL_IN_COUNT(v) (((v)&0x1f)<<0)
#define PIO1_SM1_SHIFTCTRL_IN_COUNT_MASK PIO1_SM1_SHIFTCTRL_IN_COUNT(ALL1)

/*SM1_ADDR Register macros*/


/*SM1_INSTR Register macros*/


/*SM1_PINCTRL Register macros*/

#define PIO1_SM1_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO1_SM1_PINCTRL_SIDESET_COUNT_MASK PIO1_SM1_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO1_SM1_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO1_SM1_PINCTRL_SET_COUNT_MASK PIO1_SM1_PINCTRL_SET_COUNT(ALL1)
#define PIO1_SM1_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO1_SM1_PINCTRL_OUT_COUNT_MASK PIO1_SM1_PINCTRL_OUT_COUNT(ALL1)
#define PIO1_SM1_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO1_SM1_PINCTRL_IN_BASE_MASK PIO1_SM1_PINCTRL_IN_BASE(ALL1)
#define PIO1_SM1_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO1_SM1_PINCTRL_SIDESET_BASE_MASK PIO1_SM1_PINCTRL_SIDESET_BASE(ALL1)
#define PIO1_SM1_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO1_SM1_PINCTRL_SET_BASE_MASK PIO1_SM1_PINCTRL_SET_BASE(ALL1)
#define PIO1_SM1_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO1_SM1_PINCTRL_OUT_BASE_MASK PIO1_SM1_PINCTRL_OUT_BASE(ALL1)

/*SM2_CLKDIV Register macros*/

#define PIO1_SM2_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO1_SM2_CLKDIV_INT_MASK PIO1_SM2_CLKDIV_INT(ALL1)
#define PIO1_SM2_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO1_SM2_CLKDIV_FRAC_MASK PIO1_SM2_CLKDIV_FRAC(ALL1)

/*SM2_EXECCTRL Register macros*/

#define PIO1_SM2_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO1_SM2_EXECCTRL_EXEC_STALLED_MASK PIO1_SM2_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO1_SM2_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO1_SM2_EXECCTRL_SIDE_EN_MASK PIO1_SM2_EXECCTRL_SIDE_EN(ALL1)
#define PIO1_SM2_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO1_SM2_EXECCTRL_SIDE_PINDIR_MASK PIO1_SM2_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO1_SM2_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO1_SM2_EXECCTRL_JMP_PIN_MASK PIO1_SM2_EXECCTRL_JMP_PIN(ALL1)
#define PIO1_SM2_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO1_SM2_EXECCTRL_OUT_EN_SEL_MASK PIO1_SM2_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO1_SM2_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO1_SM2_EXECCTRL_INLINE_OUT_EN_MASK PIO1_SM2_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO1_SM2_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO1_SM2_EXECCTRL_OUT_STICKY_MASK PIO1_SM2_EXECCTRL_OUT_STICKY(ALL1)
#define PIO1_SM2_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO1_SM2_EXECCTRL_WRAP_TOP_MASK PIO1_SM2_EXECCTRL_WRAP_TOP(ALL1)
#define PIO1_SM2_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO1_SM2_EXECCTRL_WRAP_BOTTOM_MASK PIO1_SM2_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO1_SM2_EXECCTRL_STATUS_SEL(v) (((v)&0x3)<<5)
#define PIO1_SM2_EXECCTRL_STATUS_SEL_MASK PIO1_SM2_EXECCTRL_STATUS_SEL(ALL1)
#define PIO1_SM2_EXECCTRL_STATUS_N(v) (((v)&0x1f)<<0)
#define PIO1_SM2_EXECCTRL_STATUS_N_MASK PIO1_SM2_EXECCTRL_STATUS_N(ALL1)

/*SM2_SHIFTCTRL Register macros*/

#define PIO1_SM2_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO1_SM2_SHIFTCTRL_FJOIN_RX_MASK PIO1_SM2_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO1_SM2_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO1_SM2_SHIFTCTRL_FJOIN_TX_MASK PIO1_SM2_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO1_SM2_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO1_SM2_SHIFTCTRL_PULL_THRESH_MASK PIO1_SM2_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO1_SM2_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO1_SM2_SHIFTCTRL_PUSH_THRESH_MASK PIO1_SM2_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO1_SM2_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO1_SM2_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO1_SM2_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO1_SM2_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO1_SM2_SHIFTCTRL_IN_SHIFTDIR_MASK PIO1_SM2_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO1_SM2_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO1_SM2_SHIFTCTRL_AUTOPULL_MASK PIO1_SM2_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO1_SM2_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO1_SM2_SHIFTCTRL_AUTOPUSH_MASK PIO1_SM2_SHIFTCTRL_AUTOPUSH(ALL1)
#define PIO1_SM2_SHIFTCTRL_FJOIN_RX_PUT(v) (((v)&0x1)<<15)
#define PIO1_SM2_SHIFTCTRL_FJOIN_RX_PUT_MASK PIO1_SM2_SHIFTCTRL_FJOIN_RX_PUT(ALL1)
#define PIO1_SM2_SHIFTCTRL_FJOIN_RX_GET(v) (((v)&0x1)<<14)
#define PIO1_SM2_SHIFTCTRL_FJOIN_RX_GET_MASK PIO1_SM2_SHIFTCTRL_FJOIN_RX_GET(ALL1)
#define PIO1_SM2_SHIFTCTRL_IN_COUNT(v) (((v)&0x1f)<<0)
#define PIO1_SM2_SHIFTCTRL_IN_COUNT_MASK PIO1_SM2_SHIFTCTRL_IN_COUNT(ALL1)

/*SM2_ADDR Register macros*/


/*SM2_INSTR Register macros*/


/*SM2_PINCTRL Register macros*/

#define PIO1_SM2_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO1_SM2_PINCTRL_SIDESET_COUNT_MASK PIO1_SM2_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO1_SM2_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO1_SM2_PINCTRL_SET_COUNT_MASK PIO1_SM2_PINCTRL_SET_COUNT(ALL1)
#define PIO1_SM2_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO1_SM2_PINCTRL_OUT_COUNT_MASK PIO1_SM2_PINCTRL_OUT_COUNT(ALL1)
#define PIO1_SM2_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO1_SM2_PINCTRL_IN_BASE_MASK PIO1_SM2_PINCTRL_IN_BASE(ALL1)
#define PIO1_SM2_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO1_SM2_PINCTRL_SIDESET_BASE_MASK PIO1_SM2_PINCTRL_SIDESET_BASE(ALL1)
#define PIO1_SM2_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO1_SM2_PINCTRL_SET_BASE_MASK PIO1_SM2_PINCTRL_SET_BASE(ALL1)
#define PIO1_SM2_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO1_SM2_PINCTRL_OUT_BASE_MASK PIO1_SM2_PINCTRL_OUT_BASE(ALL1)

/*SM3_CLKDIV Register macros*/

#define PIO1_SM3_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO1_SM3_CLKDIV_INT_MASK PIO1_SM3_CLKDIV_INT(ALL1)
#define PIO1_SM3_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO1_SM3_CLKDIV_FRAC_MASK PIO1_SM3_CLKDIV_FRAC(ALL1)

/*SM3_EXECCTRL Register macros*/

#define PIO1_SM3_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO1_SM3_EXECCTRL_EXEC_STALLED_MASK PIO1_SM3_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO1_SM3_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO1_SM3_EXECCTRL_SIDE_EN_MASK PIO1_SM3_EXECCTRL_SIDE_EN(ALL1)
#define PIO1_SM3_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO1_SM3_EXECCTRL_SIDE_PINDIR_MASK PIO1_SM3_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO1_SM3_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO1_SM3_EXECCTRL_JMP_PIN_MASK PIO1_SM3_EXECCTRL_JMP_PIN(ALL1)
#define PIO1_SM3_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO1_SM3_EXECCTRL_OUT_EN_SEL_MASK PIO1_SM3_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO1_SM3_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO1_SM3_EXECCTRL_INLINE_OUT_EN_MASK PIO1_SM3_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO1_SM3_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO1_SM3_EXECCTRL_OUT_STICKY_MASK PIO1_SM3_EXECCTRL_OUT_STICKY(ALL1)
#define PIO1_SM3_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO1_SM3_EXECCTRL_WRAP_TOP_MASK PIO1_SM3_EXECCTRL_WRAP_TOP(ALL1)
#define PIO1_SM3_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO1_SM3_EXECCTRL_WRAP_BOTTOM_MASK PIO1_SM3_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO1_SM3_EXECCTRL_STATUS_SEL(v) (((v)&0x3)<<5)
#define PIO1_SM3_EXECCTRL_STATUS_SEL_MASK PIO1_SM3_EXECCTRL_STATUS_SEL(ALL1)
#define PIO1_SM3_EXECCTRL_STATUS_N(v) (((v)&0x1f)<<0)
#define PIO1_SM3_EXECCTRL_STATUS_N_MASK PIO1_SM3_EXECCTRL_STATUS_N(ALL1)

/*SM3_SHIFTCTRL Register macros*/

#define PIO1_SM3_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO1_SM3_SHIFTCTRL_FJOIN_RX_MASK PIO1_SM3_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO1_SM3_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO1_SM3_SHIFTCTRL_FJOIN_TX_MASK PIO1_SM3_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO1_SM3_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO1_SM3_SHIFTCTRL_PULL_THRESH_MASK PIO1_SM3_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO1_SM3_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO1_SM3_SHIFTCTRL_PUSH_THRESH_MASK PIO1_SM3_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO1_SM3_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO1_SM3_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO1_SM3_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO1_SM3_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO1_SM3_SHIFTCTRL_IN_SHIFTDIR_MASK PIO1_SM3_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO1_SM3_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO1_SM3_SHIFTCTRL_AUTOPULL_MASK PIO1_SM3_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO1_SM3_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO1_SM3_SHIFTCTRL_AUTOPUSH_MASK PIO1_SM3_SHIFTCTRL_AUTOPUSH(ALL1)
#define PIO1_SM3_SHIFTCTRL_FJOIN_RX_PUT(v) (((v)&0x1)<<15)
#define PIO1_SM3_SHIFTCTRL_FJOIN_RX_PUT_MASK PIO1_SM3_SHIFTCTRL_FJOIN_RX_PUT(ALL1)
#define PIO1_SM3_SHIFTCTRL_FJOIN_RX_GET(v) (((v)&0x1)<<14)
#define PIO1_SM3_SHIFTCTRL_FJOIN_RX_GET_MASK PIO1_SM3_SHIFTCTRL_FJOIN_RX_GET(ALL1)
#define PIO1_SM3_SHIFTCTRL_IN_COUNT(v) (((v)&0x1f)<<0)
#define PIO1_SM3_SHIFTCTRL_IN_COUNT_MASK PIO1_SM3_SHIFTCTRL_IN_COUNT(ALL1)

/*SM3_ADDR Register macros*/


/*SM3_INSTR Register macros*/


/*SM3_PINCTRL Register macros*/

#define PIO1_SM3_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO1_SM3_PINCTRL_SIDESET_COUNT_MASK PIO1_SM3_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO1_SM3_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO1_SM3_PINCTRL_SET_COUNT_MASK PIO1_SM3_PINCTRL_SET_COUNT(ALL1)
#define PIO1_SM3_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO1_SM3_PINCTRL_OUT_COUNT_MASK PIO1_SM3_PINCTRL_OUT_COUNT(ALL1)
#define PIO1_SM3_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO1_SM3_PINCTRL_IN_BASE_MASK PIO1_SM3_PINCTRL_IN_BASE(ALL1)
#define PIO1_SM3_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO1_SM3_PINCTRL_SIDESET_BASE_MASK PIO1_SM3_PINCTRL_SIDESET_BASE(ALL1)
#define PIO1_SM3_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO1_SM3_PINCTRL_SET_BASE_MASK PIO1_SM3_PINCTRL_SET_BASE(ALL1)
#define PIO1_SM3_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO1_SM3_PINCTRL_OUT_BASE_MASK PIO1_SM3_PINCTRL_OUT_BASE(ALL1)

/*RXF0_PUTGET0 Register macros*/


/*RXF0_PUTGET1 Register macros*/


/*RXF0_PUTGET2 Register macros*/


/*RXF0_PUTGET3 Register macros*/


/*RXF1_PUTGET0 Register macros*/


/*RXF1_PUTGET1 Register macros*/


/*RXF1_PUTGET2 Register macros*/


/*RXF1_PUTGET3 Register macros*/


/*RXF2_PUTGET0 Register macros*/


/*RXF2_PUTGET1 Register macros*/


/*RXF2_PUTGET2 Register macros*/


/*RXF2_PUTGET3 Register macros*/


/*RXF3_PUTGET0 Register macros*/


/*RXF3_PUTGET1 Register macros*/


/*RXF3_PUTGET2 Register macros*/


/*RXF3_PUTGET3 Register macros*/


/*GPIOBASE Register macros*/


/*INTR Register macros*/

#define PIO1_INTR_SM7(v) (((v)&0x1)<<15)
#define PIO1_INTR_SM7_MASK PIO1_INTR_SM7(ALL1)
#define PIO1_INTR_SM6(v) (((v)&0x1)<<14)
#define PIO1_INTR_SM6_MASK PIO1_INTR_SM6(ALL1)
#define PIO1_INTR_SM5(v) (((v)&0x1)<<13)
#define PIO1_INTR_SM5_MASK PIO1_INTR_SM5(ALL1)
#define PIO1_INTR_SM4(v) (((v)&0x1)<<12)
#define PIO1_INTR_SM4_MASK PIO1_INTR_SM4(ALL1)
#define PIO1_INTR_SM3(v) (((v)&0x1)<<11)
#define PIO1_INTR_SM3_MASK PIO1_INTR_SM3(ALL1)
#define PIO1_INTR_SM2(v) (((v)&0x1)<<10)
#define PIO1_INTR_SM2_MASK PIO1_INTR_SM2(ALL1)
#define PIO1_INTR_SM1(v) (((v)&0x1)<<9)
#define PIO1_INTR_SM1_MASK PIO1_INTR_SM1(ALL1)
#define PIO1_INTR_SM0(v) (((v)&0x1)<<8)
#define PIO1_INTR_SM0_MASK PIO1_INTR_SM0(ALL1)
#define PIO1_INTR_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_INTR_SM3_TXNFULL_MASK PIO1_INTR_SM3_TXNFULL(ALL1)
#define PIO1_INTR_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_INTR_SM2_TXNFULL_MASK PIO1_INTR_SM2_TXNFULL(ALL1)
#define PIO1_INTR_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_INTR_SM1_TXNFULL_MASK PIO1_INTR_SM1_TXNFULL(ALL1)
#define PIO1_INTR_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_INTR_SM0_TXNFULL_MASK PIO1_INTR_SM0_TXNFULL(ALL1)
#define PIO1_INTR_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_INTR_SM3_RXNEMPTY_MASK PIO1_INTR_SM3_RXNEMPTY(ALL1)
#define PIO1_INTR_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_INTR_SM2_RXNEMPTY_MASK PIO1_INTR_SM2_RXNEMPTY(ALL1)
#define PIO1_INTR_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_INTR_SM1_RXNEMPTY_MASK PIO1_INTR_SM1_RXNEMPTY(ALL1)
#define PIO1_INTR_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_INTR_SM0_RXNEMPTY_MASK PIO1_INTR_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTE Register macros*/

#define PIO1_IRQ0_INTE_SM7(v) (((v)&0x1)<<15)
#define PIO1_IRQ0_INTE_SM7_MASK PIO1_IRQ0_INTE_SM7(ALL1)
#define PIO1_IRQ0_INTE_SM6(v) (((v)&0x1)<<14)
#define PIO1_IRQ0_INTE_SM6_MASK PIO1_IRQ0_INTE_SM6(ALL1)
#define PIO1_IRQ0_INTE_SM5(v) (((v)&0x1)<<13)
#define PIO1_IRQ0_INTE_SM5_MASK PIO1_IRQ0_INTE_SM5(ALL1)
#define PIO1_IRQ0_INTE_SM4(v) (((v)&0x1)<<12)
#define PIO1_IRQ0_INTE_SM4_MASK PIO1_IRQ0_INTE_SM4(ALL1)
#define PIO1_IRQ0_INTE_SM3(v) (((v)&0x1)<<11)
#define PIO1_IRQ0_INTE_SM3_MASK PIO1_IRQ0_INTE_SM3(ALL1)
#define PIO1_IRQ0_INTE_SM2(v) (((v)&0x1)<<10)
#define PIO1_IRQ0_INTE_SM2_MASK PIO1_IRQ0_INTE_SM2(ALL1)
#define PIO1_IRQ0_INTE_SM1(v) (((v)&0x1)<<9)
#define PIO1_IRQ0_INTE_SM1_MASK PIO1_IRQ0_INTE_SM1(ALL1)
#define PIO1_IRQ0_INTE_SM0(v) (((v)&0x1)<<8)
#define PIO1_IRQ0_INTE_SM0_MASK PIO1_IRQ0_INTE_SM0(ALL1)
#define PIO1_IRQ0_INTE_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_IRQ0_INTE_SM3_TXNFULL_MASK PIO1_IRQ0_INTE_SM3_TXNFULL(ALL1)
#define PIO1_IRQ0_INTE_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_IRQ0_INTE_SM2_TXNFULL_MASK PIO1_IRQ0_INTE_SM2_TXNFULL(ALL1)
#define PIO1_IRQ0_INTE_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_IRQ0_INTE_SM1_TXNFULL_MASK PIO1_IRQ0_INTE_SM1_TXNFULL(ALL1)
#define PIO1_IRQ0_INTE_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_IRQ0_INTE_SM0_TXNFULL_MASK PIO1_IRQ0_INTE_SM0_TXNFULL(ALL1)
#define PIO1_IRQ0_INTE_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_IRQ0_INTE_SM3_RXNEMPTY_MASK PIO1_IRQ0_INTE_SM3_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTE_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_IRQ0_INTE_SM2_RXNEMPTY_MASK PIO1_IRQ0_INTE_SM2_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTE_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_IRQ0_INTE_SM1_RXNEMPTY_MASK PIO1_IRQ0_INTE_SM1_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTE_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_IRQ0_INTE_SM0_RXNEMPTY_MASK PIO1_IRQ0_INTE_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTF Register macros*/

#define PIO1_IRQ0_INTF_SM7(v) (((v)&0x1)<<15)
#define PIO1_IRQ0_INTF_SM7_MASK PIO1_IRQ0_INTF_SM7(ALL1)
#define PIO1_IRQ0_INTF_SM6(v) (((v)&0x1)<<14)
#define PIO1_IRQ0_INTF_SM6_MASK PIO1_IRQ0_INTF_SM6(ALL1)
#define PIO1_IRQ0_INTF_SM5(v) (((v)&0x1)<<13)
#define PIO1_IRQ0_INTF_SM5_MASK PIO1_IRQ0_INTF_SM5(ALL1)
#define PIO1_IRQ0_INTF_SM4(v) (((v)&0x1)<<12)
#define PIO1_IRQ0_INTF_SM4_MASK PIO1_IRQ0_INTF_SM4(ALL1)
#define PIO1_IRQ0_INTF_SM3(v) (((v)&0x1)<<11)
#define PIO1_IRQ0_INTF_SM3_MASK PIO1_IRQ0_INTF_SM3(ALL1)
#define PIO1_IRQ0_INTF_SM2(v) (((v)&0x1)<<10)
#define PIO1_IRQ0_INTF_SM2_MASK PIO1_IRQ0_INTF_SM2(ALL1)
#define PIO1_IRQ0_INTF_SM1(v) (((v)&0x1)<<9)
#define PIO1_IRQ0_INTF_SM1_MASK PIO1_IRQ0_INTF_SM1(ALL1)
#define PIO1_IRQ0_INTF_SM0(v) (((v)&0x1)<<8)
#define PIO1_IRQ0_INTF_SM0_MASK PIO1_IRQ0_INTF_SM0(ALL1)
#define PIO1_IRQ0_INTF_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_IRQ0_INTF_SM3_TXNFULL_MASK PIO1_IRQ0_INTF_SM3_TXNFULL(ALL1)
#define PIO1_IRQ0_INTF_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_IRQ0_INTF_SM2_TXNFULL_MASK PIO1_IRQ0_INTF_SM2_TXNFULL(ALL1)
#define PIO1_IRQ0_INTF_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_IRQ0_INTF_SM1_TXNFULL_MASK PIO1_IRQ0_INTF_SM1_TXNFULL(ALL1)
#define PIO1_IRQ0_INTF_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_IRQ0_INTF_SM0_TXNFULL_MASK PIO1_IRQ0_INTF_SM0_TXNFULL(ALL1)
#define PIO1_IRQ0_INTF_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_IRQ0_INTF_SM3_RXNEMPTY_MASK PIO1_IRQ0_INTF_SM3_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTF_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_IRQ0_INTF_SM2_RXNEMPTY_MASK PIO1_IRQ0_INTF_SM2_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTF_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_IRQ0_INTF_SM1_RXNEMPTY_MASK PIO1_IRQ0_INTF_SM1_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTF_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_IRQ0_INTF_SM0_RXNEMPTY_MASK PIO1_IRQ0_INTF_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTS Register macros*/

#define PIO1_IRQ0_INTS_SM7(v) (((v)&0x1)<<15)
#define PIO1_IRQ0_INTS_SM7_MASK PIO1_IRQ0_INTS_SM7(ALL1)
#define PIO1_IRQ0_INTS_SM6(v) (((v)&0x1)<<14)
#define PIO1_IRQ0_INTS_SM6_MASK PIO1_IRQ0_INTS_SM6(ALL1)
#define PIO1_IRQ0_INTS_SM5(v) (((v)&0x1)<<13)
#define PIO1_IRQ0_INTS_SM5_MASK PIO1_IRQ0_INTS_SM5(ALL1)
#define PIO1_IRQ0_INTS_SM4(v) (((v)&0x1)<<12)
#define PIO1_IRQ0_INTS_SM4_MASK PIO1_IRQ0_INTS_SM4(ALL1)
#define PIO1_IRQ0_INTS_SM3(v) (((v)&0x1)<<11)
#define PIO1_IRQ0_INTS_SM3_MASK PIO1_IRQ0_INTS_SM3(ALL1)
#define PIO1_IRQ0_INTS_SM2(v) (((v)&0x1)<<10)
#define PIO1_IRQ0_INTS_SM2_MASK PIO1_IRQ0_INTS_SM2(ALL1)
#define PIO1_IRQ0_INTS_SM1(v) (((v)&0x1)<<9)
#define PIO1_IRQ0_INTS_SM1_MASK PIO1_IRQ0_INTS_SM1(ALL1)
#define PIO1_IRQ0_INTS_SM0(v) (((v)&0x1)<<8)
#define PIO1_IRQ0_INTS_SM0_MASK PIO1_IRQ0_INTS_SM0(ALL1)
#define PIO1_IRQ0_INTS_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_IRQ0_INTS_SM3_TXNFULL_MASK PIO1_IRQ0_INTS_SM3_TXNFULL(ALL1)
#define PIO1_IRQ0_INTS_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_IRQ0_INTS_SM2_TXNFULL_MASK PIO1_IRQ0_INTS_SM2_TXNFULL(ALL1)
#define PIO1_IRQ0_INTS_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_IRQ0_INTS_SM1_TXNFULL_MASK PIO1_IRQ0_INTS_SM1_TXNFULL(ALL1)
#define PIO1_IRQ0_INTS_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_IRQ0_INTS_SM0_TXNFULL_MASK PIO1_IRQ0_INTS_SM0_TXNFULL(ALL1)
#define PIO1_IRQ0_INTS_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_IRQ0_INTS_SM3_RXNEMPTY_MASK PIO1_IRQ0_INTS_SM3_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTS_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_IRQ0_INTS_SM2_RXNEMPTY_MASK PIO1_IRQ0_INTS_SM2_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTS_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_IRQ0_INTS_SM1_RXNEMPTY_MASK PIO1_IRQ0_INTS_SM1_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTS_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_IRQ0_INTS_SM0_RXNEMPTY_MASK PIO1_IRQ0_INTS_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTE Register macros*/

#define PIO1_IRQ1_INTE_SM7(v) (((v)&0x1)<<15)
#define PIO1_IRQ1_INTE_SM7_MASK PIO1_IRQ1_INTE_SM7(ALL1)
#define PIO1_IRQ1_INTE_SM6(v) (((v)&0x1)<<14)
#define PIO1_IRQ1_INTE_SM6_MASK PIO1_IRQ1_INTE_SM6(ALL1)
#define PIO1_IRQ1_INTE_SM5(v) (((v)&0x1)<<13)
#define PIO1_IRQ1_INTE_SM5_MASK PIO1_IRQ1_INTE_SM5(ALL1)
#define PIO1_IRQ1_INTE_SM4(v) (((v)&0x1)<<12)
#define PIO1_IRQ1_INTE_SM4_MASK PIO1_IRQ1_INTE_SM4(ALL1)
#define PIO1_IRQ1_INTE_SM3(v) (((v)&0x1)<<11)
#define PIO1_IRQ1_INTE_SM3_MASK PIO1_IRQ1_INTE_SM3(ALL1)
#define PIO1_IRQ1_INTE_SM2(v) (((v)&0x1)<<10)
#define PIO1_IRQ1_INTE_SM2_MASK PIO1_IRQ1_INTE_SM2(ALL1)
#define PIO1_IRQ1_INTE_SM1(v) (((v)&0x1)<<9)
#define PIO1_IRQ1_INTE_SM1_MASK PIO1_IRQ1_INTE_SM1(ALL1)
#define PIO1_IRQ1_INTE_SM0(v) (((v)&0x1)<<8)
#define PIO1_IRQ1_INTE_SM0_MASK PIO1_IRQ1_INTE_SM0(ALL1)
#define PIO1_IRQ1_INTE_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_IRQ1_INTE_SM3_TXNFULL_MASK PIO1_IRQ1_INTE_SM3_TXNFULL(ALL1)
#define PIO1_IRQ1_INTE_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_IRQ1_INTE_SM2_TXNFULL_MASK PIO1_IRQ1_INTE_SM2_TXNFULL(ALL1)
#define PIO1_IRQ1_INTE_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_IRQ1_INTE_SM1_TXNFULL_MASK PIO1_IRQ1_INTE_SM1_TXNFULL(ALL1)
#define PIO1_IRQ1_INTE_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_IRQ1_INTE_SM0_TXNFULL_MASK PIO1_IRQ1_INTE_SM0_TXNFULL(ALL1)
#define PIO1_IRQ1_INTE_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_IRQ1_INTE_SM3_RXNEMPTY_MASK PIO1_IRQ1_INTE_SM3_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTE_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_IRQ1_INTE_SM2_RXNEMPTY_MASK PIO1_IRQ1_INTE_SM2_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTE_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_IRQ1_INTE_SM1_RXNEMPTY_MASK PIO1_IRQ1_INTE_SM1_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTE_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_IRQ1_INTE_SM0_RXNEMPTY_MASK PIO1_IRQ1_INTE_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTF Register macros*/

#define PIO1_IRQ1_INTF_SM7(v) (((v)&0x1)<<15)
#define PIO1_IRQ1_INTF_SM7_MASK PIO1_IRQ1_INTF_SM7(ALL1)
#define PIO1_IRQ1_INTF_SM6(v) (((v)&0x1)<<14)
#define PIO1_IRQ1_INTF_SM6_MASK PIO1_IRQ1_INTF_SM6(ALL1)
#define PIO1_IRQ1_INTF_SM5(v) (((v)&0x1)<<13)
#define PIO1_IRQ1_INTF_SM5_MASK PIO1_IRQ1_INTF_SM5(ALL1)
#define PIO1_IRQ1_INTF_SM4(v) (((v)&0x1)<<12)
#define PIO1_IRQ1_INTF_SM4_MASK PIO1_IRQ1_INTF_SM4(ALL1)
#define PIO1_IRQ1_INTF_SM3(v) (((v)&0x1)<<11)
#define PIO1_IRQ1_INTF_SM3_MASK PIO1_IRQ1_INTF_SM3(ALL1)
#define PIO1_IRQ1_INTF_SM2(v) (((v)&0x1)<<10)
#define PIO1_IRQ1_INTF_SM2_MASK PIO1_IRQ1_INTF_SM2(ALL1)
#define PIO1_IRQ1_INTF_SM1(v) (((v)&0x1)<<9)
#define PIO1_IRQ1_INTF_SM1_MASK PIO1_IRQ1_INTF_SM1(ALL1)
#define PIO1_IRQ1_INTF_SM0(v) (((v)&0x1)<<8)
#define PIO1_IRQ1_INTF_SM0_MASK PIO1_IRQ1_INTF_SM0(ALL1)
#define PIO1_IRQ1_INTF_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_IRQ1_INTF_SM3_TXNFULL_MASK PIO1_IRQ1_INTF_SM3_TXNFULL(ALL1)
#define PIO1_IRQ1_INTF_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_IRQ1_INTF_SM2_TXNFULL_MASK PIO1_IRQ1_INTF_SM2_TXNFULL(ALL1)
#define PIO1_IRQ1_INTF_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_IRQ1_INTF_SM1_TXNFULL_MASK PIO1_IRQ1_INTF_SM1_TXNFULL(ALL1)
#define PIO1_IRQ1_INTF_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_IRQ1_INTF_SM0_TXNFULL_MASK PIO1_IRQ1_INTF_SM0_TXNFULL(ALL1)
#define PIO1_IRQ1_INTF_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_IRQ1_INTF_SM3_RXNEMPTY_MASK PIO1_IRQ1_INTF_SM3_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTF_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_IRQ1_INTF_SM2_RXNEMPTY_MASK PIO1_IRQ1_INTF_SM2_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTF_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_IRQ1_INTF_SM1_RXNEMPTY_MASK PIO1_IRQ1_INTF_SM1_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTF_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_IRQ1_INTF_SM0_RXNEMPTY_MASK PIO1_IRQ1_INTF_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTS Register macros*/

#define PIO1_IRQ1_INTS_SM7(v) (((v)&0x1)<<15)
#define PIO1_IRQ1_INTS_SM7_MASK PIO1_IRQ1_INTS_SM7(ALL1)
#define PIO1_IRQ1_INTS_SM6(v) (((v)&0x1)<<14)
#define PIO1_IRQ1_INTS_SM6_MASK PIO1_IRQ1_INTS_SM6(ALL1)
#define PIO1_IRQ1_INTS_SM5(v) (((v)&0x1)<<13)
#define PIO1_IRQ1_INTS_SM5_MASK PIO1_IRQ1_INTS_SM5(ALL1)
#define PIO1_IRQ1_INTS_SM4(v) (((v)&0x1)<<12)
#define PIO1_IRQ1_INTS_SM4_MASK PIO1_IRQ1_INTS_SM4(ALL1)
#define PIO1_IRQ1_INTS_SM3(v) (((v)&0x1)<<11)
#define PIO1_IRQ1_INTS_SM3_MASK PIO1_IRQ1_INTS_SM3(ALL1)
#define PIO1_IRQ1_INTS_SM2(v) (((v)&0x1)<<10)
#define PIO1_IRQ1_INTS_SM2_MASK PIO1_IRQ1_INTS_SM2(ALL1)
#define PIO1_IRQ1_INTS_SM1(v) (((v)&0x1)<<9)
#define PIO1_IRQ1_INTS_SM1_MASK PIO1_IRQ1_INTS_SM1(ALL1)
#define PIO1_IRQ1_INTS_SM0(v) (((v)&0x1)<<8)
#define PIO1_IRQ1_INTS_SM0_MASK PIO1_IRQ1_INTS_SM0(ALL1)
#define PIO1_IRQ1_INTS_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_IRQ1_INTS_SM3_TXNFULL_MASK PIO1_IRQ1_INTS_SM3_TXNFULL(ALL1)
#define PIO1_IRQ1_INTS_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_IRQ1_INTS_SM2_TXNFULL_MASK PIO1_IRQ1_INTS_SM2_TXNFULL(ALL1)
#define PIO1_IRQ1_INTS_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_IRQ1_INTS_SM1_TXNFULL_MASK PIO1_IRQ1_INTS_SM1_TXNFULL(ALL1)
#define PIO1_IRQ1_INTS_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_IRQ1_INTS_SM0_TXNFULL_MASK PIO1_IRQ1_INTS_SM0_TXNFULL(ALL1)
#define PIO1_IRQ1_INTS_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_IRQ1_INTS_SM3_RXNEMPTY_MASK PIO1_IRQ1_INTS_SM3_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTS_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_IRQ1_INTS_SM2_RXNEMPTY_MASK PIO1_IRQ1_INTS_SM2_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTS_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_IRQ1_INTS_SM1_RXNEMPTY_MASK PIO1_IRQ1_INTS_SM1_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTS_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_IRQ1_INTS_SM0_RXNEMPTY_MASK PIO1_IRQ1_INTS_SM0_RXNEMPTY(ALL1)

/*CTRL Register macros*/

#define PIO2_CTRL_NEXTPREV_CLKDIV_RESTART(v) (((v)&0x1)<<26)
#define PIO2_CTRL_NEXTPREV_CLKDIV_RESTART_MASK PIO2_CTRL_NEXTPREV_CLKDIV_RESTART(ALL1)
#define PIO2_CTRL_NEXTPREV_SM_DISABLE(v) (((v)&0x1)<<25)
#define PIO2_CTRL_NEXTPREV_SM_DISABLE_MASK PIO2_CTRL_NEXTPREV_SM_DISABLE(ALL1)
#define PIO2_CTRL_NEXTPREV_SM_ENABLE(v) (((v)&0x1)<<24)
#define PIO2_CTRL_NEXTPREV_SM_ENABLE_MASK PIO2_CTRL_NEXTPREV_SM_ENABLE(ALL1)
#define PIO2_CTRL_NEXT_PIO_MASK(v) (((v)&0xf)<<20)
#define PIO2_CTRL_NEXT_PIO_MASK_MASK PIO2_CTRL_NEXT_PIO_MASK(ALL1)
#define PIO2_CTRL_PREV_PIO_MASK(v) (((v)&0xf)<<16)
#define PIO2_CTRL_PREV_PIO_MASK_MASK PIO2_CTRL_PREV_PIO_MASK(ALL1)
#define PIO2_CTRL_CLKDIV_RESTART(v) (((v)&0xf)<<8)
#define PIO2_CTRL_CLKDIV_RESTART_MASK PIO2_CTRL_CLKDIV_RESTART(ALL1)
#define PIO2_CTRL_SM_RESTART(v) (((v)&0xf)<<4)
#define PIO2_CTRL_SM_RESTART_MASK PIO2_CTRL_SM_RESTART(ALL1)
#define PIO2_CTRL_SM_ENABLE(v) (((v)&0xf)<<0)
#define PIO2_CTRL_SM_ENABLE_MASK PIO2_CTRL_SM_ENABLE(ALL1)

/*FSTAT Register macros*/

#define PIO2_FSTAT_TXEMPTY(v) (((v)&0xf)<<24)
#define PIO2_FSTAT_TXEMPTY_MASK PIO2_FSTAT_TXEMPTY(ALL1)
#define PIO2_FSTAT_TXFULL(v) (((v)&0xf)<<16)
#define PIO2_FSTAT_TXFULL_MASK PIO2_FSTAT_TXFULL(ALL1)
#define PIO2_FSTAT_RXEMPTY(v) (((v)&0xf)<<8)
#define PIO2_FSTAT_RXEMPTY_MASK PIO2_FSTAT_RXEMPTY(ALL1)
#define PIO2_FSTAT_RXFULL(v) (((v)&0xf)<<0)
#define PIO2_FSTAT_RXFULL_MASK PIO2_FSTAT_RXFULL(ALL1)

/*FDEBUG Register macros*/

#define PIO2_FDEBUG_TXSTALL(v) (((v)&0xf)<<24)
#define PIO2_FDEBUG_TXSTALL_MASK PIO2_FDEBUG_TXSTALL(ALL1)
#define PIO2_FDEBUG_TXOVER(v) (((v)&0xf)<<16)
#define PIO2_FDEBUG_TXOVER_MASK PIO2_FDEBUG_TXOVER(ALL1)
#define PIO2_FDEBUG_RXUNDER(v) (((v)&0xf)<<8)
#define PIO2_FDEBUG_RXUNDER_MASK PIO2_FDEBUG_RXUNDER(ALL1)
#define PIO2_FDEBUG_RXSTALL(v) (((v)&0xf)<<0)
#define PIO2_FDEBUG_RXSTALL_MASK PIO2_FDEBUG_RXSTALL(ALL1)

/*FLEVEL Register macros*/

#define PIO2_FLEVEL_RX3(v) (((v)&0xf)<<28)
#define PIO2_FLEVEL_RX3_MASK PIO2_FLEVEL_RX3(ALL1)
#define PIO2_FLEVEL_TX3(v) (((v)&0xf)<<24)
#define PIO2_FLEVEL_TX3_MASK PIO2_FLEVEL_TX3(ALL1)
#define PIO2_FLEVEL_RX2(v) (((v)&0xf)<<20)
#define PIO2_FLEVEL_RX2_MASK PIO2_FLEVEL_RX2(ALL1)
#define PIO2_FLEVEL_TX2(v) (((v)&0xf)<<16)
#define PIO2_FLEVEL_TX2_MASK PIO2_FLEVEL_TX2(ALL1)
#define PIO2_FLEVEL_RX1(v) (((v)&0xf)<<12)
#define PIO2_FLEVEL_RX1_MASK PIO2_FLEVEL_RX1(ALL1)
#define PIO2_FLEVEL_TX1(v) (((v)&0xf)<<8)
#define PIO2_FLEVEL_TX1_MASK PIO2_FLEVEL_TX1(ALL1)
#define PIO2_FLEVEL_RX0(v) (((v)&0xf)<<4)
#define PIO2_FLEVEL_RX0_MASK PIO2_FLEVEL_RX0(ALL1)
#define PIO2_FLEVEL_TX0(v) (((v)&0xf)<<0)
#define PIO2_FLEVEL_TX0_MASK PIO2_FLEVEL_TX0(ALL1)

/*TXF0 Register macros*/


/*TXF1 Register macros*/


/*TXF2 Register macros*/


/*TXF3 Register macros*/


/*RXF0 Register macros*/


/*RXF1 Register macros*/


/*RXF2 Register macros*/


/*RXF3 Register macros*/


/*IRQ Register macros*/


/*IRQ_FORCE Register macros*/


/*INPUT_SYNC_BYPASS Register macros*/


/*DBG_PADOUT Register macros*/


/*DBG_PADOE Register macros*/


/*DBG_CFGINFO Register macros*/

#define PIO2_DBG_CFGINFO_VERSION(v) (((v)&0xf)<<28)
#define PIO2_DBG_CFGINFO_VERSION_MASK PIO2_DBG_CFGINFO_VERSION(ALL1)
#define PIO2_DBG_CFGINFO_IMEM_SIZE(v) (((v)&0x3f)<<16)
#define PIO2_DBG_CFGINFO_IMEM_SIZE_MASK PIO2_DBG_CFGINFO_IMEM_SIZE(ALL1)
#define PIO2_DBG_CFGINFO_SM_COUNT(v) (((v)&0xf)<<8)
#define PIO2_DBG_CFGINFO_SM_COUNT_MASK PIO2_DBG_CFGINFO_SM_COUNT(ALL1)
#define PIO2_DBG_CFGINFO_FIFO_DEPTH(v) (((v)&0x3f)<<0)
#define PIO2_DBG_CFGINFO_FIFO_DEPTH_MASK PIO2_DBG_CFGINFO_FIFO_DEPTH(ALL1)

/*INSTR_MEM0 Register macros*/


/*INSTR_MEM1 Register macros*/


/*INSTR_MEM2 Register macros*/


/*INSTR_MEM3 Register macros*/


/*INSTR_MEM4 Register macros*/


/*INSTR_MEM5 Register macros*/


/*INSTR_MEM6 Register macros*/


/*INSTR_MEM7 Register macros*/


/*INSTR_MEM8 Register macros*/


/*INSTR_MEM9 Register macros*/


/*INSTR_MEM10 Register macros*/


/*INSTR_MEM11 Register macros*/


/*INSTR_MEM12 Register macros*/


/*INSTR_MEM13 Register macros*/


/*INSTR_MEM14 Register macros*/


/*INSTR_MEM15 Register macros*/


/*INSTR_MEM16 Register macros*/


/*INSTR_MEM17 Register macros*/


/*INSTR_MEM18 Register macros*/


/*INSTR_MEM19 Register macros*/


/*INSTR_MEM20 Register macros*/


/*INSTR_MEM21 Register macros*/


/*INSTR_MEM22 Register macros*/


/*INSTR_MEM23 Register macros*/


/*INSTR_MEM24 Register macros*/


/*INSTR_MEM25 Register macros*/


/*INSTR_MEM26 Register macros*/


/*INSTR_MEM27 Register macros*/


/*INSTR_MEM28 Register macros*/


/*INSTR_MEM29 Register macros*/


/*INSTR_MEM30 Register macros*/


/*INSTR_MEM31 Register macros*/


/*SM0_CLKDIV Register macros*/

#define PIO2_SM0_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO2_SM0_CLKDIV_INT_MASK PIO2_SM0_CLKDIV_INT(ALL1)
#define PIO2_SM0_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO2_SM0_CLKDIV_FRAC_MASK PIO2_SM0_CLKDIV_FRAC(ALL1)

/*SM0_EXECCTRL Register macros*/

#define PIO2_SM0_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO2_SM0_EXECCTRL_EXEC_STALLED_MASK PIO2_SM0_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO2_SM0_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO2_SM0_EXECCTRL_SIDE_EN_MASK PIO2_SM0_EXECCTRL_SIDE_EN(ALL1)
#define PIO2_SM0_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO2_SM0_EXECCTRL_SIDE_PINDIR_MASK PIO2_SM0_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO2_SM0_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO2_SM0_EXECCTRL_JMP_PIN_MASK PIO2_SM0_EXECCTRL_JMP_PIN(ALL1)
#define PIO2_SM0_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO2_SM0_EXECCTRL_OUT_EN_SEL_MASK PIO2_SM0_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO2_SM0_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO2_SM0_EXECCTRL_INLINE_OUT_EN_MASK PIO2_SM0_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO2_SM0_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO2_SM0_EXECCTRL_OUT_STICKY_MASK PIO2_SM0_EXECCTRL_OUT_STICKY(ALL1)
#define PIO2_SM0_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO2_SM0_EXECCTRL_WRAP_TOP_MASK PIO2_SM0_EXECCTRL_WRAP_TOP(ALL1)
#define PIO2_SM0_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO2_SM0_EXECCTRL_WRAP_BOTTOM_MASK PIO2_SM0_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO2_SM0_EXECCTRL_STATUS_SEL(v) (((v)&0x3)<<5)
#define PIO2_SM0_EXECCTRL_STATUS_SEL_MASK PIO2_SM0_EXECCTRL_STATUS_SEL(ALL1)
#define PIO2_SM0_EXECCTRL_STATUS_N(v) (((v)&0x1f)<<0)
#define PIO2_SM0_EXECCTRL_STATUS_N_MASK PIO2_SM0_EXECCTRL_STATUS_N(ALL1)

/*SM0_SHIFTCTRL Register macros*/

#define PIO2_SM0_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO2_SM0_SHIFTCTRL_FJOIN_RX_MASK PIO2_SM0_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO2_SM0_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO2_SM0_SHIFTCTRL_FJOIN_TX_MASK PIO2_SM0_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO2_SM0_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO2_SM0_SHIFTCTRL_PULL_THRESH_MASK PIO2_SM0_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO2_SM0_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO2_SM0_SHIFTCTRL_PUSH_THRESH_MASK PIO2_SM0_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO2_SM0_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO2_SM0_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO2_SM0_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO2_SM0_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO2_SM0_SHIFTCTRL_IN_SHIFTDIR_MASK PIO2_SM0_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO2_SM0_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO2_SM0_SHIFTCTRL_AUTOPULL_MASK PIO2_SM0_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO2_SM0_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO2_SM0_SHIFTCTRL_AUTOPUSH_MASK PIO2_SM0_SHIFTCTRL_AUTOPUSH(ALL1)
#define PIO2_SM0_SHIFTCTRL_FJOIN_RX_PUT(v) (((v)&0x1)<<15)
#define PIO2_SM0_SHIFTCTRL_FJOIN_RX_PUT_MASK PIO2_SM0_SHIFTCTRL_FJOIN_RX_PUT(ALL1)
#define PIO2_SM0_SHIFTCTRL_FJOIN_RX_GET(v) (((v)&0x1)<<14)
#define PIO2_SM0_SHIFTCTRL_FJOIN_RX_GET_MASK PIO2_SM0_SHIFTCTRL_FJOIN_RX_GET(ALL1)
#define PIO2_SM0_SHIFTCTRL_IN_COUNT(v) (((v)&0x1f)<<0)
#define PIO2_SM0_SHIFTCTRL_IN_COUNT_MASK PIO2_SM0_SHIFTCTRL_IN_COUNT(ALL1)

/*SM0_ADDR Register macros*/


/*SM0_INSTR Register macros*/


/*SM0_PINCTRL Register macros*/

#define PIO2_SM0_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO2_SM0_PINCTRL_SIDESET_COUNT_MASK PIO2_SM0_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO2_SM0_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO2_SM0_PINCTRL_SET_COUNT_MASK PIO2_SM0_PINCTRL_SET_COUNT(ALL1)
#define PIO2_SM0_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO2_SM0_PINCTRL_OUT_COUNT_MASK PIO2_SM0_PINCTRL_OUT_COUNT(ALL1)
#define PIO2_SM0_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO2_SM0_PINCTRL_IN_BASE_MASK PIO2_SM0_PINCTRL_IN_BASE(ALL1)
#define PIO2_SM0_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO2_SM0_PINCTRL_SIDESET_BASE_MASK PIO2_SM0_PINCTRL_SIDESET_BASE(ALL1)
#define PIO2_SM0_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO2_SM0_PINCTRL_SET_BASE_MASK PIO2_SM0_PINCTRL_SET_BASE(ALL1)
#define PIO2_SM0_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO2_SM0_PINCTRL_OUT_BASE_MASK PIO2_SM0_PINCTRL_OUT_BASE(ALL1)

/*SM1_CLKDIV Register macros*/

#define PIO2_SM1_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO2_SM1_CLKDIV_INT_MASK PIO2_SM1_CLKDIV_INT(ALL1)
#define PIO2_SM1_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO2_SM1_CLKDIV_FRAC_MASK PIO2_SM1_CLKDIV_FRAC(ALL1)

/*SM1_EXECCTRL Register macros*/

#define PIO2_SM1_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO2_SM1_EXECCTRL_EXEC_STALLED_MASK PIO2_SM1_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO2_SM1_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO2_SM1_EXECCTRL_SIDE_EN_MASK PIO2_SM1_EXECCTRL_SIDE_EN(ALL1)
#define PIO2_SM1_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO2_SM1_EXECCTRL_SIDE_PINDIR_MASK PIO2_SM1_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO2_SM1_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO2_SM1_EXECCTRL_JMP_PIN_MASK PIO2_SM1_EXECCTRL_JMP_PIN(ALL1)
#define PIO2_SM1_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO2_SM1_EXECCTRL_OUT_EN_SEL_MASK PIO2_SM1_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO2_SM1_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO2_SM1_EXECCTRL_INLINE_OUT_EN_MASK PIO2_SM1_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO2_SM1_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO2_SM1_EXECCTRL_OUT_STICKY_MASK PIO2_SM1_EXECCTRL_OUT_STICKY(ALL1)
#define PIO2_SM1_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO2_SM1_EXECCTRL_WRAP_TOP_MASK PIO2_SM1_EXECCTRL_WRAP_TOP(ALL1)
#define PIO2_SM1_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO2_SM1_EXECCTRL_WRAP_BOTTOM_MASK PIO2_SM1_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO2_SM1_EXECCTRL_STATUS_SEL(v) (((v)&0x3)<<5)
#define PIO2_SM1_EXECCTRL_STATUS_SEL_MASK PIO2_SM1_EXECCTRL_STATUS_SEL(ALL1)
#define PIO2_SM1_EXECCTRL_STATUS_N(v) (((v)&0x1f)<<0)
#define PIO2_SM1_EXECCTRL_STATUS_N_MASK PIO2_SM1_EXECCTRL_STATUS_N(ALL1)

/*SM1_SHIFTCTRL Register macros*/

#define PIO2_SM1_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO2_SM1_SHIFTCTRL_FJOIN_RX_MASK PIO2_SM1_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO2_SM1_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO2_SM1_SHIFTCTRL_FJOIN_TX_MASK PIO2_SM1_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO2_SM1_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO2_SM1_SHIFTCTRL_PULL_THRESH_MASK PIO2_SM1_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO2_SM1_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO2_SM1_SHIFTCTRL_PUSH_THRESH_MASK PIO2_SM1_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO2_SM1_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO2_SM1_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO2_SM1_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO2_SM1_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO2_SM1_SHIFTCTRL_IN_SHIFTDIR_MASK PIO2_SM1_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO2_SM1_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO2_SM1_SHIFTCTRL_AUTOPULL_MASK PIO2_SM1_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO2_SM1_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO2_SM1_SHIFTCTRL_AUTOPUSH_MASK PIO2_SM1_SHIFTCTRL_AUTOPUSH(ALL1)
#define PIO2_SM1_SHIFTCTRL_FJOIN_RX_PUT(v) (((v)&0x1)<<15)
#define PIO2_SM1_SHIFTCTRL_FJOIN_RX_PUT_MASK PIO2_SM1_SHIFTCTRL_FJOIN_RX_PUT(ALL1)
#define PIO2_SM1_SHIFTCTRL_FJOIN_RX_GET(v) (((v)&0x1)<<14)
#define PIO2_SM1_SHIFTCTRL_FJOIN_RX_GET_MASK PIO2_SM1_SHIFTCTRL_FJOIN_RX_GET(ALL1)
#define PIO2_SM1_SHIFTCTRL_IN_COUNT(v) (((v)&0x1f)<<0)
#define PIO2_SM1_SHIFTCTRL_IN_COUNT_MASK PIO2_SM1_SHIFTCTRL_IN_COUNT(ALL1)

/*SM1_ADDR Register macros*/


/*SM1_INSTR Register macros*/


/*SM1_PINCTRL Register macros*/

#define PIO2_SM1_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO2_SM1_PINCTRL_SIDESET_COUNT_MASK PIO2_SM1_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO2_SM1_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO2_SM1_PINCTRL_SET_COUNT_MASK PIO2_SM1_PINCTRL_SET_COUNT(ALL1)
#define PIO2_SM1_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO2_SM1_PINCTRL_OUT_COUNT_MASK PIO2_SM1_PINCTRL_OUT_COUNT(ALL1)
#define PIO2_SM1_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO2_SM1_PINCTRL_IN_BASE_MASK PIO2_SM1_PINCTRL_IN_BASE(ALL1)
#define PIO2_SM1_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO2_SM1_PINCTRL_SIDESET_BASE_MASK PIO2_SM1_PINCTRL_SIDESET_BASE(ALL1)
#define PIO2_SM1_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO2_SM1_PINCTRL_SET_BASE_MASK PIO2_SM1_PINCTRL_SET_BASE(ALL1)
#define PIO2_SM1_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO2_SM1_PINCTRL_OUT_BASE_MASK PIO2_SM1_PINCTRL_OUT_BASE(ALL1)

/*SM2_CLKDIV Register macros*/

#define PIO2_SM2_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO2_SM2_CLKDIV_INT_MASK PIO2_SM2_CLKDIV_INT(ALL1)
#define PIO2_SM2_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO2_SM2_CLKDIV_FRAC_MASK PIO2_SM2_CLKDIV_FRAC(ALL1)

/*SM2_EXECCTRL Register macros*/

#define PIO2_SM2_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO2_SM2_EXECCTRL_EXEC_STALLED_MASK PIO2_SM2_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO2_SM2_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO2_SM2_EXECCTRL_SIDE_EN_MASK PIO2_SM2_EXECCTRL_SIDE_EN(ALL1)
#define PIO2_SM2_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO2_SM2_EXECCTRL_SIDE_PINDIR_MASK PIO2_SM2_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO2_SM2_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO2_SM2_EXECCTRL_JMP_PIN_MASK PIO2_SM2_EXECCTRL_JMP_PIN(ALL1)
#define PIO2_SM2_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO2_SM2_EXECCTRL_OUT_EN_SEL_MASK PIO2_SM2_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO2_SM2_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO2_SM2_EXECCTRL_INLINE_OUT_EN_MASK PIO2_SM2_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO2_SM2_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO2_SM2_EXECCTRL_OUT_STICKY_MASK PIO2_SM2_EXECCTRL_OUT_STICKY(ALL1)
#define PIO2_SM2_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO2_SM2_EXECCTRL_WRAP_TOP_MASK PIO2_SM2_EXECCTRL_WRAP_TOP(ALL1)
#define PIO2_SM2_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO2_SM2_EXECCTRL_WRAP_BOTTOM_MASK PIO2_SM2_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO2_SM2_EXECCTRL_STATUS_SEL(v) (((v)&0x3)<<5)
#define PIO2_SM2_EXECCTRL_STATUS_SEL_MASK PIO2_SM2_EXECCTRL_STATUS_SEL(ALL1)
#define PIO2_SM2_EXECCTRL_STATUS_N(v) (((v)&0x1f)<<0)
#define PIO2_SM2_EXECCTRL_STATUS_N_MASK PIO2_SM2_EXECCTRL_STATUS_N(ALL1)

/*SM2_SHIFTCTRL Register macros*/

#define PIO2_SM2_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO2_SM2_SHIFTCTRL_FJOIN_RX_MASK PIO2_SM2_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO2_SM2_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO2_SM2_SHIFTCTRL_FJOIN_TX_MASK PIO2_SM2_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO2_SM2_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO2_SM2_SHIFTCTRL_PULL_THRESH_MASK PIO2_SM2_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO2_SM2_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO2_SM2_SHIFTCTRL_PUSH_THRESH_MASK PIO2_SM2_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO2_SM2_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO2_SM2_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO2_SM2_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO2_SM2_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO2_SM2_SHIFTCTRL_IN_SHIFTDIR_MASK PIO2_SM2_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO2_SM2_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO2_SM2_SHIFTCTRL_AUTOPULL_MASK PIO2_SM2_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO2_SM2_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO2_SM2_SHIFTCTRL_AUTOPUSH_MASK PIO2_SM2_SHIFTCTRL_AUTOPUSH(ALL1)
#define PIO2_SM2_SHIFTCTRL_FJOIN_RX_PUT(v) (((v)&0x1)<<15)
#define PIO2_SM2_SHIFTCTRL_FJOIN_RX_PUT_MASK PIO2_SM2_SHIFTCTRL_FJOIN_RX_PUT(ALL1)
#define PIO2_SM2_SHIFTCTRL_FJOIN_RX_GET(v) (((v)&0x1)<<14)
#define PIO2_SM2_SHIFTCTRL_FJOIN_RX_GET_MASK PIO2_SM2_SHIFTCTRL_FJOIN_RX_GET(ALL1)
#define PIO2_SM2_SHIFTCTRL_IN_COUNT(v) (((v)&0x1f)<<0)
#define PIO2_SM2_SHIFTCTRL_IN_COUNT_MASK PIO2_SM2_SHIFTCTRL_IN_COUNT(ALL1)

/*SM2_ADDR Register macros*/


/*SM2_INSTR Register macros*/


/*SM2_PINCTRL Register macros*/

#define PIO2_SM2_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO2_SM2_PINCTRL_SIDESET_COUNT_MASK PIO2_SM2_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO2_SM2_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO2_SM2_PINCTRL_SET_COUNT_MASK PIO2_SM2_PINCTRL_SET_COUNT(ALL1)
#define PIO2_SM2_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO2_SM2_PINCTRL_OUT_COUNT_MASK PIO2_SM2_PINCTRL_OUT_COUNT(ALL1)
#define PIO2_SM2_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO2_SM2_PINCTRL_IN_BASE_MASK PIO2_SM2_PINCTRL_IN_BASE(ALL1)
#define PIO2_SM2_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO2_SM2_PINCTRL_SIDESET_BASE_MASK PIO2_SM2_PINCTRL_SIDESET_BASE(ALL1)
#define PIO2_SM2_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO2_SM2_PINCTRL_SET_BASE_MASK PIO2_SM2_PINCTRL_SET_BASE(ALL1)
#define PIO2_SM2_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO2_SM2_PINCTRL_OUT_BASE_MASK PIO2_SM2_PINCTRL_OUT_BASE(ALL1)

/*SM3_CLKDIV Register macros*/

#define PIO2_SM3_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO2_SM3_CLKDIV_INT_MASK PIO2_SM3_CLKDIV_INT(ALL1)
#define PIO2_SM3_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO2_SM3_CLKDIV_FRAC_MASK PIO2_SM3_CLKDIV_FRAC(ALL1)

/*SM3_EXECCTRL Register macros*/

#define PIO2_SM3_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO2_SM3_EXECCTRL_EXEC_STALLED_MASK PIO2_SM3_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO2_SM3_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO2_SM3_EXECCTRL_SIDE_EN_MASK PIO2_SM3_EXECCTRL_SIDE_EN(ALL1)
#define PIO2_SM3_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO2_SM3_EXECCTRL_SIDE_PINDIR_MASK PIO2_SM3_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO2_SM3_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO2_SM3_EXECCTRL_JMP_PIN_MASK PIO2_SM3_EXECCTRL_JMP_PIN(ALL1)
#define PIO2_SM3_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO2_SM3_EXECCTRL_OUT_EN_SEL_MASK PIO2_SM3_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO2_SM3_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO2_SM3_EXECCTRL_INLINE_OUT_EN_MASK PIO2_SM3_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO2_SM3_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO2_SM3_EXECCTRL_OUT_STICKY_MASK PIO2_SM3_EXECCTRL_OUT_STICKY(ALL1)
#define PIO2_SM3_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO2_SM3_EXECCTRL_WRAP_TOP_MASK PIO2_SM3_EXECCTRL_WRAP_TOP(ALL1)
#define PIO2_SM3_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO2_SM3_EXECCTRL_WRAP_BOTTOM_MASK PIO2_SM3_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO2_SM3_EXECCTRL_STATUS_SEL(v) (((v)&0x3)<<5)
#define PIO2_SM3_EXECCTRL_STATUS_SEL_MASK PIO2_SM3_EXECCTRL_STATUS_SEL(ALL1)
#define PIO2_SM3_EXECCTRL_STATUS_N(v) (((v)&0x1f)<<0)
#define PIO2_SM3_EXECCTRL_STATUS_N_MASK PIO2_SM3_EXECCTRL_STATUS_N(ALL1)

/*SM3_SHIFTCTRL Register macros*/

#define PIO2_SM3_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO2_SM3_SHIFTCTRL_FJOIN_RX_MASK PIO2_SM3_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO2_SM3_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO2_SM3_SHIFTCTRL_FJOIN_TX_MASK PIO2_SM3_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO2_SM3_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO2_SM3_SHIFTCTRL_PULL_THRESH_MASK PIO2_SM3_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO2_SM3_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO2_SM3_SHIFTCTRL_PUSH_THRESH_MASK PIO2_SM3_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO2_SM3_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO2_SM3_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO2_SM3_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO2_SM3_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO2_SM3_SHIFTCTRL_IN_SHIFTDIR_MASK PIO2_SM3_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO2_SM3_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO2_SM3_SHIFTCTRL_AUTOPULL_MASK PIO2_SM3_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO2_SM3_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO2_SM3_SHIFTCTRL_AUTOPUSH_MASK PIO2_SM3_SHIFTCTRL_AUTOPUSH(ALL1)
#define PIO2_SM3_SHIFTCTRL_FJOIN_RX_PUT(v) (((v)&0x1)<<15)
#define PIO2_SM3_SHIFTCTRL_FJOIN_RX_PUT_MASK PIO2_SM3_SHIFTCTRL_FJOIN_RX_PUT(ALL1)
#define PIO2_SM3_SHIFTCTRL_FJOIN_RX_GET(v) (((v)&0x1)<<14)
#define PIO2_SM3_SHIFTCTRL_FJOIN_RX_GET_MASK PIO2_SM3_SHIFTCTRL_FJOIN_RX_GET(ALL1)
#define PIO2_SM3_SHIFTCTRL_IN_COUNT(v) (((v)&0x1f)<<0)
#define PIO2_SM3_SHIFTCTRL_IN_COUNT_MASK PIO2_SM3_SHIFTCTRL_IN_COUNT(ALL1)

/*SM3_ADDR Register macros*/


/*SM3_INSTR Register macros*/


/*SM3_PINCTRL Register macros*/

#define PIO2_SM3_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO2_SM3_PINCTRL_SIDESET_COUNT_MASK PIO2_SM3_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO2_SM3_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO2_SM3_PINCTRL_SET_COUNT_MASK PIO2_SM3_PINCTRL_SET_COUNT(ALL1)
#define PIO2_SM3_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO2_SM3_PINCTRL_OUT_COUNT_MASK PIO2_SM3_PINCTRL_OUT_COUNT(ALL1)
#define PIO2_SM3_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO2_SM3_PINCTRL_IN_BASE_MASK PIO2_SM3_PINCTRL_IN_BASE(ALL1)
#define PIO2_SM3_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO2_SM3_PINCTRL_SIDESET_BASE_MASK PIO2_SM3_PINCTRL_SIDESET_BASE(ALL1)
#define PIO2_SM3_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO2_SM3_PINCTRL_SET_BASE_MASK PIO2_SM3_PINCTRL_SET_BASE(ALL1)
#define PIO2_SM3_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO2_SM3_PINCTRL_OUT_BASE_MASK PIO2_SM3_PINCTRL_OUT_BASE(ALL1)

/*RXF0_PUTGET0 Register macros*/


/*RXF0_PUTGET1 Register macros*/


/*RXF0_PUTGET2 Register macros*/


/*RXF0_PUTGET3 Register macros*/


/*RXF1_PUTGET0 Register macros*/


/*RXF1_PUTGET1 Register macros*/


/*RXF1_PUTGET2 Register macros*/


/*RXF1_PUTGET3 Register macros*/


/*RXF2_PUTGET0 Register macros*/


/*RXF2_PUTGET1 Register macros*/


/*RXF2_PUTGET2 Register macros*/


/*RXF2_PUTGET3 Register macros*/


/*RXF3_PUTGET0 Register macros*/


/*RXF3_PUTGET1 Register macros*/


/*RXF3_PUTGET2 Register macros*/


/*RXF3_PUTGET3 Register macros*/


/*GPIOBASE Register macros*/


/*INTR Register macros*/

#define PIO2_INTR_SM7(v) (((v)&0x1)<<15)
#define PIO2_INTR_SM7_MASK PIO2_INTR_SM7(ALL1)
#define PIO2_INTR_SM6(v) (((v)&0x1)<<14)
#define PIO2_INTR_SM6_MASK PIO2_INTR_SM6(ALL1)
#define PIO2_INTR_SM5(v) (((v)&0x1)<<13)
#define PIO2_INTR_SM5_MASK PIO2_INTR_SM5(ALL1)
#define PIO2_INTR_SM4(v) (((v)&0x1)<<12)
#define PIO2_INTR_SM4_MASK PIO2_INTR_SM4(ALL1)
#define PIO2_INTR_SM3(v) (((v)&0x1)<<11)
#define PIO2_INTR_SM3_MASK PIO2_INTR_SM3(ALL1)
#define PIO2_INTR_SM2(v) (((v)&0x1)<<10)
#define PIO2_INTR_SM2_MASK PIO2_INTR_SM2(ALL1)
#define PIO2_INTR_SM1(v) (((v)&0x1)<<9)
#define PIO2_INTR_SM1_MASK PIO2_INTR_SM1(ALL1)
#define PIO2_INTR_SM0(v) (((v)&0x1)<<8)
#define PIO2_INTR_SM0_MASK PIO2_INTR_SM0(ALL1)
#define PIO2_INTR_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO2_INTR_SM3_TXNFULL_MASK PIO2_INTR_SM3_TXNFULL(ALL1)
#define PIO2_INTR_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO2_INTR_SM2_TXNFULL_MASK PIO2_INTR_SM2_TXNFULL(ALL1)
#define PIO2_INTR_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO2_INTR_SM1_TXNFULL_MASK PIO2_INTR_SM1_TXNFULL(ALL1)
#define PIO2_INTR_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO2_INTR_SM0_TXNFULL_MASK PIO2_INTR_SM0_TXNFULL(ALL1)
#define PIO2_INTR_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO2_INTR_SM3_RXNEMPTY_MASK PIO2_INTR_SM3_RXNEMPTY(ALL1)
#define PIO2_INTR_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO2_INTR_SM2_RXNEMPTY_MASK PIO2_INTR_SM2_RXNEMPTY(ALL1)
#define PIO2_INTR_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO2_INTR_SM1_RXNEMPTY_MASK PIO2_INTR_SM1_RXNEMPTY(ALL1)
#define PIO2_INTR_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO2_INTR_SM0_RXNEMPTY_MASK PIO2_INTR_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTE Register macros*/

#define PIO2_IRQ0_INTE_SM7(v) (((v)&0x1)<<15)
#define PIO2_IRQ0_INTE_SM7_MASK PIO2_IRQ0_INTE_SM7(ALL1)
#define PIO2_IRQ0_INTE_SM6(v) (((v)&0x1)<<14)
#define PIO2_IRQ0_INTE_SM6_MASK PIO2_IRQ0_INTE_SM6(ALL1)
#define PIO2_IRQ0_INTE_SM5(v) (((v)&0x1)<<13)
#define PIO2_IRQ0_INTE_SM5_MASK PIO2_IRQ0_INTE_SM5(ALL1)
#define PIO2_IRQ0_INTE_SM4(v) (((v)&0x1)<<12)
#define PIO2_IRQ0_INTE_SM4_MASK PIO2_IRQ0_INTE_SM4(ALL1)
#define PIO2_IRQ0_INTE_SM3(v) (((v)&0x1)<<11)
#define PIO2_IRQ0_INTE_SM3_MASK PIO2_IRQ0_INTE_SM3(ALL1)
#define PIO2_IRQ0_INTE_SM2(v) (((v)&0x1)<<10)
#define PIO2_IRQ0_INTE_SM2_MASK PIO2_IRQ0_INTE_SM2(ALL1)
#define PIO2_IRQ0_INTE_SM1(v) (((v)&0x1)<<9)
#define PIO2_IRQ0_INTE_SM1_MASK PIO2_IRQ0_INTE_SM1(ALL1)
#define PIO2_IRQ0_INTE_SM0(v) (((v)&0x1)<<8)
#define PIO2_IRQ0_INTE_SM0_MASK PIO2_IRQ0_INTE_SM0(ALL1)
#define PIO2_IRQ0_INTE_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO2_IRQ0_INTE_SM3_TXNFULL_MASK PIO2_IRQ0_INTE_SM3_TXNFULL(ALL1)
#define PIO2_IRQ0_INTE_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO2_IRQ0_INTE_SM2_TXNFULL_MASK PIO2_IRQ0_INTE_SM2_TXNFULL(ALL1)
#define PIO2_IRQ0_INTE_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO2_IRQ0_INTE_SM1_TXNFULL_MASK PIO2_IRQ0_INTE_SM1_TXNFULL(ALL1)
#define PIO2_IRQ0_INTE_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO2_IRQ0_INTE_SM0_TXNFULL_MASK PIO2_IRQ0_INTE_SM0_TXNFULL(ALL1)
#define PIO2_IRQ0_INTE_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO2_IRQ0_INTE_SM3_RXNEMPTY_MASK PIO2_IRQ0_INTE_SM3_RXNEMPTY(ALL1)
#define PIO2_IRQ0_INTE_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO2_IRQ0_INTE_SM2_RXNEMPTY_MASK PIO2_IRQ0_INTE_SM2_RXNEMPTY(ALL1)
#define PIO2_IRQ0_INTE_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO2_IRQ0_INTE_SM1_RXNEMPTY_MASK PIO2_IRQ0_INTE_SM1_RXNEMPTY(ALL1)
#define PIO2_IRQ0_INTE_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO2_IRQ0_INTE_SM0_RXNEMPTY_MASK PIO2_IRQ0_INTE_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTF Register macros*/

#define PIO2_IRQ0_INTF_SM7(v) (((v)&0x1)<<15)
#define PIO2_IRQ0_INTF_SM7_MASK PIO2_IRQ0_INTF_SM7(ALL1)
#define PIO2_IRQ0_INTF_SM6(v) (((v)&0x1)<<14)
#define PIO2_IRQ0_INTF_SM6_MASK PIO2_IRQ0_INTF_SM6(ALL1)
#define PIO2_IRQ0_INTF_SM5(v) (((v)&0x1)<<13)
#define PIO2_IRQ0_INTF_SM5_MASK PIO2_IRQ0_INTF_SM5(ALL1)
#define PIO2_IRQ0_INTF_SM4(v) (((v)&0x1)<<12)
#define PIO2_IRQ0_INTF_SM4_MASK PIO2_IRQ0_INTF_SM4(ALL1)
#define PIO2_IRQ0_INTF_SM3(v) (((v)&0x1)<<11)
#define PIO2_IRQ0_INTF_SM3_MASK PIO2_IRQ0_INTF_SM3(ALL1)
#define PIO2_IRQ0_INTF_SM2(v) (((v)&0x1)<<10)
#define PIO2_IRQ0_INTF_SM2_MASK PIO2_IRQ0_INTF_SM2(ALL1)
#define PIO2_IRQ0_INTF_SM1(v) (((v)&0x1)<<9)
#define PIO2_IRQ0_INTF_SM1_MASK PIO2_IRQ0_INTF_SM1(ALL1)
#define PIO2_IRQ0_INTF_SM0(v) (((v)&0x1)<<8)
#define PIO2_IRQ0_INTF_SM0_MASK PIO2_IRQ0_INTF_SM0(ALL1)
#define PIO2_IRQ0_INTF_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO2_IRQ0_INTF_SM3_TXNFULL_MASK PIO2_IRQ0_INTF_SM3_TXNFULL(ALL1)
#define PIO2_IRQ0_INTF_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO2_IRQ0_INTF_SM2_TXNFULL_MASK PIO2_IRQ0_INTF_SM2_TXNFULL(ALL1)
#define PIO2_IRQ0_INTF_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO2_IRQ0_INTF_SM1_TXNFULL_MASK PIO2_IRQ0_INTF_SM1_TXNFULL(ALL1)
#define PIO2_IRQ0_INTF_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO2_IRQ0_INTF_SM0_TXNFULL_MASK PIO2_IRQ0_INTF_SM0_TXNFULL(ALL1)
#define PIO2_IRQ0_INTF_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO2_IRQ0_INTF_SM3_RXNEMPTY_MASK PIO2_IRQ0_INTF_SM3_RXNEMPTY(ALL1)
#define PIO2_IRQ0_INTF_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO2_IRQ0_INTF_SM2_RXNEMPTY_MASK PIO2_IRQ0_INTF_SM2_RXNEMPTY(ALL1)
#define PIO2_IRQ0_INTF_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO2_IRQ0_INTF_SM1_RXNEMPTY_MASK PIO2_IRQ0_INTF_SM1_RXNEMPTY(ALL1)
#define PIO2_IRQ0_INTF_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO2_IRQ0_INTF_SM0_RXNEMPTY_MASK PIO2_IRQ0_INTF_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTS Register macros*/

#define PIO2_IRQ0_INTS_SM7(v) (((v)&0x1)<<15)
#define PIO2_IRQ0_INTS_SM7_MASK PIO2_IRQ0_INTS_SM7(ALL1)
#define PIO2_IRQ0_INTS_SM6(v) (((v)&0x1)<<14)
#define PIO2_IRQ0_INTS_SM6_MASK PIO2_IRQ0_INTS_SM6(ALL1)
#define PIO2_IRQ0_INTS_SM5(v) (((v)&0x1)<<13)
#define PIO2_IRQ0_INTS_SM5_MASK PIO2_IRQ0_INTS_SM5(ALL1)
#define PIO2_IRQ0_INTS_SM4(v) (((v)&0x1)<<12)
#define PIO2_IRQ0_INTS_SM4_MASK PIO2_IRQ0_INTS_SM4(ALL1)
#define PIO2_IRQ0_INTS_SM3(v) (((v)&0x1)<<11)
#define PIO2_IRQ0_INTS_SM3_MASK PIO2_IRQ0_INTS_SM3(ALL1)
#define PIO2_IRQ0_INTS_SM2(v) (((v)&0x1)<<10)
#define PIO2_IRQ0_INTS_SM2_MASK PIO2_IRQ0_INTS_SM2(ALL1)
#define PIO2_IRQ0_INTS_SM1(v) (((v)&0x1)<<9)
#define PIO2_IRQ0_INTS_SM1_MASK PIO2_IRQ0_INTS_SM1(ALL1)
#define PIO2_IRQ0_INTS_SM0(v) (((v)&0x1)<<8)
#define PIO2_IRQ0_INTS_SM0_MASK PIO2_IRQ0_INTS_SM0(ALL1)
#define PIO2_IRQ0_INTS_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO2_IRQ0_INTS_SM3_TXNFULL_MASK PIO2_IRQ0_INTS_SM3_TXNFULL(ALL1)
#define PIO2_IRQ0_INTS_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO2_IRQ0_INTS_SM2_TXNFULL_MASK PIO2_IRQ0_INTS_SM2_TXNFULL(ALL1)
#define PIO2_IRQ0_INTS_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO2_IRQ0_INTS_SM1_TXNFULL_MASK PIO2_IRQ0_INTS_SM1_TXNFULL(ALL1)
#define PIO2_IRQ0_INTS_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO2_IRQ0_INTS_SM0_TXNFULL_MASK PIO2_IRQ0_INTS_SM0_TXNFULL(ALL1)
#define PIO2_IRQ0_INTS_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO2_IRQ0_INTS_SM3_RXNEMPTY_MASK PIO2_IRQ0_INTS_SM3_RXNEMPTY(ALL1)
#define PIO2_IRQ0_INTS_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO2_IRQ0_INTS_SM2_RXNEMPTY_MASK PIO2_IRQ0_INTS_SM2_RXNEMPTY(ALL1)
#define PIO2_IRQ0_INTS_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO2_IRQ0_INTS_SM1_RXNEMPTY_MASK PIO2_IRQ0_INTS_SM1_RXNEMPTY(ALL1)
#define PIO2_IRQ0_INTS_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO2_IRQ0_INTS_SM0_RXNEMPTY_MASK PIO2_IRQ0_INTS_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTE Register macros*/

#define PIO2_IRQ1_INTE_SM7(v) (((v)&0x1)<<15)
#define PIO2_IRQ1_INTE_SM7_MASK PIO2_IRQ1_INTE_SM7(ALL1)
#define PIO2_IRQ1_INTE_SM6(v) (((v)&0x1)<<14)
#define PIO2_IRQ1_INTE_SM6_MASK PIO2_IRQ1_INTE_SM6(ALL1)
#define PIO2_IRQ1_INTE_SM5(v) (((v)&0x1)<<13)
#define PIO2_IRQ1_INTE_SM5_MASK PIO2_IRQ1_INTE_SM5(ALL1)
#define PIO2_IRQ1_INTE_SM4(v) (((v)&0x1)<<12)
#define PIO2_IRQ1_INTE_SM4_MASK PIO2_IRQ1_INTE_SM4(ALL1)
#define PIO2_IRQ1_INTE_SM3(v) (((v)&0x1)<<11)
#define PIO2_IRQ1_INTE_SM3_MASK PIO2_IRQ1_INTE_SM3(ALL1)
#define PIO2_IRQ1_INTE_SM2(v) (((v)&0x1)<<10)
#define PIO2_IRQ1_INTE_SM2_MASK PIO2_IRQ1_INTE_SM2(ALL1)
#define PIO2_IRQ1_INTE_SM1(v) (((v)&0x1)<<9)
#define PIO2_IRQ1_INTE_SM1_MASK PIO2_IRQ1_INTE_SM1(ALL1)
#define PIO2_IRQ1_INTE_SM0(v) (((v)&0x1)<<8)
#define PIO2_IRQ1_INTE_SM0_MASK PIO2_IRQ1_INTE_SM0(ALL1)
#define PIO2_IRQ1_INTE_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO2_IRQ1_INTE_SM3_TXNFULL_MASK PIO2_IRQ1_INTE_SM3_TXNFULL(ALL1)
#define PIO2_IRQ1_INTE_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO2_IRQ1_INTE_SM2_TXNFULL_MASK PIO2_IRQ1_INTE_SM2_TXNFULL(ALL1)
#define PIO2_IRQ1_INTE_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO2_IRQ1_INTE_SM1_TXNFULL_MASK PIO2_IRQ1_INTE_SM1_TXNFULL(ALL1)
#define PIO2_IRQ1_INTE_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO2_IRQ1_INTE_SM0_TXNFULL_MASK PIO2_IRQ1_INTE_SM0_TXNFULL(ALL1)
#define PIO2_IRQ1_INTE_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO2_IRQ1_INTE_SM3_RXNEMPTY_MASK PIO2_IRQ1_INTE_SM3_RXNEMPTY(ALL1)
#define PIO2_IRQ1_INTE_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO2_IRQ1_INTE_SM2_RXNEMPTY_MASK PIO2_IRQ1_INTE_SM2_RXNEMPTY(ALL1)
#define PIO2_IRQ1_INTE_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO2_IRQ1_INTE_SM1_RXNEMPTY_MASK PIO2_IRQ1_INTE_SM1_RXNEMPTY(ALL1)
#define PIO2_IRQ1_INTE_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO2_IRQ1_INTE_SM0_RXNEMPTY_MASK PIO2_IRQ1_INTE_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTF Register macros*/

#define PIO2_IRQ1_INTF_SM7(v) (((v)&0x1)<<15)
#define PIO2_IRQ1_INTF_SM7_MASK PIO2_IRQ1_INTF_SM7(ALL1)
#define PIO2_IRQ1_INTF_SM6(v) (((v)&0x1)<<14)
#define PIO2_IRQ1_INTF_SM6_MASK PIO2_IRQ1_INTF_SM6(ALL1)
#define PIO2_IRQ1_INTF_SM5(v) (((v)&0x1)<<13)
#define PIO2_IRQ1_INTF_SM5_MASK PIO2_IRQ1_INTF_SM5(ALL1)
#define PIO2_IRQ1_INTF_SM4(v) (((v)&0x1)<<12)
#define PIO2_IRQ1_INTF_SM4_MASK PIO2_IRQ1_INTF_SM4(ALL1)
#define PIO2_IRQ1_INTF_SM3(v) (((v)&0x1)<<11)
#define PIO2_IRQ1_INTF_SM3_MASK PIO2_IRQ1_INTF_SM3(ALL1)
#define PIO2_IRQ1_INTF_SM2(v) (((v)&0x1)<<10)
#define PIO2_IRQ1_INTF_SM2_MASK PIO2_IRQ1_INTF_SM2(ALL1)
#define PIO2_IRQ1_INTF_SM1(v) (((v)&0x1)<<9)
#define PIO2_IRQ1_INTF_SM1_MASK PIO2_IRQ1_INTF_SM1(ALL1)
#define PIO2_IRQ1_INTF_SM0(v) (((v)&0x1)<<8)
#define PIO2_IRQ1_INTF_SM0_MASK PIO2_IRQ1_INTF_SM0(ALL1)
#define PIO2_IRQ1_INTF_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO2_IRQ1_INTF_SM3_TXNFULL_MASK PIO2_IRQ1_INTF_SM3_TXNFULL(ALL1)
#define PIO2_IRQ1_INTF_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO2_IRQ1_INTF_SM2_TXNFULL_MASK PIO2_IRQ1_INTF_SM2_TXNFULL(ALL1)
#define PIO2_IRQ1_INTF_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO2_IRQ1_INTF_SM1_TXNFULL_MASK PIO2_IRQ1_INTF_SM1_TXNFULL(ALL1)
#define PIO2_IRQ1_INTF_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO2_IRQ1_INTF_SM0_TXNFULL_MASK PIO2_IRQ1_INTF_SM0_TXNFULL(ALL1)
#define PIO2_IRQ1_INTF_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO2_IRQ1_INTF_SM3_RXNEMPTY_MASK PIO2_IRQ1_INTF_SM3_RXNEMPTY(ALL1)
#define PIO2_IRQ1_INTF_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO2_IRQ1_INTF_SM2_RXNEMPTY_MASK PIO2_IRQ1_INTF_SM2_RXNEMPTY(ALL1)
#define PIO2_IRQ1_INTF_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO2_IRQ1_INTF_SM1_RXNEMPTY_MASK PIO2_IRQ1_INTF_SM1_RXNEMPTY(ALL1)
#define PIO2_IRQ1_INTF_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO2_IRQ1_INTF_SM0_RXNEMPTY_MASK PIO2_IRQ1_INTF_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTS Register macros*/

#define PIO2_IRQ1_INTS_SM7(v) (((v)&0x1)<<15)
#define PIO2_IRQ1_INTS_SM7_MASK PIO2_IRQ1_INTS_SM7(ALL1)
#define PIO2_IRQ1_INTS_SM6(v) (((v)&0x1)<<14)
#define PIO2_IRQ1_INTS_SM6_MASK PIO2_IRQ1_INTS_SM6(ALL1)
#define PIO2_IRQ1_INTS_SM5(v) (((v)&0x1)<<13)
#define PIO2_IRQ1_INTS_SM5_MASK PIO2_IRQ1_INTS_SM5(ALL1)
#define PIO2_IRQ1_INTS_SM4(v) (((v)&0x1)<<12)
#define PIO2_IRQ1_INTS_SM4_MASK PIO2_IRQ1_INTS_SM4(ALL1)
#define PIO2_IRQ1_INTS_SM3(v) (((v)&0x1)<<11)
#define PIO2_IRQ1_INTS_SM3_MASK PIO2_IRQ1_INTS_SM3(ALL1)
#define PIO2_IRQ1_INTS_SM2(v) (((v)&0x1)<<10)
#define PIO2_IRQ1_INTS_SM2_MASK PIO2_IRQ1_INTS_SM2(ALL1)
#define PIO2_IRQ1_INTS_SM1(v) (((v)&0x1)<<9)
#define PIO2_IRQ1_INTS_SM1_MASK PIO2_IRQ1_INTS_SM1(ALL1)
#define PIO2_IRQ1_INTS_SM0(v) (((v)&0x1)<<8)
#define PIO2_IRQ1_INTS_SM0_MASK PIO2_IRQ1_INTS_SM0(ALL1)
#define PIO2_IRQ1_INTS_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO2_IRQ1_INTS_SM3_TXNFULL_MASK PIO2_IRQ1_INTS_SM3_TXNFULL(ALL1)
#define PIO2_IRQ1_INTS_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO2_IRQ1_INTS_SM2_TXNFULL_MASK PIO2_IRQ1_INTS_SM2_TXNFULL(ALL1)
#define PIO2_IRQ1_INTS_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO2_IRQ1_INTS_SM1_TXNFULL_MASK PIO2_IRQ1_INTS_SM1_TXNFULL(ALL1)
#define PIO2_IRQ1_INTS_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO2_IRQ1_INTS_SM0_TXNFULL_MASK PIO2_IRQ1_INTS_SM0_TXNFULL(ALL1)
#define PIO2_IRQ1_INTS_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO2_IRQ1_INTS_SM3_RXNEMPTY_MASK PIO2_IRQ1_INTS_SM3_RXNEMPTY(ALL1)
#define PIO2_IRQ1_INTS_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO2_IRQ1_INTS_SM2_RXNEMPTY_MASK PIO2_IRQ1_INTS_SM2_RXNEMPTY(ALL1)
#define PIO2_IRQ1_INTS_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO2_IRQ1_INTS_SM1_RXNEMPTY_MASK PIO2_IRQ1_INTS_SM1_RXNEMPTY(ALL1)
#define PIO2_IRQ1_INTS_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO2_IRQ1_INTS_SM0_RXNEMPTY_MASK PIO2_IRQ1_INTS_SM0_RXNEMPTY(ALL1)

#endif

