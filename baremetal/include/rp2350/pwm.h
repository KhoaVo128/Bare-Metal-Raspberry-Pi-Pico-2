
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

#ifndef RP2350_PWM_H
#define RP2350_PWM_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ch0_csr;
		uint32_t ch0_div;
		uint32_t ch0_ctr;
		uint32_t ch0_cc;
		uint32_t ch0_top;
		uint32_t ch1_csr;
		uint32_t ch1_div;
		uint32_t ch1_ctr;
		uint32_t ch1_cc;
		uint32_t ch1_top;
		uint32_t ch2_csr;
		uint32_t ch2_div;
		uint32_t ch2_ctr;
		uint32_t ch2_cc;
		uint32_t ch2_top;
		uint32_t ch3_csr;
		uint32_t ch3_div;
		uint32_t ch3_ctr;
		uint32_t ch3_cc;
		uint32_t ch3_top;
		uint32_t ch4_csr;
		uint32_t ch4_div;
		uint32_t ch4_ctr;
		uint32_t ch4_cc;
		uint32_t ch4_top;
		uint32_t ch5_csr;
		uint32_t ch5_div;
		uint32_t ch5_ctr;
		uint32_t ch5_cc;
		uint32_t ch5_top;
		uint32_t ch6_csr;
		uint32_t ch6_div;
		uint32_t ch6_ctr;
		uint32_t ch6_cc;
		uint32_t ch6_top;
		uint32_t ch7_csr;
		uint32_t ch7_div;
		uint32_t ch7_ctr;
		uint32_t ch7_cc;
		uint32_t ch7_top;
		uint32_t ch8_csr;
		uint32_t ch8_div;
		uint32_t ch8_ctr;
		uint32_t ch8_cc;
		uint32_t ch8_top;
		uint32_t ch9_csr;
		uint32_t ch9_div;
		uint32_t ch9_ctr;
		uint32_t ch9_cc;
		uint32_t ch9_top;
		uint32_t ch10_csr;
		uint32_t ch10_div;
		uint32_t ch10_ctr;
		uint32_t ch10_cc;
		uint32_t ch10_top;
		uint32_t ch11_csr;
		uint32_t ch11_div;
		uint32_t ch11_ctr;
		uint32_t ch11_cc;
		uint32_t ch11_top;
		uint32_t en;
		uint32_t intr;
		uint32_t irq0_inte;
		uint32_t irq0_intf;
		uint32_t irq0_ints;
		uint32_t irq1_inte;
		uint32_t irq1_intf;
		uint32_t irq1_ints;
		uint32_t RSVD0[956];
		uint32_t ch0_csr_xor;
		uint32_t ch0_div_xor;
		uint32_t ch0_ctr_xor;
		uint32_t ch0_cc_xor;
		uint32_t ch0_top_xor;
		uint32_t ch1_csr_xor;
		uint32_t ch1_div_xor;
		uint32_t ch1_ctr_xor;
		uint32_t ch1_cc_xor;
		uint32_t ch1_top_xor;
		uint32_t ch2_csr_xor;
		uint32_t ch2_div_xor;
		uint32_t ch2_ctr_xor;
		uint32_t ch2_cc_xor;
		uint32_t ch2_top_xor;
		uint32_t ch3_csr_xor;
		uint32_t ch3_div_xor;
		uint32_t ch3_ctr_xor;
		uint32_t ch3_cc_xor;
		uint32_t ch3_top_xor;
		uint32_t ch4_csr_xor;
		uint32_t ch4_div_xor;
		uint32_t ch4_ctr_xor;
		uint32_t ch4_cc_xor;
		uint32_t ch4_top_xor;
		uint32_t ch5_csr_xor;
		uint32_t ch5_div_xor;
		uint32_t ch5_ctr_xor;
		uint32_t ch5_cc_xor;
		uint32_t ch5_top_xor;
		uint32_t ch6_csr_xor;
		uint32_t ch6_div_xor;
		uint32_t ch6_ctr_xor;
		uint32_t ch6_cc_xor;
		uint32_t ch6_top_xor;
		uint32_t ch7_csr_xor;
		uint32_t ch7_div_xor;
		uint32_t ch7_ctr_xor;
		uint32_t ch7_cc_xor;
		uint32_t ch7_top_xor;
		uint32_t ch8_csr_xor;
		uint32_t ch8_div_xor;
		uint32_t ch8_ctr_xor;
		uint32_t ch8_cc_xor;
		uint32_t ch8_top_xor;
		uint32_t ch9_csr_xor;
		uint32_t ch9_div_xor;
		uint32_t ch9_ctr_xor;
		uint32_t ch9_cc_xor;
		uint32_t ch9_top_xor;
		uint32_t ch10_csr_xor;
		uint32_t ch10_div_xor;
		uint32_t ch10_ctr_xor;
		uint32_t ch10_cc_xor;
		uint32_t ch10_top_xor;
		uint32_t ch11_csr_xor;
		uint32_t ch11_div_xor;
		uint32_t ch11_ctr_xor;
		uint32_t ch11_cc_xor;
		uint32_t ch11_top_xor;
		uint32_t en_xor;
		uint32_t intr_xor;
		uint32_t irq0_inte_xor;
		uint32_t irq0_intf_xor;
		uint32_t irq0_ints_xor;
		uint32_t irq1_inte_xor;
		uint32_t irq1_intf_xor;
		uint32_t irq1_ints_xor;
		uint32_t RSVDxor_0[956];
		uint32_t ch0_csr_set;
		uint32_t ch0_div_set;
		uint32_t ch0_ctr_set;
		uint32_t ch0_cc_set;
		uint32_t ch0_top_set;
		uint32_t ch1_csr_set;
		uint32_t ch1_div_set;
		uint32_t ch1_ctr_set;
		uint32_t ch1_cc_set;
		uint32_t ch1_top_set;
		uint32_t ch2_csr_set;
		uint32_t ch2_div_set;
		uint32_t ch2_ctr_set;
		uint32_t ch2_cc_set;
		uint32_t ch2_top_set;
		uint32_t ch3_csr_set;
		uint32_t ch3_div_set;
		uint32_t ch3_ctr_set;
		uint32_t ch3_cc_set;
		uint32_t ch3_top_set;
		uint32_t ch4_csr_set;
		uint32_t ch4_div_set;
		uint32_t ch4_ctr_set;
		uint32_t ch4_cc_set;
		uint32_t ch4_top_set;
		uint32_t ch5_csr_set;
		uint32_t ch5_div_set;
		uint32_t ch5_ctr_set;
		uint32_t ch5_cc_set;
		uint32_t ch5_top_set;
		uint32_t ch6_csr_set;
		uint32_t ch6_div_set;
		uint32_t ch6_ctr_set;
		uint32_t ch6_cc_set;
		uint32_t ch6_top_set;
		uint32_t ch7_csr_set;
		uint32_t ch7_div_set;
		uint32_t ch7_ctr_set;
		uint32_t ch7_cc_set;
		uint32_t ch7_top_set;
		uint32_t ch8_csr_set;
		uint32_t ch8_div_set;
		uint32_t ch8_ctr_set;
		uint32_t ch8_cc_set;
		uint32_t ch8_top_set;
		uint32_t ch9_csr_set;
		uint32_t ch9_div_set;
		uint32_t ch9_ctr_set;
		uint32_t ch9_cc_set;
		uint32_t ch9_top_set;
		uint32_t ch10_csr_set;
		uint32_t ch10_div_set;
		uint32_t ch10_ctr_set;
		uint32_t ch10_cc_set;
		uint32_t ch10_top_set;
		uint32_t ch11_csr_set;
		uint32_t ch11_div_set;
		uint32_t ch11_ctr_set;
		uint32_t ch11_cc_set;
		uint32_t ch11_top_set;
		uint32_t en_set;
		uint32_t intr_set;
		uint32_t irq0_inte_set;
		uint32_t irq0_intf_set;
		uint32_t irq0_ints_set;
		uint32_t irq1_inte_set;
		uint32_t irq1_intf_set;
		uint32_t irq1_ints_set;
		uint32_t RSVDset_0[956];
		uint32_t ch0_csr_clr;
		uint32_t ch0_div_clr;
		uint32_t ch0_ctr_clr;
		uint32_t ch0_cc_clr;
		uint32_t ch0_top_clr;
		uint32_t ch1_csr_clr;
		uint32_t ch1_div_clr;
		uint32_t ch1_ctr_clr;
		uint32_t ch1_cc_clr;
		uint32_t ch1_top_clr;
		uint32_t ch2_csr_clr;
		uint32_t ch2_div_clr;
		uint32_t ch2_ctr_clr;
		uint32_t ch2_cc_clr;
		uint32_t ch2_top_clr;
		uint32_t ch3_csr_clr;
		uint32_t ch3_div_clr;
		uint32_t ch3_ctr_clr;
		uint32_t ch3_cc_clr;
		uint32_t ch3_top_clr;
		uint32_t ch4_csr_clr;
		uint32_t ch4_div_clr;
		uint32_t ch4_ctr_clr;
		uint32_t ch4_cc_clr;
		uint32_t ch4_top_clr;
		uint32_t ch5_csr_clr;
		uint32_t ch5_div_clr;
		uint32_t ch5_ctr_clr;
		uint32_t ch5_cc_clr;
		uint32_t ch5_top_clr;
		uint32_t ch6_csr_clr;
		uint32_t ch6_div_clr;
		uint32_t ch6_ctr_clr;
		uint32_t ch6_cc_clr;
		uint32_t ch6_top_clr;
		uint32_t ch7_csr_clr;
		uint32_t ch7_div_clr;
		uint32_t ch7_ctr_clr;
		uint32_t ch7_cc_clr;
		uint32_t ch7_top_clr;
		uint32_t ch8_csr_clr;
		uint32_t ch8_div_clr;
		uint32_t ch8_ctr_clr;
		uint32_t ch8_cc_clr;
		uint32_t ch8_top_clr;
		uint32_t ch9_csr_clr;
		uint32_t ch9_div_clr;
		uint32_t ch9_ctr_clr;
		uint32_t ch9_cc_clr;
		uint32_t ch9_top_clr;
		uint32_t ch10_csr_clr;
		uint32_t ch10_div_clr;
		uint32_t ch10_ctr_clr;
		uint32_t ch10_cc_clr;
		uint32_t ch10_top_clr;
		uint32_t ch11_csr_clr;
		uint32_t ch11_div_clr;
		uint32_t ch11_ctr_clr;
		uint32_t ch11_cc_clr;
		uint32_t ch11_top_clr;
		uint32_t en_clr;
		uint32_t intr_clr;
		uint32_t irq0_inte_clr;
		uint32_t irq0_intf_clr;
		uint32_t irq0_ints_clr;
		uint32_t irq1_inte_clr;
		uint32_t irq1_intf_clr;
		uint32_t irq1_ints_clr;
		uint32_t RSVDclr_0[956];
} PWM_REG_BLOCKS;


/*IO Registers as struct*/

#define pwm (*(PWM_REG_BLOCKS volatile *)0x400a8000)


/*IO Registers AS MACROS*/

#define PWM_CH0_CSR (*(volatile uint32_t *)0x400a8000)
#define PWM_CH0_DIV (*(volatile uint32_t *)0x400a8004)
#define PWM_CH0_CTR (*(volatile uint32_t *)0x400a8008)
#define PWM_CH0_CC (*(volatile uint32_t *)0x400a800c)
#define PWM_CH0_TOP (*(volatile uint32_t *)0x400a8010)
#define PWM_CH1_CSR (*(volatile uint32_t *)0x400a8014)
#define PWM_CH1_DIV (*(volatile uint32_t *)0x400a8018)
#define PWM_CH1_CTR (*(volatile uint32_t *)0x400a801c)
#define PWM_CH1_CC (*(volatile uint32_t *)0x400a8020)
#define PWM_CH1_TOP (*(volatile uint32_t *)0x400a8024)
#define PWM_CH2_CSR (*(volatile uint32_t *)0x400a8028)
#define PWM_CH2_DIV (*(volatile uint32_t *)0x400a802c)
#define PWM_CH2_CTR (*(volatile uint32_t *)0x400a8030)
#define PWM_CH2_CC (*(volatile uint32_t *)0x400a8034)
#define PWM_CH2_TOP (*(volatile uint32_t *)0x400a8038)
#define PWM_CH3_CSR (*(volatile uint32_t *)0x400a803c)
#define PWM_CH3_DIV (*(volatile uint32_t *)0x400a8040)
#define PWM_CH3_CTR (*(volatile uint32_t *)0x400a8044)
#define PWM_CH3_CC (*(volatile uint32_t *)0x400a8048)
#define PWM_CH3_TOP (*(volatile uint32_t *)0x400a804c)
#define PWM_CH4_CSR (*(volatile uint32_t *)0x400a8050)
#define PWM_CH4_DIV (*(volatile uint32_t *)0x400a8054)
#define PWM_CH4_CTR (*(volatile uint32_t *)0x400a8058)
#define PWM_CH4_CC (*(volatile uint32_t *)0x400a805c)
#define PWM_CH4_TOP (*(volatile uint32_t *)0x400a8060)
#define PWM_CH5_CSR (*(volatile uint32_t *)0x400a8064)
#define PWM_CH5_DIV (*(volatile uint32_t *)0x400a8068)
#define PWM_CH5_CTR (*(volatile uint32_t *)0x400a806c)
#define PWM_CH5_CC (*(volatile uint32_t *)0x400a8070)
#define PWM_CH5_TOP (*(volatile uint32_t *)0x400a8074)
#define PWM_CH6_CSR (*(volatile uint32_t *)0x400a8078)
#define PWM_CH6_DIV (*(volatile uint32_t *)0x400a807c)
#define PWM_CH6_CTR (*(volatile uint32_t *)0x400a8080)
#define PWM_CH6_CC (*(volatile uint32_t *)0x400a8084)
#define PWM_CH6_TOP (*(volatile uint32_t *)0x400a8088)
#define PWM_CH7_CSR (*(volatile uint32_t *)0x400a808c)
#define PWM_CH7_DIV (*(volatile uint32_t *)0x400a8090)
#define PWM_CH7_CTR (*(volatile uint32_t *)0x400a8094)
#define PWM_CH7_CC (*(volatile uint32_t *)0x400a8098)
#define PWM_CH7_TOP (*(volatile uint32_t *)0x400a809c)
#define PWM_CH8_CSR (*(volatile uint32_t *)0x400a80a0)
#define PWM_CH8_DIV (*(volatile uint32_t *)0x400a80a4)
#define PWM_CH8_CTR (*(volatile uint32_t *)0x400a80a8)
#define PWM_CH8_CC (*(volatile uint32_t *)0x400a80ac)
#define PWM_CH8_TOP (*(volatile uint32_t *)0x400a80b0)
#define PWM_CH9_CSR (*(volatile uint32_t *)0x400a80b4)
#define PWM_CH9_DIV (*(volatile uint32_t *)0x400a80b8)
#define PWM_CH9_CTR (*(volatile uint32_t *)0x400a80bc)
#define PWM_CH9_CC (*(volatile uint32_t *)0x400a80c0)
#define PWM_CH9_TOP (*(volatile uint32_t *)0x400a80c4)
#define PWM_CH10_CSR (*(volatile uint32_t *)0x400a80c8)
#define PWM_CH10_DIV (*(volatile uint32_t *)0x400a80cc)
#define PWM_CH10_CTR (*(volatile uint32_t *)0x400a80d0)
#define PWM_CH10_CC (*(volatile uint32_t *)0x400a80d4)
#define PWM_CH10_TOP (*(volatile uint32_t *)0x400a80d8)
#define PWM_CH11_CSR (*(volatile uint32_t *)0x400a80dc)
#define PWM_CH11_DIV (*(volatile uint32_t *)0x400a80e0)
#define PWM_CH11_CTR (*(volatile uint32_t *)0x400a80e4)
#define PWM_CH11_CC (*(volatile uint32_t *)0x400a80e8)
#define PWM_CH11_TOP (*(volatile uint32_t *)0x400a80ec)
#define PWM_EN (*(volatile uint32_t *)0x400a80f0)
#define PWM_INTR (*(volatile uint32_t *)0x400a80f4)
#define PWM_IRQ0_INTE (*(volatile uint32_t *)0x400a80f8)
#define PWM_IRQ0_INTF (*(volatile uint32_t *)0x400a80fc)
#define PWM_IRQ0_INTS (*(volatile uint32_t *)0x400a8100)
#define PWM_IRQ1_INTE (*(volatile uint32_t *)0x400a8104)
#define PWM_IRQ1_INTF (*(volatile uint32_t *)0x400a8108)
#define PWM_IRQ1_INTS (*(volatile uint32_t *)0x400a810c)
#define PWM_CH0_CSR_XOR (*(volatile uint32_t *)0x400a9000)
#define PWM_CH0_DIV_XOR (*(volatile uint32_t *)0x400a9004)
#define PWM_CH0_CTR_XOR (*(volatile uint32_t *)0x400a9008)
#define PWM_CH0_CC_XOR (*(volatile uint32_t *)0x400a900c)
#define PWM_CH0_TOP_XOR (*(volatile uint32_t *)0x400a9010)
#define PWM_CH1_CSR_XOR (*(volatile uint32_t *)0x400a9014)
#define PWM_CH1_DIV_XOR (*(volatile uint32_t *)0x400a9018)
#define PWM_CH1_CTR_XOR (*(volatile uint32_t *)0x400a901c)
#define PWM_CH1_CC_XOR (*(volatile uint32_t *)0x400a9020)
#define PWM_CH1_TOP_XOR (*(volatile uint32_t *)0x400a9024)
#define PWM_CH2_CSR_XOR (*(volatile uint32_t *)0x400a9028)
#define PWM_CH2_DIV_XOR (*(volatile uint32_t *)0x400a902c)
#define PWM_CH2_CTR_XOR (*(volatile uint32_t *)0x400a9030)
#define PWM_CH2_CC_XOR (*(volatile uint32_t *)0x400a9034)
#define PWM_CH2_TOP_XOR (*(volatile uint32_t *)0x400a9038)
#define PWM_CH3_CSR_XOR (*(volatile uint32_t *)0x400a903c)
#define PWM_CH3_DIV_XOR (*(volatile uint32_t *)0x400a9040)
#define PWM_CH3_CTR_XOR (*(volatile uint32_t *)0x400a9044)
#define PWM_CH3_CC_XOR (*(volatile uint32_t *)0x400a9048)
#define PWM_CH3_TOP_XOR (*(volatile uint32_t *)0x400a904c)
#define PWM_CH4_CSR_XOR (*(volatile uint32_t *)0x400a9050)
#define PWM_CH4_DIV_XOR (*(volatile uint32_t *)0x400a9054)
#define PWM_CH4_CTR_XOR (*(volatile uint32_t *)0x400a9058)
#define PWM_CH4_CC_XOR (*(volatile uint32_t *)0x400a905c)
#define PWM_CH4_TOP_XOR (*(volatile uint32_t *)0x400a9060)
#define PWM_CH5_CSR_XOR (*(volatile uint32_t *)0x400a9064)
#define PWM_CH5_DIV_XOR (*(volatile uint32_t *)0x400a9068)
#define PWM_CH5_CTR_XOR (*(volatile uint32_t *)0x400a906c)
#define PWM_CH5_CC_XOR (*(volatile uint32_t *)0x400a9070)
#define PWM_CH5_TOP_XOR (*(volatile uint32_t *)0x400a9074)
#define PWM_CH6_CSR_XOR (*(volatile uint32_t *)0x400a9078)
#define PWM_CH6_DIV_XOR (*(volatile uint32_t *)0x400a907c)
#define PWM_CH6_CTR_XOR (*(volatile uint32_t *)0x400a9080)
#define PWM_CH6_CC_XOR (*(volatile uint32_t *)0x400a9084)
#define PWM_CH6_TOP_XOR (*(volatile uint32_t *)0x400a9088)
#define PWM_CH7_CSR_XOR (*(volatile uint32_t *)0x400a908c)
#define PWM_CH7_DIV_XOR (*(volatile uint32_t *)0x400a9090)
#define PWM_CH7_CTR_XOR (*(volatile uint32_t *)0x400a9094)
#define PWM_CH7_CC_XOR (*(volatile uint32_t *)0x400a9098)
#define PWM_CH7_TOP_XOR (*(volatile uint32_t *)0x400a909c)
#define PWM_CH8_CSR_XOR (*(volatile uint32_t *)0x400a90a0)
#define PWM_CH8_DIV_XOR (*(volatile uint32_t *)0x400a90a4)
#define PWM_CH8_CTR_XOR (*(volatile uint32_t *)0x400a90a8)
#define PWM_CH8_CC_XOR (*(volatile uint32_t *)0x400a90ac)
#define PWM_CH8_TOP_XOR (*(volatile uint32_t *)0x400a90b0)
#define PWM_CH9_CSR_XOR (*(volatile uint32_t *)0x400a90b4)
#define PWM_CH9_DIV_XOR (*(volatile uint32_t *)0x400a90b8)
#define PWM_CH9_CTR_XOR (*(volatile uint32_t *)0x400a90bc)
#define PWM_CH9_CC_XOR (*(volatile uint32_t *)0x400a90c0)
#define PWM_CH9_TOP_XOR (*(volatile uint32_t *)0x400a90c4)
#define PWM_CH10_CSR_XOR (*(volatile uint32_t *)0x400a90c8)
#define PWM_CH10_DIV_XOR (*(volatile uint32_t *)0x400a90cc)
#define PWM_CH10_CTR_XOR (*(volatile uint32_t *)0x400a90d0)
#define PWM_CH10_CC_XOR (*(volatile uint32_t *)0x400a90d4)
#define PWM_CH10_TOP_XOR (*(volatile uint32_t *)0x400a90d8)
#define PWM_CH11_CSR_XOR (*(volatile uint32_t *)0x400a90dc)
#define PWM_CH11_DIV_XOR (*(volatile uint32_t *)0x400a90e0)
#define PWM_CH11_CTR_XOR (*(volatile uint32_t *)0x400a90e4)
#define PWM_CH11_CC_XOR (*(volatile uint32_t *)0x400a90e8)
#define PWM_CH11_TOP_XOR (*(volatile uint32_t *)0x400a90ec)
#define PWM_EN_XOR (*(volatile uint32_t *)0x400a90f0)
#define PWM_INTR_XOR (*(volatile uint32_t *)0x400a90f4)
#define PWM_IRQ0_INTE_XOR (*(volatile uint32_t *)0x400a90f8)
#define PWM_IRQ0_INTF_XOR (*(volatile uint32_t *)0x400a90fc)
#define PWM_IRQ0_INTS_XOR (*(volatile uint32_t *)0x400a9100)
#define PWM_IRQ1_INTE_XOR (*(volatile uint32_t *)0x400a9104)
#define PWM_IRQ1_INTF_XOR (*(volatile uint32_t *)0x400a9108)
#define PWM_IRQ1_INTS_XOR (*(volatile uint32_t *)0x400a910c)
#define PWM_CH0_CSR_SET (*(volatile uint32_t *)0x400aa000)
#define PWM_CH0_DIV_SET (*(volatile uint32_t *)0x400aa004)
#define PWM_CH0_CTR_SET (*(volatile uint32_t *)0x400aa008)
#define PWM_CH0_CC_SET (*(volatile uint32_t *)0x400aa00c)
#define PWM_CH0_TOP_SET (*(volatile uint32_t *)0x400aa010)
#define PWM_CH1_CSR_SET (*(volatile uint32_t *)0x400aa014)
#define PWM_CH1_DIV_SET (*(volatile uint32_t *)0x400aa018)
#define PWM_CH1_CTR_SET (*(volatile uint32_t *)0x400aa01c)
#define PWM_CH1_CC_SET (*(volatile uint32_t *)0x400aa020)
#define PWM_CH1_TOP_SET (*(volatile uint32_t *)0x400aa024)
#define PWM_CH2_CSR_SET (*(volatile uint32_t *)0x400aa028)
#define PWM_CH2_DIV_SET (*(volatile uint32_t *)0x400aa02c)
#define PWM_CH2_CTR_SET (*(volatile uint32_t *)0x400aa030)
#define PWM_CH2_CC_SET (*(volatile uint32_t *)0x400aa034)
#define PWM_CH2_TOP_SET (*(volatile uint32_t *)0x400aa038)
#define PWM_CH3_CSR_SET (*(volatile uint32_t *)0x400aa03c)
#define PWM_CH3_DIV_SET (*(volatile uint32_t *)0x400aa040)
#define PWM_CH3_CTR_SET (*(volatile uint32_t *)0x400aa044)
#define PWM_CH3_CC_SET (*(volatile uint32_t *)0x400aa048)
#define PWM_CH3_TOP_SET (*(volatile uint32_t *)0x400aa04c)
#define PWM_CH4_CSR_SET (*(volatile uint32_t *)0x400aa050)
#define PWM_CH4_DIV_SET (*(volatile uint32_t *)0x400aa054)
#define PWM_CH4_CTR_SET (*(volatile uint32_t *)0x400aa058)
#define PWM_CH4_CC_SET (*(volatile uint32_t *)0x400aa05c)
#define PWM_CH4_TOP_SET (*(volatile uint32_t *)0x400aa060)
#define PWM_CH5_CSR_SET (*(volatile uint32_t *)0x400aa064)
#define PWM_CH5_DIV_SET (*(volatile uint32_t *)0x400aa068)
#define PWM_CH5_CTR_SET (*(volatile uint32_t *)0x400aa06c)
#define PWM_CH5_CC_SET (*(volatile uint32_t *)0x400aa070)
#define PWM_CH5_TOP_SET (*(volatile uint32_t *)0x400aa074)
#define PWM_CH6_CSR_SET (*(volatile uint32_t *)0x400aa078)
#define PWM_CH6_DIV_SET (*(volatile uint32_t *)0x400aa07c)
#define PWM_CH6_CTR_SET (*(volatile uint32_t *)0x400aa080)
#define PWM_CH6_CC_SET (*(volatile uint32_t *)0x400aa084)
#define PWM_CH6_TOP_SET (*(volatile uint32_t *)0x400aa088)
#define PWM_CH7_CSR_SET (*(volatile uint32_t *)0x400aa08c)
#define PWM_CH7_DIV_SET (*(volatile uint32_t *)0x400aa090)
#define PWM_CH7_CTR_SET (*(volatile uint32_t *)0x400aa094)
#define PWM_CH7_CC_SET (*(volatile uint32_t *)0x400aa098)
#define PWM_CH7_TOP_SET (*(volatile uint32_t *)0x400aa09c)
#define PWM_CH8_CSR_SET (*(volatile uint32_t *)0x400aa0a0)
#define PWM_CH8_DIV_SET (*(volatile uint32_t *)0x400aa0a4)
#define PWM_CH8_CTR_SET (*(volatile uint32_t *)0x400aa0a8)
#define PWM_CH8_CC_SET (*(volatile uint32_t *)0x400aa0ac)
#define PWM_CH8_TOP_SET (*(volatile uint32_t *)0x400aa0b0)
#define PWM_CH9_CSR_SET (*(volatile uint32_t *)0x400aa0b4)
#define PWM_CH9_DIV_SET (*(volatile uint32_t *)0x400aa0b8)
#define PWM_CH9_CTR_SET (*(volatile uint32_t *)0x400aa0bc)
#define PWM_CH9_CC_SET (*(volatile uint32_t *)0x400aa0c0)
#define PWM_CH9_TOP_SET (*(volatile uint32_t *)0x400aa0c4)
#define PWM_CH10_CSR_SET (*(volatile uint32_t *)0x400aa0c8)
#define PWM_CH10_DIV_SET (*(volatile uint32_t *)0x400aa0cc)
#define PWM_CH10_CTR_SET (*(volatile uint32_t *)0x400aa0d0)
#define PWM_CH10_CC_SET (*(volatile uint32_t *)0x400aa0d4)
#define PWM_CH10_TOP_SET (*(volatile uint32_t *)0x400aa0d8)
#define PWM_CH11_CSR_SET (*(volatile uint32_t *)0x400aa0dc)
#define PWM_CH11_DIV_SET (*(volatile uint32_t *)0x400aa0e0)
#define PWM_CH11_CTR_SET (*(volatile uint32_t *)0x400aa0e4)
#define PWM_CH11_CC_SET (*(volatile uint32_t *)0x400aa0e8)
#define PWM_CH11_TOP_SET (*(volatile uint32_t *)0x400aa0ec)
#define PWM_EN_SET (*(volatile uint32_t *)0x400aa0f0)
#define PWM_INTR_SET (*(volatile uint32_t *)0x400aa0f4)
#define PWM_IRQ0_INTE_SET (*(volatile uint32_t *)0x400aa0f8)
#define PWM_IRQ0_INTF_SET (*(volatile uint32_t *)0x400aa0fc)
#define PWM_IRQ0_INTS_SET (*(volatile uint32_t *)0x400aa100)
#define PWM_IRQ1_INTE_SET (*(volatile uint32_t *)0x400aa104)
#define PWM_IRQ1_INTF_SET (*(volatile uint32_t *)0x400aa108)
#define PWM_IRQ1_INTS_SET (*(volatile uint32_t *)0x400aa10c)
#define PWM_CH0_CSR_CLR (*(volatile uint32_t *)0x400ab000)
#define PWM_CH0_DIV_CLR (*(volatile uint32_t *)0x400ab004)
#define PWM_CH0_CTR_CLR (*(volatile uint32_t *)0x400ab008)
#define PWM_CH0_CC_CLR (*(volatile uint32_t *)0x400ab00c)
#define PWM_CH0_TOP_CLR (*(volatile uint32_t *)0x400ab010)
#define PWM_CH1_CSR_CLR (*(volatile uint32_t *)0x400ab014)
#define PWM_CH1_DIV_CLR (*(volatile uint32_t *)0x400ab018)
#define PWM_CH1_CTR_CLR (*(volatile uint32_t *)0x400ab01c)
#define PWM_CH1_CC_CLR (*(volatile uint32_t *)0x400ab020)
#define PWM_CH1_TOP_CLR (*(volatile uint32_t *)0x400ab024)
#define PWM_CH2_CSR_CLR (*(volatile uint32_t *)0x400ab028)
#define PWM_CH2_DIV_CLR (*(volatile uint32_t *)0x400ab02c)
#define PWM_CH2_CTR_CLR (*(volatile uint32_t *)0x400ab030)
#define PWM_CH2_CC_CLR (*(volatile uint32_t *)0x400ab034)
#define PWM_CH2_TOP_CLR (*(volatile uint32_t *)0x400ab038)
#define PWM_CH3_CSR_CLR (*(volatile uint32_t *)0x400ab03c)
#define PWM_CH3_DIV_CLR (*(volatile uint32_t *)0x400ab040)
#define PWM_CH3_CTR_CLR (*(volatile uint32_t *)0x400ab044)
#define PWM_CH3_CC_CLR (*(volatile uint32_t *)0x400ab048)
#define PWM_CH3_TOP_CLR (*(volatile uint32_t *)0x400ab04c)
#define PWM_CH4_CSR_CLR (*(volatile uint32_t *)0x400ab050)
#define PWM_CH4_DIV_CLR (*(volatile uint32_t *)0x400ab054)
#define PWM_CH4_CTR_CLR (*(volatile uint32_t *)0x400ab058)
#define PWM_CH4_CC_CLR (*(volatile uint32_t *)0x400ab05c)
#define PWM_CH4_TOP_CLR (*(volatile uint32_t *)0x400ab060)
#define PWM_CH5_CSR_CLR (*(volatile uint32_t *)0x400ab064)
#define PWM_CH5_DIV_CLR (*(volatile uint32_t *)0x400ab068)
#define PWM_CH5_CTR_CLR (*(volatile uint32_t *)0x400ab06c)
#define PWM_CH5_CC_CLR (*(volatile uint32_t *)0x400ab070)
#define PWM_CH5_TOP_CLR (*(volatile uint32_t *)0x400ab074)
#define PWM_CH6_CSR_CLR (*(volatile uint32_t *)0x400ab078)
#define PWM_CH6_DIV_CLR (*(volatile uint32_t *)0x400ab07c)
#define PWM_CH6_CTR_CLR (*(volatile uint32_t *)0x400ab080)
#define PWM_CH6_CC_CLR (*(volatile uint32_t *)0x400ab084)
#define PWM_CH6_TOP_CLR (*(volatile uint32_t *)0x400ab088)
#define PWM_CH7_CSR_CLR (*(volatile uint32_t *)0x400ab08c)
#define PWM_CH7_DIV_CLR (*(volatile uint32_t *)0x400ab090)
#define PWM_CH7_CTR_CLR (*(volatile uint32_t *)0x400ab094)
#define PWM_CH7_CC_CLR (*(volatile uint32_t *)0x400ab098)
#define PWM_CH7_TOP_CLR (*(volatile uint32_t *)0x400ab09c)
#define PWM_CH8_CSR_CLR (*(volatile uint32_t *)0x400ab0a0)
#define PWM_CH8_DIV_CLR (*(volatile uint32_t *)0x400ab0a4)
#define PWM_CH8_CTR_CLR (*(volatile uint32_t *)0x400ab0a8)
#define PWM_CH8_CC_CLR (*(volatile uint32_t *)0x400ab0ac)
#define PWM_CH8_TOP_CLR (*(volatile uint32_t *)0x400ab0b0)
#define PWM_CH9_CSR_CLR (*(volatile uint32_t *)0x400ab0b4)
#define PWM_CH9_DIV_CLR (*(volatile uint32_t *)0x400ab0b8)
#define PWM_CH9_CTR_CLR (*(volatile uint32_t *)0x400ab0bc)
#define PWM_CH9_CC_CLR (*(volatile uint32_t *)0x400ab0c0)
#define PWM_CH9_TOP_CLR (*(volatile uint32_t *)0x400ab0c4)
#define PWM_CH10_CSR_CLR (*(volatile uint32_t *)0x400ab0c8)
#define PWM_CH10_DIV_CLR (*(volatile uint32_t *)0x400ab0cc)
#define PWM_CH10_CTR_CLR (*(volatile uint32_t *)0x400ab0d0)
#define PWM_CH10_CC_CLR (*(volatile uint32_t *)0x400ab0d4)
#define PWM_CH10_TOP_CLR (*(volatile uint32_t *)0x400ab0d8)
#define PWM_CH11_CSR_CLR (*(volatile uint32_t *)0x400ab0dc)
#define PWM_CH11_DIV_CLR (*(volatile uint32_t *)0x400ab0e0)
#define PWM_CH11_CTR_CLR (*(volatile uint32_t *)0x400ab0e4)
#define PWM_CH11_CC_CLR (*(volatile uint32_t *)0x400ab0e8)
#define PWM_CH11_TOP_CLR (*(volatile uint32_t *)0x400ab0ec)
#define PWM_EN_CLR (*(volatile uint32_t *)0x400ab0f0)
#define PWM_INTR_CLR (*(volatile uint32_t *)0x400ab0f4)
#define PWM_IRQ0_INTE_CLR (*(volatile uint32_t *)0x400ab0f8)
#define PWM_IRQ0_INTF_CLR (*(volatile uint32_t *)0x400ab0fc)
#define PWM_IRQ0_INTS_CLR (*(volatile uint32_t *)0x400ab100)
#define PWM_IRQ1_INTE_CLR (*(volatile uint32_t *)0x400ab104)
#define PWM_IRQ1_INTF_CLR (*(volatile uint32_t *)0x400ab108)
#define PWM_IRQ1_INTS_CLR (*(volatile uint32_t *)0x400ab10c)

/*CH0_CSR Register macros*/

#define PWM_CH0_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH0_CSR_PH_ADV_MASK PWM_CH0_CSR_PH_ADV(ALL1)
#define PWM_CH0_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH0_CSR_PH_RET_MASK PWM_CH0_CSR_PH_RET(ALL1)
#define PWM_CH0_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH0_CSR_DIVMODE_MASK PWM_CH0_CSR_DIVMODE(ALL1)
#define PWM_CH0_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH0_CSR_B_INV_MASK PWM_CH0_CSR_B_INV(ALL1)
#define PWM_CH0_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH0_CSR_A_INV_MASK PWM_CH0_CSR_A_INV(ALL1)
#define PWM_CH0_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH0_CSR_PH_CORRECT_MASK PWM_CH0_CSR_PH_CORRECT(ALL1)
#define PWM_CH0_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH0_CSR_EN_MASK PWM_CH0_CSR_EN(ALL1)

/*CH0_DIV Register macros*/

#define PWM_CH0_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH0_DIV_INT_MASK PWM_CH0_DIV_INT(ALL1)
#define PWM_CH0_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH0_DIV_FRAC_MASK PWM_CH0_DIV_FRAC(ALL1)

/*CH0_CTR Register macros*/


/*CH0_CC Register macros*/

#define PWM_CH0_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH0_CC_B_MASK PWM_CH0_CC_B(ALL1)
#define PWM_CH0_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH0_CC_A_MASK PWM_CH0_CC_A(ALL1)

/*CH0_TOP Register macros*/


/*CH1_CSR Register macros*/

#define PWM_CH1_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH1_CSR_PH_ADV_MASK PWM_CH1_CSR_PH_ADV(ALL1)
#define PWM_CH1_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH1_CSR_PH_RET_MASK PWM_CH1_CSR_PH_RET(ALL1)
#define PWM_CH1_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH1_CSR_DIVMODE_MASK PWM_CH1_CSR_DIVMODE(ALL1)
#define PWM_CH1_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH1_CSR_B_INV_MASK PWM_CH1_CSR_B_INV(ALL1)
#define PWM_CH1_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH1_CSR_A_INV_MASK PWM_CH1_CSR_A_INV(ALL1)
#define PWM_CH1_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH1_CSR_PH_CORRECT_MASK PWM_CH1_CSR_PH_CORRECT(ALL1)
#define PWM_CH1_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH1_CSR_EN_MASK PWM_CH1_CSR_EN(ALL1)

/*CH1_DIV Register macros*/

#define PWM_CH1_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH1_DIV_INT_MASK PWM_CH1_DIV_INT(ALL1)
#define PWM_CH1_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH1_DIV_FRAC_MASK PWM_CH1_DIV_FRAC(ALL1)

/*CH1_CTR Register macros*/


/*CH1_CC Register macros*/

#define PWM_CH1_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH1_CC_B_MASK PWM_CH1_CC_B(ALL1)
#define PWM_CH1_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH1_CC_A_MASK PWM_CH1_CC_A(ALL1)

/*CH1_TOP Register macros*/


/*CH2_CSR Register macros*/

#define PWM_CH2_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH2_CSR_PH_ADV_MASK PWM_CH2_CSR_PH_ADV(ALL1)
#define PWM_CH2_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH2_CSR_PH_RET_MASK PWM_CH2_CSR_PH_RET(ALL1)
#define PWM_CH2_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH2_CSR_DIVMODE_MASK PWM_CH2_CSR_DIVMODE(ALL1)
#define PWM_CH2_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH2_CSR_B_INV_MASK PWM_CH2_CSR_B_INV(ALL1)
#define PWM_CH2_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH2_CSR_A_INV_MASK PWM_CH2_CSR_A_INV(ALL1)
#define PWM_CH2_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH2_CSR_PH_CORRECT_MASK PWM_CH2_CSR_PH_CORRECT(ALL1)
#define PWM_CH2_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH2_CSR_EN_MASK PWM_CH2_CSR_EN(ALL1)

/*CH2_DIV Register macros*/

#define PWM_CH2_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH2_DIV_INT_MASK PWM_CH2_DIV_INT(ALL1)
#define PWM_CH2_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH2_DIV_FRAC_MASK PWM_CH2_DIV_FRAC(ALL1)

/*CH2_CTR Register macros*/


/*CH2_CC Register macros*/

#define PWM_CH2_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH2_CC_B_MASK PWM_CH2_CC_B(ALL1)
#define PWM_CH2_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH2_CC_A_MASK PWM_CH2_CC_A(ALL1)

/*CH2_TOP Register macros*/


/*CH3_CSR Register macros*/

#define PWM_CH3_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH3_CSR_PH_ADV_MASK PWM_CH3_CSR_PH_ADV(ALL1)
#define PWM_CH3_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH3_CSR_PH_RET_MASK PWM_CH3_CSR_PH_RET(ALL1)
#define PWM_CH3_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH3_CSR_DIVMODE_MASK PWM_CH3_CSR_DIVMODE(ALL1)
#define PWM_CH3_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH3_CSR_B_INV_MASK PWM_CH3_CSR_B_INV(ALL1)
#define PWM_CH3_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH3_CSR_A_INV_MASK PWM_CH3_CSR_A_INV(ALL1)
#define PWM_CH3_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH3_CSR_PH_CORRECT_MASK PWM_CH3_CSR_PH_CORRECT(ALL1)
#define PWM_CH3_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH3_CSR_EN_MASK PWM_CH3_CSR_EN(ALL1)

/*CH3_DIV Register macros*/

#define PWM_CH3_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH3_DIV_INT_MASK PWM_CH3_DIV_INT(ALL1)
#define PWM_CH3_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH3_DIV_FRAC_MASK PWM_CH3_DIV_FRAC(ALL1)

/*CH3_CTR Register macros*/


/*CH3_CC Register macros*/

#define PWM_CH3_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH3_CC_B_MASK PWM_CH3_CC_B(ALL1)
#define PWM_CH3_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH3_CC_A_MASK PWM_CH3_CC_A(ALL1)

/*CH3_TOP Register macros*/


/*CH4_CSR Register macros*/

#define PWM_CH4_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH4_CSR_PH_ADV_MASK PWM_CH4_CSR_PH_ADV(ALL1)
#define PWM_CH4_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH4_CSR_PH_RET_MASK PWM_CH4_CSR_PH_RET(ALL1)
#define PWM_CH4_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH4_CSR_DIVMODE_MASK PWM_CH4_CSR_DIVMODE(ALL1)
#define PWM_CH4_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH4_CSR_B_INV_MASK PWM_CH4_CSR_B_INV(ALL1)
#define PWM_CH4_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH4_CSR_A_INV_MASK PWM_CH4_CSR_A_INV(ALL1)
#define PWM_CH4_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH4_CSR_PH_CORRECT_MASK PWM_CH4_CSR_PH_CORRECT(ALL1)
#define PWM_CH4_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH4_CSR_EN_MASK PWM_CH4_CSR_EN(ALL1)

/*CH4_DIV Register macros*/

#define PWM_CH4_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH4_DIV_INT_MASK PWM_CH4_DIV_INT(ALL1)
#define PWM_CH4_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH4_DIV_FRAC_MASK PWM_CH4_DIV_FRAC(ALL1)

/*CH4_CTR Register macros*/


/*CH4_CC Register macros*/

#define PWM_CH4_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH4_CC_B_MASK PWM_CH4_CC_B(ALL1)
#define PWM_CH4_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH4_CC_A_MASK PWM_CH4_CC_A(ALL1)

/*CH4_TOP Register macros*/


/*CH5_CSR Register macros*/

#define PWM_CH5_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH5_CSR_PH_ADV_MASK PWM_CH5_CSR_PH_ADV(ALL1)
#define PWM_CH5_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH5_CSR_PH_RET_MASK PWM_CH5_CSR_PH_RET(ALL1)
#define PWM_CH5_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH5_CSR_DIVMODE_MASK PWM_CH5_CSR_DIVMODE(ALL1)
#define PWM_CH5_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH5_CSR_B_INV_MASK PWM_CH5_CSR_B_INV(ALL1)
#define PWM_CH5_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH5_CSR_A_INV_MASK PWM_CH5_CSR_A_INV(ALL1)
#define PWM_CH5_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH5_CSR_PH_CORRECT_MASK PWM_CH5_CSR_PH_CORRECT(ALL1)
#define PWM_CH5_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH5_CSR_EN_MASK PWM_CH5_CSR_EN(ALL1)

/*CH5_DIV Register macros*/

#define PWM_CH5_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH5_DIV_INT_MASK PWM_CH5_DIV_INT(ALL1)
#define PWM_CH5_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH5_DIV_FRAC_MASK PWM_CH5_DIV_FRAC(ALL1)

/*CH5_CTR Register macros*/


/*CH5_CC Register macros*/

#define PWM_CH5_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH5_CC_B_MASK PWM_CH5_CC_B(ALL1)
#define PWM_CH5_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH5_CC_A_MASK PWM_CH5_CC_A(ALL1)

/*CH5_TOP Register macros*/


/*CH6_CSR Register macros*/

#define PWM_CH6_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH6_CSR_PH_ADV_MASK PWM_CH6_CSR_PH_ADV(ALL1)
#define PWM_CH6_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH6_CSR_PH_RET_MASK PWM_CH6_CSR_PH_RET(ALL1)
#define PWM_CH6_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH6_CSR_DIVMODE_MASK PWM_CH6_CSR_DIVMODE(ALL1)
#define PWM_CH6_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH6_CSR_B_INV_MASK PWM_CH6_CSR_B_INV(ALL1)
#define PWM_CH6_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH6_CSR_A_INV_MASK PWM_CH6_CSR_A_INV(ALL1)
#define PWM_CH6_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH6_CSR_PH_CORRECT_MASK PWM_CH6_CSR_PH_CORRECT(ALL1)
#define PWM_CH6_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH6_CSR_EN_MASK PWM_CH6_CSR_EN(ALL1)

/*CH6_DIV Register macros*/

#define PWM_CH6_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH6_DIV_INT_MASK PWM_CH6_DIV_INT(ALL1)
#define PWM_CH6_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH6_DIV_FRAC_MASK PWM_CH6_DIV_FRAC(ALL1)

/*CH6_CTR Register macros*/


/*CH6_CC Register macros*/

#define PWM_CH6_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH6_CC_B_MASK PWM_CH6_CC_B(ALL1)
#define PWM_CH6_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH6_CC_A_MASK PWM_CH6_CC_A(ALL1)

/*CH6_TOP Register macros*/


/*CH7_CSR Register macros*/

#define PWM_CH7_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH7_CSR_PH_ADV_MASK PWM_CH7_CSR_PH_ADV(ALL1)
#define PWM_CH7_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH7_CSR_PH_RET_MASK PWM_CH7_CSR_PH_RET(ALL1)
#define PWM_CH7_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH7_CSR_DIVMODE_MASK PWM_CH7_CSR_DIVMODE(ALL1)
#define PWM_CH7_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH7_CSR_B_INV_MASK PWM_CH7_CSR_B_INV(ALL1)
#define PWM_CH7_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH7_CSR_A_INV_MASK PWM_CH7_CSR_A_INV(ALL1)
#define PWM_CH7_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH7_CSR_PH_CORRECT_MASK PWM_CH7_CSR_PH_CORRECT(ALL1)
#define PWM_CH7_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH7_CSR_EN_MASK PWM_CH7_CSR_EN(ALL1)

/*CH7_DIV Register macros*/

#define PWM_CH7_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH7_DIV_INT_MASK PWM_CH7_DIV_INT(ALL1)
#define PWM_CH7_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH7_DIV_FRAC_MASK PWM_CH7_DIV_FRAC(ALL1)

/*CH7_CTR Register macros*/


/*CH7_CC Register macros*/

#define PWM_CH7_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH7_CC_B_MASK PWM_CH7_CC_B(ALL1)
#define PWM_CH7_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH7_CC_A_MASK PWM_CH7_CC_A(ALL1)

/*CH7_TOP Register macros*/


/*CH8_CSR Register macros*/

#define PWM_CH8_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH8_CSR_PH_ADV_MASK PWM_CH8_CSR_PH_ADV(ALL1)
#define PWM_CH8_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH8_CSR_PH_RET_MASK PWM_CH8_CSR_PH_RET(ALL1)
#define PWM_CH8_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH8_CSR_DIVMODE_MASK PWM_CH8_CSR_DIVMODE(ALL1)
#define PWM_CH8_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH8_CSR_B_INV_MASK PWM_CH8_CSR_B_INV(ALL1)
#define PWM_CH8_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH8_CSR_A_INV_MASK PWM_CH8_CSR_A_INV(ALL1)
#define PWM_CH8_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH8_CSR_PH_CORRECT_MASK PWM_CH8_CSR_PH_CORRECT(ALL1)
#define PWM_CH8_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH8_CSR_EN_MASK PWM_CH8_CSR_EN(ALL1)

/*CH8_DIV Register macros*/

#define PWM_CH8_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH8_DIV_INT_MASK PWM_CH8_DIV_INT(ALL1)
#define PWM_CH8_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH8_DIV_FRAC_MASK PWM_CH8_DIV_FRAC(ALL1)

/*CH8_CTR Register macros*/


/*CH8_CC Register macros*/

#define PWM_CH8_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH8_CC_B_MASK PWM_CH8_CC_B(ALL1)
#define PWM_CH8_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH8_CC_A_MASK PWM_CH8_CC_A(ALL1)

/*CH8_TOP Register macros*/


/*CH9_CSR Register macros*/

#define PWM_CH9_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH9_CSR_PH_ADV_MASK PWM_CH9_CSR_PH_ADV(ALL1)
#define PWM_CH9_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH9_CSR_PH_RET_MASK PWM_CH9_CSR_PH_RET(ALL1)
#define PWM_CH9_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH9_CSR_DIVMODE_MASK PWM_CH9_CSR_DIVMODE(ALL1)
#define PWM_CH9_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH9_CSR_B_INV_MASK PWM_CH9_CSR_B_INV(ALL1)
#define PWM_CH9_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH9_CSR_A_INV_MASK PWM_CH9_CSR_A_INV(ALL1)
#define PWM_CH9_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH9_CSR_PH_CORRECT_MASK PWM_CH9_CSR_PH_CORRECT(ALL1)
#define PWM_CH9_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH9_CSR_EN_MASK PWM_CH9_CSR_EN(ALL1)

/*CH9_DIV Register macros*/

#define PWM_CH9_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH9_DIV_INT_MASK PWM_CH9_DIV_INT(ALL1)
#define PWM_CH9_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH9_DIV_FRAC_MASK PWM_CH9_DIV_FRAC(ALL1)

/*CH9_CTR Register macros*/


/*CH9_CC Register macros*/

#define PWM_CH9_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH9_CC_B_MASK PWM_CH9_CC_B(ALL1)
#define PWM_CH9_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH9_CC_A_MASK PWM_CH9_CC_A(ALL1)

/*CH9_TOP Register macros*/


/*CH10_CSR Register macros*/

#define PWM_CH10_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH10_CSR_PH_ADV_MASK PWM_CH10_CSR_PH_ADV(ALL1)
#define PWM_CH10_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH10_CSR_PH_RET_MASK PWM_CH10_CSR_PH_RET(ALL1)
#define PWM_CH10_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH10_CSR_DIVMODE_MASK PWM_CH10_CSR_DIVMODE(ALL1)
#define PWM_CH10_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH10_CSR_B_INV_MASK PWM_CH10_CSR_B_INV(ALL1)
#define PWM_CH10_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH10_CSR_A_INV_MASK PWM_CH10_CSR_A_INV(ALL1)
#define PWM_CH10_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH10_CSR_PH_CORRECT_MASK PWM_CH10_CSR_PH_CORRECT(ALL1)
#define PWM_CH10_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH10_CSR_EN_MASK PWM_CH10_CSR_EN(ALL1)

/*CH10_DIV Register macros*/

#define PWM_CH10_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH10_DIV_INT_MASK PWM_CH10_DIV_INT(ALL1)
#define PWM_CH10_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH10_DIV_FRAC_MASK PWM_CH10_DIV_FRAC(ALL1)

/*CH10_CTR Register macros*/


/*CH10_CC Register macros*/

#define PWM_CH10_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH10_CC_B_MASK PWM_CH10_CC_B(ALL1)
#define PWM_CH10_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH10_CC_A_MASK PWM_CH10_CC_A(ALL1)

/*CH10_TOP Register macros*/


/*CH11_CSR Register macros*/

#define PWM_CH11_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH11_CSR_PH_ADV_MASK PWM_CH11_CSR_PH_ADV(ALL1)
#define PWM_CH11_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH11_CSR_PH_RET_MASK PWM_CH11_CSR_PH_RET(ALL1)
#define PWM_CH11_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH11_CSR_DIVMODE_MASK PWM_CH11_CSR_DIVMODE(ALL1)
#define PWM_CH11_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH11_CSR_B_INV_MASK PWM_CH11_CSR_B_INV(ALL1)
#define PWM_CH11_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH11_CSR_A_INV_MASK PWM_CH11_CSR_A_INV(ALL1)
#define PWM_CH11_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH11_CSR_PH_CORRECT_MASK PWM_CH11_CSR_PH_CORRECT(ALL1)
#define PWM_CH11_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH11_CSR_EN_MASK PWM_CH11_CSR_EN(ALL1)

/*CH11_DIV Register macros*/

#define PWM_CH11_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH11_DIV_INT_MASK PWM_CH11_DIV_INT(ALL1)
#define PWM_CH11_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH11_DIV_FRAC_MASK PWM_CH11_DIV_FRAC(ALL1)

/*CH11_CTR Register macros*/


/*CH11_CC Register macros*/

#define PWM_CH11_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH11_CC_B_MASK PWM_CH11_CC_B(ALL1)
#define PWM_CH11_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH11_CC_A_MASK PWM_CH11_CC_A(ALL1)

/*CH11_TOP Register macros*/


/*EN Register macros*/

#define PWM_EN_CH11(v) (((v)&0x1)<<11)
#define PWM_EN_CH11_MASK PWM_EN_CH11(ALL1)
#define PWM_EN_CH10(v) (((v)&0x1)<<10)
#define PWM_EN_CH10_MASK PWM_EN_CH10(ALL1)
#define PWM_EN_CH9(v) (((v)&0x1)<<9)
#define PWM_EN_CH9_MASK PWM_EN_CH9(ALL1)
#define PWM_EN_CH8(v) (((v)&0x1)<<8)
#define PWM_EN_CH8_MASK PWM_EN_CH8(ALL1)
#define PWM_EN_CH7(v) (((v)&0x1)<<7)
#define PWM_EN_CH7_MASK PWM_EN_CH7(ALL1)
#define PWM_EN_CH6(v) (((v)&0x1)<<6)
#define PWM_EN_CH6_MASK PWM_EN_CH6(ALL1)
#define PWM_EN_CH5(v) (((v)&0x1)<<5)
#define PWM_EN_CH5_MASK PWM_EN_CH5(ALL1)
#define PWM_EN_CH4(v) (((v)&0x1)<<4)
#define PWM_EN_CH4_MASK PWM_EN_CH4(ALL1)
#define PWM_EN_CH3(v) (((v)&0x1)<<3)
#define PWM_EN_CH3_MASK PWM_EN_CH3(ALL1)
#define PWM_EN_CH2(v) (((v)&0x1)<<2)
#define PWM_EN_CH2_MASK PWM_EN_CH2(ALL1)
#define PWM_EN_CH1(v) (((v)&0x1)<<1)
#define PWM_EN_CH1_MASK PWM_EN_CH1(ALL1)
#define PWM_EN_CH0(v) (((v)&0x1)<<0)
#define PWM_EN_CH0_MASK PWM_EN_CH0(ALL1)

/*INTR Register macros*/

#define PWM_INTR_CH11(v) (((v)&0x1)<<11)
#define PWM_INTR_CH11_MASK PWM_INTR_CH11(ALL1)
#define PWM_INTR_CH10(v) (((v)&0x1)<<10)
#define PWM_INTR_CH10_MASK PWM_INTR_CH10(ALL1)
#define PWM_INTR_CH9(v) (((v)&0x1)<<9)
#define PWM_INTR_CH9_MASK PWM_INTR_CH9(ALL1)
#define PWM_INTR_CH8(v) (((v)&0x1)<<8)
#define PWM_INTR_CH8_MASK PWM_INTR_CH8(ALL1)
#define PWM_INTR_CH7(v) (((v)&0x1)<<7)
#define PWM_INTR_CH7_MASK PWM_INTR_CH7(ALL1)
#define PWM_INTR_CH6(v) (((v)&0x1)<<6)
#define PWM_INTR_CH6_MASK PWM_INTR_CH6(ALL1)
#define PWM_INTR_CH5(v) (((v)&0x1)<<5)
#define PWM_INTR_CH5_MASK PWM_INTR_CH5(ALL1)
#define PWM_INTR_CH4(v) (((v)&0x1)<<4)
#define PWM_INTR_CH4_MASK PWM_INTR_CH4(ALL1)
#define PWM_INTR_CH3(v) (((v)&0x1)<<3)
#define PWM_INTR_CH3_MASK PWM_INTR_CH3(ALL1)
#define PWM_INTR_CH2(v) (((v)&0x1)<<2)
#define PWM_INTR_CH2_MASK PWM_INTR_CH2(ALL1)
#define PWM_INTR_CH1(v) (((v)&0x1)<<1)
#define PWM_INTR_CH1_MASK PWM_INTR_CH1(ALL1)
#define PWM_INTR_CH0(v) (((v)&0x1)<<0)
#define PWM_INTR_CH0_MASK PWM_INTR_CH0(ALL1)

/*IRQ0_INTE Register macros*/

#define PWM_IRQ0_INTE_CH11(v) (((v)&0x1)<<11)
#define PWM_IRQ0_INTE_CH11_MASK PWM_IRQ0_INTE_CH11(ALL1)
#define PWM_IRQ0_INTE_CH10(v) (((v)&0x1)<<10)
#define PWM_IRQ0_INTE_CH10_MASK PWM_IRQ0_INTE_CH10(ALL1)
#define PWM_IRQ0_INTE_CH9(v) (((v)&0x1)<<9)
#define PWM_IRQ0_INTE_CH9_MASK PWM_IRQ0_INTE_CH9(ALL1)
#define PWM_IRQ0_INTE_CH8(v) (((v)&0x1)<<8)
#define PWM_IRQ0_INTE_CH8_MASK PWM_IRQ0_INTE_CH8(ALL1)
#define PWM_IRQ0_INTE_CH7(v) (((v)&0x1)<<7)
#define PWM_IRQ0_INTE_CH7_MASK PWM_IRQ0_INTE_CH7(ALL1)
#define PWM_IRQ0_INTE_CH6(v) (((v)&0x1)<<6)
#define PWM_IRQ0_INTE_CH6_MASK PWM_IRQ0_INTE_CH6(ALL1)
#define PWM_IRQ0_INTE_CH5(v) (((v)&0x1)<<5)
#define PWM_IRQ0_INTE_CH5_MASK PWM_IRQ0_INTE_CH5(ALL1)
#define PWM_IRQ0_INTE_CH4(v) (((v)&0x1)<<4)
#define PWM_IRQ0_INTE_CH4_MASK PWM_IRQ0_INTE_CH4(ALL1)
#define PWM_IRQ0_INTE_CH3(v) (((v)&0x1)<<3)
#define PWM_IRQ0_INTE_CH3_MASK PWM_IRQ0_INTE_CH3(ALL1)
#define PWM_IRQ0_INTE_CH2(v) (((v)&0x1)<<2)
#define PWM_IRQ0_INTE_CH2_MASK PWM_IRQ0_INTE_CH2(ALL1)
#define PWM_IRQ0_INTE_CH1(v) (((v)&0x1)<<1)
#define PWM_IRQ0_INTE_CH1_MASK PWM_IRQ0_INTE_CH1(ALL1)
#define PWM_IRQ0_INTE_CH0(v) (((v)&0x1)<<0)
#define PWM_IRQ0_INTE_CH0_MASK PWM_IRQ0_INTE_CH0(ALL1)

/*IRQ0_INTF Register macros*/

#define PWM_IRQ0_INTF_CH11(v) (((v)&0x1)<<11)
#define PWM_IRQ0_INTF_CH11_MASK PWM_IRQ0_INTF_CH11(ALL1)
#define PWM_IRQ0_INTF_CH10(v) (((v)&0x1)<<10)
#define PWM_IRQ0_INTF_CH10_MASK PWM_IRQ0_INTF_CH10(ALL1)
#define PWM_IRQ0_INTF_CH9(v) (((v)&0x1)<<9)
#define PWM_IRQ0_INTF_CH9_MASK PWM_IRQ0_INTF_CH9(ALL1)
#define PWM_IRQ0_INTF_CH8(v) (((v)&0x1)<<8)
#define PWM_IRQ0_INTF_CH8_MASK PWM_IRQ0_INTF_CH8(ALL1)
#define PWM_IRQ0_INTF_CH7(v) (((v)&0x1)<<7)
#define PWM_IRQ0_INTF_CH7_MASK PWM_IRQ0_INTF_CH7(ALL1)
#define PWM_IRQ0_INTF_CH6(v) (((v)&0x1)<<6)
#define PWM_IRQ0_INTF_CH6_MASK PWM_IRQ0_INTF_CH6(ALL1)
#define PWM_IRQ0_INTF_CH5(v) (((v)&0x1)<<5)
#define PWM_IRQ0_INTF_CH5_MASK PWM_IRQ0_INTF_CH5(ALL1)
#define PWM_IRQ0_INTF_CH4(v) (((v)&0x1)<<4)
#define PWM_IRQ0_INTF_CH4_MASK PWM_IRQ0_INTF_CH4(ALL1)
#define PWM_IRQ0_INTF_CH3(v) (((v)&0x1)<<3)
#define PWM_IRQ0_INTF_CH3_MASK PWM_IRQ0_INTF_CH3(ALL1)
#define PWM_IRQ0_INTF_CH2(v) (((v)&0x1)<<2)
#define PWM_IRQ0_INTF_CH2_MASK PWM_IRQ0_INTF_CH2(ALL1)
#define PWM_IRQ0_INTF_CH1(v) (((v)&0x1)<<1)
#define PWM_IRQ0_INTF_CH1_MASK PWM_IRQ0_INTF_CH1(ALL1)
#define PWM_IRQ0_INTF_CH0(v) (((v)&0x1)<<0)
#define PWM_IRQ0_INTF_CH0_MASK PWM_IRQ0_INTF_CH0(ALL1)

/*IRQ0_INTS Register macros*/

#define PWM_IRQ0_INTS_CH11(v) (((v)&0x1)<<11)
#define PWM_IRQ0_INTS_CH11_MASK PWM_IRQ0_INTS_CH11(ALL1)
#define PWM_IRQ0_INTS_CH10(v) (((v)&0x1)<<10)
#define PWM_IRQ0_INTS_CH10_MASK PWM_IRQ0_INTS_CH10(ALL1)
#define PWM_IRQ0_INTS_CH9(v) (((v)&0x1)<<9)
#define PWM_IRQ0_INTS_CH9_MASK PWM_IRQ0_INTS_CH9(ALL1)
#define PWM_IRQ0_INTS_CH8(v) (((v)&0x1)<<8)
#define PWM_IRQ0_INTS_CH8_MASK PWM_IRQ0_INTS_CH8(ALL1)
#define PWM_IRQ0_INTS_CH7(v) (((v)&0x1)<<7)
#define PWM_IRQ0_INTS_CH7_MASK PWM_IRQ0_INTS_CH7(ALL1)
#define PWM_IRQ0_INTS_CH6(v) (((v)&0x1)<<6)
#define PWM_IRQ0_INTS_CH6_MASK PWM_IRQ0_INTS_CH6(ALL1)
#define PWM_IRQ0_INTS_CH5(v) (((v)&0x1)<<5)
#define PWM_IRQ0_INTS_CH5_MASK PWM_IRQ0_INTS_CH5(ALL1)
#define PWM_IRQ0_INTS_CH4(v) (((v)&0x1)<<4)
#define PWM_IRQ0_INTS_CH4_MASK PWM_IRQ0_INTS_CH4(ALL1)
#define PWM_IRQ0_INTS_CH3(v) (((v)&0x1)<<3)
#define PWM_IRQ0_INTS_CH3_MASK PWM_IRQ0_INTS_CH3(ALL1)
#define PWM_IRQ0_INTS_CH2(v) (((v)&0x1)<<2)
#define PWM_IRQ0_INTS_CH2_MASK PWM_IRQ0_INTS_CH2(ALL1)
#define PWM_IRQ0_INTS_CH1(v) (((v)&0x1)<<1)
#define PWM_IRQ0_INTS_CH1_MASK PWM_IRQ0_INTS_CH1(ALL1)
#define PWM_IRQ0_INTS_CH0(v) (((v)&0x1)<<0)
#define PWM_IRQ0_INTS_CH0_MASK PWM_IRQ0_INTS_CH0(ALL1)

/*IRQ1_INTE Register macros*/

#define PWM_IRQ1_INTE_CH11(v) (((v)&0x1)<<11)
#define PWM_IRQ1_INTE_CH11_MASK PWM_IRQ1_INTE_CH11(ALL1)
#define PWM_IRQ1_INTE_CH10(v) (((v)&0x1)<<10)
#define PWM_IRQ1_INTE_CH10_MASK PWM_IRQ1_INTE_CH10(ALL1)
#define PWM_IRQ1_INTE_CH9(v) (((v)&0x1)<<9)
#define PWM_IRQ1_INTE_CH9_MASK PWM_IRQ1_INTE_CH9(ALL1)
#define PWM_IRQ1_INTE_CH8(v) (((v)&0x1)<<8)
#define PWM_IRQ1_INTE_CH8_MASK PWM_IRQ1_INTE_CH8(ALL1)
#define PWM_IRQ1_INTE_CH7(v) (((v)&0x1)<<7)
#define PWM_IRQ1_INTE_CH7_MASK PWM_IRQ1_INTE_CH7(ALL1)
#define PWM_IRQ1_INTE_CH6(v) (((v)&0x1)<<6)
#define PWM_IRQ1_INTE_CH6_MASK PWM_IRQ1_INTE_CH6(ALL1)
#define PWM_IRQ1_INTE_CH5(v) (((v)&0x1)<<5)
#define PWM_IRQ1_INTE_CH5_MASK PWM_IRQ1_INTE_CH5(ALL1)
#define PWM_IRQ1_INTE_CH4(v) (((v)&0x1)<<4)
#define PWM_IRQ1_INTE_CH4_MASK PWM_IRQ1_INTE_CH4(ALL1)
#define PWM_IRQ1_INTE_CH3(v) (((v)&0x1)<<3)
#define PWM_IRQ1_INTE_CH3_MASK PWM_IRQ1_INTE_CH3(ALL1)
#define PWM_IRQ1_INTE_CH2(v) (((v)&0x1)<<2)
#define PWM_IRQ1_INTE_CH2_MASK PWM_IRQ1_INTE_CH2(ALL1)
#define PWM_IRQ1_INTE_CH1(v) (((v)&0x1)<<1)
#define PWM_IRQ1_INTE_CH1_MASK PWM_IRQ1_INTE_CH1(ALL1)
#define PWM_IRQ1_INTE_CH0(v) (((v)&0x1)<<0)
#define PWM_IRQ1_INTE_CH0_MASK PWM_IRQ1_INTE_CH0(ALL1)

/*IRQ1_INTF Register macros*/

#define PWM_IRQ1_INTF_CH11(v) (((v)&0x1)<<11)
#define PWM_IRQ1_INTF_CH11_MASK PWM_IRQ1_INTF_CH11(ALL1)
#define PWM_IRQ1_INTF_CH10(v) (((v)&0x1)<<10)
#define PWM_IRQ1_INTF_CH10_MASK PWM_IRQ1_INTF_CH10(ALL1)
#define PWM_IRQ1_INTF_CH9(v) (((v)&0x1)<<9)
#define PWM_IRQ1_INTF_CH9_MASK PWM_IRQ1_INTF_CH9(ALL1)
#define PWM_IRQ1_INTF_CH8(v) (((v)&0x1)<<8)
#define PWM_IRQ1_INTF_CH8_MASK PWM_IRQ1_INTF_CH8(ALL1)
#define PWM_IRQ1_INTF_CH7(v) (((v)&0x1)<<7)
#define PWM_IRQ1_INTF_CH7_MASK PWM_IRQ1_INTF_CH7(ALL1)
#define PWM_IRQ1_INTF_CH6(v) (((v)&0x1)<<6)
#define PWM_IRQ1_INTF_CH6_MASK PWM_IRQ1_INTF_CH6(ALL1)
#define PWM_IRQ1_INTF_CH5(v) (((v)&0x1)<<5)
#define PWM_IRQ1_INTF_CH5_MASK PWM_IRQ1_INTF_CH5(ALL1)
#define PWM_IRQ1_INTF_CH4(v) (((v)&0x1)<<4)
#define PWM_IRQ1_INTF_CH4_MASK PWM_IRQ1_INTF_CH4(ALL1)
#define PWM_IRQ1_INTF_CH3(v) (((v)&0x1)<<3)
#define PWM_IRQ1_INTF_CH3_MASK PWM_IRQ1_INTF_CH3(ALL1)
#define PWM_IRQ1_INTF_CH2(v) (((v)&0x1)<<2)
#define PWM_IRQ1_INTF_CH2_MASK PWM_IRQ1_INTF_CH2(ALL1)
#define PWM_IRQ1_INTF_CH1(v) (((v)&0x1)<<1)
#define PWM_IRQ1_INTF_CH1_MASK PWM_IRQ1_INTF_CH1(ALL1)
#define PWM_IRQ1_INTF_CH0(v) (((v)&0x1)<<0)
#define PWM_IRQ1_INTF_CH0_MASK PWM_IRQ1_INTF_CH0(ALL1)

/*IRQ1_INTS Register macros*/

#define PWM_IRQ1_INTS_CH11(v) (((v)&0x1)<<11)
#define PWM_IRQ1_INTS_CH11_MASK PWM_IRQ1_INTS_CH11(ALL1)
#define PWM_IRQ1_INTS_CH10(v) (((v)&0x1)<<10)
#define PWM_IRQ1_INTS_CH10_MASK PWM_IRQ1_INTS_CH10(ALL1)
#define PWM_IRQ1_INTS_CH9(v) (((v)&0x1)<<9)
#define PWM_IRQ1_INTS_CH9_MASK PWM_IRQ1_INTS_CH9(ALL1)
#define PWM_IRQ1_INTS_CH8(v) (((v)&0x1)<<8)
#define PWM_IRQ1_INTS_CH8_MASK PWM_IRQ1_INTS_CH8(ALL1)
#define PWM_IRQ1_INTS_CH7(v) (((v)&0x1)<<7)
#define PWM_IRQ1_INTS_CH7_MASK PWM_IRQ1_INTS_CH7(ALL1)
#define PWM_IRQ1_INTS_CH6(v) (((v)&0x1)<<6)
#define PWM_IRQ1_INTS_CH6_MASK PWM_IRQ1_INTS_CH6(ALL1)
#define PWM_IRQ1_INTS_CH5(v) (((v)&0x1)<<5)
#define PWM_IRQ1_INTS_CH5_MASK PWM_IRQ1_INTS_CH5(ALL1)
#define PWM_IRQ1_INTS_CH4(v) (((v)&0x1)<<4)
#define PWM_IRQ1_INTS_CH4_MASK PWM_IRQ1_INTS_CH4(ALL1)
#define PWM_IRQ1_INTS_CH3(v) (((v)&0x1)<<3)
#define PWM_IRQ1_INTS_CH3_MASK PWM_IRQ1_INTS_CH3(ALL1)
#define PWM_IRQ1_INTS_CH2(v) (((v)&0x1)<<2)
#define PWM_IRQ1_INTS_CH2_MASK PWM_IRQ1_INTS_CH2(ALL1)
#define PWM_IRQ1_INTS_CH1(v) (((v)&0x1)<<1)
#define PWM_IRQ1_INTS_CH1_MASK PWM_IRQ1_INTS_CH1(ALL1)
#define PWM_IRQ1_INTS_CH0(v) (((v)&0x1)<<0)
#define PWM_IRQ1_INTS_CH0_MASK PWM_IRQ1_INTS_CH0(ALL1)

#endif

