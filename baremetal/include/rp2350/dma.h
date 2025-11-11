
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

#ifndef RP2350_DMA_H
#define RP2350_DMA_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ch0_read_addr;
		uint32_t ch0_write_addr;
		uint32_t ch0_trans_count;
		uint32_t ch0_ctrl_trig;
		uint32_t ch0_al1_ctrl;
		uint32_t ch0_al1_read_addr;
		uint32_t ch0_al1_write_addr;
		uint32_t ch0_al1_trans_count_trig;
		uint32_t ch0_al2_ctrl;
		uint32_t ch0_al2_trans_count;
		uint32_t ch0_al2_read_addr;
		uint32_t ch0_al2_write_addr_trig;
		uint32_t ch0_al3_ctrl;
		uint32_t ch0_al3_write_addr;
		uint32_t ch0_al3_trans_count;
		uint32_t ch0_al3_read_addr_trig;
		uint32_t ch1_read_addr;
		uint32_t ch1_write_addr;
		uint32_t ch1_trans_count;
		uint32_t ch1_ctrl_trig;
		uint32_t ch1_al1_ctrl;
		uint32_t ch1_al1_read_addr;
		uint32_t ch1_al1_write_addr;
		uint32_t ch1_al1_trans_count_trig;
		uint32_t ch1_al2_ctrl;
		uint32_t ch1_al2_trans_count;
		uint32_t ch1_al2_read_addr;
		uint32_t ch1_al2_write_addr_trig;
		uint32_t ch1_al3_ctrl;
		uint32_t ch1_al3_write_addr;
		uint32_t ch1_al3_trans_count;
		uint32_t ch1_al3_read_addr_trig;
		uint32_t ch2_read_addr;
		uint32_t ch2_write_addr;
		uint32_t ch2_trans_count;
		uint32_t ch2_ctrl_trig;
		uint32_t ch2_al1_ctrl;
		uint32_t ch2_al1_read_addr;
		uint32_t ch2_al1_write_addr;
		uint32_t ch2_al1_trans_count_trig;
		uint32_t ch2_al2_ctrl;
		uint32_t ch2_al2_trans_count;
		uint32_t ch2_al2_read_addr;
		uint32_t ch2_al2_write_addr_trig;
		uint32_t ch2_al3_ctrl;
		uint32_t ch2_al3_write_addr;
		uint32_t ch2_al3_trans_count;
		uint32_t ch2_al3_read_addr_trig;
		uint32_t ch3_read_addr;
		uint32_t ch3_write_addr;
		uint32_t ch3_trans_count;
		uint32_t ch3_ctrl_trig;
		uint32_t ch3_al1_ctrl;
		uint32_t ch3_al1_read_addr;
		uint32_t ch3_al1_write_addr;
		uint32_t ch3_al1_trans_count_trig;
		uint32_t ch3_al2_ctrl;
		uint32_t ch3_al2_trans_count;
		uint32_t ch3_al2_read_addr;
		uint32_t ch3_al2_write_addr_trig;
		uint32_t ch3_al3_ctrl;
		uint32_t ch3_al3_write_addr;
		uint32_t ch3_al3_trans_count;
		uint32_t ch3_al3_read_addr_trig;
		uint32_t ch4_read_addr;
		uint32_t ch4_write_addr;
		uint32_t ch4_trans_count;
		uint32_t ch4_ctrl_trig;
		uint32_t ch4_al1_ctrl;
		uint32_t ch4_al1_read_addr;
		uint32_t ch4_al1_write_addr;
		uint32_t ch4_al1_trans_count_trig;
		uint32_t ch4_al2_ctrl;
		uint32_t ch4_al2_trans_count;
		uint32_t ch4_al2_read_addr;
		uint32_t ch4_al2_write_addr_trig;
		uint32_t ch4_al3_ctrl;
		uint32_t ch4_al3_write_addr;
		uint32_t ch4_al3_trans_count;
		uint32_t ch4_al3_read_addr_trig;
		uint32_t ch5_read_addr;
		uint32_t ch5_write_addr;
		uint32_t ch5_trans_count;
		uint32_t ch5_ctrl_trig;
		uint32_t ch5_al1_ctrl;
		uint32_t ch5_al1_read_addr;
		uint32_t ch5_al1_write_addr;
		uint32_t ch5_al1_trans_count_trig;
		uint32_t ch5_al2_ctrl;
		uint32_t ch5_al2_trans_count;
		uint32_t ch5_al2_read_addr;
		uint32_t ch5_al2_write_addr_trig;
		uint32_t ch5_al3_ctrl;
		uint32_t ch5_al3_write_addr;
		uint32_t ch5_al3_trans_count;
		uint32_t ch5_al3_read_addr_trig;
		uint32_t ch6_read_addr;
		uint32_t ch6_write_addr;
		uint32_t ch6_trans_count;
		uint32_t ch6_ctrl_trig;
		uint32_t ch6_al1_ctrl;
		uint32_t ch6_al1_read_addr;
		uint32_t ch6_al1_write_addr;
		uint32_t ch6_al1_trans_count_trig;
		uint32_t ch6_al2_ctrl;
		uint32_t ch6_al2_trans_count;
		uint32_t ch6_al2_read_addr;
		uint32_t ch6_al2_write_addr_trig;
		uint32_t ch6_al3_ctrl;
		uint32_t ch6_al3_write_addr;
		uint32_t ch6_al3_trans_count;
		uint32_t ch6_al3_read_addr_trig;
		uint32_t ch7_read_addr;
		uint32_t ch7_write_addr;
		uint32_t ch7_trans_count;
		uint32_t ch7_ctrl_trig;
		uint32_t ch7_al1_ctrl;
		uint32_t ch7_al1_read_addr;
		uint32_t ch7_al1_write_addr;
		uint32_t ch7_al1_trans_count_trig;
		uint32_t ch7_al2_ctrl;
		uint32_t ch7_al2_trans_count;
		uint32_t ch7_al2_read_addr;
		uint32_t ch7_al2_write_addr_trig;
		uint32_t ch7_al3_ctrl;
		uint32_t ch7_al3_write_addr;
		uint32_t ch7_al3_trans_count;
		uint32_t ch7_al3_read_addr_trig;
		uint32_t ch8_read_addr;
		uint32_t ch8_write_addr;
		uint32_t ch8_trans_count;
		uint32_t ch8_ctrl_trig;
		uint32_t ch8_al1_ctrl;
		uint32_t ch8_al1_read_addr;
		uint32_t ch8_al1_write_addr;
		uint32_t ch8_al1_trans_count_trig;
		uint32_t ch8_al2_ctrl;
		uint32_t ch8_al2_trans_count;
		uint32_t ch8_al2_read_addr;
		uint32_t ch8_al2_write_addr_trig;
		uint32_t ch8_al3_ctrl;
		uint32_t ch8_al3_write_addr;
		uint32_t ch8_al3_trans_count;
		uint32_t ch8_al3_read_addr_trig;
		uint32_t ch9_read_addr;
		uint32_t ch9_write_addr;
		uint32_t ch9_trans_count;
		uint32_t ch9_ctrl_trig;
		uint32_t ch9_al1_ctrl;
		uint32_t ch9_al1_read_addr;
		uint32_t ch9_al1_write_addr;
		uint32_t ch9_al1_trans_count_trig;
		uint32_t ch9_al2_ctrl;
		uint32_t ch9_al2_trans_count;
		uint32_t ch9_al2_read_addr;
		uint32_t ch9_al2_write_addr_trig;
		uint32_t ch9_al3_ctrl;
		uint32_t ch9_al3_write_addr;
		uint32_t ch9_al3_trans_count;
		uint32_t ch9_al3_read_addr_trig;
		uint32_t ch10_read_addr;
		uint32_t ch10_write_addr;
		uint32_t ch10_trans_count;
		uint32_t ch10_ctrl_trig;
		uint32_t ch10_al1_ctrl;
		uint32_t ch10_al1_read_addr;
		uint32_t ch10_al1_write_addr;
		uint32_t ch10_al1_trans_count_trig;
		uint32_t ch10_al2_ctrl;
		uint32_t ch10_al2_trans_count;
		uint32_t ch10_al2_read_addr;
		uint32_t ch10_al2_write_addr_trig;
		uint32_t ch10_al3_ctrl;
		uint32_t ch10_al3_write_addr;
		uint32_t ch10_al3_trans_count;
		uint32_t ch10_al3_read_addr_trig;
		uint32_t ch11_read_addr;
		uint32_t ch11_write_addr;
		uint32_t ch11_trans_count;
		uint32_t ch11_ctrl_trig;
		uint32_t ch11_al1_ctrl;
		uint32_t ch11_al1_read_addr;
		uint32_t ch11_al1_write_addr;
		uint32_t ch11_al1_trans_count_trig;
		uint32_t ch11_al2_ctrl;
		uint32_t ch11_al2_trans_count;
		uint32_t ch11_al2_read_addr;
		uint32_t ch11_al2_write_addr_trig;
		uint32_t ch11_al3_ctrl;
		uint32_t ch11_al3_write_addr;
		uint32_t ch11_al3_trans_count;
		uint32_t ch11_al3_read_addr_trig;
		uint32_t ch12_read_addr;
		uint32_t ch12_write_addr;
		uint32_t ch12_trans_count;
		uint32_t ch12_ctrl_trig;
		uint32_t ch12_al1_ctrl;
		uint32_t ch12_al1_read_addr;
		uint32_t ch12_al1_write_addr;
		uint32_t ch12_al1_trans_count_trig;
		uint32_t ch12_al2_ctrl;
		uint32_t ch12_al2_trans_count;
		uint32_t ch12_al2_read_addr;
		uint32_t ch12_al2_write_addr_trig;
		uint32_t ch12_al3_ctrl;
		uint32_t ch12_al3_write_addr;
		uint32_t ch12_al3_trans_count;
		uint32_t ch12_al3_read_addr_trig;
		uint32_t ch13_read_addr;
		uint32_t ch13_write_addr;
		uint32_t ch13_trans_count;
		uint32_t ch13_ctrl_trig;
		uint32_t ch13_al1_ctrl;
		uint32_t ch13_al1_read_addr;
		uint32_t ch13_al1_write_addr;
		uint32_t ch13_al1_trans_count_trig;
		uint32_t ch13_al2_ctrl;
		uint32_t ch13_al2_trans_count;
		uint32_t ch13_al2_read_addr;
		uint32_t ch13_al2_write_addr_trig;
		uint32_t ch13_al3_ctrl;
		uint32_t ch13_al3_write_addr;
		uint32_t ch13_al3_trans_count;
		uint32_t ch13_al3_read_addr_trig;
		uint32_t ch14_read_addr;
		uint32_t ch14_write_addr;
		uint32_t ch14_trans_count;
		uint32_t ch14_ctrl_trig;
		uint32_t ch14_al1_ctrl;
		uint32_t ch14_al1_read_addr;
		uint32_t ch14_al1_write_addr;
		uint32_t ch14_al1_trans_count_trig;
		uint32_t ch14_al2_ctrl;
		uint32_t ch14_al2_trans_count;
		uint32_t ch14_al2_read_addr;
		uint32_t ch14_al2_write_addr_trig;
		uint32_t ch14_al3_ctrl;
		uint32_t ch14_al3_write_addr;
		uint32_t ch14_al3_trans_count;
		uint32_t ch14_al3_read_addr_trig;
		uint32_t ch15_read_addr;
		uint32_t ch15_write_addr;
		uint32_t ch15_trans_count;
		uint32_t ch15_ctrl_trig;
		uint32_t ch15_al1_ctrl;
		uint32_t ch15_al1_read_addr;
		uint32_t ch15_al1_write_addr;
		uint32_t ch15_al1_trans_count_trig;
		uint32_t ch15_al2_ctrl;
		uint32_t ch15_al2_trans_count;
		uint32_t ch15_al2_read_addr;
		uint32_t ch15_al2_write_addr_trig;
		uint32_t ch15_al3_ctrl;
		uint32_t ch15_al3_write_addr;
		uint32_t ch15_al3_trans_count;
		uint32_t ch15_al3_read_addr_trig;
		uint32_t intr;
		uint32_t inte0;
		uint32_t intf0;
		uint32_t ints0;
		uint32_t RSVD0;
		uint32_t inte1;
		uint32_t intf1;
		uint32_t ints1;
		uint32_t RSVD1;
		uint32_t inte2;
		uint32_t intf2;
		uint32_t ints2;
		uint32_t RSVD2;
		uint32_t inte3;
		uint32_t intf3;
		uint32_t ints3;
		uint32_t timer0;
		uint32_t timer1;
		uint32_t timer2;
		uint32_t timer3;
		uint32_t multi_chan_trigger;
		uint32_t sniff_ctrl;
		uint32_t sniff_data;
		uint32_t RSVD3;
		uint32_t fifo_levels;
		uint32_t chan_abort;
		uint32_t n_channels;
		uint32_t RSVD4[5];
		uint32_t seccfg_ch0;
		uint32_t seccfg_ch1;
		uint32_t seccfg_ch2;
		uint32_t seccfg_ch3;
		uint32_t seccfg_ch4;
		uint32_t seccfg_ch5;
		uint32_t seccfg_ch6;
		uint32_t seccfg_ch7;
		uint32_t seccfg_ch8;
		uint32_t seccfg_ch9;
		uint32_t seccfg_ch10;
		uint32_t seccfg_ch11;
		uint32_t seccfg_ch12;
		uint32_t seccfg_ch13;
		uint32_t seccfg_ch14;
		uint32_t seccfg_ch15;
		uint32_t seccfg_irq0;
		uint32_t seccfg_irq1;
		uint32_t seccfg_irq2;
		uint32_t seccfg_irq3;
		uint32_t seccfg_misc;
		uint32_t RSVD5[11];
		uint32_t mpu_ctrl;
		uint32_t mpu_bar0;
		uint32_t mpu_lar0;
		uint32_t mpu_bar1;
		uint32_t mpu_lar1;
		uint32_t mpu_bar2;
		uint32_t mpu_lar2;
		uint32_t mpu_bar3;
		uint32_t mpu_lar3;
		uint32_t mpu_bar4;
		uint32_t mpu_lar4;
		uint32_t mpu_bar5;
		uint32_t mpu_lar5;
		uint32_t mpu_bar6;
		uint32_t mpu_lar6;
		uint32_t mpu_bar7;
		uint32_t mpu_lar7;
		uint32_t RSVD6[175];
		uint32_t ch0_dbg_ctdreq;
		uint32_t ch0_dbg_tcr;
		uint32_t RSVD7[14];
		uint32_t ch1_dbg_ctdreq;
		uint32_t ch1_dbg_tcr;
		uint32_t RSVD8[14];
		uint32_t ch2_dbg_ctdreq;
		uint32_t ch2_dbg_tcr;
		uint32_t RSVD9[14];
		uint32_t ch3_dbg_ctdreq;
		uint32_t ch3_dbg_tcr;
		uint32_t RSVD10[14];
		uint32_t ch4_dbg_ctdreq;
		uint32_t ch4_dbg_tcr;
		uint32_t RSVD11[14];
		uint32_t ch5_dbg_ctdreq;
		uint32_t ch5_dbg_tcr;
		uint32_t RSVD12[14];
		uint32_t ch6_dbg_ctdreq;
		uint32_t ch6_dbg_tcr;
		uint32_t RSVD13[14];
		uint32_t ch7_dbg_ctdreq;
		uint32_t ch7_dbg_tcr;
		uint32_t RSVD14[14];
		uint32_t ch8_dbg_ctdreq;
		uint32_t ch8_dbg_tcr;
		uint32_t RSVD15[14];
		uint32_t ch9_dbg_ctdreq;
		uint32_t ch9_dbg_tcr;
		uint32_t RSVD16[14];
		uint32_t ch10_dbg_ctdreq;
		uint32_t ch10_dbg_tcr;
		uint32_t RSVD17[14];
		uint32_t ch11_dbg_ctdreq;
		uint32_t ch11_dbg_tcr;
		uint32_t RSVD18[14];
		uint32_t ch12_dbg_ctdreq;
		uint32_t ch12_dbg_tcr;
		uint32_t RSVD19[14];
		uint32_t ch13_dbg_ctdreq;
		uint32_t ch13_dbg_tcr;
		uint32_t RSVD20[14];
		uint32_t ch14_dbg_ctdreq;
		uint32_t ch14_dbg_tcr;
		uint32_t RSVD21[14];
		uint32_t ch15_dbg_ctdreq;
		uint32_t ch15_dbg_tcr;
		uint32_t RSVD22[270];
		uint32_t ch0_read_addr_xor;
		uint32_t ch0_write_addr_xor;
		uint32_t ch0_trans_count_xor;
		uint32_t ch0_ctrl_trig_xor;
		uint32_t ch0_al1_ctrl_xor;
		uint32_t ch0_al1_read_addr_xor;
		uint32_t ch0_al1_write_addr_xor;
		uint32_t ch0_al1_trans_count_trig_xor;
		uint32_t ch0_al2_ctrl_xor;
		uint32_t ch0_al2_trans_count_xor;
		uint32_t ch0_al2_read_addr_xor;
		uint32_t ch0_al2_write_addr_trig_xor;
		uint32_t ch0_al3_ctrl_xor;
		uint32_t ch0_al3_write_addr_xor;
		uint32_t ch0_al3_trans_count_xor;
		uint32_t ch0_al3_read_addr_trig_xor;
		uint32_t ch1_read_addr_xor;
		uint32_t ch1_write_addr_xor;
		uint32_t ch1_trans_count_xor;
		uint32_t ch1_ctrl_trig_xor;
		uint32_t ch1_al1_ctrl_xor;
		uint32_t ch1_al1_read_addr_xor;
		uint32_t ch1_al1_write_addr_xor;
		uint32_t ch1_al1_trans_count_trig_xor;
		uint32_t ch1_al2_ctrl_xor;
		uint32_t ch1_al2_trans_count_xor;
		uint32_t ch1_al2_read_addr_xor;
		uint32_t ch1_al2_write_addr_trig_xor;
		uint32_t ch1_al3_ctrl_xor;
		uint32_t ch1_al3_write_addr_xor;
		uint32_t ch1_al3_trans_count_xor;
		uint32_t ch1_al3_read_addr_trig_xor;
		uint32_t ch2_read_addr_xor;
		uint32_t ch2_write_addr_xor;
		uint32_t ch2_trans_count_xor;
		uint32_t ch2_ctrl_trig_xor;
		uint32_t ch2_al1_ctrl_xor;
		uint32_t ch2_al1_read_addr_xor;
		uint32_t ch2_al1_write_addr_xor;
		uint32_t ch2_al1_trans_count_trig_xor;
		uint32_t ch2_al2_ctrl_xor;
		uint32_t ch2_al2_trans_count_xor;
		uint32_t ch2_al2_read_addr_xor;
		uint32_t ch2_al2_write_addr_trig_xor;
		uint32_t ch2_al3_ctrl_xor;
		uint32_t ch2_al3_write_addr_xor;
		uint32_t ch2_al3_trans_count_xor;
		uint32_t ch2_al3_read_addr_trig_xor;
		uint32_t ch3_read_addr_xor;
		uint32_t ch3_write_addr_xor;
		uint32_t ch3_trans_count_xor;
		uint32_t ch3_ctrl_trig_xor;
		uint32_t ch3_al1_ctrl_xor;
		uint32_t ch3_al1_read_addr_xor;
		uint32_t ch3_al1_write_addr_xor;
		uint32_t ch3_al1_trans_count_trig_xor;
		uint32_t ch3_al2_ctrl_xor;
		uint32_t ch3_al2_trans_count_xor;
		uint32_t ch3_al2_read_addr_xor;
		uint32_t ch3_al2_write_addr_trig_xor;
		uint32_t ch3_al3_ctrl_xor;
		uint32_t ch3_al3_write_addr_xor;
		uint32_t ch3_al3_trans_count_xor;
		uint32_t ch3_al3_read_addr_trig_xor;
		uint32_t ch4_read_addr_xor;
		uint32_t ch4_write_addr_xor;
		uint32_t ch4_trans_count_xor;
		uint32_t ch4_ctrl_trig_xor;
		uint32_t ch4_al1_ctrl_xor;
		uint32_t ch4_al1_read_addr_xor;
		uint32_t ch4_al1_write_addr_xor;
		uint32_t ch4_al1_trans_count_trig_xor;
		uint32_t ch4_al2_ctrl_xor;
		uint32_t ch4_al2_trans_count_xor;
		uint32_t ch4_al2_read_addr_xor;
		uint32_t ch4_al2_write_addr_trig_xor;
		uint32_t ch4_al3_ctrl_xor;
		uint32_t ch4_al3_write_addr_xor;
		uint32_t ch4_al3_trans_count_xor;
		uint32_t ch4_al3_read_addr_trig_xor;
		uint32_t ch5_read_addr_xor;
		uint32_t ch5_write_addr_xor;
		uint32_t ch5_trans_count_xor;
		uint32_t ch5_ctrl_trig_xor;
		uint32_t ch5_al1_ctrl_xor;
		uint32_t ch5_al1_read_addr_xor;
		uint32_t ch5_al1_write_addr_xor;
		uint32_t ch5_al1_trans_count_trig_xor;
		uint32_t ch5_al2_ctrl_xor;
		uint32_t ch5_al2_trans_count_xor;
		uint32_t ch5_al2_read_addr_xor;
		uint32_t ch5_al2_write_addr_trig_xor;
		uint32_t ch5_al3_ctrl_xor;
		uint32_t ch5_al3_write_addr_xor;
		uint32_t ch5_al3_trans_count_xor;
		uint32_t ch5_al3_read_addr_trig_xor;
		uint32_t ch6_read_addr_xor;
		uint32_t ch6_write_addr_xor;
		uint32_t ch6_trans_count_xor;
		uint32_t ch6_ctrl_trig_xor;
		uint32_t ch6_al1_ctrl_xor;
		uint32_t ch6_al1_read_addr_xor;
		uint32_t ch6_al1_write_addr_xor;
		uint32_t ch6_al1_trans_count_trig_xor;
		uint32_t ch6_al2_ctrl_xor;
		uint32_t ch6_al2_trans_count_xor;
		uint32_t ch6_al2_read_addr_xor;
		uint32_t ch6_al2_write_addr_trig_xor;
		uint32_t ch6_al3_ctrl_xor;
		uint32_t ch6_al3_write_addr_xor;
		uint32_t ch6_al3_trans_count_xor;
		uint32_t ch6_al3_read_addr_trig_xor;
		uint32_t ch7_read_addr_xor;
		uint32_t ch7_write_addr_xor;
		uint32_t ch7_trans_count_xor;
		uint32_t ch7_ctrl_trig_xor;
		uint32_t ch7_al1_ctrl_xor;
		uint32_t ch7_al1_read_addr_xor;
		uint32_t ch7_al1_write_addr_xor;
		uint32_t ch7_al1_trans_count_trig_xor;
		uint32_t ch7_al2_ctrl_xor;
		uint32_t ch7_al2_trans_count_xor;
		uint32_t ch7_al2_read_addr_xor;
		uint32_t ch7_al2_write_addr_trig_xor;
		uint32_t ch7_al3_ctrl_xor;
		uint32_t ch7_al3_write_addr_xor;
		uint32_t ch7_al3_trans_count_xor;
		uint32_t ch7_al3_read_addr_trig_xor;
		uint32_t ch8_read_addr_xor;
		uint32_t ch8_write_addr_xor;
		uint32_t ch8_trans_count_xor;
		uint32_t ch8_ctrl_trig_xor;
		uint32_t ch8_al1_ctrl_xor;
		uint32_t ch8_al1_read_addr_xor;
		uint32_t ch8_al1_write_addr_xor;
		uint32_t ch8_al1_trans_count_trig_xor;
		uint32_t ch8_al2_ctrl_xor;
		uint32_t ch8_al2_trans_count_xor;
		uint32_t ch8_al2_read_addr_xor;
		uint32_t ch8_al2_write_addr_trig_xor;
		uint32_t ch8_al3_ctrl_xor;
		uint32_t ch8_al3_write_addr_xor;
		uint32_t ch8_al3_trans_count_xor;
		uint32_t ch8_al3_read_addr_trig_xor;
		uint32_t ch9_read_addr_xor;
		uint32_t ch9_write_addr_xor;
		uint32_t ch9_trans_count_xor;
		uint32_t ch9_ctrl_trig_xor;
		uint32_t ch9_al1_ctrl_xor;
		uint32_t ch9_al1_read_addr_xor;
		uint32_t ch9_al1_write_addr_xor;
		uint32_t ch9_al1_trans_count_trig_xor;
		uint32_t ch9_al2_ctrl_xor;
		uint32_t ch9_al2_trans_count_xor;
		uint32_t ch9_al2_read_addr_xor;
		uint32_t ch9_al2_write_addr_trig_xor;
		uint32_t ch9_al3_ctrl_xor;
		uint32_t ch9_al3_write_addr_xor;
		uint32_t ch9_al3_trans_count_xor;
		uint32_t ch9_al3_read_addr_trig_xor;
		uint32_t ch10_read_addr_xor;
		uint32_t ch10_write_addr_xor;
		uint32_t ch10_trans_count_xor;
		uint32_t ch10_ctrl_trig_xor;
		uint32_t ch10_al1_ctrl_xor;
		uint32_t ch10_al1_read_addr_xor;
		uint32_t ch10_al1_write_addr_xor;
		uint32_t ch10_al1_trans_count_trig_xor;
		uint32_t ch10_al2_ctrl_xor;
		uint32_t ch10_al2_trans_count_xor;
		uint32_t ch10_al2_read_addr_xor;
		uint32_t ch10_al2_write_addr_trig_xor;
		uint32_t ch10_al3_ctrl_xor;
		uint32_t ch10_al3_write_addr_xor;
		uint32_t ch10_al3_trans_count_xor;
		uint32_t ch10_al3_read_addr_trig_xor;
		uint32_t ch11_read_addr_xor;
		uint32_t ch11_write_addr_xor;
		uint32_t ch11_trans_count_xor;
		uint32_t ch11_ctrl_trig_xor;
		uint32_t ch11_al1_ctrl_xor;
		uint32_t ch11_al1_read_addr_xor;
		uint32_t ch11_al1_write_addr_xor;
		uint32_t ch11_al1_trans_count_trig_xor;
		uint32_t ch11_al2_ctrl_xor;
		uint32_t ch11_al2_trans_count_xor;
		uint32_t ch11_al2_read_addr_xor;
		uint32_t ch11_al2_write_addr_trig_xor;
		uint32_t ch11_al3_ctrl_xor;
		uint32_t ch11_al3_write_addr_xor;
		uint32_t ch11_al3_trans_count_xor;
		uint32_t ch11_al3_read_addr_trig_xor;
		uint32_t ch12_read_addr_xor;
		uint32_t ch12_write_addr_xor;
		uint32_t ch12_trans_count_xor;
		uint32_t ch12_ctrl_trig_xor;
		uint32_t ch12_al1_ctrl_xor;
		uint32_t ch12_al1_read_addr_xor;
		uint32_t ch12_al1_write_addr_xor;
		uint32_t ch12_al1_trans_count_trig_xor;
		uint32_t ch12_al2_ctrl_xor;
		uint32_t ch12_al2_trans_count_xor;
		uint32_t ch12_al2_read_addr_xor;
		uint32_t ch12_al2_write_addr_trig_xor;
		uint32_t ch12_al3_ctrl_xor;
		uint32_t ch12_al3_write_addr_xor;
		uint32_t ch12_al3_trans_count_xor;
		uint32_t ch12_al3_read_addr_trig_xor;
		uint32_t ch13_read_addr_xor;
		uint32_t ch13_write_addr_xor;
		uint32_t ch13_trans_count_xor;
		uint32_t ch13_ctrl_trig_xor;
		uint32_t ch13_al1_ctrl_xor;
		uint32_t ch13_al1_read_addr_xor;
		uint32_t ch13_al1_write_addr_xor;
		uint32_t ch13_al1_trans_count_trig_xor;
		uint32_t ch13_al2_ctrl_xor;
		uint32_t ch13_al2_trans_count_xor;
		uint32_t ch13_al2_read_addr_xor;
		uint32_t ch13_al2_write_addr_trig_xor;
		uint32_t ch13_al3_ctrl_xor;
		uint32_t ch13_al3_write_addr_xor;
		uint32_t ch13_al3_trans_count_xor;
		uint32_t ch13_al3_read_addr_trig_xor;
		uint32_t ch14_read_addr_xor;
		uint32_t ch14_write_addr_xor;
		uint32_t ch14_trans_count_xor;
		uint32_t ch14_ctrl_trig_xor;
		uint32_t ch14_al1_ctrl_xor;
		uint32_t ch14_al1_read_addr_xor;
		uint32_t ch14_al1_write_addr_xor;
		uint32_t ch14_al1_trans_count_trig_xor;
		uint32_t ch14_al2_ctrl_xor;
		uint32_t ch14_al2_trans_count_xor;
		uint32_t ch14_al2_read_addr_xor;
		uint32_t ch14_al2_write_addr_trig_xor;
		uint32_t ch14_al3_ctrl_xor;
		uint32_t ch14_al3_write_addr_xor;
		uint32_t ch14_al3_trans_count_xor;
		uint32_t ch14_al3_read_addr_trig_xor;
		uint32_t ch15_read_addr_xor;
		uint32_t ch15_write_addr_xor;
		uint32_t ch15_trans_count_xor;
		uint32_t ch15_ctrl_trig_xor;
		uint32_t ch15_al1_ctrl_xor;
		uint32_t ch15_al1_read_addr_xor;
		uint32_t ch15_al1_write_addr_xor;
		uint32_t ch15_al1_trans_count_trig_xor;
		uint32_t ch15_al2_ctrl_xor;
		uint32_t ch15_al2_trans_count_xor;
		uint32_t ch15_al2_read_addr_xor;
		uint32_t ch15_al2_write_addr_trig_xor;
		uint32_t ch15_al3_ctrl_xor;
		uint32_t ch15_al3_write_addr_xor;
		uint32_t ch15_al3_trans_count_xor;
		uint32_t ch15_al3_read_addr_trig_xor;
		uint32_t intr_xor;
		uint32_t inte0_xor;
		uint32_t intf0_xor;
		uint32_t ints0_xor;
		uint32_t RSVDxor_0;
		uint32_t inte1_xor;
		uint32_t intf1_xor;
		uint32_t ints1_xor;
		uint32_t RSVDxor_1;
		uint32_t inte2_xor;
		uint32_t intf2_xor;
		uint32_t ints2_xor;
		uint32_t RSVDxor_2;
		uint32_t inte3_xor;
		uint32_t intf3_xor;
		uint32_t ints3_xor;
		uint32_t timer0_xor;
		uint32_t timer1_xor;
		uint32_t timer2_xor;
		uint32_t timer3_xor;
		uint32_t multi_chan_trigger_xor;
		uint32_t sniff_ctrl_xor;
		uint32_t sniff_data_xor;
		uint32_t RSVDxor_3;
		uint32_t fifo_levels_xor;
		uint32_t chan_abort_xor;
		uint32_t n_channels_xor;
		uint32_t RSVDxor_4[5];
		uint32_t seccfg_ch0_xor;
		uint32_t seccfg_ch1_xor;
		uint32_t seccfg_ch2_xor;
		uint32_t seccfg_ch3_xor;
		uint32_t seccfg_ch4_xor;
		uint32_t seccfg_ch5_xor;
		uint32_t seccfg_ch6_xor;
		uint32_t seccfg_ch7_xor;
		uint32_t seccfg_ch8_xor;
		uint32_t seccfg_ch9_xor;
		uint32_t seccfg_ch10_xor;
		uint32_t seccfg_ch11_xor;
		uint32_t seccfg_ch12_xor;
		uint32_t seccfg_ch13_xor;
		uint32_t seccfg_ch14_xor;
		uint32_t seccfg_ch15_xor;
		uint32_t seccfg_irq0_xor;
		uint32_t seccfg_irq1_xor;
		uint32_t seccfg_irq2_xor;
		uint32_t seccfg_irq3_xor;
		uint32_t seccfg_misc_xor;
		uint32_t RSVDxor_5[11];
		uint32_t mpu_ctrl_xor;
		uint32_t mpu_bar0_xor;
		uint32_t mpu_lar0_xor;
		uint32_t mpu_bar1_xor;
		uint32_t mpu_lar1_xor;
		uint32_t mpu_bar2_xor;
		uint32_t mpu_lar2_xor;
		uint32_t mpu_bar3_xor;
		uint32_t mpu_lar3_xor;
		uint32_t mpu_bar4_xor;
		uint32_t mpu_lar4_xor;
		uint32_t mpu_bar5_xor;
		uint32_t mpu_lar5_xor;
		uint32_t mpu_bar6_xor;
		uint32_t mpu_lar6_xor;
		uint32_t mpu_bar7_xor;
		uint32_t mpu_lar7_xor;
		uint32_t RSVDxor_6[175];
		uint32_t ch0_dbg_ctdreq_xor;
		uint32_t ch0_dbg_tcr_xor;
		uint32_t RSVDxor_7[14];
		uint32_t ch1_dbg_ctdreq_xor;
		uint32_t ch1_dbg_tcr_xor;
		uint32_t RSVDxor_8[14];
		uint32_t ch2_dbg_ctdreq_xor;
		uint32_t ch2_dbg_tcr_xor;
		uint32_t RSVDxor_9[14];
		uint32_t ch3_dbg_ctdreq_xor;
		uint32_t ch3_dbg_tcr_xor;
		uint32_t RSVDxor_10[14];
		uint32_t ch4_dbg_ctdreq_xor;
		uint32_t ch4_dbg_tcr_xor;
		uint32_t RSVDxor_11[14];
		uint32_t ch5_dbg_ctdreq_xor;
		uint32_t ch5_dbg_tcr_xor;
		uint32_t RSVDxor_12[14];
		uint32_t ch6_dbg_ctdreq_xor;
		uint32_t ch6_dbg_tcr_xor;
		uint32_t RSVDxor_13[14];
		uint32_t ch7_dbg_ctdreq_xor;
		uint32_t ch7_dbg_tcr_xor;
		uint32_t RSVDxor_14[14];
		uint32_t ch8_dbg_ctdreq_xor;
		uint32_t ch8_dbg_tcr_xor;
		uint32_t RSVDxor_15[14];
		uint32_t ch9_dbg_ctdreq_xor;
		uint32_t ch9_dbg_tcr_xor;
		uint32_t RSVDxor_16[14];
		uint32_t ch10_dbg_ctdreq_xor;
		uint32_t ch10_dbg_tcr_xor;
		uint32_t RSVDxor_17[14];
		uint32_t ch11_dbg_ctdreq_xor;
		uint32_t ch11_dbg_tcr_xor;
		uint32_t RSVDxor_18[14];
		uint32_t ch12_dbg_ctdreq_xor;
		uint32_t ch12_dbg_tcr_xor;
		uint32_t RSVDxor_19[14];
		uint32_t ch13_dbg_ctdreq_xor;
		uint32_t ch13_dbg_tcr_xor;
		uint32_t RSVDxor_20[14];
		uint32_t ch14_dbg_ctdreq_xor;
		uint32_t ch14_dbg_tcr_xor;
		uint32_t RSVDxor_21[14];
		uint32_t ch15_dbg_ctdreq_xor;
		uint32_t ch15_dbg_tcr_xor;
		uint32_t RSVDxor_22[270];
		uint32_t ch0_read_addr_set;
		uint32_t ch0_write_addr_set;
		uint32_t ch0_trans_count_set;
		uint32_t ch0_ctrl_trig_set;
		uint32_t ch0_al1_ctrl_set;
		uint32_t ch0_al1_read_addr_set;
		uint32_t ch0_al1_write_addr_set;
		uint32_t ch0_al1_trans_count_trig_set;
		uint32_t ch0_al2_ctrl_set;
		uint32_t ch0_al2_trans_count_set;
		uint32_t ch0_al2_read_addr_set;
		uint32_t ch0_al2_write_addr_trig_set;
		uint32_t ch0_al3_ctrl_set;
		uint32_t ch0_al3_write_addr_set;
		uint32_t ch0_al3_trans_count_set;
		uint32_t ch0_al3_read_addr_trig_set;
		uint32_t ch1_read_addr_set;
		uint32_t ch1_write_addr_set;
		uint32_t ch1_trans_count_set;
		uint32_t ch1_ctrl_trig_set;
		uint32_t ch1_al1_ctrl_set;
		uint32_t ch1_al1_read_addr_set;
		uint32_t ch1_al1_write_addr_set;
		uint32_t ch1_al1_trans_count_trig_set;
		uint32_t ch1_al2_ctrl_set;
		uint32_t ch1_al2_trans_count_set;
		uint32_t ch1_al2_read_addr_set;
		uint32_t ch1_al2_write_addr_trig_set;
		uint32_t ch1_al3_ctrl_set;
		uint32_t ch1_al3_write_addr_set;
		uint32_t ch1_al3_trans_count_set;
		uint32_t ch1_al3_read_addr_trig_set;
		uint32_t ch2_read_addr_set;
		uint32_t ch2_write_addr_set;
		uint32_t ch2_trans_count_set;
		uint32_t ch2_ctrl_trig_set;
		uint32_t ch2_al1_ctrl_set;
		uint32_t ch2_al1_read_addr_set;
		uint32_t ch2_al1_write_addr_set;
		uint32_t ch2_al1_trans_count_trig_set;
		uint32_t ch2_al2_ctrl_set;
		uint32_t ch2_al2_trans_count_set;
		uint32_t ch2_al2_read_addr_set;
		uint32_t ch2_al2_write_addr_trig_set;
		uint32_t ch2_al3_ctrl_set;
		uint32_t ch2_al3_write_addr_set;
		uint32_t ch2_al3_trans_count_set;
		uint32_t ch2_al3_read_addr_trig_set;
		uint32_t ch3_read_addr_set;
		uint32_t ch3_write_addr_set;
		uint32_t ch3_trans_count_set;
		uint32_t ch3_ctrl_trig_set;
		uint32_t ch3_al1_ctrl_set;
		uint32_t ch3_al1_read_addr_set;
		uint32_t ch3_al1_write_addr_set;
		uint32_t ch3_al1_trans_count_trig_set;
		uint32_t ch3_al2_ctrl_set;
		uint32_t ch3_al2_trans_count_set;
		uint32_t ch3_al2_read_addr_set;
		uint32_t ch3_al2_write_addr_trig_set;
		uint32_t ch3_al3_ctrl_set;
		uint32_t ch3_al3_write_addr_set;
		uint32_t ch3_al3_trans_count_set;
		uint32_t ch3_al3_read_addr_trig_set;
		uint32_t ch4_read_addr_set;
		uint32_t ch4_write_addr_set;
		uint32_t ch4_trans_count_set;
		uint32_t ch4_ctrl_trig_set;
		uint32_t ch4_al1_ctrl_set;
		uint32_t ch4_al1_read_addr_set;
		uint32_t ch4_al1_write_addr_set;
		uint32_t ch4_al1_trans_count_trig_set;
		uint32_t ch4_al2_ctrl_set;
		uint32_t ch4_al2_trans_count_set;
		uint32_t ch4_al2_read_addr_set;
		uint32_t ch4_al2_write_addr_trig_set;
		uint32_t ch4_al3_ctrl_set;
		uint32_t ch4_al3_write_addr_set;
		uint32_t ch4_al3_trans_count_set;
		uint32_t ch4_al3_read_addr_trig_set;
		uint32_t ch5_read_addr_set;
		uint32_t ch5_write_addr_set;
		uint32_t ch5_trans_count_set;
		uint32_t ch5_ctrl_trig_set;
		uint32_t ch5_al1_ctrl_set;
		uint32_t ch5_al1_read_addr_set;
		uint32_t ch5_al1_write_addr_set;
		uint32_t ch5_al1_trans_count_trig_set;
		uint32_t ch5_al2_ctrl_set;
		uint32_t ch5_al2_trans_count_set;
		uint32_t ch5_al2_read_addr_set;
		uint32_t ch5_al2_write_addr_trig_set;
		uint32_t ch5_al3_ctrl_set;
		uint32_t ch5_al3_write_addr_set;
		uint32_t ch5_al3_trans_count_set;
		uint32_t ch5_al3_read_addr_trig_set;
		uint32_t ch6_read_addr_set;
		uint32_t ch6_write_addr_set;
		uint32_t ch6_trans_count_set;
		uint32_t ch6_ctrl_trig_set;
		uint32_t ch6_al1_ctrl_set;
		uint32_t ch6_al1_read_addr_set;
		uint32_t ch6_al1_write_addr_set;
		uint32_t ch6_al1_trans_count_trig_set;
		uint32_t ch6_al2_ctrl_set;
		uint32_t ch6_al2_trans_count_set;
		uint32_t ch6_al2_read_addr_set;
		uint32_t ch6_al2_write_addr_trig_set;
		uint32_t ch6_al3_ctrl_set;
		uint32_t ch6_al3_write_addr_set;
		uint32_t ch6_al3_trans_count_set;
		uint32_t ch6_al3_read_addr_trig_set;
		uint32_t ch7_read_addr_set;
		uint32_t ch7_write_addr_set;
		uint32_t ch7_trans_count_set;
		uint32_t ch7_ctrl_trig_set;
		uint32_t ch7_al1_ctrl_set;
		uint32_t ch7_al1_read_addr_set;
		uint32_t ch7_al1_write_addr_set;
		uint32_t ch7_al1_trans_count_trig_set;
		uint32_t ch7_al2_ctrl_set;
		uint32_t ch7_al2_trans_count_set;
		uint32_t ch7_al2_read_addr_set;
		uint32_t ch7_al2_write_addr_trig_set;
		uint32_t ch7_al3_ctrl_set;
		uint32_t ch7_al3_write_addr_set;
		uint32_t ch7_al3_trans_count_set;
		uint32_t ch7_al3_read_addr_trig_set;
		uint32_t ch8_read_addr_set;
		uint32_t ch8_write_addr_set;
		uint32_t ch8_trans_count_set;
		uint32_t ch8_ctrl_trig_set;
		uint32_t ch8_al1_ctrl_set;
		uint32_t ch8_al1_read_addr_set;
		uint32_t ch8_al1_write_addr_set;
		uint32_t ch8_al1_trans_count_trig_set;
		uint32_t ch8_al2_ctrl_set;
		uint32_t ch8_al2_trans_count_set;
		uint32_t ch8_al2_read_addr_set;
		uint32_t ch8_al2_write_addr_trig_set;
		uint32_t ch8_al3_ctrl_set;
		uint32_t ch8_al3_write_addr_set;
		uint32_t ch8_al3_trans_count_set;
		uint32_t ch8_al3_read_addr_trig_set;
		uint32_t ch9_read_addr_set;
		uint32_t ch9_write_addr_set;
		uint32_t ch9_trans_count_set;
		uint32_t ch9_ctrl_trig_set;
		uint32_t ch9_al1_ctrl_set;
		uint32_t ch9_al1_read_addr_set;
		uint32_t ch9_al1_write_addr_set;
		uint32_t ch9_al1_trans_count_trig_set;
		uint32_t ch9_al2_ctrl_set;
		uint32_t ch9_al2_trans_count_set;
		uint32_t ch9_al2_read_addr_set;
		uint32_t ch9_al2_write_addr_trig_set;
		uint32_t ch9_al3_ctrl_set;
		uint32_t ch9_al3_write_addr_set;
		uint32_t ch9_al3_trans_count_set;
		uint32_t ch9_al3_read_addr_trig_set;
		uint32_t ch10_read_addr_set;
		uint32_t ch10_write_addr_set;
		uint32_t ch10_trans_count_set;
		uint32_t ch10_ctrl_trig_set;
		uint32_t ch10_al1_ctrl_set;
		uint32_t ch10_al1_read_addr_set;
		uint32_t ch10_al1_write_addr_set;
		uint32_t ch10_al1_trans_count_trig_set;
		uint32_t ch10_al2_ctrl_set;
		uint32_t ch10_al2_trans_count_set;
		uint32_t ch10_al2_read_addr_set;
		uint32_t ch10_al2_write_addr_trig_set;
		uint32_t ch10_al3_ctrl_set;
		uint32_t ch10_al3_write_addr_set;
		uint32_t ch10_al3_trans_count_set;
		uint32_t ch10_al3_read_addr_trig_set;
		uint32_t ch11_read_addr_set;
		uint32_t ch11_write_addr_set;
		uint32_t ch11_trans_count_set;
		uint32_t ch11_ctrl_trig_set;
		uint32_t ch11_al1_ctrl_set;
		uint32_t ch11_al1_read_addr_set;
		uint32_t ch11_al1_write_addr_set;
		uint32_t ch11_al1_trans_count_trig_set;
		uint32_t ch11_al2_ctrl_set;
		uint32_t ch11_al2_trans_count_set;
		uint32_t ch11_al2_read_addr_set;
		uint32_t ch11_al2_write_addr_trig_set;
		uint32_t ch11_al3_ctrl_set;
		uint32_t ch11_al3_write_addr_set;
		uint32_t ch11_al3_trans_count_set;
		uint32_t ch11_al3_read_addr_trig_set;
		uint32_t ch12_read_addr_set;
		uint32_t ch12_write_addr_set;
		uint32_t ch12_trans_count_set;
		uint32_t ch12_ctrl_trig_set;
		uint32_t ch12_al1_ctrl_set;
		uint32_t ch12_al1_read_addr_set;
		uint32_t ch12_al1_write_addr_set;
		uint32_t ch12_al1_trans_count_trig_set;
		uint32_t ch12_al2_ctrl_set;
		uint32_t ch12_al2_trans_count_set;
		uint32_t ch12_al2_read_addr_set;
		uint32_t ch12_al2_write_addr_trig_set;
		uint32_t ch12_al3_ctrl_set;
		uint32_t ch12_al3_write_addr_set;
		uint32_t ch12_al3_trans_count_set;
		uint32_t ch12_al3_read_addr_trig_set;
		uint32_t ch13_read_addr_set;
		uint32_t ch13_write_addr_set;
		uint32_t ch13_trans_count_set;
		uint32_t ch13_ctrl_trig_set;
		uint32_t ch13_al1_ctrl_set;
		uint32_t ch13_al1_read_addr_set;
		uint32_t ch13_al1_write_addr_set;
		uint32_t ch13_al1_trans_count_trig_set;
		uint32_t ch13_al2_ctrl_set;
		uint32_t ch13_al2_trans_count_set;
		uint32_t ch13_al2_read_addr_set;
		uint32_t ch13_al2_write_addr_trig_set;
		uint32_t ch13_al3_ctrl_set;
		uint32_t ch13_al3_write_addr_set;
		uint32_t ch13_al3_trans_count_set;
		uint32_t ch13_al3_read_addr_trig_set;
		uint32_t ch14_read_addr_set;
		uint32_t ch14_write_addr_set;
		uint32_t ch14_trans_count_set;
		uint32_t ch14_ctrl_trig_set;
		uint32_t ch14_al1_ctrl_set;
		uint32_t ch14_al1_read_addr_set;
		uint32_t ch14_al1_write_addr_set;
		uint32_t ch14_al1_trans_count_trig_set;
		uint32_t ch14_al2_ctrl_set;
		uint32_t ch14_al2_trans_count_set;
		uint32_t ch14_al2_read_addr_set;
		uint32_t ch14_al2_write_addr_trig_set;
		uint32_t ch14_al3_ctrl_set;
		uint32_t ch14_al3_write_addr_set;
		uint32_t ch14_al3_trans_count_set;
		uint32_t ch14_al3_read_addr_trig_set;
		uint32_t ch15_read_addr_set;
		uint32_t ch15_write_addr_set;
		uint32_t ch15_trans_count_set;
		uint32_t ch15_ctrl_trig_set;
		uint32_t ch15_al1_ctrl_set;
		uint32_t ch15_al1_read_addr_set;
		uint32_t ch15_al1_write_addr_set;
		uint32_t ch15_al1_trans_count_trig_set;
		uint32_t ch15_al2_ctrl_set;
		uint32_t ch15_al2_trans_count_set;
		uint32_t ch15_al2_read_addr_set;
		uint32_t ch15_al2_write_addr_trig_set;
		uint32_t ch15_al3_ctrl_set;
		uint32_t ch15_al3_write_addr_set;
		uint32_t ch15_al3_trans_count_set;
		uint32_t ch15_al3_read_addr_trig_set;
		uint32_t intr_set;
		uint32_t inte0_set;
		uint32_t intf0_set;
		uint32_t ints0_set;
		uint32_t RSVDset_0;
		uint32_t inte1_set;
		uint32_t intf1_set;
		uint32_t ints1_set;
		uint32_t RSVDset_1;
		uint32_t inte2_set;
		uint32_t intf2_set;
		uint32_t ints2_set;
		uint32_t RSVDset_2;
		uint32_t inte3_set;
		uint32_t intf3_set;
		uint32_t ints3_set;
		uint32_t timer0_set;
		uint32_t timer1_set;
		uint32_t timer2_set;
		uint32_t timer3_set;
		uint32_t multi_chan_trigger_set;
		uint32_t sniff_ctrl_set;
		uint32_t sniff_data_set;
		uint32_t RSVDset_3;
		uint32_t fifo_levels_set;
		uint32_t chan_abort_set;
		uint32_t n_channels_set;
		uint32_t RSVDset_4[5];
		uint32_t seccfg_ch0_set;
		uint32_t seccfg_ch1_set;
		uint32_t seccfg_ch2_set;
		uint32_t seccfg_ch3_set;
		uint32_t seccfg_ch4_set;
		uint32_t seccfg_ch5_set;
		uint32_t seccfg_ch6_set;
		uint32_t seccfg_ch7_set;
		uint32_t seccfg_ch8_set;
		uint32_t seccfg_ch9_set;
		uint32_t seccfg_ch10_set;
		uint32_t seccfg_ch11_set;
		uint32_t seccfg_ch12_set;
		uint32_t seccfg_ch13_set;
		uint32_t seccfg_ch14_set;
		uint32_t seccfg_ch15_set;
		uint32_t seccfg_irq0_set;
		uint32_t seccfg_irq1_set;
		uint32_t seccfg_irq2_set;
		uint32_t seccfg_irq3_set;
		uint32_t seccfg_misc_set;
		uint32_t RSVDset_5[11];
		uint32_t mpu_ctrl_set;
		uint32_t mpu_bar0_set;
		uint32_t mpu_lar0_set;
		uint32_t mpu_bar1_set;
		uint32_t mpu_lar1_set;
		uint32_t mpu_bar2_set;
		uint32_t mpu_lar2_set;
		uint32_t mpu_bar3_set;
		uint32_t mpu_lar3_set;
		uint32_t mpu_bar4_set;
		uint32_t mpu_lar4_set;
		uint32_t mpu_bar5_set;
		uint32_t mpu_lar5_set;
		uint32_t mpu_bar6_set;
		uint32_t mpu_lar6_set;
		uint32_t mpu_bar7_set;
		uint32_t mpu_lar7_set;
		uint32_t RSVDset_6[175];
		uint32_t ch0_dbg_ctdreq_set;
		uint32_t ch0_dbg_tcr_set;
		uint32_t RSVDset_7[14];
		uint32_t ch1_dbg_ctdreq_set;
		uint32_t ch1_dbg_tcr_set;
		uint32_t RSVDset_8[14];
		uint32_t ch2_dbg_ctdreq_set;
		uint32_t ch2_dbg_tcr_set;
		uint32_t RSVDset_9[14];
		uint32_t ch3_dbg_ctdreq_set;
		uint32_t ch3_dbg_tcr_set;
		uint32_t RSVDset_10[14];
		uint32_t ch4_dbg_ctdreq_set;
		uint32_t ch4_dbg_tcr_set;
		uint32_t RSVDset_11[14];
		uint32_t ch5_dbg_ctdreq_set;
		uint32_t ch5_dbg_tcr_set;
		uint32_t RSVDset_12[14];
		uint32_t ch6_dbg_ctdreq_set;
		uint32_t ch6_dbg_tcr_set;
		uint32_t RSVDset_13[14];
		uint32_t ch7_dbg_ctdreq_set;
		uint32_t ch7_dbg_tcr_set;
		uint32_t RSVDset_14[14];
		uint32_t ch8_dbg_ctdreq_set;
		uint32_t ch8_dbg_tcr_set;
		uint32_t RSVDset_15[14];
		uint32_t ch9_dbg_ctdreq_set;
		uint32_t ch9_dbg_tcr_set;
		uint32_t RSVDset_16[14];
		uint32_t ch10_dbg_ctdreq_set;
		uint32_t ch10_dbg_tcr_set;
		uint32_t RSVDset_17[14];
		uint32_t ch11_dbg_ctdreq_set;
		uint32_t ch11_dbg_tcr_set;
		uint32_t RSVDset_18[14];
		uint32_t ch12_dbg_ctdreq_set;
		uint32_t ch12_dbg_tcr_set;
		uint32_t RSVDset_19[14];
		uint32_t ch13_dbg_ctdreq_set;
		uint32_t ch13_dbg_tcr_set;
		uint32_t RSVDset_20[14];
		uint32_t ch14_dbg_ctdreq_set;
		uint32_t ch14_dbg_tcr_set;
		uint32_t RSVDset_21[14];
		uint32_t ch15_dbg_ctdreq_set;
		uint32_t ch15_dbg_tcr_set;
		uint32_t RSVDset_22[270];
		uint32_t ch0_read_addr_clr;
		uint32_t ch0_write_addr_clr;
		uint32_t ch0_trans_count_clr;
		uint32_t ch0_ctrl_trig_clr;
		uint32_t ch0_al1_ctrl_clr;
		uint32_t ch0_al1_read_addr_clr;
		uint32_t ch0_al1_write_addr_clr;
		uint32_t ch0_al1_trans_count_trig_clr;
		uint32_t ch0_al2_ctrl_clr;
		uint32_t ch0_al2_trans_count_clr;
		uint32_t ch0_al2_read_addr_clr;
		uint32_t ch0_al2_write_addr_trig_clr;
		uint32_t ch0_al3_ctrl_clr;
		uint32_t ch0_al3_write_addr_clr;
		uint32_t ch0_al3_trans_count_clr;
		uint32_t ch0_al3_read_addr_trig_clr;
		uint32_t ch1_read_addr_clr;
		uint32_t ch1_write_addr_clr;
		uint32_t ch1_trans_count_clr;
		uint32_t ch1_ctrl_trig_clr;
		uint32_t ch1_al1_ctrl_clr;
		uint32_t ch1_al1_read_addr_clr;
		uint32_t ch1_al1_write_addr_clr;
		uint32_t ch1_al1_trans_count_trig_clr;
		uint32_t ch1_al2_ctrl_clr;
		uint32_t ch1_al2_trans_count_clr;
		uint32_t ch1_al2_read_addr_clr;
		uint32_t ch1_al2_write_addr_trig_clr;
		uint32_t ch1_al3_ctrl_clr;
		uint32_t ch1_al3_write_addr_clr;
		uint32_t ch1_al3_trans_count_clr;
		uint32_t ch1_al3_read_addr_trig_clr;
		uint32_t ch2_read_addr_clr;
		uint32_t ch2_write_addr_clr;
		uint32_t ch2_trans_count_clr;
		uint32_t ch2_ctrl_trig_clr;
		uint32_t ch2_al1_ctrl_clr;
		uint32_t ch2_al1_read_addr_clr;
		uint32_t ch2_al1_write_addr_clr;
		uint32_t ch2_al1_trans_count_trig_clr;
		uint32_t ch2_al2_ctrl_clr;
		uint32_t ch2_al2_trans_count_clr;
		uint32_t ch2_al2_read_addr_clr;
		uint32_t ch2_al2_write_addr_trig_clr;
		uint32_t ch2_al3_ctrl_clr;
		uint32_t ch2_al3_write_addr_clr;
		uint32_t ch2_al3_trans_count_clr;
		uint32_t ch2_al3_read_addr_trig_clr;
		uint32_t ch3_read_addr_clr;
		uint32_t ch3_write_addr_clr;
		uint32_t ch3_trans_count_clr;
		uint32_t ch3_ctrl_trig_clr;
		uint32_t ch3_al1_ctrl_clr;
		uint32_t ch3_al1_read_addr_clr;
		uint32_t ch3_al1_write_addr_clr;
		uint32_t ch3_al1_trans_count_trig_clr;
		uint32_t ch3_al2_ctrl_clr;
		uint32_t ch3_al2_trans_count_clr;
		uint32_t ch3_al2_read_addr_clr;
		uint32_t ch3_al2_write_addr_trig_clr;
		uint32_t ch3_al3_ctrl_clr;
		uint32_t ch3_al3_write_addr_clr;
		uint32_t ch3_al3_trans_count_clr;
		uint32_t ch3_al3_read_addr_trig_clr;
		uint32_t ch4_read_addr_clr;
		uint32_t ch4_write_addr_clr;
		uint32_t ch4_trans_count_clr;
		uint32_t ch4_ctrl_trig_clr;
		uint32_t ch4_al1_ctrl_clr;
		uint32_t ch4_al1_read_addr_clr;
		uint32_t ch4_al1_write_addr_clr;
		uint32_t ch4_al1_trans_count_trig_clr;
		uint32_t ch4_al2_ctrl_clr;
		uint32_t ch4_al2_trans_count_clr;
		uint32_t ch4_al2_read_addr_clr;
		uint32_t ch4_al2_write_addr_trig_clr;
		uint32_t ch4_al3_ctrl_clr;
		uint32_t ch4_al3_write_addr_clr;
		uint32_t ch4_al3_trans_count_clr;
		uint32_t ch4_al3_read_addr_trig_clr;
		uint32_t ch5_read_addr_clr;
		uint32_t ch5_write_addr_clr;
		uint32_t ch5_trans_count_clr;
		uint32_t ch5_ctrl_trig_clr;
		uint32_t ch5_al1_ctrl_clr;
		uint32_t ch5_al1_read_addr_clr;
		uint32_t ch5_al1_write_addr_clr;
		uint32_t ch5_al1_trans_count_trig_clr;
		uint32_t ch5_al2_ctrl_clr;
		uint32_t ch5_al2_trans_count_clr;
		uint32_t ch5_al2_read_addr_clr;
		uint32_t ch5_al2_write_addr_trig_clr;
		uint32_t ch5_al3_ctrl_clr;
		uint32_t ch5_al3_write_addr_clr;
		uint32_t ch5_al3_trans_count_clr;
		uint32_t ch5_al3_read_addr_trig_clr;
		uint32_t ch6_read_addr_clr;
		uint32_t ch6_write_addr_clr;
		uint32_t ch6_trans_count_clr;
		uint32_t ch6_ctrl_trig_clr;
		uint32_t ch6_al1_ctrl_clr;
		uint32_t ch6_al1_read_addr_clr;
		uint32_t ch6_al1_write_addr_clr;
		uint32_t ch6_al1_trans_count_trig_clr;
		uint32_t ch6_al2_ctrl_clr;
		uint32_t ch6_al2_trans_count_clr;
		uint32_t ch6_al2_read_addr_clr;
		uint32_t ch6_al2_write_addr_trig_clr;
		uint32_t ch6_al3_ctrl_clr;
		uint32_t ch6_al3_write_addr_clr;
		uint32_t ch6_al3_trans_count_clr;
		uint32_t ch6_al3_read_addr_trig_clr;
		uint32_t ch7_read_addr_clr;
		uint32_t ch7_write_addr_clr;
		uint32_t ch7_trans_count_clr;
		uint32_t ch7_ctrl_trig_clr;
		uint32_t ch7_al1_ctrl_clr;
		uint32_t ch7_al1_read_addr_clr;
		uint32_t ch7_al1_write_addr_clr;
		uint32_t ch7_al1_trans_count_trig_clr;
		uint32_t ch7_al2_ctrl_clr;
		uint32_t ch7_al2_trans_count_clr;
		uint32_t ch7_al2_read_addr_clr;
		uint32_t ch7_al2_write_addr_trig_clr;
		uint32_t ch7_al3_ctrl_clr;
		uint32_t ch7_al3_write_addr_clr;
		uint32_t ch7_al3_trans_count_clr;
		uint32_t ch7_al3_read_addr_trig_clr;
		uint32_t ch8_read_addr_clr;
		uint32_t ch8_write_addr_clr;
		uint32_t ch8_trans_count_clr;
		uint32_t ch8_ctrl_trig_clr;
		uint32_t ch8_al1_ctrl_clr;
		uint32_t ch8_al1_read_addr_clr;
		uint32_t ch8_al1_write_addr_clr;
		uint32_t ch8_al1_trans_count_trig_clr;
		uint32_t ch8_al2_ctrl_clr;
		uint32_t ch8_al2_trans_count_clr;
		uint32_t ch8_al2_read_addr_clr;
		uint32_t ch8_al2_write_addr_trig_clr;
		uint32_t ch8_al3_ctrl_clr;
		uint32_t ch8_al3_write_addr_clr;
		uint32_t ch8_al3_trans_count_clr;
		uint32_t ch8_al3_read_addr_trig_clr;
		uint32_t ch9_read_addr_clr;
		uint32_t ch9_write_addr_clr;
		uint32_t ch9_trans_count_clr;
		uint32_t ch9_ctrl_trig_clr;
		uint32_t ch9_al1_ctrl_clr;
		uint32_t ch9_al1_read_addr_clr;
		uint32_t ch9_al1_write_addr_clr;
		uint32_t ch9_al1_trans_count_trig_clr;
		uint32_t ch9_al2_ctrl_clr;
		uint32_t ch9_al2_trans_count_clr;
		uint32_t ch9_al2_read_addr_clr;
		uint32_t ch9_al2_write_addr_trig_clr;
		uint32_t ch9_al3_ctrl_clr;
		uint32_t ch9_al3_write_addr_clr;
		uint32_t ch9_al3_trans_count_clr;
		uint32_t ch9_al3_read_addr_trig_clr;
		uint32_t ch10_read_addr_clr;
		uint32_t ch10_write_addr_clr;
		uint32_t ch10_trans_count_clr;
		uint32_t ch10_ctrl_trig_clr;
		uint32_t ch10_al1_ctrl_clr;
		uint32_t ch10_al1_read_addr_clr;
		uint32_t ch10_al1_write_addr_clr;
		uint32_t ch10_al1_trans_count_trig_clr;
		uint32_t ch10_al2_ctrl_clr;
		uint32_t ch10_al2_trans_count_clr;
		uint32_t ch10_al2_read_addr_clr;
		uint32_t ch10_al2_write_addr_trig_clr;
		uint32_t ch10_al3_ctrl_clr;
		uint32_t ch10_al3_write_addr_clr;
		uint32_t ch10_al3_trans_count_clr;
		uint32_t ch10_al3_read_addr_trig_clr;
		uint32_t ch11_read_addr_clr;
		uint32_t ch11_write_addr_clr;
		uint32_t ch11_trans_count_clr;
		uint32_t ch11_ctrl_trig_clr;
		uint32_t ch11_al1_ctrl_clr;
		uint32_t ch11_al1_read_addr_clr;
		uint32_t ch11_al1_write_addr_clr;
		uint32_t ch11_al1_trans_count_trig_clr;
		uint32_t ch11_al2_ctrl_clr;
		uint32_t ch11_al2_trans_count_clr;
		uint32_t ch11_al2_read_addr_clr;
		uint32_t ch11_al2_write_addr_trig_clr;
		uint32_t ch11_al3_ctrl_clr;
		uint32_t ch11_al3_write_addr_clr;
		uint32_t ch11_al3_trans_count_clr;
		uint32_t ch11_al3_read_addr_trig_clr;
		uint32_t ch12_read_addr_clr;
		uint32_t ch12_write_addr_clr;
		uint32_t ch12_trans_count_clr;
		uint32_t ch12_ctrl_trig_clr;
		uint32_t ch12_al1_ctrl_clr;
		uint32_t ch12_al1_read_addr_clr;
		uint32_t ch12_al1_write_addr_clr;
		uint32_t ch12_al1_trans_count_trig_clr;
		uint32_t ch12_al2_ctrl_clr;
		uint32_t ch12_al2_trans_count_clr;
		uint32_t ch12_al2_read_addr_clr;
		uint32_t ch12_al2_write_addr_trig_clr;
		uint32_t ch12_al3_ctrl_clr;
		uint32_t ch12_al3_write_addr_clr;
		uint32_t ch12_al3_trans_count_clr;
		uint32_t ch12_al3_read_addr_trig_clr;
		uint32_t ch13_read_addr_clr;
		uint32_t ch13_write_addr_clr;
		uint32_t ch13_trans_count_clr;
		uint32_t ch13_ctrl_trig_clr;
		uint32_t ch13_al1_ctrl_clr;
		uint32_t ch13_al1_read_addr_clr;
		uint32_t ch13_al1_write_addr_clr;
		uint32_t ch13_al1_trans_count_trig_clr;
		uint32_t ch13_al2_ctrl_clr;
		uint32_t ch13_al2_trans_count_clr;
		uint32_t ch13_al2_read_addr_clr;
		uint32_t ch13_al2_write_addr_trig_clr;
		uint32_t ch13_al3_ctrl_clr;
		uint32_t ch13_al3_write_addr_clr;
		uint32_t ch13_al3_trans_count_clr;
		uint32_t ch13_al3_read_addr_trig_clr;
		uint32_t ch14_read_addr_clr;
		uint32_t ch14_write_addr_clr;
		uint32_t ch14_trans_count_clr;
		uint32_t ch14_ctrl_trig_clr;
		uint32_t ch14_al1_ctrl_clr;
		uint32_t ch14_al1_read_addr_clr;
		uint32_t ch14_al1_write_addr_clr;
		uint32_t ch14_al1_trans_count_trig_clr;
		uint32_t ch14_al2_ctrl_clr;
		uint32_t ch14_al2_trans_count_clr;
		uint32_t ch14_al2_read_addr_clr;
		uint32_t ch14_al2_write_addr_trig_clr;
		uint32_t ch14_al3_ctrl_clr;
		uint32_t ch14_al3_write_addr_clr;
		uint32_t ch14_al3_trans_count_clr;
		uint32_t ch14_al3_read_addr_trig_clr;
		uint32_t ch15_read_addr_clr;
		uint32_t ch15_write_addr_clr;
		uint32_t ch15_trans_count_clr;
		uint32_t ch15_ctrl_trig_clr;
		uint32_t ch15_al1_ctrl_clr;
		uint32_t ch15_al1_read_addr_clr;
		uint32_t ch15_al1_write_addr_clr;
		uint32_t ch15_al1_trans_count_trig_clr;
		uint32_t ch15_al2_ctrl_clr;
		uint32_t ch15_al2_trans_count_clr;
		uint32_t ch15_al2_read_addr_clr;
		uint32_t ch15_al2_write_addr_trig_clr;
		uint32_t ch15_al3_ctrl_clr;
		uint32_t ch15_al3_write_addr_clr;
		uint32_t ch15_al3_trans_count_clr;
		uint32_t ch15_al3_read_addr_trig_clr;
		uint32_t intr_clr;
		uint32_t inte0_clr;
		uint32_t intf0_clr;
		uint32_t ints0_clr;
		uint32_t RSVDclr_0;
		uint32_t inte1_clr;
		uint32_t intf1_clr;
		uint32_t ints1_clr;
		uint32_t RSVDclr_1;
		uint32_t inte2_clr;
		uint32_t intf2_clr;
		uint32_t ints2_clr;
		uint32_t RSVDclr_2;
		uint32_t inte3_clr;
		uint32_t intf3_clr;
		uint32_t ints3_clr;
		uint32_t timer0_clr;
		uint32_t timer1_clr;
		uint32_t timer2_clr;
		uint32_t timer3_clr;
		uint32_t multi_chan_trigger_clr;
		uint32_t sniff_ctrl_clr;
		uint32_t sniff_data_clr;
		uint32_t RSVDclr_3;
		uint32_t fifo_levels_clr;
		uint32_t chan_abort_clr;
		uint32_t n_channels_clr;
		uint32_t RSVDclr_4[5];
		uint32_t seccfg_ch0_clr;
		uint32_t seccfg_ch1_clr;
		uint32_t seccfg_ch2_clr;
		uint32_t seccfg_ch3_clr;
		uint32_t seccfg_ch4_clr;
		uint32_t seccfg_ch5_clr;
		uint32_t seccfg_ch6_clr;
		uint32_t seccfg_ch7_clr;
		uint32_t seccfg_ch8_clr;
		uint32_t seccfg_ch9_clr;
		uint32_t seccfg_ch10_clr;
		uint32_t seccfg_ch11_clr;
		uint32_t seccfg_ch12_clr;
		uint32_t seccfg_ch13_clr;
		uint32_t seccfg_ch14_clr;
		uint32_t seccfg_ch15_clr;
		uint32_t seccfg_irq0_clr;
		uint32_t seccfg_irq1_clr;
		uint32_t seccfg_irq2_clr;
		uint32_t seccfg_irq3_clr;
		uint32_t seccfg_misc_clr;
		uint32_t RSVDclr_5[11];
		uint32_t mpu_ctrl_clr;
		uint32_t mpu_bar0_clr;
		uint32_t mpu_lar0_clr;
		uint32_t mpu_bar1_clr;
		uint32_t mpu_lar1_clr;
		uint32_t mpu_bar2_clr;
		uint32_t mpu_lar2_clr;
		uint32_t mpu_bar3_clr;
		uint32_t mpu_lar3_clr;
		uint32_t mpu_bar4_clr;
		uint32_t mpu_lar4_clr;
		uint32_t mpu_bar5_clr;
		uint32_t mpu_lar5_clr;
		uint32_t mpu_bar6_clr;
		uint32_t mpu_lar6_clr;
		uint32_t mpu_bar7_clr;
		uint32_t mpu_lar7_clr;
		uint32_t RSVDclr_6[175];
		uint32_t ch0_dbg_ctdreq_clr;
		uint32_t ch0_dbg_tcr_clr;
		uint32_t RSVDclr_7[14];
		uint32_t ch1_dbg_ctdreq_clr;
		uint32_t ch1_dbg_tcr_clr;
		uint32_t RSVDclr_8[14];
		uint32_t ch2_dbg_ctdreq_clr;
		uint32_t ch2_dbg_tcr_clr;
		uint32_t RSVDclr_9[14];
		uint32_t ch3_dbg_ctdreq_clr;
		uint32_t ch3_dbg_tcr_clr;
		uint32_t RSVDclr_10[14];
		uint32_t ch4_dbg_ctdreq_clr;
		uint32_t ch4_dbg_tcr_clr;
		uint32_t RSVDclr_11[14];
		uint32_t ch5_dbg_ctdreq_clr;
		uint32_t ch5_dbg_tcr_clr;
		uint32_t RSVDclr_12[14];
		uint32_t ch6_dbg_ctdreq_clr;
		uint32_t ch6_dbg_tcr_clr;
		uint32_t RSVDclr_13[14];
		uint32_t ch7_dbg_ctdreq_clr;
		uint32_t ch7_dbg_tcr_clr;
		uint32_t RSVDclr_14[14];
		uint32_t ch8_dbg_ctdreq_clr;
		uint32_t ch8_dbg_tcr_clr;
		uint32_t RSVDclr_15[14];
		uint32_t ch9_dbg_ctdreq_clr;
		uint32_t ch9_dbg_tcr_clr;
		uint32_t RSVDclr_16[14];
		uint32_t ch10_dbg_ctdreq_clr;
		uint32_t ch10_dbg_tcr_clr;
		uint32_t RSVDclr_17[14];
		uint32_t ch11_dbg_ctdreq_clr;
		uint32_t ch11_dbg_tcr_clr;
		uint32_t RSVDclr_18[14];
		uint32_t ch12_dbg_ctdreq_clr;
		uint32_t ch12_dbg_tcr_clr;
		uint32_t RSVDclr_19[14];
		uint32_t ch13_dbg_ctdreq_clr;
		uint32_t ch13_dbg_tcr_clr;
		uint32_t RSVDclr_20[14];
		uint32_t ch14_dbg_ctdreq_clr;
		uint32_t ch14_dbg_tcr_clr;
		uint32_t RSVDclr_21[14];
		uint32_t ch15_dbg_ctdreq_clr;
		uint32_t ch15_dbg_tcr_clr;
		uint32_t RSVDclr_22[270];
} DMA_REG_BLOCKS;


/*IO Registers as struct*/

#define dma (*(DMA_REG_BLOCKS volatile *)0x50000000)


/*IO Registers AS MACROS*/

#define DMA_CH0_READ_ADDR (*(volatile uint32_t *)0x50000000)
#define DMA_CH0_WRITE_ADDR (*(volatile uint32_t *)0x50000004)
#define DMA_CH0_TRANS_COUNT (*(volatile uint32_t *)0x50000008)
#define DMA_CH0_CTRL_TRIG (*(volatile uint32_t *)0x5000000c)
#define DMA_CH0_AL1_CTRL (*(volatile uint32_t *)0x50000010)
#define DMA_CH0_AL1_READ_ADDR (*(volatile uint32_t *)0x50000014)
#define DMA_CH0_AL1_WRITE_ADDR (*(volatile uint32_t *)0x50000018)
#define DMA_CH0_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x5000001c)
#define DMA_CH0_AL2_CTRL (*(volatile uint32_t *)0x50000020)
#define DMA_CH0_AL2_TRANS_COUNT (*(volatile uint32_t *)0x50000024)
#define DMA_CH0_AL2_READ_ADDR (*(volatile uint32_t *)0x50000028)
#define DMA_CH0_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x5000002c)
#define DMA_CH0_AL3_CTRL (*(volatile uint32_t *)0x50000030)
#define DMA_CH0_AL3_WRITE_ADDR (*(volatile uint32_t *)0x50000034)
#define DMA_CH0_AL3_TRANS_COUNT (*(volatile uint32_t *)0x50000038)
#define DMA_CH0_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x5000003c)
#define DMA_CH1_READ_ADDR (*(volatile uint32_t *)0x50000040)
#define DMA_CH1_WRITE_ADDR (*(volatile uint32_t *)0x50000044)
#define DMA_CH1_TRANS_COUNT (*(volatile uint32_t *)0x50000048)
#define DMA_CH1_CTRL_TRIG (*(volatile uint32_t *)0x5000004c)
#define DMA_CH1_AL1_CTRL (*(volatile uint32_t *)0x50000050)
#define DMA_CH1_AL1_READ_ADDR (*(volatile uint32_t *)0x50000054)
#define DMA_CH1_AL1_WRITE_ADDR (*(volatile uint32_t *)0x50000058)
#define DMA_CH1_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x5000005c)
#define DMA_CH1_AL2_CTRL (*(volatile uint32_t *)0x50000060)
#define DMA_CH1_AL2_TRANS_COUNT (*(volatile uint32_t *)0x50000064)
#define DMA_CH1_AL2_READ_ADDR (*(volatile uint32_t *)0x50000068)
#define DMA_CH1_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x5000006c)
#define DMA_CH1_AL3_CTRL (*(volatile uint32_t *)0x50000070)
#define DMA_CH1_AL3_WRITE_ADDR (*(volatile uint32_t *)0x50000074)
#define DMA_CH1_AL3_TRANS_COUNT (*(volatile uint32_t *)0x50000078)
#define DMA_CH1_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x5000007c)
#define DMA_CH2_READ_ADDR (*(volatile uint32_t *)0x50000080)
#define DMA_CH2_WRITE_ADDR (*(volatile uint32_t *)0x50000084)
#define DMA_CH2_TRANS_COUNT (*(volatile uint32_t *)0x50000088)
#define DMA_CH2_CTRL_TRIG (*(volatile uint32_t *)0x5000008c)
#define DMA_CH2_AL1_CTRL (*(volatile uint32_t *)0x50000090)
#define DMA_CH2_AL1_READ_ADDR (*(volatile uint32_t *)0x50000094)
#define DMA_CH2_AL1_WRITE_ADDR (*(volatile uint32_t *)0x50000098)
#define DMA_CH2_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x5000009c)
#define DMA_CH2_AL2_CTRL (*(volatile uint32_t *)0x500000a0)
#define DMA_CH2_AL2_TRANS_COUNT (*(volatile uint32_t *)0x500000a4)
#define DMA_CH2_AL2_READ_ADDR (*(volatile uint32_t *)0x500000a8)
#define DMA_CH2_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x500000ac)
#define DMA_CH2_AL3_CTRL (*(volatile uint32_t *)0x500000b0)
#define DMA_CH2_AL3_WRITE_ADDR (*(volatile uint32_t *)0x500000b4)
#define DMA_CH2_AL3_TRANS_COUNT (*(volatile uint32_t *)0x500000b8)
#define DMA_CH2_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x500000bc)
#define DMA_CH3_READ_ADDR (*(volatile uint32_t *)0x500000c0)
#define DMA_CH3_WRITE_ADDR (*(volatile uint32_t *)0x500000c4)
#define DMA_CH3_TRANS_COUNT (*(volatile uint32_t *)0x500000c8)
#define DMA_CH3_CTRL_TRIG (*(volatile uint32_t *)0x500000cc)
#define DMA_CH3_AL1_CTRL (*(volatile uint32_t *)0x500000d0)
#define DMA_CH3_AL1_READ_ADDR (*(volatile uint32_t *)0x500000d4)
#define DMA_CH3_AL1_WRITE_ADDR (*(volatile uint32_t *)0x500000d8)
#define DMA_CH3_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x500000dc)
#define DMA_CH3_AL2_CTRL (*(volatile uint32_t *)0x500000e0)
#define DMA_CH3_AL2_TRANS_COUNT (*(volatile uint32_t *)0x500000e4)
#define DMA_CH3_AL2_READ_ADDR (*(volatile uint32_t *)0x500000e8)
#define DMA_CH3_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x500000ec)
#define DMA_CH3_AL3_CTRL (*(volatile uint32_t *)0x500000f0)
#define DMA_CH3_AL3_WRITE_ADDR (*(volatile uint32_t *)0x500000f4)
#define DMA_CH3_AL3_TRANS_COUNT (*(volatile uint32_t *)0x500000f8)
#define DMA_CH3_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x500000fc)
#define DMA_CH4_READ_ADDR (*(volatile uint32_t *)0x50000100)
#define DMA_CH4_WRITE_ADDR (*(volatile uint32_t *)0x50000104)
#define DMA_CH4_TRANS_COUNT (*(volatile uint32_t *)0x50000108)
#define DMA_CH4_CTRL_TRIG (*(volatile uint32_t *)0x5000010c)
#define DMA_CH4_AL1_CTRL (*(volatile uint32_t *)0x50000110)
#define DMA_CH4_AL1_READ_ADDR (*(volatile uint32_t *)0x50000114)
#define DMA_CH4_AL1_WRITE_ADDR (*(volatile uint32_t *)0x50000118)
#define DMA_CH4_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x5000011c)
#define DMA_CH4_AL2_CTRL (*(volatile uint32_t *)0x50000120)
#define DMA_CH4_AL2_TRANS_COUNT (*(volatile uint32_t *)0x50000124)
#define DMA_CH4_AL2_READ_ADDR (*(volatile uint32_t *)0x50000128)
#define DMA_CH4_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x5000012c)
#define DMA_CH4_AL3_CTRL (*(volatile uint32_t *)0x50000130)
#define DMA_CH4_AL3_WRITE_ADDR (*(volatile uint32_t *)0x50000134)
#define DMA_CH4_AL3_TRANS_COUNT (*(volatile uint32_t *)0x50000138)
#define DMA_CH4_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x5000013c)
#define DMA_CH5_READ_ADDR (*(volatile uint32_t *)0x50000140)
#define DMA_CH5_WRITE_ADDR (*(volatile uint32_t *)0x50000144)
#define DMA_CH5_TRANS_COUNT (*(volatile uint32_t *)0x50000148)
#define DMA_CH5_CTRL_TRIG (*(volatile uint32_t *)0x5000014c)
#define DMA_CH5_AL1_CTRL (*(volatile uint32_t *)0x50000150)
#define DMA_CH5_AL1_READ_ADDR (*(volatile uint32_t *)0x50000154)
#define DMA_CH5_AL1_WRITE_ADDR (*(volatile uint32_t *)0x50000158)
#define DMA_CH5_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x5000015c)
#define DMA_CH5_AL2_CTRL (*(volatile uint32_t *)0x50000160)
#define DMA_CH5_AL2_TRANS_COUNT (*(volatile uint32_t *)0x50000164)
#define DMA_CH5_AL2_READ_ADDR (*(volatile uint32_t *)0x50000168)
#define DMA_CH5_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x5000016c)
#define DMA_CH5_AL3_CTRL (*(volatile uint32_t *)0x50000170)
#define DMA_CH5_AL3_WRITE_ADDR (*(volatile uint32_t *)0x50000174)
#define DMA_CH5_AL3_TRANS_COUNT (*(volatile uint32_t *)0x50000178)
#define DMA_CH5_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x5000017c)
#define DMA_CH6_READ_ADDR (*(volatile uint32_t *)0x50000180)
#define DMA_CH6_WRITE_ADDR (*(volatile uint32_t *)0x50000184)
#define DMA_CH6_TRANS_COUNT (*(volatile uint32_t *)0x50000188)
#define DMA_CH6_CTRL_TRIG (*(volatile uint32_t *)0x5000018c)
#define DMA_CH6_AL1_CTRL (*(volatile uint32_t *)0x50000190)
#define DMA_CH6_AL1_READ_ADDR (*(volatile uint32_t *)0x50000194)
#define DMA_CH6_AL1_WRITE_ADDR (*(volatile uint32_t *)0x50000198)
#define DMA_CH6_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x5000019c)
#define DMA_CH6_AL2_CTRL (*(volatile uint32_t *)0x500001a0)
#define DMA_CH6_AL2_TRANS_COUNT (*(volatile uint32_t *)0x500001a4)
#define DMA_CH6_AL2_READ_ADDR (*(volatile uint32_t *)0x500001a8)
#define DMA_CH6_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x500001ac)
#define DMA_CH6_AL3_CTRL (*(volatile uint32_t *)0x500001b0)
#define DMA_CH6_AL3_WRITE_ADDR (*(volatile uint32_t *)0x500001b4)
#define DMA_CH6_AL3_TRANS_COUNT (*(volatile uint32_t *)0x500001b8)
#define DMA_CH6_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x500001bc)
#define DMA_CH7_READ_ADDR (*(volatile uint32_t *)0x500001c0)
#define DMA_CH7_WRITE_ADDR (*(volatile uint32_t *)0x500001c4)
#define DMA_CH7_TRANS_COUNT (*(volatile uint32_t *)0x500001c8)
#define DMA_CH7_CTRL_TRIG (*(volatile uint32_t *)0x500001cc)
#define DMA_CH7_AL1_CTRL (*(volatile uint32_t *)0x500001d0)
#define DMA_CH7_AL1_READ_ADDR (*(volatile uint32_t *)0x500001d4)
#define DMA_CH7_AL1_WRITE_ADDR (*(volatile uint32_t *)0x500001d8)
#define DMA_CH7_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x500001dc)
#define DMA_CH7_AL2_CTRL (*(volatile uint32_t *)0x500001e0)
#define DMA_CH7_AL2_TRANS_COUNT (*(volatile uint32_t *)0x500001e4)
#define DMA_CH7_AL2_READ_ADDR (*(volatile uint32_t *)0x500001e8)
#define DMA_CH7_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x500001ec)
#define DMA_CH7_AL3_CTRL (*(volatile uint32_t *)0x500001f0)
#define DMA_CH7_AL3_WRITE_ADDR (*(volatile uint32_t *)0x500001f4)
#define DMA_CH7_AL3_TRANS_COUNT (*(volatile uint32_t *)0x500001f8)
#define DMA_CH7_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x500001fc)
#define DMA_CH8_READ_ADDR (*(volatile uint32_t *)0x50000200)
#define DMA_CH8_WRITE_ADDR (*(volatile uint32_t *)0x50000204)
#define DMA_CH8_TRANS_COUNT (*(volatile uint32_t *)0x50000208)
#define DMA_CH8_CTRL_TRIG (*(volatile uint32_t *)0x5000020c)
#define DMA_CH8_AL1_CTRL (*(volatile uint32_t *)0x50000210)
#define DMA_CH8_AL1_READ_ADDR (*(volatile uint32_t *)0x50000214)
#define DMA_CH8_AL1_WRITE_ADDR (*(volatile uint32_t *)0x50000218)
#define DMA_CH8_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x5000021c)
#define DMA_CH8_AL2_CTRL (*(volatile uint32_t *)0x50000220)
#define DMA_CH8_AL2_TRANS_COUNT (*(volatile uint32_t *)0x50000224)
#define DMA_CH8_AL2_READ_ADDR (*(volatile uint32_t *)0x50000228)
#define DMA_CH8_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x5000022c)
#define DMA_CH8_AL3_CTRL (*(volatile uint32_t *)0x50000230)
#define DMA_CH8_AL3_WRITE_ADDR (*(volatile uint32_t *)0x50000234)
#define DMA_CH8_AL3_TRANS_COUNT (*(volatile uint32_t *)0x50000238)
#define DMA_CH8_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x5000023c)
#define DMA_CH9_READ_ADDR (*(volatile uint32_t *)0x50000240)
#define DMA_CH9_WRITE_ADDR (*(volatile uint32_t *)0x50000244)
#define DMA_CH9_TRANS_COUNT (*(volatile uint32_t *)0x50000248)
#define DMA_CH9_CTRL_TRIG (*(volatile uint32_t *)0x5000024c)
#define DMA_CH9_AL1_CTRL (*(volatile uint32_t *)0x50000250)
#define DMA_CH9_AL1_READ_ADDR (*(volatile uint32_t *)0x50000254)
#define DMA_CH9_AL1_WRITE_ADDR (*(volatile uint32_t *)0x50000258)
#define DMA_CH9_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x5000025c)
#define DMA_CH9_AL2_CTRL (*(volatile uint32_t *)0x50000260)
#define DMA_CH9_AL2_TRANS_COUNT (*(volatile uint32_t *)0x50000264)
#define DMA_CH9_AL2_READ_ADDR (*(volatile uint32_t *)0x50000268)
#define DMA_CH9_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x5000026c)
#define DMA_CH9_AL3_CTRL (*(volatile uint32_t *)0x50000270)
#define DMA_CH9_AL3_WRITE_ADDR (*(volatile uint32_t *)0x50000274)
#define DMA_CH9_AL3_TRANS_COUNT (*(volatile uint32_t *)0x50000278)
#define DMA_CH9_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x5000027c)
#define DMA_CH10_READ_ADDR (*(volatile uint32_t *)0x50000280)
#define DMA_CH10_WRITE_ADDR (*(volatile uint32_t *)0x50000284)
#define DMA_CH10_TRANS_COUNT (*(volatile uint32_t *)0x50000288)
#define DMA_CH10_CTRL_TRIG (*(volatile uint32_t *)0x5000028c)
#define DMA_CH10_AL1_CTRL (*(volatile uint32_t *)0x50000290)
#define DMA_CH10_AL1_READ_ADDR (*(volatile uint32_t *)0x50000294)
#define DMA_CH10_AL1_WRITE_ADDR (*(volatile uint32_t *)0x50000298)
#define DMA_CH10_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x5000029c)
#define DMA_CH10_AL2_CTRL (*(volatile uint32_t *)0x500002a0)
#define DMA_CH10_AL2_TRANS_COUNT (*(volatile uint32_t *)0x500002a4)
#define DMA_CH10_AL2_READ_ADDR (*(volatile uint32_t *)0x500002a8)
#define DMA_CH10_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x500002ac)
#define DMA_CH10_AL3_CTRL (*(volatile uint32_t *)0x500002b0)
#define DMA_CH10_AL3_WRITE_ADDR (*(volatile uint32_t *)0x500002b4)
#define DMA_CH10_AL3_TRANS_COUNT (*(volatile uint32_t *)0x500002b8)
#define DMA_CH10_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x500002bc)
#define DMA_CH11_READ_ADDR (*(volatile uint32_t *)0x500002c0)
#define DMA_CH11_WRITE_ADDR (*(volatile uint32_t *)0x500002c4)
#define DMA_CH11_TRANS_COUNT (*(volatile uint32_t *)0x500002c8)
#define DMA_CH11_CTRL_TRIG (*(volatile uint32_t *)0x500002cc)
#define DMA_CH11_AL1_CTRL (*(volatile uint32_t *)0x500002d0)
#define DMA_CH11_AL1_READ_ADDR (*(volatile uint32_t *)0x500002d4)
#define DMA_CH11_AL1_WRITE_ADDR (*(volatile uint32_t *)0x500002d8)
#define DMA_CH11_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x500002dc)
#define DMA_CH11_AL2_CTRL (*(volatile uint32_t *)0x500002e0)
#define DMA_CH11_AL2_TRANS_COUNT (*(volatile uint32_t *)0x500002e4)
#define DMA_CH11_AL2_READ_ADDR (*(volatile uint32_t *)0x500002e8)
#define DMA_CH11_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x500002ec)
#define DMA_CH11_AL3_CTRL (*(volatile uint32_t *)0x500002f0)
#define DMA_CH11_AL3_WRITE_ADDR (*(volatile uint32_t *)0x500002f4)
#define DMA_CH11_AL3_TRANS_COUNT (*(volatile uint32_t *)0x500002f8)
#define DMA_CH11_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x500002fc)
#define DMA_CH12_READ_ADDR (*(volatile uint32_t *)0x50000300)
#define DMA_CH12_WRITE_ADDR (*(volatile uint32_t *)0x50000304)
#define DMA_CH12_TRANS_COUNT (*(volatile uint32_t *)0x50000308)
#define DMA_CH12_CTRL_TRIG (*(volatile uint32_t *)0x5000030c)
#define DMA_CH12_AL1_CTRL (*(volatile uint32_t *)0x50000310)
#define DMA_CH12_AL1_READ_ADDR (*(volatile uint32_t *)0x50000314)
#define DMA_CH12_AL1_WRITE_ADDR (*(volatile uint32_t *)0x50000318)
#define DMA_CH12_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x5000031c)
#define DMA_CH12_AL2_CTRL (*(volatile uint32_t *)0x50000320)
#define DMA_CH12_AL2_TRANS_COUNT (*(volatile uint32_t *)0x50000324)
#define DMA_CH12_AL2_READ_ADDR (*(volatile uint32_t *)0x50000328)
#define DMA_CH12_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x5000032c)
#define DMA_CH12_AL3_CTRL (*(volatile uint32_t *)0x50000330)
#define DMA_CH12_AL3_WRITE_ADDR (*(volatile uint32_t *)0x50000334)
#define DMA_CH12_AL3_TRANS_COUNT (*(volatile uint32_t *)0x50000338)
#define DMA_CH12_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x5000033c)
#define DMA_CH13_READ_ADDR (*(volatile uint32_t *)0x50000340)
#define DMA_CH13_WRITE_ADDR (*(volatile uint32_t *)0x50000344)
#define DMA_CH13_TRANS_COUNT (*(volatile uint32_t *)0x50000348)
#define DMA_CH13_CTRL_TRIG (*(volatile uint32_t *)0x5000034c)
#define DMA_CH13_AL1_CTRL (*(volatile uint32_t *)0x50000350)
#define DMA_CH13_AL1_READ_ADDR (*(volatile uint32_t *)0x50000354)
#define DMA_CH13_AL1_WRITE_ADDR (*(volatile uint32_t *)0x50000358)
#define DMA_CH13_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x5000035c)
#define DMA_CH13_AL2_CTRL (*(volatile uint32_t *)0x50000360)
#define DMA_CH13_AL2_TRANS_COUNT (*(volatile uint32_t *)0x50000364)
#define DMA_CH13_AL2_READ_ADDR (*(volatile uint32_t *)0x50000368)
#define DMA_CH13_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x5000036c)
#define DMA_CH13_AL3_CTRL (*(volatile uint32_t *)0x50000370)
#define DMA_CH13_AL3_WRITE_ADDR (*(volatile uint32_t *)0x50000374)
#define DMA_CH13_AL3_TRANS_COUNT (*(volatile uint32_t *)0x50000378)
#define DMA_CH13_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x5000037c)
#define DMA_CH14_READ_ADDR (*(volatile uint32_t *)0x50000380)
#define DMA_CH14_WRITE_ADDR (*(volatile uint32_t *)0x50000384)
#define DMA_CH14_TRANS_COUNT (*(volatile uint32_t *)0x50000388)
#define DMA_CH14_CTRL_TRIG (*(volatile uint32_t *)0x5000038c)
#define DMA_CH14_AL1_CTRL (*(volatile uint32_t *)0x50000390)
#define DMA_CH14_AL1_READ_ADDR (*(volatile uint32_t *)0x50000394)
#define DMA_CH14_AL1_WRITE_ADDR (*(volatile uint32_t *)0x50000398)
#define DMA_CH14_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x5000039c)
#define DMA_CH14_AL2_CTRL (*(volatile uint32_t *)0x500003a0)
#define DMA_CH14_AL2_TRANS_COUNT (*(volatile uint32_t *)0x500003a4)
#define DMA_CH14_AL2_READ_ADDR (*(volatile uint32_t *)0x500003a8)
#define DMA_CH14_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x500003ac)
#define DMA_CH14_AL3_CTRL (*(volatile uint32_t *)0x500003b0)
#define DMA_CH14_AL3_WRITE_ADDR (*(volatile uint32_t *)0x500003b4)
#define DMA_CH14_AL3_TRANS_COUNT (*(volatile uint32_t *)0x500003b8)
#define DMA_CH14_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x500003bc)
#define DMA_CH15_READ_ADDR (*(volatile uint32_t *)0x500003c0)
#define DMA_CH15_WRITE_ADDR (*(volatile uint32_t *)0x500003c4)
#define DMA_CH15_TRANS_COUNT (*(volatile uint32_t *)0x500003c8)
#define DMA_CH15_CTRL_TRIG (*(volatile uint32_t *)0x500003cc)
#define DMA_CH15_AL1_CTRL (*(volatile uint32_t *)0x500003d0)
#define DMA_CH15_AL1_READ_ADDR (*(volatile uint32_t *)0x500003d4)
#define DMA_CH15_AL1_WRITE_ADDR (*(volatile uint32_t *)0x500003d8)
#define DMA_CH15_AL1_TRANS_COUNT_TRIG (*(volatile uint32_t *)0x500003dc)
#define DMA_CH15_AL2_CTRL (*(volatile uint32_t *)0x500003e0)
#define DMA_CH15_AL2_TRANS_COUNT (*(volatile uint32_t *)0x500003e4)
#define DMA_CH15_AL2_READ_ADDR (*(volatile uint32_t *)0x500003e8)
#define DMA_CH15_AL2_WRITE_ADDR_TRIG (*(volatile uint32_t *)0x500003ec)
#define DMA_CH15_AL3_CTRL (*(volatile uint32_t *)0x500003f0)
#define DMA_CH15_AL3_WRITE_ADDR (*(volatile uint32_t *)0x500003f4)
#define DMA_CH15_AL3_TRANS_COUNT (*(volatile uint32_t *)0x500003f8)
#define DMA_CH15_AL3_READ_ADDR_TRIG (*(volatile uint32_t *)0x500003fc)
#define DMA_INTR (*(volatile uint32_t *)0x50000400)
#define DMA_INTE0 (*(volatile uint32_t *)0x50000404)
#define DMA_INTF0 (*(volatile uint32_t *)0x50000408)
#define DMA_INTS0 (*(volatile uint32_t *)0x5000040c)
#define DMA_INTE1 (*(volatile uint32_t *)0x50000414)
#define DMA_INTF1 (*(volatile uint32_t *)0x50000418)
#define DMA_INTS1 (*(volatile uint32_t *)0x5000041c)
#define DMA_INTE2 (*(volatile uint32_t *)0x50000424)
#define DMA_INTF2 (*(volatile uint32_t *)0x50000428)
#define DMA_INTS2 (*(volatile uint32_t *)0x5000042c)
#define DMA_INTE3 (*(volatile uint32_t *)0x50000434)
#define DMA_INTF3 (*(volatile uint32_t *)0x50000438)
#define DMA_INTS3 (*(volatile uint32_t *)0x5000043c)
#define DMA_TIMER0 (*(volatile uint32_t *)0x50000440)
#define DMA_TIMER1 (*(volatile uint32_t *)0x50000444)
#define DMA_TIMER2 (*(volatile uint32_t *)0x50000448)
#define DMA_TIMER3 (*(volatile uint32_t *)0x5000044c)
#define DMA_MULTI_CHAN_TRIGGER (*(volatile uint32_t *)0x50000450)
#define DMA_SNIFF_CTRL (*(volatile uint32_t *)0x50000454)
#define DMA_SNIFF_DATA (*(volatile uint32_t *)0x50000458)
#define DMA_FIFO_LEVELS (*(volatile uint32_t *)0x50000460)
#define DMA_CHAN_ABORT (*(volatile uint32_t *)0x50000464)
#define DMA_N_CHANNELS (*(volatile uint32_t *)0x50000468)
#define DMA_SECCFG_CH0 (*(volatile uint32_t *)0x50000480)
#define DMA_SECCFG_CH1 (*(volatile uint32_t *)0x50000484)
#define DMA_SECCFG_CH2 (*(volatile uint32_t *)0x50000488)
#define DMA_SECCFG_CH3 (*(volatile uint32_t *)0x5000048c)
#define DMA_SECCFG_CH4 (*(volatile uint32_t *)0x50000490)
#define DMA_SECCFG_CH5 (*(volatile uint32_t *)0x50000494)
#define DMA_SECCFG_CH6 (*(volatile uint32_t *)0x50000498)
#define DMA_SECCFG_CH7 (*(volatile uint32_t *)0x5000049c)
#define DMA_SECCFG_CH8 (*(volatile uint32_t *)0x500004a0)
#define DMA_SECCFG_CH9 (*(volatile uint32_t *)0x500004a4)
#define DMA_SECCFG_CH10 (*(volatile uint32_t *)0x500004a8)
#define DMA_SECCFG_CH11 (*(volatile uint32_t *)0x500004ac)
#define DMA_SECCFG_CH12 (*(volatile uint32_t *)0x500004b0)
#define DMA_SECCFG_CH13 (*(volatile uint32_t *)0x500004b4)
#define DMA_SECCFG_CH14 (*(volatile uint32_t *)0x500004b8)
#define DMA_SECCFG_CH15 (*(volatile uint32_t *)0x500004bc)
#define DMA_SECCFG_IRQ0 (*(volatile uint32_t *)0x500004c0)
#define DMA_SECCFG_IRQ1 (*(volatile uint32_t *)0x500004c4)
#define DMA_SECCFG_IRQ2 (*(volatile uint32_t *)0x500004c8)
#define DMA_SECCFG_IRQ3 (*(volatile uint32_t *)0x500004cc)
#define DMA_SECCFG_MISC (*(volatile uint32_t *)0x500004d0)
#define DMA_MPU_CTRL (*(volatile uint32_t *)0x50000500)
#define DMA_MPU_BAR0 (*(volatile uint32_t *)0x50000504)
#define DMA_MPU_LAR0 (*(volatile uint32_t *)0x50000508)
#define DMA_MPU_BAR1 (*(volatile uint32_t *)0x5000050c)
#define DMA_MPU_LAR1 (*(volatile uint32_t *)0x50000510)
#define DMA_MPU_BAR2 (*(volatile uint32_t *)0x50000514)
#define DMA_MPU_LAR2 (*(volatile uint32_t *)0x50000518)
#define DMA_MPU_BAR3 (*(volatile uint32_t *)0x5000051c)
#define DMA_MPU_LAR3 (*(volatile uint32_t *)0x50000520)
#define DMA_MPU_BAR4 (*(volatile uint32_t *)0x50000524)
#define DMA_MPU_LAR4 (*(volatile uint32_t *)0x50000528)
#define DMA_MPU_BAR5 (*(volatile uint32_t *)0x5000052c)
#define DMA_MPU_LAR5 (*(volatile uint32_t *)0x50000530)
#define DMA_MPU_BAR6 (*(volatile uint32_t *)0x50000534)
#define DMA_MPU_LAR6 (*(volatile uint32_t *)0x50000538)
#define DMA_MPU_BAR7 (*(volatile uint32_t *)0x5000053c)
#define DMA_MPU_LAR7 (*(volatile uint32_t *)0x50000540)
#define DMA_CH0_DBG_CTDREQ (*(volatile uint32_t *)0x50000800)
#define DMA_CH0_DBG_TCR (*(volatile uint32_t *)0x50000804)
#define DMA_CH1_DBG_CTDREQ (*(volatile uint32_t *)0x50000840)
#define DMA_CH1_DBG_TCR (*(volatile uint32_t *)0x50000844)
#define DMA_CH2_DBG_CTDREQ (*(volatile uint32_t *)0x50000880)
#define DMA_CH2_DBG_TCR (*(volatile uint32_t *)0x50000884)
#define DMA_CH3_DBG_CTDREQ (*(volatile uint32_t *)0x500008c0)
#define DMA_CH3_DBG_TCR (*(volatile uint32_t *)0x500008c4)
#define DMA_CH4_DBG_CTDREQ (*(volatile uint32_t *)0x50000900)
#define DMA_CH4_DBG_TCR (*(volatile uint32_t *)0x50000904)
#define DMA_CH5_DBG_CTDREQ (*(volatile uint32_t *)0x50000940)
#define DMA_CH5_DBG_TCR (*(volatile uint32_t *)0x50000944)
#define DMA_CH6_DBG_CTDREQ (*(volatile uint32_t *)0x50000980)
#define DMA_CH6_DBG_TCR (*(volatile uint32_t *)0x50000984)
#define DMA_CH7_DBG_CTDREQ (*(volatile uint32_t *)0x500009c0)
#define DMA_CH7_DBG_TCR (*(volatile uint32_t *)0x500009c4)
#define DMA_CH8_DBG_CTDREQ (*(volatile uint32_t *)0x50000a00)
#define DMA_CH8_DBG_TCR (*(volatile uint32_t *)0x50000a04)
#define DMA_CH9_DBG_CTDREQ (*(volatile uint32_t *)0x50000a40)
#define DMA_CH9_DBG_TCR (*(volatile uint32_t *)0x50000a44)
#define DMA_CH10_DBG_CTDREQ (*(volatile uint32_t *)0x50000a80)
#define DMA_CH10_DBG_TCR (*(volatile uint32_t *)0x50000a84)
#define DMA_CH11_DBG_CTDREQ (*(volatile uint32_t *)0x50000ac0)
#define DMA_CH11_DBG_TCR (*(volatile uint32_t *)0x50000ac4)
#define DMA_CH12_DBG_CTDREQ (*(volatile uint32_t *)0x50000b00)
#define DMA_CH12_DBG_TCR (*(volatile uint32_t *)0x50000b04)
#define DMA_CH13_DBG_CTDREQ (*(volatile uint32_t *)0x50000b40)
#define DMA_CH13_DBG_TCR (*(volatile uint32_t *)0x50000b44)
#define DMA_CH14_DBG_CTDREQ (*(volatile uint32_t *)0x50000b80)
#define DMA_CH14_DBG_TCR (*(volatile uint32_t *)0x50000b84)
#define DMA_CH15_DBG_CTDREQ (*(volatile uint32_t *)0x50000bc0)
#define DMA_CH15_DBG_TCR (*(volatile uint32_t *)0x50000bc4)
#define DMA_CH0_READ_ADDR_XOR (*(volatile uint32_t *)0x50001000)
#define DMA_CH0_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001004)
#define DMA_CH0_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001008)
#define DMA_CH0_CTRL_TRIG_XOR (*(volatile uint32_t *)0x5000100c)
#define DMA_CH0_AL1_CTRL_XOR (*(volatile uint32_t *)0x50001010)
#define DMA_CH0_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x50001014)
#define DMA_CH0_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001018)
#define DMA_CH0_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x5000101c)
#define DMA_CH0_AL2_CTRL_XOR (*(volatile uint32_t *)0x50001020)
#define DMA_CH0_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001024)
#define DMA_CH0_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x50001028)
#define DMA_CH0_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000102c)
#define DMA_CH0_AL3_CTRL_XOR (*(volatile uint32_t *)0x50001030)
#define DMA_CH0_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001034)
#define DMA_CH0_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001038)
#define DMA_CH0_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000103c)
#define DMA_CH1_READ_ADDR_XOR (*(volatile uint32_t *)0x50001040)
#define DMA_CH1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001044)
#define DMA_CH1_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001048)
#define DMA_CH1_CTRL_TRIG_XOR (*(volatile uint32_t *)0x5000104c)
#define DMA_CH1_AL1_CTRL_XOR (*(volatile uint32_t *)0x50001050)
#define DMA_CH1_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x50001054)
#define DMA_CH1_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001058)
#define DMA_CH1_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x5000105c)
#define DMA_CH1_AL2_CTRL_XOR (*(volatile uint32_t *)0x50001060)
#define DMA_CH1_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001064)
#define DMA_CH1_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x50001068)
#define DMA_CH1_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000106c)
#define DMA_CH1_AL3_CTRL_XOR (*(volatile uint32_t *)0x50001070)
#define DMA_CH1_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001074)
#define DMA_CH1_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001078)
#define DMA_CH1_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000107c)
#define DMA_CH2_READ_ADDR_XOR (*(volatile uint32_t *)0x50001080)
#define DMA_CH2_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001084)
#define DMA_CH2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001088)
#define DMA_CH2_CTRL_TRIG_XOR (*(volatile uint32_t *)0x5000108c)
#define DMA_CH2_AL1_CTRL_XOR (*(volatile uint32_t *)0x50001090)
#define DMA_CH2_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x50001094)
#define DMA_CH2_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001098)
#define DMA_CH2_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x5000109c)
#define DMA_CH2_AL2_CTRL_XOR (*(volatile uint32_t *)0x500010a0)
#define DMA_CH2_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500010a4)
#define DMA_CH2_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x500010a8)
#define DMA_CH2_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500010ac)
#define DMA_CH2_AL3_CTRL_XOR (*(volatile uint32_t *)0x500010b0)
#define DMA_CH2_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500010b4)
#define DMA_CH2_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500010b8)
#define DMA_CH2_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500010bc)
#define DMA_CH3_READ_ADDR_XOR (*(volatile uint32_t *)0x500010c0)
#define DMA_CH3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500010c4)
#define DMA_CH3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500010c8)
#define DMA_CH3_CTRL_TRIG_XOR (*(volatile uint32_t *)0x500010cc)
#define DMA_CH3_AL1_CTRL_XOR (*(volatile uint32_t *)0x500010d0)
#define DMA_CH3_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x500010d4)
#define DMA_CH3_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500010d8)
#define DMA_CH3_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x500010dc)
#define DMA_CH3_AL2_CTRL_XOR (*(volatile uint32_t *)0x500010e0)
#define DMA_CH3_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500010e4)
#define DMA_CH3_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x500010e8)
#define DMA_CH3_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500010ec)
#define DMA_CH3_AL3_CTRL_XOR (*(volatile uint32_t *)0x500010f0)
#define DMA_CH3_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500010f4)
#define DMA_CH3_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500010f8)
#define DMA_CH3_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500010fc)
#define DMA_CH4_READ_ADDR_XOR (*(volatile uint32_t *)0x50001100)
#define DMA_CH4_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001104)
#define DMA_CH4_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001108)
#define DMA_CH4_CTRL_TRIG_XOR (*(volatile uint32_t *)0x5000110c)
#define DMA_CH4_AL1_CTRL_XOR (*(volatile uint32_t *)0x50001110)
#define DMA_CH4_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x50001114)
#define DMA_CH4_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001118)
#define DMA_CH4_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x5000111c)
#define DMA_CH4_AL2_CTRL_XOR (*(volatile uint32_t *)0x50001120)
#define DMA_CH4_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001124)
#define DMA_CH4_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x50001128)
#define DMA_CH4_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000112c)
#define DMA_CH4_AL3_CTRL_XOR (*(volatile uint32_t *)0x50001130)
#define DMA_CH4_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001134)
#define DMA_CH4_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001138)
#define DMA_CH4_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000113c)
#define DMA_CH5_READ_ADDR_XOR (*(volatile uint32_t *)0x50001140)
#define DMA_CH5_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001144)
#define DMA_CH5_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001148)
#define DMA_CH5_CTRL_TRIG_XOR (*(volatile uint32_t *)0x5000114c)
#define DMA_CH5_AL1_CTRL_XOR (*(volatile uint32_t *)0x50001150)
#define DMA_CH5_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x50001154)
#define DMA_CH5_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001158)
#define DMA_CH5_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x5000115c)
#define DMA_CH5_AL2_CTRL_XOR (*(volatile uint32_t *)0x50001160)
#define DMA_CH5_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001164)
#define DMA_CH5_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x50001168)
#define DMA_CH5_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000116c)
#define DMA_CH5_AL3_CTRL_XOR (*(volatile uint32_t *)0x50001170)
#define DMA_CH5_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001174)
#define DMA_CH5_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001178)
#define DMA_CH5_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000117c)
#define DMA_CH6_READ_ADDR_XOR (*(volatile uint32_t *)0x50001180)
#define DMA_CH6_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001184)
#define DMA_CH6_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001188)
#define DMA_CH6_CTRL_TRIG_XOR (*(volatile uint32_t *)0x5000118c)
#define DMA_CH6_AL1_CTRL_XOR (*(volatile uint32_t *)0x50001190)
#define DMA_CH6_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x50001194)
#define DMA_CH6_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001198)
#define DMA_CH6_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x5000119c)
#define DMA_CH6_AL2_CTRL_XOR (*(volatile uint32_t *)0x500011a0)
#define DMA_CH6_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500011a4)
#define DMA_CH6_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x500011a8)
#define DMA_CH6_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500011ac)
#define DMA_CH6_AL3_CTRL_XOR (*(volatile uint32_t *)0x500011b0)
#define DMA_CH6_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500011b4)
#define DMA_CH6_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500011b8)
#define DMA_CH6_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500011bc)
#define DMA_CH7_READ_ADDR_XOR (*(volatile uint32_t *)0x500011c0)
#define DMA_CH7_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500011c4)
#define DMA_CH7_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500011c8)
#define DMA_CH7_CTRL_TRIG_XOR (*(volatile uint32_t *)0x500011cc)
#define DMA_CH7_AL1_CTRL_XOR (*(volatile uint32_t *)0x500011d0)
#define DMA_CH7_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x500011d4)
#define DMA_CH7_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500011d8)
#define DMA_CH7_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x500011dc)
#define DMA_CH7_AL2_CTRL_XOR (*(volatile uint32_t *)0x500011e0)
#define DMA_CH7_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500011e4)
#define DMA_CH7_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x500011e8)
#define DMA_CH7_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500011ec)
#define DMA_CH7_AL3_CTRL_XOR (*(volatile uint32_t *)0x500011f0)
#define DMA_CH7_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500011f4)
#define DMA_CH7_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500011f8)
#define DMA_CH7_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500011fc)
#define DMA_CH8_READ_ADDR_XOR (*(volatile uint32_t *)0x50001200)
#define DMA_CH8_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001204)
#define DMA_CH8_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001208)
#define DMA_CH8_CTRL_TRIG_XOR (*(volatile uint32_t *)0x5000120c)
#define DMA_CH8_AL1_CTRL_XOR (*(volatile uint32_t *)0x50001210)
#define DMA_CH8_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x50001214)
#define DMA_CH8_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001218)
#define DMA_CH8_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x5000121c)
#define DMA_CH8_AL2_CTRL_XOR (*(volatile uint32_t *)0x50001220)
#define DMA_CH8_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001224)
#define DMA_CH8_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x50001228)
#define DMA_CH8_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000122c)
#define DMA_CH8_AL3_CTRL_XOR (*(volatile uint32_t *)0x50001230)
#define DMA_CH8_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001234)
#define DMA_CH8_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001238)
#define DMA_CH8_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000123c)
#define DMA_CH9_READ_ADDR_XOR (*(volatile uint32_t *)0x50001240)
#define DMA_CH9_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001244)
#define DMA_CH9_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001248)
#define DMA_CH9_CTRL_TRIG_XOR (*(volatile uint32_t *)0x5000124c)
#define DMA_CH9_AL1_CTRL_XOR (*(volatile uint32_t *)0x50001250)
#define DMA_CH9_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x50001254)
#define DMA_CH9_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001258)
#define DMA_CH9_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x5000125c)
#define DMA_CH9_AL2_CTRL_XOR (*(volatile uint32_t *)0x50001260)
#define DMA_CH9_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001264)
#define DMA_CH9_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x50001268)
#define DMA_CH9_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000126c)
#define DMA_CH9_AL3_CTRL_XOR (*(volatile uint32_t *)0x50001270)
#define DMA_CH9_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001274)
#define DMA_CH9_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001278)
#define DMA_CH9_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000127c)
#define DMA_CH10_READ_ADDR_XOR (*(volatile uint32_t *)0x50001280)
#define DMA_CH10_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001284)
#define DMA_CH10_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001288)
#define DMA_CH10_CTRL_TRIG_XOR (*(volatile uint32_t *)0x5000128c)
#define DMA_CH10_AL1_CTRL_XOR (*(volatile uint32_t *)0x50001290)
#define DMA_CH10_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x50001294)
#define DMA_CH10_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001298)
#define DMA_CH10_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x5000129c)
#define DMA_CH10_AL2_CTRL_XOR (*(volatile uint32_t *)0x500012a0)
#define DMA_CH10_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500012a4)
#define DMA_CH10_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x500012a8)
#define DMA_CH10_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500012ac)
#define DMA_CH10_AL3_CTRL_XOR (*(volatile uint32_t *)0x500012b0)
#define DMA_CH10_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500012b4)
#define DMA_CH10_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500012b8)
#define DMA_CH10_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500012bc)
#define DMA_CH11_READ_ADDR_XOR (*(volatile uint32_t *)0x500012c0)
#define DMA_CH11_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500012c4)
#define DMA_CH11_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500012c8)
#define DMA_CH11_CTRL_TRIG_XOR (*(volatile uint32_t *)0x500012cc)
#define DMA_CH11_AL1_CTRL_XOR (*(volatile uint32_t *)0x500012d0)
#define DMA_CH11_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x500012d4)
#define DMA_CH11_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500012d8)
#define DMA_CH11_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x500012dc)
#define DMA_CH11_AL2_CTRL_XOR (*(volatile uint32_t *)0x500012e0)
#define DMA_CH11_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500012e4)
#define DMA_CH11_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x500012e8)
#define DMA_CH11_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500012ec)
#define DMA_CH11_AL3_CTRL_XOR (*(volatile uint32_t *)0x500012f0)
#define DMA_CH11_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500012f4)
#define DMA_CH11_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500012f8)
#define DMA_CH11_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500012fc)
#define DMA_CH12_READ_ADDR_XOR (*(volatile uint32_t *)0x50001300)
#define DMA_CH12_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001304)
#define DMA_CH12_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001308)
#define DMA_CH12_CTRL_TRIG_XOR (*(volatile uint32_t *)0x5000130c)
#define DMA_CH12_AL1_CTRL_XOR (*(volatile uint32_t *)0x50001310)
#define DMA_CH12_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x50001314)
#define DMA_CH12_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001318)
#define DMA_CH12_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x5000131c)
#define DMA_CH12_AL2_CTRL_XOR (*(volatile uint32_t *)0x50001320)
#define DMA_CH12_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001324)
#define DMA_CH12_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x50001328)
#define DMA_CH12_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000132c)
#define DMA_CH12_AL3_CTRL_XOR (*(volatile uint32_t *)0x50001330)
#define DMA_CH12_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001334)
#define DMA_CH12_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001338)
#define DMA_CH12_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000133c)
#define DMA_CH13_READ_ADDR_XOR (*(volatile uint32_t *)0x50001340)
#define DMA_CH13_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001344)
#define DMA_CH13_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001348)
#define DMA_CH13_CTRL_TRIG_XOR (*(volatile uint32_t *)0x5000134c)
#define DMA_CH13_AL1_CTRL_XOR (*(volatile uint32_t *)0x50001350)
#define DMA_CH13_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x50001354)
#define DMA_CH13_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001358)
#define DMA_CH13_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x5000135c)
#define DMA_CH13_AL2_CTRL_XOR (*(volatile uint32_t *)0x50001360)
#define DMA_CH13_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001364)
#define DMA_CH13_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x50001368)
#define DMA_CH13_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000136c)
#define DMA_CH13_AL3_CTRL_XOR (*(volatile uint32_t *)0x50001370)
#define DMA_CH13_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001374)
#define DMA_CH13_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001378)
#define DMA_CH13_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x5000137c)
#define DMA_CH14_READ_ADDR_XOR (*(volatile uint32_t *)0x50001380)
#define DMA_CH14_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001384)
#define DMA_CH14_TRANS_COUNT_XOR (*(volatile uint32_t *)0x50001388)
#define DMA_CH14_CTRL_TRIG_XOR (*(volatile uint32_t *)0x5000138c)
#define DMA_CH14_AL1_CTRL_XOR (*(volatile uint32_t *)0x50001390)
#define DMA_CH14_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x50001394)
#define DMA_CH14_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x50001398)
#define DMA_CH14_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x5000139c)
#define DMA_CH14_AL2_CTRL_XOR (*(volatile uint32_t *)0x500013a0)
#define DMA_CH14_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500013a4)
#define DMA_CH14_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x500013a8)
#define DMA_CH14_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500013ac)
#define DMA_CH14_AL3_CTRL_XOR (*(volatile uint32_t *)0x500013b0)
#define DMA_CH14_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500013b4)
#define DMA_CH14_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500013b8)
#define DMA_CH14_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500013bc)
#define DMA_CH15_READ_ADDR_XOR (*(volatile uint32_t *)0x500013c0)
#define DMA_CH15_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500013c4)
#define DMA_CH15_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500013c8)
#define DMA_CH15_CTRL_TRIG_XOR (*(volatile uint32_t *)0x500013cc)
#define DMA_CH15_AL1_CTRL_XOR (*(volatile uint32_t *)0x500013d0)
#define DMA_CH15_AL1_READ_ADDR_XOR (*(volatile uint32_t *)0x500013d4)
#define DMA_CH15_AL1_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500013d8)
#define DMA_CH15_AL1_TRANS_COUNT_TRIG_XOR (*(volatile uint32_t *)0x500013dc)
#define DMA_CH15_AL2_CTRL_XOR (*(volatile uint32_t *)0x500013e0)
#define DMA_CH15_AL2_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500013e4)
#define DMA_CH15_AL2_READ_ADDR_XOR (*(volatile uint32_t *)0x500013e8)
#define DMA_CH15_AL2_WRITE_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500013ec)
#define DMA_CH15_AL3_CTRL_XOR (*(volatile uint32_t *)0x500013f0)
#define DMA_CH15_AL3_WRITE_ADDR_XOR (*(volatile uint32_t *)0x500013f4)
#define DMA_CH15_AL3_TRANS_COUNT_XOR (*(volatile uint32_t *)0x500013f8)
#define DMA_CH15_AL3_READ_ADDR_TRIG_XOR (*(volatile uint32_t *)0x500013fc)
#define DMA_INTR_XOR (*(volatile uint32_t *)0x50001400)
#define DMA_INTE0_XOR (*(volatile uint32_t *)0x50001404)
#define DMA_INTF0_XOR (*(volatile uint32_t *)0x50001408)
#define DMA_INTS0_XOR (*(volatile uint32_t *)0x5000140c)
#define DMA_INTE1_XOR (*(volatile uint32_t *)0x50001414)
#define DMA_INTF1_XOR (*(volatile uint32_t *)0x50001418)
#define DMA_INTS1_XOR (*(volatile uint32_t *)0x5000141c)
#define DMA_INTE2_XOR (*(volatile uint32_t *)0x50001424)
#define DMA_INTF2_XOR (*(volatile uint32_t *)0x50001428)
#define DMA_INTS2_XOR (*(volatile uint32_t *)0x5000142c)
#define DMA_INTE3_XOR (*(volatile uint32_t *)0x50001434)
#define DMA_INTF3_XOR (*(volatile uint32_t *)0x50001438)
#define DMA_INTS3_XOR (*(volatile uint32_t *)0x5000143c)
#define DMA_TIMER0_XOR (*(volatile uint32_t *)0x50001440)
#define DMA_TIMER1_XOR (*(volatile uint32_t *)0x50001444)
#define DMA_TIMER2_XOR (*(volatile uint32_t *)0x50001448)
#define DMA_TIMER3_XOR (*(volatile uint32_t *)0x5000144c)
#define DMA_MULTI_CHAN_TRIGGER_XOR (*(volatile uint32_t *)0x50001450)
#define DMA_SNIFF_CTRL_XOR (*(volatile uint32_t *)0x50001454)
#define DMA_SNIFF_DATA_XOR (*(volatile uint32_t *)0x50001458)
#define DMA_FIFO_LEVELS_XOR (*(volatile uint32_t *)0x50001460)
#define DMA_CHAN_ABORT_XOR (*(volatile uint32_t *)0x50001464)
#define DMA_N_CHANNELS_XOR (*(volatile uint32_t *)0x50001468)
#define DMA_SECCFG_CH0_XOR (*(volatile uint32_t *)0x50001480)
#define DMA_SECCFG_CH1_XOR (*(volatile uint32_t *)0x50001484)
#define DMA_SECCFG_CH2_XOR (*(volatile uint32_t *)0x50001488)
#define DMA_SECCFG_CH3_XOR (*(volatile uint32_t *)0x5000148c)
#define DMA_SECCFG_CH4_XOR (*(volatile uint32_t *)0x50001490)
#define DMA_SECCFG_CH5_XOR (*(volatile uint32_t *)0x50001494)
#define DMA_SECCFG_CH6_XOR (*(volatile uint32_t *)0x50001498)
#define DMA_SECCFG_CH7_XOR (*(volatile uint32_t *)0x5000149c)
#define DMA_SECCFG_CH8_XOR (*(volatile uint32_t *)0x500014a0)
#define DMA_SECCFG_CH9_XOR (*(volatile uint32_t *)0x500014a4)
#define DMA_SECCFG_CH10_XOR (*(volatile uint32_t *)0x500014a8)
#define DMA_SECCFG_CH11_XOR (*(volatile uint32_t *)0x500014ac)
#define DMA_SECCFG_CH12_XOR (*(volatile uint32_t *)0x500014b0)
#define DMA_SECCFG_CH13_XOR (*(volatile uint32_t *)0x500014b4)
#define DMA_SECCFG_CH14_XOR (*(volatile uint32_t *)0x500014b8)
#define DMA_SECCFG_CH15_XOR (*(volatile uint32_t *)0x500014bc)
#define DMA_SECCFG_IRQ0_XOR (*(volatile uint32_t *)0x500014c0)
#define DMA_SECCFG_IRQ1_XOR (*(volatile uint32_t *)0x500014c4)
#define DMA_SECCFG_IRQ2_XOR (*(volatile uint32_t *)0x500014c8)
#define DMA_SECCFG_IRQ3_XOR (*(volatile uint32_t *)0x500014cc)
#define DMA_SECCFG_MISC_XOR (*(volatile uint32_t *)0x500014d0)
#define DMA_MPU_CTRL_XOR (*(volatile uint32_t *)0x50001500)
#define DMA_MPU_BAR0_XOR (*(volatile uint32_t *)0x50001504)
#define DMA_MPU_LAR0_XOR (*(volatile uint32_t *)0x50001508)
#define DMA_MPU_BAR1_XOR (*(volatile uint32_t *)0x5000150c)
#define DMA_MPU_LAR1_XOR (*(volatile uint32_t *)0x50001510)
#define DMA_MPU_BAR2_XOR (*(volatile uint32_t *)0x50001514)
#define DMA_MPU_LAR2_XOR (*(volatile uint32_t *)0x50001518)
#define DMA_MPU_BAR3_XOR (*(volatile uint32_t *)0x5000151c)
#define DMA_MPU_LAR3_XOR (*(volatile uint32_t *)0x50001520)
#define DMA_MPU_BAR4_XOR (*(volatile uint32_t *)0x50001524)
#define DMA_MPU_LAR4_XOR (*(volatile uint32_t *)0x50001528)
#define DMA_MPU_BAR5_XOR (*(volatile uint32_t *)0x5000152c)
#define DMA_MPU_LAR5_XOR (*(volatile uint32_t *)0x50001530)
#define DMA_MPU_BAR6_XOR (*(volatile uint32_t *)0x50001534)
#define DMA_MPU_LAR6_XOR (*(volatile uint32_t *)0x50001538)
#define DMA_MPU_BAR7_XOR (*(volatile uint32_t *)0x5000153c)
#define DMA_MPU_LAR7_XOR (*(volatile uint32_t *)0x50001540)
#define DMA_CH0_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001800)
#define DMA_CH0_DBG_TCR_XOR (*(volatile uint32_t *)0x50001804)
#define DMA_CH1_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001840)
#define DMA_CH1_DBG_TCR_XOR (*(volatile uint32_t *)0x50001844)
#define DMA_CH2_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001880)
#define DMA_CH2_DBG_TCR_XOR (*(volatile uint32_t *)0x50001884)
#define DMA_CH3_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x500018c0)
#define DMA_CH3_DBG_TCR_XOR (*(volatile uint32_t *)0x500018c4)
#define DMA_CH4_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001900)
#define DMA_CH4_DBG_TCR_XOR (*(volatile uint32_t *)0x50001904)
#define DMA_CH5_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001940)
#define DMA_CH5_DBG_TCR_XOR (*(volatile uint32_t *)0x50001944)
#define DMA_CH6_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001980)
#define DMA_CH6_DBG_TCR_XOR (*(volatile uint32_t *)0x50001984)
#define DMA_CH7_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x500019c0)
#define DMA_CH7_DBG_TCR_XOR (*(volatile uint32_t *)0x500019c4)
#define DMA_CH8_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001a00)
#define DMA_CH8_DBG_TCR_XOR (*(volatile uint32_t *)0x50001a04)
#define DMA_CH9_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001a40)
#define DMA_CH9_DBG_TCR_XOR (*(volatile uint32_t *)0x50001a44)
#define DMA_CH10_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001a80)
#define DMA_CH10_DBG_TCR_XOR (*(volatile uint32_t *)0x50001a84)
#define DMA_CH11_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001ac0)
#define DMA_CH11_DBG_TCR_XOR (*(volatile uint32_t *)0x50001ac4)
#define DMA_CH12_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001b00)
#define DMA_CH12_DBG_TCR_XOR (*(volatile uint32_t *)0x50001b04)
#define DMA_CH13_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001b40)
#define DMA_CH13_DBG_TCR_XOR (*(volatile uint32_t *)0x50001b44)
#define DMA_CH14_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001b80)
#define DMA_CH14_DBG_TCR_XOR (*(volatile uint32_t *)0x50001b84)
#define DMA_CH15_DBG_CTDREQ_XOR (*(volatile uint32_t *)0x50001bc0)
#define DMA_CH15_DBG_TCR_XOR (*(volatile uint32_t *)0x50001bc4)
#define DMA_CH0_READ_ADDR_SET (*(volatile uint32_t *)0x50002000)
#define DMA_CH0_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002004)
#define DMA_CH0_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002008)
#define DMA_CH0_CTRL_TRIG_SET (*(volatile uint32_t *)0x5000200c)
#define DMA_CH0_AL1_CTRL_SET (*(volatile uint32_t *)0x50002010)
#define DMA_CH0_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x50002014)
#define DMA_CH0_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002018)
#define DMA_CH0_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x5000201c)
#define DMA_CH0_AL2_CTRL_SET (*(volatile uint32_t *)0x50002020)
#define DMA_CH0_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002024)
#define DMA_CH0_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x50002028)
#define DMA_CH0_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000202c)
#define DMA_CH0_AL3_CTRL_SET (*(volatile uint32_t *)0x50002030)
#define DMA_CH0_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002034)
#define DMA_CH0_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002038)
#define DMA_CH0_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000203c)
#define DMA_CH1_READ_ADDR_SET (*(volatile uint32_t *)0x50002040)
#define DMA_CH1_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002044)
#define DMA_CH1_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002048)
#define DMA_CH1_CTRL_TRIG_SET (*(volatile uint32_t *)0x5000204c)
#define DMA_CH1_AL1_CTRL_SET (*(volatile uint32_t *)0x50002050)
#define DMA_CH1_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x50002054)
#define DMA_CH1_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002058)
#define DMA_CH1_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x5000205c)
#define DMA_CH1_AL2_CTRL_SET (*(volatile uint32_t *)0x50002060)
#define DMA_CH1_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002064)
#define DMA_CH1_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x50002068)
#define DMA_CH1_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000206c)
#define DMA_CH1_AL3_CTRL_SET (*(volatile uint32_t *)0x50002070)
#define DMA_CH1_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002074)
#define DMA_CH1_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002078)
#define DMA_CH1_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000207c)
#define DMA_CH2_READ_ADDR_SET (*(volatile uint32_t *)0x50002080)
#define DMA_CH2_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002084)
#define DMA_CH2_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002088)
#define DMA_CH2_CTRL_TRIG_SET (*(volatile uint32_t *)0x5000208c)
#define DMA_CH2_AL1_CTRL_SET (*(volatile uint32_t *)0x50002090)
#define DMA_CH2_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x50002094)
#define DMA_CH2_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002098)
#define DMA_CH2_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x5000209c)
#define DMA_CH2_AL2_CTRL_SET (*(volatile uint32_t *)0x500020a0)
#define DMA_CH2_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x500020a4)
#define DMA_CH2_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x500020a8)
#define DMA_CH2_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x500020ac)
#define DMA_CH2_AL3_CTRL_SET (*(volatile uint32_t *)0x500020b0)
#define DMA_CH2_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x500020b4)
#define DMA_CH2_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x500020b8)
#define DMA_CH2_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x500020bc)
#define DMA_CH3_READ_ADDR_SET (*(volatile uint32_t *)0x500020c0)
#define DMA_CH3_WRITE_ADDR_SET (*(volatile uint32_t *)0x500020c4)
#define DMA_CH3_TRANS_COUNT_SET (*(volatile uint32_t *)0x500020c8)
#define DMA_CH3_CTRL_TRIG_SET (*(volatile uint32_t *)0x500020cc)
#define DMA_CH3_AL1_CTRL_SET (*(volatile uint32_t *)0x500020d0)
#define DMA_CH3_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x500020d4)
#define DMA_CH3_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x500020d8)
#define DMA_CH3_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x500020dc)
#define DMA_CH3_AL2_CTRL_SET (*(volatile uint32_t *)0x500020e0)
#define DMA_CH3_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x500020e4)
#define DMA_CH3_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x500020e8)
#define DMA_CH3_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x500020ec)
#define DMA_CH3_AL3_CTRL_SET (*(volatile uint32_t *)0x500020f0)
#define DMA_CH3_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x500020f4)
#define DMA_CH3_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x500020f8)
#define DMA_CH3_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x500020fc)
#define DMA_CH4_READ_ADDR_SET (*(volatile uint32_t *)0x50002100)
#define DMA_CH4_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002104)
#define DMA_CH4_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002108)
#define DMA_CH4_CTRL_TRIG_SET (*(volatile uint32_t *)0x5000210c)
#define DMA_CH4_AL1_CTRL_SET (*(volatile uint32_t *)0x50002110)
#define DMA_CH4_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x50002114)
#define DMA_CH4_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002118)
#define DMA_CH4_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x5000211c)
#define DMA_CH4_AL2_CTRL_SET (*(volatile uint32_t *)0x50002120)
#define DMA_CH4_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002124)
#define DMA_CH4_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x50002128)
#define DMA_CH4_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000212c)
#define DMA_CH4_AL3_CTRL_SET (*(volatile uint32_t *)0x50002130)
#define DMA_CH4_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002134)
#define DMA_CH4_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002138)
#define DMA_CH4_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000213c)
#define DMA_CH5_READ_ADDR_SET (*(volatile uint32_t *)0x50002140)
#define DMA_CH5_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002144)
#define DMA_CH5_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002148)
#define DMA_CH5_CTRL_TRIG_SET (*(volatile uint32_t *)0x5000214c)
#define DMA_CH5_AL1_CTRL_SET (*(volatile uint32_t *)0x50002150)
#define DMA_CH5_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x50002154)
#define DMA_CH5_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002158)
#define DMA_CH5_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x5000215c)
#define DMA_CH5_AL2_CTRL_SET (*(volatile uint32_t *)0x50002160)
#define DMA_CH5_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002164)
#define DMA_CH5_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x50002168)
#define DMA_CH5_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000216c)
#define DMA_CH5_AL3_CTRL_SET (*(volatile uint32_t *)0x50002170)
#define DMA_CH5_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002174)
#define DMA_CH5_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002178)
#define DMA_CH5_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000217c)
#define DMA_CH6_READ_ADDR_SET (*(volatile uint32_t *)0x50002180)
#define DMA_CH6_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002184)
#define DMA_CH6_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002188)
#define DMA_CH6_CTRL_TRIG_SET (*(volatile uint32_t *)0x5000218c)
#define DMA_CH6_AL1_CTRL_SET (*(volatile uint32_t *)0x50002190)
#define DMA_CH6_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x50002194)
#define DMA_CH6_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002198)
#define DMA_CH6_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x5000219c)
#define DMA_CH6_AL2_CTRL_SET (*(volatile uint32_t *)0x500021a0)
#define DMA_CH6_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x500021a4)
#define DMA_CH6_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x500021a8)
#define DMA_CH6_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x500021ac)
#define DMA_CH6_AL3_CTRL_SET (*(volatile uint32_t *)0x500021b0)
#define DMA_CH6_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x500021b4)
#define DMA_CH6_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x500021b8)
#define DMA_CH6_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x500021bc)
#define DMA_CH7_READ_ADDR_SET (*(volatile uint32_t *)0x500021c0)
#define DMA_CH7_WRITE_ADDR_SET (*(volatile uint32_t *)0x500021c4)
#define DMA_CH7_TRANS_COUNT_SET (*(volatile uint32_t *)0x500021c8)
#define DMA_CH7_CTRL_TRIG_SET (*(volatile uint32_t *)0x500021cc)
#define DMA_CH7_AL1_CTRL_SET (*(volatile uint32_t *)0x500021d0)
#define DMA_CH7_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x500021d4)
#define DMA_CH7_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x500021d8)
#define DMA_CH7_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x500021dc)
#define DMA_CH7_AL2_CTRL_SET (*(volatile uint32_t *)0x500021e0)
#define DMA_CH7_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x500021e4)
#define DMA_CH7_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x500021e8)
#define DMA_CH7_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x500021ec)
#define DMA_CH7_AL3_CTRL_SET (*(volatile uint32_t *)0x500021f0)
#define DMA_CH7_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x500021f4)
#define DMA_CH7_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x500021f8)
#define DMA_CH7_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x500021fc)
#define DMA_CH8_READ_ADDR_SET (*(volatile uint32_t *)0x50002200)
#define DMA_CH8_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002204)
#define DMA_CH8_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002208)
#define DMA_CH8_CTRL_TRIG_SET (*(volatile uint32_t *)0x5000220c)
#define DMA_CH8_AL1_CTRL_SET (*(volatile uint32_t *)0x50002210)
#define DMA_CH8_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x50002214)
#define DMA_CH8_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002218)
#define DMA_CH8_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x5000221c)
#define DMA_CH8_AL2_CTRL_SET (*(volatile uint32_t *)0x50002220)
#define DMA_CH8_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002224)
#define DMA_CH8_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x50002228)
#define DMA_CH8_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000222c)
#define DMA_CH8_AL3_CTRL_SET (*(volatile uint32_t *)0x50002230)
#define DMA_CH8_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002234)
#define DMA_CH8_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002238)
#define DMA_CH8_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000223c)
#define DMA_CH9_READ_ADDR_SET (*(volatile uint32_t *)0x50002240)
#define DMA_CH9_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002244)
#define DMA_CH9_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002248)
#define DMA_CH9_CTRL_TRIG_SET (*(volatile uint32_t *)0x5000224c)
#define DMA_CH9_AL1_CTRL_SET (*(volatile uint32_t *)0x50002250)
#define DMA_CH9_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x50002254)
#define DMA_CH9_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002258)
#define DMA_CH9_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x5000225c)
#define DMA_CH9_AL2_CTRL_SET (*(volatile uint32_t *)0x50002260)
#define DMA_CH9_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002264)
#define DMA_CH9_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x50002268)
#define DMA_CH9_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000226c)
#define DMA_CH9_AL3_CTRL_SET (*(volatile uint32_t *)0x50002270)
#define DMA_CH9_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002274)
#define DMA_CH9_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002278)
#define DMA_CH9_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000227c)
#define DMA_CH10_READ_ADDR_SET (*(volatile uint32_t *)0x50002280)
#define DMA_CH10_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002284)
#define DMA_CH10_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002288)
#define DMA_CH10_CTRL_TRIG_SET (*(volatile uint32_t *)0x5000228c)
#define DMA_CH10_AL1_CTRL_SET (*(volatile uint32_t *)0x50002290)
#define DMA_CH10_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x50002294)
#define DMA_CH10_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002298)
#define DMA_CH10_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x5000229c)
#define DMA_CH10_AL2_CTRL_SET (*(volatile uint32_t *)0x500022a0)
#define DMA_CH10_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x500022a4)
#define DMA_CH10_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x500022a8)
#define DMA_CH10_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x500022ac)
#define DMA_CH10_AL3_CTRL_SET (*(volatile uint32_t *)0x500022b0)
#define DMA_CH10_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x500022b4)
#define DMA_CH10_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x500022b8)
#define DMA_CH10_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x500022bc)
#define DMA_CH11_READ_ADDR_SET (*(volatile uint32_t *)0x500022c0)
#define DMA_CH11_WRITE_ADDR_SET (*(volatile uint32_t *)0x500022c4)
#define DMA_CH11_TRANS_COUNT_SET (*(volatile uint32_t *)0x500022c8)
#define DMA_CH11_CTRL_TRIG_SET (*(volatile uint32_t *)0x500022cc)
#define DMA_CH11_AL1_CTRL_SET (*(volatile uint32_t *)0x500022d0)
#define DMA_CH11_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x500022d4)
#define DMA_CH11_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x500022d8)
#define DMA_CH11_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x500022dc)
#define DMA_CH11_AL2_CTRL_SET (*(volatile uint32_t *)0x500022e0)
#define DMA_CH11_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x500022e4)
#define DMA_CH11_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x500022e8)
#define DMA_CH11_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x500022ec)
#define DMA_CH11_AL3_CTRL_SET (*(volatile uint32_t *)0x500022f0)
#define DMA_CH11_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x500022f4)
#define DMA_CH11_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x500022f8)
#define DMA_CH11_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x500022fc)
#define DMA_CH12_READ_ADDR_SET (*(volatile uint32_t *)0x50002300)
#define DMA_CH12_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002304)
#define DMA_CH12_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002308)
#define DMA_CH12_CTRL_TRIG_SET (*(volatile uint32_t *)0x5000230c)
#define DMA_CH12_AL1_CTRL_SET (*(volatile uint32_t *)0x50002310)
#define DMA_CH12_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x50002314)
#define DMA_CH12_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002318)
#define DMA_CH12_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x5000231c)
#define DMA_CH12_AL2_CTRL_SET (*(volatile uint32_t *)0x50002320)
#define DMA_CH12_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002324)
#define DMA_CH12_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x50002328)
#define DMA_CH12_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000232c)
#define DMA_CH12_AL3_CTRL_SET (*(volatile uint32_t *)0x50002330)
#define DMA_CH12_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002334)
#define DMA_CH12_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002338)
#define DMA_CH12_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000233c)
#define DMA_CH13_READ_ADDR_SET (*(volatile uint32_t *)0x50002340)
#define DMA_CH13_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002344)
#define DMA_CH13_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002348)
#define DMA_CH13_CTRL_TRIG_SET (*(volatile uint32_t *)0x5000234c)
#define DMA_CH13_AL1_CTRL_SET (*(volatile uint32_t *)0x50002350)
#define DMA_CH13_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x50002354)
#define DMA_CH13_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002358)
#define DMA_CH13_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x5000235c)
#define DMA_CH13_AL2_CTRL_SET (*(volatile uint32_t *)0x50002360)
#define DMA_CH13_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002364)
#define DMA_CH13_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x50002368)
#define DMA_CH13_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000236c)
#define DMA_CH13_AL3_CTRL_SET (*(volatile uint32_t *)0x50002370)
#define DMA_CH13_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002374)
#define DMA_CH13_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002378)
#define DMA_CH13_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x5000237c)
#define DMA_CH14_READ_ADDR_SET (*(volatile uint32_t *)0x50002380)
#define DMA_CH14_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002384)
#define DMA_CH14_TRANS_COUNT_SET (*(volatile uint32_t *)0x50002388)
#define DMA_CH14_CTRL_TRIG_SET (*(volatile uint32_t *)0x5000238c)
#define DMA_CH14_AL1_CTRL_SET (*(volatile uint32_t *)0x50002390)
#define DMA_CH14_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x50002394)
#define DMA_CH14_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x50002398)
#define DMA_CH14_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x5000239c)
#define DMA_CH14_AL2_CTRL_SET (*(volatile uint32_t *)0x500023a0)
#define DMA_CH14_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x500023a4)
#define DMA_CH14_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x500023a8)
#define DMA_CH14_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x500023ac)
#define DMA_CH14_AL3_CTRL_SET (*(volatile uint32_t *)0x500023b0)
#define DMA_CH14_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x500023b4)
#define DMA_CH14_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x500023b8)
#define DMA_CH14_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x500023bc)
#define DMA_CH15_READ_ADDR_SET (*(volatile uint32_t *)0x500023c0)
#define DMA_CH15_WRITE_ADDR_SET (*(volatile uint32_t *)0x500023c4)
#define DMA_CH15_TRANS_COUNT_SET (*(volatile uint32_t *)0x500023c8)
#define DMA_CH15_CTRL_TRIG_SET (*(volatile uint32_t *)0x500023cc)
#define DMA_CH15_AL1_CTRL_SET (*(volatile uint32_t *)0x500023d0)
#define DMA_CH15_AL1_READ_ADDR_SET (*(volatile uint32_t *)0x500023d4)
#define DMA_CH15_AL1_WRITE_ADDR_SET (*(volatile uint32_t *)0x500023d8)
#define DMA_CH15_AL1_TRANS_COUNT_TRIG_SET (*(volatile uint32_t *)0x500023dc)
#define DMA_CH15_AL2_CTRL_SET (*(volatile uint32_t *)0x500023e0)
#define DMA_CH15_AL2_TRANS_COUNT_SET (*(volatile uint32_t *)0x500023e4)
#define DMA_CH15_AL2_READ_ADDR_SET (*(volatile uint32_t *)0x500023e8)
#define DMA_CH15_AL2_WRITE_ADDR_TRIG_SET (*(volatile uint32_t *)0x500023ec)
#define DMA_CH15_AL3_CTRL_SET (*(volatile uint32_t *)0x500023f0)
#define DMA_CH15_AL3_WRITE_ADDR_SET (*(volatile uint32_t *)0x500023f4)
#define DMA_CH15_AL3_TRANS_COUNT_SET (*(volatile uint32_t *)0x500023f8)
#define DMA_CH15_AL3_READ_ADDR_TRIG_SET (*(volatile uint32_t *)0x500023fc)
#define DMA_INTR_SET (*(volatile uint32_t *)0x50002400)
#define DMA_INTE0_SET (*(volatile uint32_t *)0x50002404)
#define DMA_INTF0_SET (*(volatile uint32_t *)0x50002408)
#define DMA_INTS0_SET (*(volatile uint32_t *)0x5000240c)
#define DMA_INTE1_SET (*(volatile uint32_t *)0x50002414)
#define DMA_INTF1_SET (*(volatile uint32_t *)0x50002418)
#define DMA_INTS1_SET (*(volatile uint32_t *)0x5000241c)
#define DMA_INTE2_SET (*(volatile uint32_t *)0x50002424)
#define DMA_INTF2_SET (*(volatile uint32_t *)0x50002428)
#define DMA_INTS2_SET (*(volatile uint32_t *)0x5000242c)
#define DMA_INTE3_SET (*(volatile uint32_t *)0x50002434)
#define DMA_INTF3_SET (*(volatile uint32_t *)0x50002438)
#define DMA_INTS3_SET (*(volatile uint32_t *)0x5000243c)
#define DMA_TIMER0_SET (*(volatile uint32_t *)0x50002440)
#define DMA_TIMER1_SET (*(volatile uint32_t *)0x50002444)
#define DMA_TIMER2_SET (*(volatile uint32_t *)0x50002448)
#define DMA_TIMER3_SET (*(volatile uint32_t *)0x5000244c)
#define DMA_MULTI_CHAN_TRIGGER_SET (*(volatile uint32_t *)0x50002450)
#define DMA_SNIFF_CTRL_SET (*(volatile uint32_t *)0x50002454)
#define DMA_SNIFF_DATA_SET (*(volatile uint32_t *)0x50002458)
#define DMA_FIFO_LEVELS_SET (*(volatile uint32_t *)0x50002460)
#define DMA_CHAN_ABORT_SET (*(volatile uint32_t *)0x50002464)
#define DMA_N_CHANNELS_SET (*(volatile uint32_t *)0x50002468)
#define DMA_SECCFG_CH0_SET (*(volatile uint32_t *)0x50002480)
#define DMA_SECCFG_CH1_SET (*(volatile uint32_t *)0x50002484)
#define DMA_SECCFG_CH2_SET (*(volatile uint32_t *)0x50002488)
#define DMA_SECCFG_CH3_SET (*(volatile uint32_t *)0x5000248c)
#define DMA_SECCFG_CH4_SET (*(volatile uint32_t *)0x50002490)
#define DMA_SECCFG_CH5_SET (*(volatile uint32_t *)0x50002494)
#define DMA_SECCFG_CH6_SET (*(volatile uint32_t *)0x50002498)
#define DMA_SECCFG_CH7_SET (*(volatile uint32_t *)0x5000249c)
#define DMA_SECCFG_CH8_SET (*(volatile uint32_t *)0x500024a0)
#define DMA_SECCFG_CH9_SET (*(volatile uint32_t *)0x500024a4)
#define DMA_SECCFG_CH10_SET (*(volatile uint32_t *)0x500024a8)
#define DMA_SECCFG_CH11_SET (*(volatile uint32_t *)0x500024ac)
#define DMA_SECCFG_CH12_SET (*(volatile uint32_t *)0x500024b0)
#define DMA_SECCFG_CH13_SET (*(volatile uint32_t *)0x500024b4)
#define DMA_SECCFG_CH14_SET (*(volatile uint32_t *)0x500024b8)
#define DMA_SECCFG_CH15_SET (*(volatile uint32_t *)0x500024bc)
#define DMA_SECCFG_IRQ0_SET (*(volatile uint32_t *)0x500024c0)
#define DMA_SECCFG_IRQ1_SET (*(volatile uint32_t *)0x500024c4)
#define DMA_SECCFG_IRQ2_SET (*(volatile uint32_t *)0x500024c8)
#define DMA_SECCFG_IRQ3_SET (*(volatile uint32_t *)0x500024cc)
#define DMA_SECCFG_MISC_SET (*(volatile uint32_t *)0x500024d0)
#define DMA_MPU_CTRL_SET (*(volatile uint32_t *)0x50002500)
#define DMA_MPU_BAR0_SET (*(volatile uint32_t *)0x50002504)
#define DMA_MPU_LAR0_SET (*(volatile uint32_t *)0x50002508)
#define DMA_MPU_BAR1_SET (*(volatile uint32_t *)0x5000250c)
#define DMA_MPU_LAR1_SET (*(volatile uint32_t *)0x50002510)
#define DMA_MPU_BAR2_SET (*(volatile uint32_t *)0x50002514)
#define DMA_MPU_LAR2_SET (*(volatile uint32_t *)0x50002518)
#define DMA_MPU_BAR3_SET (*(volatile uint32_t *)0x5000251c)
#define DMA_MPU_LAR3_SET (*(volatile uint32_t *)0x50002520)
#define DMA_MPU_BAR4_SET (*(volatile uint32_t *)0x50002524)
#define DMA_MPU_LAR4_SET (*(volatile uint32_t *)0x50002528)
#define DMA_MPU_BAR5_SET (*(volatile uint32_t *)0x5000252c)
#define DMA_MPU_LAR5_SET (*(volatile uint32_t *)0x50002530)
#define DMA_MPU_BAR6_SET (*(volatile uint32_t *)0x50002534)
#define DMA_MPU_LAR6_SET (*(volatile uint32_t *)0x50002538)
#define DMA_MPU_BAR7_SET (*(volatile uint32_t *)0x5000253c)
#define DMA_MPU_LAR7_SET (*(volatile uint32_t *)0x50002540)
#define DMA_CH0_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002800)
#define DMA_CH0_DBG_TCR_SET (*(volatile uint32_t *)0x50002804)
#define DMA_CH1_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002840)
#define DMA_CH1_DBG_TCR_SET (*(volatile uint32_t *)0x50002844)
#define DMA_CH2_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002880)
#define DMA_CH2_DBG_TCR_SET (*(volatile uint32_t *)0x50002884)
#define DMA_CH3_DBG_CTDREQ_SET (*(volatile uint32_t *)0x500028c0)
#define DMA_CH3_DBG_TCR_SET (*(volatile uint32_t *)0x500028c4)
#define DMA_CH4_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002900)
#define DMA_CH4_DBG_TCR_SET (*(volatile uint32_t *)0x50002904)
#define DMA_CH5_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002940)
#define DMA_CH5_DBG_TCR_SET (*(volatile uint32_t *)0x50002944)
#define DMA_CH6_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002980)
#define DMA_CH6_DBG_TCR_SET (*(volatile uint32_t *)0x50002984)
#define DMA_CH7_DBG_CTDREQ_SET (*(volatile uint32_t *)0x500029c0)
#define DMA_CH7_DBG_TCR_SET (*(volatile uint32_t *)0x500029c4)
#define DMA_CH8_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002a00)
#define DMA_CH8_DBG_TCR_SET (*(volatile uint32_t *)0x50002a04)
#define DMA_CH9_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002a40)
#define DMA_CH9_DBG_TCR_SET (*(volatile uint32_t *)0x50002a44)
#define DMA_CH10_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002a80)
#define DMA_CH10_DBG_TCR_SET (*(volatile uint32_t *)0x50002a84)
#define DMA_CH11_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002ac0)
#define DMA_CH11_DBG_TCR_SET (*(volatile uint32_t *)0x50002ac4)
#define DMA_CH12_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002b00)
#define DMA_CH12_DBG_TCR_SET (*(volatile uint32_t *)0x50002b04)
#define DMA_CH13_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002b40)
#define DMA_CH13_DBG_TCR_SET (*(volatile uint32_t *)0x50002b44)
#define DMA_CH14_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002b80)
#define DMA_CH14_DBG_TCR_SET (*(volatile uint32_t *)0x50002b84)
#define DMA_CH15_DBG_CTDREQ_SET (*(volatile uint32_t *)0x50002bc0)
#define DMA_CH15_DBG_TCR_SET (*(volatile uint32_t *)0x50002bc4)
#define DMA_CH0_READ_ADDR_CLR (*(volatile uint32_t *)0x50003000)
#define DMA_CH0_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003004)
#define DMA_CH0_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003008)
#define DMA_CH0_CTRL_TRIG_CLR (*(volatile uint32_t *)0x5000300c)
#define DMA_CH0_AL1_CTRL_CLR (*(volatile uint32_t *)0x50003010)
#define DMA_CH0_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x50003014)
#define DMA_CH0_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003018)
#define DMA_CH0_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x5000301c)
#define DMA_CH0_AL2_CTRL_CLR (*(volatile uint32_t *)0x50003020)
#define DMA_CH0_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003024)
#define DMA_CH0_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x50003028)
#define DMA_CH0_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000302c)
#define DMA_CH0_AL3_CTRL_CLR (*(volatile uint32_t *)0x50003030)
#define DMA_CH0_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003034)
#define DMA_CH0_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003038)
#define DMA_CH0_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000303c)
#define DMA_CH1_READ_ADDR_CLR (*(volatile uint32_t *)0x50003040)
#define DMA_CH1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003044)
#define DMA_CH1_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003048)
#define DMA_CH1_CTRL_TRIG_CLR (*(volatile uint32_t *)0x5000304c)
#define DMA_CH1_AL1_CTRL_CLR (*(volatile uint32_t *)0x50003050)
#define DMA_CH1_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x50003054)
#define DMA_CH1_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003058)
#define DMA_CH1_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x5000305c)
#define DMA_CH1_AL2_CTRL_CLR (*(volatile uint32_t *)0x50003060)
#define DMA_CH1_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003064)
#define DMA_CH1_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x50003068)
#define DMA_CH1_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000306c)
#define DMA_CH1_AL3_CTRL_CLR (*(volatile uint32_t *)0x50003070)
#define DMA_CH1_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003074)
#define DMA_CH1_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003078)
#define DMA_CH1_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000307c)
#define DMA_CH2_READ_ADDR_CLR (*(volatile uint32_t *)0x50003080)
#define DMA_CH2_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003084)
#define DMA_CH2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003088)
#define DMA_CH2_CTRL_TRIG_CLR (*(volatile uint32_t *)0x5000308c)
#define DMA_CH2_AL1_CTRL_CLR (*(volatile uint32_t *)0x50003090)
#define DMA_CH2_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x50003094)
#define DMA_CH2_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003098)
#define DMA_CH2_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x5000309c)
#define DMA_CH2_AL2_CTRL_CLR (*(volatile uint32_t *)0x500030a0)
#define DMA_CH2_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500030a4)
#define DMA_CH2_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x500030a8)
#define DMA_CH2_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500030ac)
#define DMA_CH2_AL3_CTRL_CLR (*(volatile uint32_t *)0x500030b0)
#define DMA_CH2_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500030b4)
#define DMA_CH2_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500030b8)
#define DMA_CH2_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500030bc)
#define DMA_CH3_READ_ADDR_CLR (*(volatile uint32_t *)0x500030c0)
#define DMA_CH3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500030c4)
#define DMA_CH3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500030c8)
#define DMA_CH3_CTRL_TRIG_CLR (*(volatile uint32_t *)0x500030cc)
#define DMA_CH3_AL1_CTRL_CLR (*(volatile uint32_t *)0x500030d0)
#define DMA_CH3_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x500030d4)
#define DMA_CH3_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500030d8)
#define DMA_CH3_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x500030dc)
#define DMA_CH3_AL2_CTRL_CLR (*(volatile uint32_t *)0x500030e0)
#define DMA_CH3_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500030e4)
#define DMA_CH3_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x500030e8)
#define DMA_CH3_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500030ec)
#define DMA_CH3_AL3_CTRL_CLR (*(volatile uint32_t *)0x500030f0)
#define DMA_CH3_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500030f4)
#define DMA_CH3_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500030f8)
#define DMA_CH3_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500030fc)
#define DMA_CH4_READ_ADDR_CLR (*(volatile uint32_t *)0x50003100)
#define DMA_CH4_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003104)
#define DMA_CH4_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003108)
#define DMA_CH4_CTRL_TRIG_CLR (*(volatile uint32_t *)0x5000310c)
#define DMA_CH4_AL1_CTRL_CLR (*(volatile uint32_t *)0x50003110)
#define DMA_CH4_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x50003114)
#define DMA_CH4_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003118)
#define DMA_CH4_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x5000311c)
#define DMA_CH4_AL2_CTRL_CLR (*(volatile uint32_t *)0x50003120)
#define DMA_CH4_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003124)
#define DMA_CH4_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x50003128)
#define DMA_CH4_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000312c)
#define DMA_CH4_AL3_CTRL_CLR (*(volatile uint32_t *)0x50003130)
#define DMA_CH4_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003134)
#define DMA_CH4_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003138)
#define DMA_CH4_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000313c)
#define DMA_CH5_READ_ADDR_CLR (*(volatile uint32_t *)0x50003140)
#define DMA_CH5_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003144)
#define DMA_CH5_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003148)
#define DMA_CH5_CTRL_TRIG_CLR (*(volatile uint32_t *)0x5000314c)
#define DMA_CH5_AL1_CTRL_CLR (*(volatile uint32_t *)0x50003150)
#define DMA_CH5_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x50003154)
#define DMA_CH5_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003158)
#define DMA_CH5_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x5000315c)
#define DMA_CH5_AL2_CTRL_CLR (*(volatile uint32_t *)0x50003160)
#define DMA_CH5_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003164)
#define DMA_CH5_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x50003168)
#define DMA_CH5_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000316c)
#define DMA_CH5_AL3_CTRL_CLR (*(volatile uint32_t *)0x50003170)
#define DMA_CH5_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003174)
#define DMA_CH5_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003178)
#define DMA_CH5_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000317c)
#define DMA_CH6_READ_ADDR_CLR (*(volatile uint32_t *)0x50003180)
#define DMA_CH6_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003184)
#define DMA_CH6_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003188)
#define DMA_CH6_CTRL_TRIG_CLR (*(volatile uint32_t *)0x5000318c)
#define DMA_CH6_AL1_CTRL_CLR (*(volatile uint32_t *)0x50003190)
#define DMA_CH6_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x50003194)
#define DMA_CH6_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003198)
#define DMA_CH6_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x5000319c)
#define DMA_CH6_AL2_CTRL_CLR (*(volatile uint32_t *)0x500031a0)
#define DMA_CH6_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500031a4)
#define DMA_CH6_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x500031a8)
#define DMA_CH6_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500031ac)
#define DMA_CH6_AL3_CTRL_CLR (*(volatile uint32_t *)0x500031b0)
#define DMA_CH6_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500031b4)
#define DMA_CH6_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500031b8)
#define DMA_CH6_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500031bc)
#define DMA_CH7_READ_ADDR_CLR (*(volatile uint32_t *)0x500031c0)
#define DMA_CH7_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500031c4)
#define DMA_CH7_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500031c8)
#define DMA_CH7_CTRL_TRIG_CLR (*(volatile uint32_t *)0x500031cc)
#define DMA_CH7_AL1_CTRL_CLR (*(volatile uint32_t *)0x500031d0)
#define DMA_CH7_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x500031d4)
#define DMA_CH7_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500031d8)
#define DMA_CH7_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x500031dc)
#define DMA_CH7_AL2_CTRL_CLR (*(volatile uint32_t *)0x500031e0)
#define DMA_CH7_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500031e4)
#define DMA_CH7_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x500031e8)
#define DMA_CH7_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500031ec)
#define DMA_CH7_AL3_CTRL_CLR (*(volatile uint32_t *)0x500031f0)
#define DMA_CH7_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500031f4)
#define DMA_CH7_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500031f8)
#define DMA_CH7_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500031fc)
#define DMA_CH8_READ_ADDR_CLR (*(volatile uint32_t *)0x50003200)
#define DMA_CH8_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003204)
#define DMA_CH8_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003208)
#define DMA_CH8_CTRL_TRIG_CLR (*(volatile uint32_t *)0x5000320c)
#define DMA_CH8_AL1_CTRL_CLR (*(volatile uint32_t *)0x50003210)
#define DMA_CH8_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x50003214)
#define DMA_CH8_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003218)
#define DMA_CH8_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x5000321c)
#define DMA_CH8_AL2_CTRL_CLR (*(volatile uint32_t *)0x50003220)
#define DMA_CH8_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003224)
#define DMA_CH8_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x50003228)
#define DMA_CH8_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000322c)
#define DMA_CH8_AL3_CTRL_CLR (*(volatile uint32_t *)0x50003230)
#define DMA_CH8_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003234)
#define DMA_CH8_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003238)
#define DMA_CH8_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000323c)
#define DMA_CH9_READ_ADDR_CLR (*(volatile uint32_t *)0x50003240)
#define DMA_CH9_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003244)
#define DMA_CH9_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003248)
#define DMA_CH9_CTRL_TRIG_CLR (*(volatile uint32_t *)0x5000324c)
#define DMA_CH9_AL1_CTRL_CLR (*(volatile uint32_t *)0x50003250)
#define DMA_CH9_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x50003254)
#define DMA_CH9_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003258)
#define DMA_CH9_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x5000325c)
#define DMA_CH9_AL2_CTRL_CLR (*(volatile uint32_t *)0x50003260)
#define DMA_CH9_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003264)
#define DMA_CH9_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x50003268)
#define DMA_CH9_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000326c)
#define DMA_CH9_AL3_CTRL_CLR (*(volatile uint32_t *)0x50003270)
#define DMA_CH9_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003274)
#define DMA_CH9_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003278)
#define DMA_CH9_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000327c)
#define DMA_CH10_READ_ADDR_CLR (*(volatile uint32_t *)0x50003280)
#define DMA_CH10_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003284)
#define DMA_CH10_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003288)
#define DMA_CH10_CTRL_TRIG_CLR (*(volatile uint32_t *)0x5000328c)
#define DMA_CH10_AL1_CTRL_CLR (*(volatile uint32_t *)0x50003290)
#define DMA_CH10_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x50003294)
#define DMA_CH10_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003298)
#define DMA_CH10_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x5000329c)
#define DMA_CH10_AL2_CTRL_CLR (*(volatile uint32_t *)0x500032a0)
#define DMA_CH10_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500032a4)
#define DMA_CH10_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x500032a8)
#define DMA_CH10_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500032ac)
#define DMA_CH10_AL3_CTRL_CLR (*(volatile uint32_t *)0x500032b0)
#define DMA_CH10_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500032b4)
#define DMA_CH10_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500032b8)
#define DMA_CH10_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500032bc)
#define DMA_CH11_READ_ADDR_CLR (*(volatile uint32_t *)0x500032c0)
#define DMA_CH11_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500032c4)
#define DMA_CH11_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500032c8)
#define DMA_CH11_CTRL_TRIG_CLR (*(volatile uint32_t *)0x500032cc)
#define DMA_CH11_AL1_CTRL_CLR (*(volatile uint32_t *)0x500032d0)
#define DMA_CH11_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x500032d4)
#define DMA_CH11_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500032d8)
#define DMA_CH11_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x500032dc)
#define DMA_CH11_AL2_CTRL_CLR (*(volatile uint32_t *)0x500032e0)
#define DMA_CH11_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500032e4)
#define DMA_CH11_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x500032e8)
#define DMA_CH11_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500032ec)
#define DMA_CH11_AL3_CTRL_CLR (*(volatile uint32_t *)0x500032f0)
#define DMA_CH11_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500032f4)
#define DMA_CH11_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500032f8)
#define DMA_CH11_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500032fc)
#define DMA_CH12_READ_ADDR_CLR (*(volatile uint32_t *)0x50003300)
#define DMA_CH12_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003304)
#define DMA_CH12_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003308)
#define DMA_CH12_CTRL_TRIG_CLR (*(volatile uint32_t *)0x5000330c)
#define DMA_CH12_AL1_CTRL_CLR (*(volatile uint32_t *)0x50003310)
#define DMA_CH12_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x50003314)
#define DMA_CH12_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003318)
#define DMA_CH12_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x5000331c)
#define DMA_CH12_AL2_CTRL_CLR (*(volatile uint32_t *)0x50003320)
#define DMA_CH12_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003324)
#define DMA_CH12_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x50003328)
#define DMA_CH12_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000332c)
#define DMA_CH12_AL3_CTRL_CLR (*(volatile uint32_t *)0x50003330)
#define DMA_CH12_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003334)
#define DMA_CH12_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003338)
#define DMA_CH12_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000333c)
#define DMA_CH13_READ_ADDR_CLR (*(volatile uint32_t *)0x50003340)
#define DMA_CH13_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003344)
#define DMA_CH13_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003348)
#define DMA_CH13_CTRL_TRIG_CLR (*(volatile uint32_t *)0x5000334c)
#define DMA_CH13_AL1_CTRL_CLR (*(volatile uint32_t *)0x50003350)
#define DMA_CH13_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x50003354)
#define DMA_CH13_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003358)
#define DMA_CH13_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x5000335c)
#define DMA_CH13_AL2_CTRL_CLR (*(volatile uint32_t *)0x50003360)
#define DMA_CH13_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003364)
#define DMA_CH13_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x50003368)
#define DMA_CH13_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000336c)
#define DMA_CH13_AL3_CTRL_CLR (*(volatile uint32_t *)0x50003370)
#define DMA_CH13_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003374)
#define DMA_CH13_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003378)
#define DMA_CH13_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x5000337c)
#define DMA_CH14_READ_ADDR_CLR (*(volatile uint32_t *)0x50003380)
#define DMA_CH14_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003384)
#define DMA_CH14_TRANS_COUNT_CLR (*(volatile uint32_t *)0x50003388)
#define DMA_CH14_CTRL_TRIG_CLR (*(volatile uint32_t *)0x5000338c)
#define DMA_CH14_AL1_CTRL_CLR (*(volatile uint32_t *)0x50003390)
#define DMA_CH14_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x50003394)
#define DMA_CH14_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x50003398)
#define DMA_CH14_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x5000339c)
#define DMA_CH14_AL2_CTRL_CLR (*(volatile uint32_t *)0x500033a0)
#define DMA_CH14_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500033a4)
#define DMA_CH14_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x500033a8)
#define DMA_CH14_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500033ac)
#define DMA_CH14_AL3_CTRL_CLR (*(volatile uint32_t *)0x500033b0)
#define DMA_CH14_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500033b4)
#define DMA_CH14_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500033b8)
#define DMA_CH14_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500033bc)
#define DMA_CH15_READ_ADDR_CLR (*(volatile uint32_t *)0x500033c0)
#define DMA_CH15_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500033c4)
#define DMA_CH15_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500033c8)
#define DMA_CH15_CTRL_TRIG_CLR (*(volatile uint32_t *)0x500033cc)
#define DMA_CH15_AL1_CTRL_CLR (*(volatile uint32_t *)0x500033d0)
#define DMA_CH15_AL1_READ_ADDR_CLR (*(volatile uint32_t *)0x500033d4)
#define DMA_CH15_AL1_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500033d8)
#define DMA_CH15_AL1_TRANS_COUNT_TRIG_CLR (*(volatile uint32_t *)0x500033dc)
#define DMA_CH15_AL2_CTRL_CLR (*(volatile uint32_t *)0x500033e0)
#define DMA_CH15_AL2_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500033e4)
#define DMA_CH15_AL2_READ_ADDR_CLR (*(volatile uint32_t *)0x500033e8)
#define DMA_CH15_AL2_WRITE_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500033ec)
#define DMA_CH15_AL3_CTRL_CLR (*(volatile uint32_t *)0x500033f0)
#define DMA_CH15_AL3_WRITE_ADDR_CLR (*(volatile uint32_t *)0x500033f4)
#define DMA_CH15_AL3_TRANS_COUNT_CLR (*(volatile uint32_t *)0x500033f8)
#define DMA_CH15_AL3_READ_ADDR_TRIG_CLR (*(volatile uint32_t *)0x500033fc)
#define DMA_INTR_CLR (*(volatile uint32_t *)0x50003400)
#define DMA_INTE0_CLR (*(volatile uint32_t *)0x50003404)
#define DMA_INTF0_CLR (*(volatile uint32_t *)0x50003408)
#define DMA_INTS0_CLR (*(volatile uint32_t *)0x5000340c)
#define DMA_INTE1_CLR (*(volatile uint32_t *)0x50003414)
#define DMA_INTF1_CLR (*(volatile uint32_t *)0x50003418)
#define DMA_INTS1_CLR (*(volatile uint32_t *)0x5000341c)
#define DMA_INTE2_CLR (*(volatile uint32_t *)0x50003424)
#define DMA_INTF2_CLR (*(volatile uint32_t *)0x50003428)
#define DMA_INTS2_CLR (*(volatile uint32_t *)0x5000342c)
#define DMA_INTE3_CLR (*(volatile uint32_t *)0x50003434)
#define DMA_INTF3_CLR (*(volatile uint32_t *)0x50003438)
#define DMA_INTS3_CLR (*(volatile uint32_t *)0x5000343c)
#define DMA_TIMER0_CLR (*(volatile uint32_t *)0x50003440)
#define DMA_TIMER1_CLR (*(volatile uint32_t *)0x50003444)
#define DMA_TIMER2_CLR (*(volatile uint32_t *)0x50003448)
#define DMA_TIMER3_CLR (*(volatile uint32_t *)0x5000344c)
#define DMA_MULTI_CHAN_TRIGGER_CLR (*(volatile uint32_t *)0x50003450)
#define DMA_SNIFF_CTRL_CLR (*(volatile uint32_t *)0x50003454)
#define DMA_SNIFF_DATA_CLR (*(volatile uint32_t *)0x50003458)
#define DMA_FIFO_LEVELS_CLR (*(volatile uint32_t *)0x50003460)
#define DMA_CHAN_ABORT_CLR (*(volatile uint32_t *)0x50003464)
#define DMA_N_CHANNELS_CLR (*(volatile uint32_t *)0x50003468)
#define DMA_SECCFG_CH0_CLR (*(volatile uint32_t *)0x50003480)
#define DMA_SECCFG_CH1_CLR (*(volatile uint32_t *)0x50003484)
#define DMA_SECCFG_CH2_CLR (*(volatile uint32_t *)0x50003488)
#define DMA_SECCFG_CH3_CLR (*(volatile uint32_t *)0x5000348c)
#define DMA_SECCFG_CH4_CLR (*(volatile uint32_t *)0x50003490)
#define DMA_SECCFG_CH5_CLR (*(volatile uint32_t *)0x50003494)
#define DMA_SECCFG_CH6_CLR (*(volatile uint32_t *)0x50003498)
#define DMA_SECCFG_CH7_CLR (*(volatile uint32_t *)0x5000349c)
#define DMA_SECCFG_CH8_CLR (*(volatile uint32_t *)0x500034a0)
#define DMA_SECCFG_CH9_CLR (*(volatile uint32_t *)0x500034a4)
#define DMA_SECCFG_CH10_CLR (*(volatile uint32_t *)0x500034a8)
#define DMA_SECCFG_CH11_CLR (*(volatile uint32_t *)0x500034ac)
#define DMA_SECCFG_CH12_CLR (*(volatile uint32_t *)0x500034b0)
#define DMA_SECCFG_CH13_CLR (*(volatile uint32_t *)0x500034b4)
#define DMA_SECCFG_CH14_CLR (*(volatile uint32_t *)0x500034b8)
#define DMA_SECCFG_CH15_CLR (*(volatile uint32_t *)0x500034bc)
#define DMA_SECCFG_IRQ0_CLR (*(volatile uint32_t *)0x500034c0)
#define DMA_SECCFG_IRQ1_CLR (*(volatile uint32_t *)0x500034c4)
#define DMA_SECCFG_IRQ2_CLR (*(volatile uint32_t *)0x500034c8)
#define DMA_SECCFG_IRQ3_CLR (*(volatile uint32_t *)0x500034cc)
#define DMA_SECCFG_MISC_CLR (*(volatile uint32_t *)0x500034d0)
#define DMA_MPU_CTRL_CLR (*(volatile uint32_t *)0x50003500)
#define DMA_MPU_BAR0_CLR (*(volatile uint32_t *)0x50003504)
#define DMA_MPU_LAR0_CLR (*(volatile uint32_t *)0x50003508)
#define DMA_MPU_BAR1_CLR (*(volatile uint32_t *)0x5000350c)
#define DMA_MPU_LAR1_CLR (*(volatile uint32_t *)0x50003510)
#define DMA_MPU_BAR2_CLR (*(volatile uint32_t *)0x50003514)
#define DMA_MPU_LAR2_CLR (*(volatile uint32_t *)0x50003518)
#define DMA_MPU_BAR3_CLR (*(volatile uint32_t *)0x5000351c)
#define DMA_MPU_LAR3_CLR (*(volatile uint32_t *)0x50003520)
#define DMA_MPU_BAR4_CLR (*(volatile uint32_t *)0x50003524)
#define DMA_MPU_LAR4_CLR (*(volatile uint32_t *)0x50003528)
#define DMA_MPU_BAR5_CLR (*(volatile uint32_t *)0x5000352c)
#define DMA_MPU_LAR5_CLR (*(volatile uint32_t *)0x50003530)
#define DMA_MPU_BAR6_CLR (*(volatile uint32_t *)0x50003534)
#define DMA_MPU_LAR6_CLR (*(volatile uint32_t *)0x50003538)
#define DMA_MPU_BAR7_CLR (*(volatile uint32_t *)0x5000353c)
#define DMA_MPU_LAR7_CLR (*(volatile uint32_t *)0x50003540)
#define DMA_CH0_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003800)
#define DMA_CH0_DBG_TCR_CLR (*(volatile uint32_t *)0x50003804)
#define DMA_CH1_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003840)
#define DMA_CH1_DBG_TCR_CLR (*(volatile uint32_t *)0x50003844)
#define DMA_CH2_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003880)
#define DMA_CH2_DBG_TCR_CLR (*(volatile uint32_t *)0x50003884)
#define DMA_CH3_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x500038c0)
#define DMA_CH3_DBG_TCR_CLR (*(volatile uint32_t *)0x500038c4)
#define DMA_CH4_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003900)
#define DMA_CH4_DBG_TCR_CLR (*(volatile uint32_t *)0x50003904)
#define DMA_CH5_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003940)
#define DMA_CH5_DBG_TCR_CLR (*(volatile uint32_t *)0x50003944)
#define DMA_CH6_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003980)
#define DMA_CH6_DBG_TCR_CLR (*(volatile uint32_t *)0x50003984)
#define DMA_CH7_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x500039c0)
#define DMA_CH7_DBG_TCR_CLR (*(volatile uint32_t *)0x500039c4)
#define DMA_CH8_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003a00)
#define DMA_CH8_DBG_TCR_CLR (*(volatile uint32_t *)0x50003a04)
#define DMA_CH9_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003a40)
#define DMA_CH9_DBG_TCR_CLR (*(volatile uint32_t *)0x50003a44)
#define DMA_CH10_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003a80)
#define DMA_CH10_DBG_TCR_CLR (*(volatile uint32_t *)0x50003a84)
#define DMA_CH11_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003ac0)
#define DMA_CH11_DBG_TCR_CLR (*(volatile uint32_t *)0x50003ac4)
#define DMA_CH12_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003b00)
#define DMA_CH12_DBG_TCR_CLR (*(volatile uint32_t *)0x50003b04)
#define DMA_CH13_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003b40)
#define DMA_CH13_DBG_TCR_CLR (*(volatile uint32_t *)0x50003b44)
#define DMA_CH14_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003b80)
#define DMA_CH14_DBG_TCR_CLR (*(volatile uint32_t *)0x50003b84)
#define DMA_CH15_DBG_CTDREQ_CLR (*(volatile uint32_t *)0x50003bc0)
#define DMA_CH15_DBG_TCR_CLR (*(volatile uint32_t *)0x50003bc4)

/*CH0_READ_ADDR Register macros*/


/*CH0_WRITE_ADDR Register macros*/


/*CH0_TRANS_COUNT Register macros*/

#define DMA_CH0_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH0_TRANS_COUNT_MODE_MASK DMA_CH0_TRANS_COUNT_MODE(ALL1)
#define DMA_CH0_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH0_TRANS_COUNT_COUNT_MASK DMA_CH0_TRANS_COUNT_COUNT(ALL1)

/*CH0_CTRL_TRIG Register macros*/

#define DMA_CH0_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH0_CTRL_TRIG_AHB_ERROR_MASK DMA_CH0_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH0_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH0_CTRL_TRIG_READ_ERROR_MASK DMA_CH0_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH0_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH0_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH0_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH0_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH0_CTRL_TRIG_BUSY_MASK DMA_CH0_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH0_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH0_CTRL_TRIG_SNIFF_EN_MASK DMA_CH0_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH0_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH0_CTRL_TRIG_BSWAP_MASK DMA_CH0_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH0_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH0_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH0_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH0_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH0_CTRL_TRIG_TREQ_SEL_MASK DMA_CH0_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH0_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH0_CTRL_TRIG_CHAIN_TO_MASK DMA_CH0_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH0_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH0_CTRL_TRIG_RING_SEL_MASK DMA_CH0_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH0_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH0_CTRL_TRIG_RING_SIZE_MASK DMA_CH0_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH0_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH0_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH0_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH0_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH0_CTRL_TRIG_INCR_WRITE_MASK DMA_CH0_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH0_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH0_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH0_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH0_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH0_CTRL_TRIG_INCR_READ_MASK DMA_CH0_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH0_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH0_CTRL_TRIG_DATA_SIZE_MASK DMA_CH0_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH0_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH0_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH0_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH0_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH0_CTRL_TRIG_EN_MASK DMA_CH0_CTRL_TRIG_EN(ALL1)

/*CH0_AL1_CTRL Register macros*/


/*CH0_AL1_READ_ADDR Register macros*/


/*CH0_AL1_WRITE_ADDR Register macros*/


/*CH0_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH0_AL2_CTRL Register macros*/


/*CH0_AL2_TRANS_COUNT Register macros*/


/*CH0_AL2_READ_ADDR Register macros*/


/*CH0_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH0_AL3_CTRL Register macros*/


/*CH0_AL3_WRITE_ADDR Register macros*/


/*CH0_AL3_TRANS_COUNT Register macros*/


/*CH0_AL3_READ_ADDR_TRIG Register macros*/


/*CH1_READ_ADDR Register macros*/


/*CH1_WRITE_ADDR Register macros*/


/*CH1_TRANS_COUNT Register macros*/

#define DMA_CH1_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH1_TRANS_COUNT_MODE_MASK DMA_CH1_TRANS_COUNT_MODE(ALL1)
#define DMA_CH1_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH1_TRANS_COUNT_COUNT_MASK DMA_CH1_TRANS_COUNT_COUNT(ALL1)

/*CH1_CTRL_TRIG Register macros*/

#define DMA_CH1_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH1_CTRL_TRIG_AHB_ERROR_MASK DMA_CH1_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH1_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH1_CTRL_TRIG_READ_ERROR_MASK DMA_CH1_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH1_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH1_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH1_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH1_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH1_CTRL_TRIG_BUSY_MASK DMA_CH1_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH1_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH1_CTRL_TRIG_SNIFF_EN_MASK DMA_CH1_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH1_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH1_CTRL_TRIG_BSWAP_MASK DMA_CH1_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH1_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH1_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH1_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH1_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH1_CTRL_TRIG_TREQ_SEL_MASK DMA_CH1_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH1_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH1_CTRL_TRIG_CHAIN_TO_MASK DMA_CH1_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH1_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH1_CTRL_TRIG_RING_SEL_MASK DMA_CH1_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH1_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH1_CTRL_TRIG_RING_SIZE_MASK DMA_CH1_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH1_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH1_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH1_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH1_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH1_CTRL_TRIG_INCR_WRITE_MASK DMA_CH1_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH1_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH1_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH1_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH1_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH1_CTRL_TRIG_INCR_READ_MASK DMA_CH1_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH1_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH1_CTRL_TRIG_DATA_SIZE_MASK DMA_CH1_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH1_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH1_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH1_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH1_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH1_CTRL_TRIG_EN_MASK DMA_CH1_CTRL_TRIG_EN(ALL1)

/*CH1_AL1_CTRL Register macros*/


/*CH1_AL1_READ_ADDR Register macros*/


/*CH1_AL1_WRITE_ADDR Register macros*/


/*CH1_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH1_AL2_CTRL Register macros*/


/*CH1_AL2_TRANS_COUNT Register macros*/


/*CH1_AL2_READ_ADDR Register macros*/


/*CH1_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH1_AL3_CTRL Register macros*/


/*CH1_AL3_WRITE_ADDR Register macros*/


/*CH1_AL3_TRANS_COUNT Register macros*/


/*CH1_AL3_READ_ADDR_TRIG Register macros*/


/*CH2_READ_ADDR Register macros*/


/*CH2_WRITE_ADDR Register macros*/


/*CH2_TRANS_COUNT Register macros*/

#define DMA_CH2_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH2_TRANS_COUNT_MODE_MASK DMA_CH2_TRANS_COUNT_MODE(ALL1)
#define DMA_CH2_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH2_TRANS_COUNT_COUNT_MASK DMA_CH2_TRANS_COUNT_COUNT(ALL1)

/*CH2_CTRL_TRIG Register macros*/

#define DMA_CH2_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH2_CTRL_TRIG_AHB_ERROR_MASK DMA_CH2_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH2_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH2_CTRL_TRIG_READ_ERROR_MASK DMA_CH2_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH2_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH2_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH2_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH2_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH2_CTRL_TRIG_BUSY_MASK DMA_CH2_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH2_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH2_CTRL_TRIG_SNIFF_EN_MASK DMA_CH2_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH2_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH2_CTRL_TRIG_BSWAP_MASK DMA_CH2_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH2_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH2_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH2_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH2_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH2_CTRL_TRIG_TREQ_SEL_MASK DMA_CH2_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH2_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH2_CTRL_TRIG_CHAIN_TO_MASK DMA_CH2_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH2_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH2_CTRL_TRIG_RING_SEL_MASK DMA_CH2_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH2_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH2_CTRL_TRIG_RING_SIZE_MASK DMA_CH2_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH2_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH2_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH2_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH2_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH2_CTRL_TRIG_INCR_WRITE_MASK DMA_CH2_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH2_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH2_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH2_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH2_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH2_CTRL_TRIG_INCR_READ_MASK DMA_CH2_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH2_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH2_CTRL_TRIG_DATA_SIZE_MASK DMA_CH2_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH2_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH2_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH2_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH2_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH2_CTRL_TRIG_EN_MASK DMA_CH2_CTRL_TRIG_EN(ALL1)

/*CH2_AL1_CTRL Register macros*/


/*CH2_AL1_READ_ADDR Register macros*/


/*CH2_AL1_WRITE_ADDR Register macros*/


/*CH2_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH2_AL2_CTRL Register macros*/


/*CH2_AL2_TRANS_COUNT Register macros*/


/*CH2_AL2_READ_ADDR Register macros*/


/*CH2_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH2_AL3_CTRL Register macros*/


/*CH2_AL3_WRITE_ADDR Register macros*/


/*CH2_AL3_TRANS_COUNT Register macros*/


/*CH2_AL3_READ_ADDR_TRIG Register macros*/


/*CH3_READ_ADDR Register macros*/


/*CH3_WRITE_ADDR Register macros*/


/*CH3_TRANS_COUNT Register macros*/

#define DMA_CH3_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH3_TRANS_COUNT_MODE_MASK DMA_CH3_TRANS_COUNT_MODE(ALL1)
#define DMA_CH3_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH3_TRANS_COUNT_COUNT_MASK DMA_CH3_TRANS_COUNT_COUNT(ALL1)

/*CH3_CTRL_TRIG Register macros*/

#define DMA_CH3_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH3_CTRL_TRIG_AHB_ERROR_MASK DMA_CH3_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH3_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH3_CTRL_TRIG_READ_ERROR_MASK DMA_CH3_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH3_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH3_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH3_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH3_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH3_CTRL_TRIG_BUSY_MASK DMA_CH3_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH3_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH3_CTRL_TRIG_SNIFF_EN_MASK DMA_CH3_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH3_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH3_CTRL_TRIG_BSWAP_MASK DMA_CH3_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH3_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH3_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH3_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH3_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH3_CTRL_TRIG_TREQ_SEL_MASK DMA_CH3_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH3_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH3_CTRL_TRIG_CHAIN_TO_MASK DMA_CH3_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH3_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH3_CTRL_TRIG_RING_SEL_MASK DMA_CH3_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH3_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH3_CTRL_TRIG_RING_SIZE_MASK DMA_CH3_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH3_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH3_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH3_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH3_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH3_CTRL_TRIG_INCR_WRITE_MASK DMA_CH3_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH3_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH3_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH3_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH3_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH3_CTRL_TRIG_INCR_READ_MASK DMA_CH3_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH3_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH3_CTRL_TRIG_DATA_SIZE_MASK DMA_CH3_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH3_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH3_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH3_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH3_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH3_CTRL_TRIG_EN_MASK DMA_CH3_CTRL_TRIG_EN(ALL1)

/*CH3_AL1_CTRL Register macros*/


/*CH3_AL1_READ_ADDR Register macros*/


/*CH3_AL1_WRITE_ADDR Register macros*/


/*CH3_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH3_AL2_CTRL Register macros*/


/*CH3_AL2_TRANS_COUNT Register macros*/


/*CH3_AL2_READ_ADDR Register macros*/


/*CH3_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH3_AL3_CTRL Register macros*/


/*CH3_AL3_WRITE_ADDR Register macros*/


/*CH3_AL3_TRANS_COUNT Register macros*/


/*CH3_AL3_READ_ADDR_TRIG Register macros*/


/*CH4_READ_ADDR Register macros*/


/*CH4_WRITE_ADDR Register macros*/


/*CH4_TRANS_COUNT Register macros*/

#define DMA_CH4_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH4_TRANS_COUNT_MODE_MASK DMA_CH4_TRANS_COUNT_MODE(ALL1)
#define DMA_CH4_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH4_TRANS_COUNT_COUNT_MASK DMA_CH4_TRANS_COUNT_COUNT(ALL1)

/*CH4_CTRL_TRIG Register macros*/

#define DMA_CH4_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH4_CTRL_TRIG_AHB_ERROR_MASK DMA_CH4_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH4_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH4_CTRL_TRIG_READ_ERROR_MASK DMA_CH4_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH4_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH4_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH4_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH4_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH4_CTRL_TRIG_BUSY_MASK DMA_CH4_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH4_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH4_CTRL_TRIG_SNIFF_EN_MASK DMA_CH4_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH4_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH4_CTRL_TRIG_BSWAP_MASK DMA_CH4_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH4_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH4_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH4_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH4_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH4_CTRL_TRIG_TREQ_SEL_MASK DMA_CH4_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH4_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH4_CTRL_TRIG_CHAIN_TO_MASK DMA_CH4_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH4_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH4_CTRL_TRIG_RING_SEL_MASK DMA_CH4_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH4_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH4_CTRL_TRIG_RING_SIZE_MASK DMA_CH4_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH4_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH4_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH4_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH4_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH4_CTRL_TRIG_INCR_WRITE_MASK DMA_CH4_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH4_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH4_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH4_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH4_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH4_CTRL_TRIG_INCR_READ_MASK DMA_CH4_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH4_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH4_CTRL_TRIG_DATA_SIZE_MASK DMA_CH4_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH4_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH4_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH4_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH4_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH4_CTRL_TRIG_EN_MASK DMA_CH4_CTRL_TRIG_EN(ALL1)

/*CH4_AL1_CTRL Register macros*/


/*CH4_AL1_READ_ADDR Register macros*/


/*CH4_AL1_WRITE_ADDR Register macros*/


/*CH4_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH4_AL2_CTRL Register macros*/


/*CH4_AL2_TRANS_COUNT Register macros*/


/*CH4_AL2_READ_ADDR Register macros*/


/*CH4_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH4_AL3_CTRL Register macros*/


/*CH4_AL3_WRITE_ADDR Register macros*/


/*CH4_AL3_TRANS_COUNT Register macros*/


/*CH4_AL3_READ_ADDR_TRIG Register macros*/


/*CH5_READ_ADDR Register macros*/


/*CH5_WRITE_ADDR Register macros*/


/*CH5_TRANS_COUNT Register macros*/

#define DMA_CH5_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH5_TRANS_COUNT_MODE_MASK DMA_CH5_TRANS_COUNT_MODE(ALL1)
#define DMA_CH5_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH5_TRANS_COUNT_COUNT_MASK DMA_CH5_TRANS_COUNT_COUNT(ALL1)

/*CH5_CTRL_TRIG Register macros*/

#define DMA_CH5_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH5_CTRL_TRIG_AHB_ERROR_MASK DMA_CH5_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH5_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH5_CTRL_TRIG_READ_ERROR_MASK DMA_CH5_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH5_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH5_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH5_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH5_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH5_CTRL_TRIG_BUSY_MASK DMA_CH5_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH5_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH5_CTRL_TRIG_SNIFF_EN_MASK DMA_CH5_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH5_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH5_CTRL_TRIG_BSWAP_MASK DMA_CH5_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH5_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH5_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH5_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH5_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH5_CTRL_TRIG_TREQ_SEL_MASK DMA_CH5_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH5_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH5_CTRL_TRIG_CHAIN_TO_MASK DMA_CH5_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH5_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH5_CTRL_TRIG_RING_SEL_MASK DMA_CH5_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH5_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH5_CTRL_TRIG_RING_SIZE_MASK DMA_CH5_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH5_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH5_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH5_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH5_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH5_CTRL_TRIG_INCR_WRITE_MASK DMA_CH5_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH5_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH5_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH5_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH5_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH5_CTRL_TRIG_INCR_READ_MASK DMA_CH5_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH5_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH5_CTRL_TRIG_DATA_SIZE_MASK DMA_CH5_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH5_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH5_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH5_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH5_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH5_CTRL_TRIG_EN_MASK DMA_CH5_CTRL_TRIG_EN(ALL1)

/*CH5_AL1_CTRL Register macros*/


/*CH5_AL1_READ_ADDR Register macros*/


/*CH5_AL1_WRITE_ADDR Register macros*/


/*CH5_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH5_AL2_CTRL Register macros*/


/*CH5_AL2_TRANS_COUNT Register macros*/


/*CH5_AL2_READ_ADDR Register macros*/


/*CH5_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH5_AL3_CTRL Register macros*/


/*CH5_AL3_WRITE_ADDR Register macros*/


/*CH5_AL3_TRANS_COUNT Register macros*/


/*CH5_AL3_READ_ADDR_TRIG Register macros*/


/*CH6_READ_ADDR Register macros*/


/*CH6_WRITE_ADDR Register macros*/


/*CH6_TRANS_COUNT Register macros*/

#define DMA_CH6_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH6_TRANS_COUNT_MODE_MASK DMA_CH6_TRANS_COUNT_MODE(ALL1)
#define DMA_CH6_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH6_TRANS_COUNT_COUNT_MASK DMA_CH6_TRANS_COUNT_COUNT(ALL1)

/*CH6_CTRL_TRIG Register macros*/

#define DMA_CH6_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH6_CTRL_TRIG_AHB_ERROR_MASK DMA_CH6_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH6_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH6_CTRL_TRIG_READ_ERROR_MASK DMA_CH6_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH6_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH6_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH6_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH6_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH6_CTRL_TRIG_BUSY_MASK DMA_CH6_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH6_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH6_CTRL_TRIG_SNIFF_EN_MASK DMA_CH6_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH6_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH6_CTRL_TRIG_BSWAP_MASK DMA_CH6_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH6_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH6_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH6_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH6_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH6_CTRL_TRIG_TREQ_SEL_MASK DMA_CH6_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH6_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH6_CTRL_TRIG_CHAIN_TO_MASK DMA_CH6_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH6_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH6_CTRL_TRIG_RING_SEL_MASK DMA_CH6_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH6_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH6_CTRL_TRIG_RING_SIZE_MASK DMA_CH6_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH6_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH6_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH6_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH6_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH6_CTRL_TRIG_INCR_WRITE_MASK DMA_CH6_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH6_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH6_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH6_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH6_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH6_CTRL_TRIG_INCR_READ_MASK DMA_CH6_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH6_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH6_CTRL_TRIG_DATA_SIZE_MASK DMA_CH6_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH6_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH6_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH6_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH6_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH6_CTRL_TRIG_EN_MASK DMA_CH6_CTRL_TRIG_EN(ALL1)

/*CH6_AL1_CTRL Register macros*/


/*CH6_AL1_READ_ADDR Register macros*/


/*CH6_AL1_WRITE_ADDR Register macros*/


/*CH6_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH6_AL2_CTRL Register macros*/


/*CH6_AL2_TRANS_COUNT Register macros*/


/*CH6_AL2_READ_ADDR Register macros*/


/*CH6_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH6_AL3_CTRL Register macros*/


/*CH6_AL3_WRITE_ADDR Register macros*/


/*CH6_AL3_TRANS_COUNT Register macros*/


/*CH6_AL3_READ_ADDR_TRIG Register macros*/


/*CH7_READ_ADDR Register macros*/


/*CH7_WRITE_ADDR Register macros*/


/*CH7_TRANS_COUNT Register macros*/

#define DMA_CH7_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH7_TRANS_COUNT_MODE_MASK DMA_CH7_TRANS_COUNT_MODE(ALL1)
#define DMA_CH7_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH7_TRANS_COUNT_COUNT_MASK DMA_CH7_TRANS_COUNT_COUNT(ALL1)

/*CH7_CTRL_TRIG Register macros*/

#define DMA_CH7_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH7_CTRL_TRIG_AHB_ERROR_MASK DMA_CH7_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH7_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH7_CTRL_TRIG_READ_ERROR_MASK DMA_CH7_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH7_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH7_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH7_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH7_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH7_CTRL_TRIG_BUSY_MASK DMA_CH7_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH7_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH7_CTRL_TRIG_SNIFF_EN_MASK DMA_CH7_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH7_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH7_CTRL_TRIG_BSWAP_MASK DMA_CH7_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH7_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH7_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH7_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH7_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH7_CTRL_TRIG_TREQ_SEL_MASK DMA_CH7_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH7_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH7_CTRL_TRIG_CHAIN_TO_MASK DMA_CH7_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH7_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH7_CTRL_TRIG_RING_SEL_MASK DMA_CH7_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH7_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH7_CTRL_TRIG_RING_SIZE_MASK DMA_CH7_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH7_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH7_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH7_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH7_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH7_CTRL_TRIG_INCR_WRITE_MASK DMA_CH7_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH7_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH7_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH7_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH7_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH7_CTRL_TRIG_INCR_READ_MASK DMA_CH7_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH7_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH7_CTRL_TRIG_DATA_SIZE_MASK DMA_CH7_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH7_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH7_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH7_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH7_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH7_CTRL_TRIG_EN_MASK DMA_CH7_CTRL_TRIG_EN(ALL1)

/*CH7_AL1_CTRL Register macros*/


/*CH7_AL1_READ_ADDR Register macros*/


/*CH7_AL1_WRITE_ADDR Register macros*/


/*CH7_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH7_AL2_CTRL Register macros*/


/*CH7_AL2_TRANS_COUNT Register macros*/


/*CH7_AL2_READ_ADDR Register macros*/


/*CH7_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH7_AL3_CTRL Register macros*/


/*CH7_AL3_WRITE_ADDR Register macros*/


/*CH7_AL3_TRANS_COUNT Register macros*/


/*CH7_AL3_READ_ADDR_TRIG Register macros*/


/*CH8_READ_ADDR Register macros*/


/*CH8_WRITE_ADDR Register macros*/


/*CH8_TRANS_COUNT Register macros*/

#define DMA_CH8_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH8_TRANS_COUNT_MODE_MASK DMA_CH8_TRANS_COUNT_MODE(ALL1)
#define DMA_CH8_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH8_TRANS_COUNT_COUNT_MASK DMA_CH8_TRANS_COUNT_COUNT(ALL1)

/*CH8_CTRL_TRIG Register macros*/

#define DMA_CH8_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH8_CTRL_TRIG_AHB_ERROR_MASK DMA_CH8_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH8_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH8_CTRL_TRIG_READ_ERROR_MASK DMA_CH8_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH8_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH8_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH8_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH8_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH8_CTRL_TRIG_BUSY_MASK DMA_CH8_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH8_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH8_CTRL_TRIG_SNIFF_EN_MASK DMA_CH8_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH8_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH8_CTRL_TRIG_BSWAP_MASK DMA_CH8_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH8_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH8_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH8_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH8_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH8_CTRL_TRIG_TREQ_SEL_MASK DMA_CH8_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH8_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH8_CTRL_TRIG_CHAIN_TO_MASK DMA_CH8_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH8_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH8_CTRL_TRIG_RING_SEL_MASK DMA_CH8_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH8_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH8_CTRL_TRIG_RING_SIZE_MASK DMA_CH8_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH8_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH8_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH8_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH8_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH8_CTRL_TRIG_INCR_WRITE_MASK DMA_CH8_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH8_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH8_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH8_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH8_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH8_CTRL_TRIG_INCR_READ_MASK DMA_CH8_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH8_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH8_CTRL_TRIG_DATA_SIZE_MASK DMA_CH8_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH8_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH8_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH8_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH8_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH8_CTRL_TRIG_EN_MASK DMA_CH8_CTRL_TRIG_EN(ALL1)

/*CH8_AL1_CTRL Register macros*/


/*CH8_AL1_READ_ADDR Register macros*/


/*CH8_AL1_WRITE_ADDR Register macros*/


/*CH8_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH8_AL2_CTRL Register macros*/


/*CH8_AL2_TRANS_COUNT Register macros*/


/*CH8_AL2_READ_ADDR Register macros*/


/*CH8_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH8_AL3_CTRL Register macros*/


/*CH8_AL3_WRITE_ADDR Register macros*/


/*CH8_AL3_TRANS_COUNT Register macros*/


/*CH8_AL3_READ_ADDR_TRIG Register macros*/


/*CH9_READ_ADDR Register macros*/


/*CH9_WRITE_ADDR Register macros*/


/*CH9_TRANS_COUNT Register macros*/

#define DMA_CH9_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH9_TRANS_COUNT_MODE_MASK DMA_CH9_TRANS_COUNT_MODE(ALL1)
#define DMA_CH9_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH9_TRANS_COUNT_COUNT_MASK DMA_CH9_TRANS_COUNT_COUNT(ALL1)

/*CH9_CTRL_TRIG Register macros*/

#define DMA_CH9_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH9_CTRL_TRIG_AHB_ERROR_MASK DMA_CH9_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH9_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH9_CTRL_TRIG_READ_ERROR_MASK DMA_CH9_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH9_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH9_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH9_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH9_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH9_CTRL_TRIG_BUSY_MASK DMA_CH9_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH9_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH9_CTRL_TRIG_SNIFF_EN_MASK DMA_CH9_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH9_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH9_CTRL_TRIG_BSWAP_MASK DMA_CH9_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH9_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH9_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH9_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH9_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH9_CTRL_TRIG_TREQ_SEL_MASK DMA_CH9_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH9_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH9_CTRL_TRIG_CHAIN_TO_MASK DMA_CH9_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH9_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH9_CTRL_TRIG_RING_SEL_MASK DMA_CH9_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH9_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH9_CTRL_TRIG_RING_SIZE_MASK DMA_CH9_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH9_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH9_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH9_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH9_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH9_CTRL_TRIG_INCR_WRITE_MASK DMA_CH9_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH9_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH9_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH9_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH9_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH9_CTRL_TRIG_INCR_READ_MASK DMA_CH9_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH9_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH9_CTRL_TRIG_DATA_SIZE_MASK DMA_CH9_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH9_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH9_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH9_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH9_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH9_CTRL_TRIG_EN_MASK DMA_CH9_CTRL_TRIG_EN(ALL1)

/*CH9_AL1_CTRL Register macros*/


/*CH9_AL1_READ_ADDR Register macros*/


/*CH9_AL1_WRITE_ADDR Register macros*/


/*CH9_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH9_AL2_CTRL Register macros*/


/*CH9_AL2_TRANS_COUNT Register macros*/


/*CH9_AL2_READ_ADDR Register macros*/


/*CH9_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH9_AL3_CTRL Register macros*/


/*CH9_AL3_WRITE_ADDR Register macros*/


/*CH9_AL3_TRANS_COUNT Register macros*/


/*CH9_AL3_READ_ADDR_TRIG Register macros*/


/*CH10_READ_ADDR Register macros*/


/*CH10_WRITE_ADDR Register macros*/


/*CH10_TRANS_COUNT Register macros*/

#define DMA_CH10_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH10_TRANS_COUNT_MODE_MASK DMA_CH10_TRANS_COUNT_MODE(ALL1)
#define DMA_CH10_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH10_TRANS_COUNT_COUNT_MASK DMA_CH10_TRANS_COUNT_COUNT(ALL1)

/*CH10_CTRL_TRIG Register macros*/

#define DMA_CH10_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH10_CTRL_TRIG_AHB_ERROR_MASK DMA_CH10_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH10_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH10_CTRL_TRIG_READ_ERROR_MASK DMA_CH10_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH10_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH10_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH10_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH10_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH10_CTRL_TRIG_BUSY_MASK DMA_CH10_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH10_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH10_CTRL_TRIG_SNIFF_EN_MASK DMA_CH10_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH10_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH10_CTRL_TRIG_BSWAP_MASK DMA_CH10_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH10_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH10_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH10_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH10_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH10_CTRL_TRIG_TREQ_SEL_MASK DMA_CH10_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH10_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH10_CTRL_TRIG_CHAIN_TO_MASK DMA_CH10_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH10_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH10_CTRL_TRIG_RING_SEL_MASK DMA_CH10_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH10_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH10_CTRL_TRIG_RING_SIZE_MASK DMA_CH10_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH10_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH10_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH10_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH10_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH10_CTRL_TRIG_INCR_WRITE_MASK DMA_CH10_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH10_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH10_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH10_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH10_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH10_CTRL_TRIG_INCR_READ_MASK DMA_CH10_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH10_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH10_CTRL_TRIG_DATA_SIZE_MASK DMA_CH10_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH10_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH10_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH10_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH10_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH10_CTRL_TRIG_EN_MASK DMA_CH10_CTRL_TRIG_EN(ALL1)

/*CH10_AL1_CTRL Register macros*/


/*CH10_AL1_READ_ADDR Register macros*/


/*CH10_AL1_WRITE_ADDR Register macros*/


/*CH10_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH10_AL2_CTRL Register macros*/


/*CH10_AL2_TRANS_COUNT Register macros*/


/*CH10_AL2_READ_ADDR Register macros*/


/*CH10_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH10_AL3_CTRL Register macros*/


/*CH10_AL3_WRITE_ADDR Register macros*/


/*CH10_AL3_TRANS_COUNT Register macros*/


/*CH10_AL3_READ_ADDR_TRIG Register macros*/


/*CH11_READ_ADDR Register macros*/


/*CH11_WRITE_ADDR Register macros*/


/*CH11_TRANS_COUNT Register macros*/

#define DMA_CH11_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH11_TRANS_COUNT_MODE_MASK DMA_CH11_TRANS_COUNT_MODE(ALL1)
#define DMA_CH11_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH11_TRANS_COUNT_COUNT_MASK DMA_CH11_TRANS_COUNT_COUNT(ALL1)

/*CH11_CTRL_TRIG Register macros*/

#define DMA_CH11_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH11_CTRL_TRIG_AHB_ERROR_MASK DMA_CH11_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH11_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH11_CTRL_TRIG_READ_ERROR_MASK DMA_CH11_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH11_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH11_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH11_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH11_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH11_CTRL_TRIG_BUSY_MASK DMA_CH11_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH11_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH11_CTRL_TRIG_SNIFF_EN_MASK DMA_CH11_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH11_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH11_CTRL_TRIG_BSWAP_MASK DMA_CH11_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH11_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH11_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH11_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH11_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH11_CTRL_TRIG_TREQ_SEL_MASK DMA_CH11_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH11_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH11_CTRL_TRIG_CHAIN_TO_MASK DMA_CH11_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH11_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH11_CTRL_TRIG_RING_SEL_MASK DMA_CH11_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH11_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH11_CTRL_TRIG_RING_SIZE_MASK DMA_CH11_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH11_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH11_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH11_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH11_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH11_CTRL_TRIG_INCR_WRITE_MASK DMA_CH11_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH11_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH11_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH11_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH11_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH11_CTRL_TRIG_INCR_READ_MASK DMA_CH11_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH11_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH11_CTRL_TRIG_DATA_SIZE_MASK DMA_CH11_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH11_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH11_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH11_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH11_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH11_CTRL_TRIG_EN_MASK DMA_CH11_CTRL_TRIG_EN(ALL1)

/*CH11_AL1_CTRL Register macros*/


/*CH11_AL1_READ_ADDR Register macros*/


/*CH11_AL1_WRITE_ADDR Register macros*/


/*CH11_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH11_AL2_CTRL Register macros*/


/*CH11_AL2_TRANS_COUNT Register macros*/


/*CH11_AL2_READ_ADDR Register macros*/


/*CH11_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH11_AL3_CTRL Register macros*/


/*CH11_AL3_WRITE_ADDR Register macros*/


/*CH11_AL3_TRANS_COUNT Register macros*/


/*CH11_AL3_READ_ADDR_TRIG Register macros*/


/*CH12_READ_ADDR Register macros*/


/*CH12_WRITE_ADDR Register macros*/


/*CH12_TRANS_COUNT Register macros*/

#define DMA_CH12_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH12_TRANS_COUNT_MODE_MASK DMA_CH12_TRANS_COUNT_MODE(ALL1)
#define DMA_CH12_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH12_TRANS_COUNT_COUNT_MASK DMA_CH12_TRANS_COUNT_COUNT(ALL1)

/*CH12_CTRL_TRIG Register macros*/

#define DMA_CH12_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH12_CTRL_TRIG_AHB_ERROR_MASK DMA_CH12_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH12_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH12_CTRL_TRIG_READ_ERROR_MASK DMA_CH12_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH12_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH12_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH12_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH12_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH12_CTRL_TRIG_BUSY_MASK DMA_CH12_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH12_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH12_CTRL_TRIG_SNIFF_EN_MASK DMA_CH12_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH12_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH12_CTRL_TRIG_BSWAP_MASK DMA_CH12_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH12_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH12_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH12_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH12_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH12_CTRL_TRIG_TREQ_SEL_MASK DMA_CH12_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH12_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH12_CTRL_TRIG_CHAIN_TO_MASK DMA_CH12_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH12_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH12_CTRL_TRIG_RING_SEL_MASK DMA_CH12_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH12_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH12_CTRL_TRIG_RING_SIZE_MASK DMA_CH12_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH12_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH12_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH12_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH12_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH12_CTRL_TRIG_INCR_WRITE_MASK DMA_CH12_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH12_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH12_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH12_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH12_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH12_CTRL_TRIG_INCR_READ_MASK DMA_CH12_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH12_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH12_CTRL_TRIG_DATA_SIZE_MASK DMA_CH12_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH12_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH12_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH12_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH12_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH12_CTRL_TRIG_EN_MASK DMA_CH12_CTRL_TRIG_EN(ALL1)

/*CH12_AL1_CTRL Register macros*/


/*CH12_AL1_READ_ADDR Register macros*/


/*CH12_AL1_WRITE_ADDR Register macros*/


/*CH12_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH12_AL2_CTRL Register macros*/


/*CH12_AL2_TRANS_COUNT Register macros*/


/*CH12_AL2_READ_ADDR Register macros*/


/*CH12_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH12_AL3_CTRL Register macros*/


/*CH12_AL3_WRITE_ADDR Register macros*/


/*CH12_AL3_TRANS_COUNT Register macros*/


/*CH12_AL3_READ_ADDR_TRIG Register macros*/


/*CH13_READ_ADDR Register macros*/


/*CH13_WRITE_ADDR Register macros*/


/*CH13_TRANS_COUNT Register macros*/

#define DMA_CH13_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH13_TRANS_COUNT_MODE_MASK DMA_CH13_TRANS_COUNT_MODE(ALL1)
#define DMA_CH13_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH13_TRANS_COUNT_COUNT_MASK DMA_CH13_TRANS_COUNT_COUNT(ALL1)

/*CH13_CTRL_TRIG Register macros*/

#define DMA_CH13_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH13_CTRL_TRIG_AHB_ERROR_MASK DMA_CH13_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH13_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH13_CTRL_TRIG_READ_ERROR_MASK DMA_CH13_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH13_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH13_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH13_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH13_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH13_CTRL_TRIG_BUSY_MASK DMA_CH13_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH13_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH13_CTRL_TRIG_SNIFF_EN_MASK DMA_CH13_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH13_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH13_CTRL_TRIG_BSWAP_MASK DMA_CH13_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH13_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH13_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH13_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH13_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH13_CTRL_TRIG_TREQ_SEL_MASK DMA_CH13_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH13_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH13_CTRL_TRIG_CHAIN_TO_MASK DMA_CH13_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH13_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH13_CTRL_TRIG_RING_SEL_MASK DMA_CH13_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH13_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH13_CTRL_TRIG_RING_SIZE_MASK DMA_CH13_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH13_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH13_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH13_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH13_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH13_CTRL_TRIG_INCR_WRITE_MASK DMA_CH13_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH13_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH13_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH13_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH13_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH13_CTRL_TRIG_INCR_READ_MASK DMA_CH13_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH13_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH13_CTRL_TRIG_DATA_SIZE_MASK DMA_CH13_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH13_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH13_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH13_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH13_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH13_CTRL_TRIG_EN_MASK DMA_CH13_CTRL_TRIG_EN(ALL1)

/*CH13_AL1_CTRL Register macros*/


/*CH13_AL1_READ_ADDR Register macros*/


/*CH13_AL1_WRITE_ADDR Register macros*/


/*CH13_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH13_AL2_CTRL Register macros*/


/*CH13_AL2_TRANS_COUNT Register macros*/


/*CH13_AL2_READ_ADDR Register macros*/


/*CH13_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH13_AL3_CTRL Register macros*/


/*CH13_AL3_WRITE_ADDR Register macros*/


/*CH13_AL3_TRANS_COUNT Register macros*/


/*CH13_AL3_READ_ADDR_TRIG Register macros*/


/*CH14_READ_ADDR Register macros*/


/*CH14_WRITE_ADDR Register macros*/


/*CH14_TRANS_COUNT Register macros*/

#define DMA_CH14_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH14_TRANS_COUNT_MODE_MASK DMA_CH14_TRANS_COUNT_MODE(ALL1)
#define DMA_CH14_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH14_TRANS_COUNT_COUNT_MASK DMA_CH14_TRANS_COUNT_COUNT(ALL1)

/*CH14_CTRL_TRIG Register macros*/

#define DMA_CH14_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH14_CTRL_TRIG_AHB_ERROR_MASK DMA_CH14_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH14_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH14_CTRL_TRIG_READ_ERROR_MASK DMA_CH14_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH14_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH14_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH14_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH14_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH14_CTRL_TRIG_BUSY_MASK DMA_CH14_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH14_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH14_CTRL_TRIG_SNIFF_EN_MASK DMA_CH14_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH14_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH14_CTRL_TRIG_BSWAP_MASK DMA_CH14_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH14_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH14_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH14_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH14_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH14_CTRL_TRIG_TREQ_SEL_MASK DMA_CH14_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH14_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH14_CTRL_TRIG_CHAIN_TO_MASK DMA_CH14_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH14_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH14_CTRL_TRIG_RING_SEL_MASK DMA_CH14_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH14_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH14_CTRL_TRIG_RING_SIZE_MASK DMA_CH14_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH14_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH14_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH14_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH14_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH14_CTRL_TRIG_INCR_WRITE_MASK DMA_CH14_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH14_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH14_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH14_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH14_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH14_CTRL_TRIG_INCR_READ_MASK DMA_CH14_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH14_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH14_CTRL_TRIG_DATA_SIZE_MASK DMA_CH14_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH14_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH14_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH14_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH14_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH14_CTRL_TRIG_EN_MASK DMA_CH14_CTRL_TRIG_EN(ALL1)

/*CH14_AL1_CTRL Register macros*/


/*CH14_AL1_READ_ADDR Register macros*/


/*CH14_AL1_WRITE_ADDR Register macros*/


/*CH14_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH14_AL2_CTRL Register macros*/


/*CH14_AL2_TRANS_COUNT Register macros*/


/*CH14_AL2_READ_ADDR Register macros*/


/*CH14_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH14_AL3_CTRL Register macros*/


/*CH14_AL3_WRITE_ADDR Register macros*/


/*CH14_AL3_TRANS_COUNT Register macros*/


/*CH14_AL3_READ_ADDR_TRIG Register macros*/


/*CH15_READ_ADDR Register macros*/


/*CH15_WRITE_ADDR Register macros*/


/*CH15_TRANS_COUNT Register macros*/

#define DMA_CH15_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH15_TRANS_COUNT_MODE_MASK DMA_CH15_TRANS_COUNT_MODE(ALL1)
#define DMA_CH15_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH15_TRANS_COUNT_COUNT_MASK DMA_CH15_TRANS_COUNT_COUNT(ALL1)

/*CH15_CTRL_TRIG Register macros*/

#define DMA_CH15_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH15_CTRL_TRIG_AHB_ERROR_MASK DMA_CH15_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH15_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH15_CTRL_TRIG_READ_ERROR_MASK DMA_CH15_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH15_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH15_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH15_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH15_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH15_CTRL_TRIG_BUSY_MASK DMA_CH15_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH15_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH15_CTRL_TRIG_SNIFF_EN_MASK DMA_CH15_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH15_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH15_CTRL_TRIG_BSWAP_MASK DMA_CH15_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH15_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH15_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH15_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH15_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH15_CTRL_TRIG_TREQ_SEL_MASK DMA_CH15_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH15_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH15_CTRL_TRIG_CHAIN_TO_MASK DMA_CH15_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH15_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH15_CTRL_TRIG_RING_SEL_MASK DMA_CH15_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH15_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH15_CTRL_TRIG_RING_SIZE_MASK DMA_CH15_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH15_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH15_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH15_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH15_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH15_CTRL_TRIG_INCR_WRITE_MASK DMA_CH15_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH15_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH15_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH15_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH15_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH15_CTRL_TRIG_INCR_READ_MASK DMA_CH15_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH15_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH15_CTRL_TRIG_DATA_SIZE_MASK DMA_CH15_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH15_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH15_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH15_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH15_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH15_CTRL_TRIG_EN_MASK DMA_CH15_CTRL_TRIG_EN(ALL1)

/*CH15_AL1_CTRL Register macros*/


/*CH15_AL1_READ_ADDR Register macros*/


/*CH15_AL1_WRITE_ADDR Register macros*/


/*CH15_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH15_AL2_CTRL Register macros*/


/*CH15_AL2_TRANS_COUNT Register macros*/


/*CH15_AL2_READ_ADDR Register macros*/


/*CH15_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH15_AL3_CTRL Register macros*/


/*CH15_AL3_WRITE_ADDR Register macros*/


/*CH15_AL3_TRANS_COUNT Register macros*/


/*CH15_AL3_READ_ADDR_TRIG Register macros*/


/*INTR Register macros*/


/*INTE0 Register macros*/


/*INTF0 Register macros*/


/*INTS0 Register macros*/


/*INTE1 Register macros*/


/*INTF1 Register macros*/


/*INTS1 Register macros*/


/*INTE2 Register macros*/


/*INTF2 Register macros*/


/*INTS2 Register macros*/


/*INTE3 Register macros*/


/*INTF3 Register macros*/


/*INTS3 Register macros*/


/*TIMER0 Register macros*/

#define DMA_TIMER0_X(v) (((v)&0xffff)<<16)
#define DMA_TIMER0_X_MASK DMA_TIMER0_X(ALL1)
#define DMA_TIMER0_Y(v) (((v)&0xffff)<<0)
#define DMA_TIMER0_Y_MASK DMA_TIMER0_Y(ALL1)

/*TIMER1 Register macros*/

#define DMA_TIMER1_X(v) (((v)&0xffff)<<16)
#define DMA_TIMER1_X_MASK DMA_TIMER1_X(ALL1)
#define DMA_TIMER1_Y(v) (((v)&0xffff)<<0)
#define DMA_TIMER1_Y_MASK DMA_TIMER1_Y(ALL1)

/*TIMER2 Register macros*/

#define DMA_TIMER2_X(v) (((v)&0xffff)<<16)
#define DMA_TIMER2_X_MASK DMA_TIMER2_X(ALL1)
#define DMA_TIMER2_Y(v) (((v)&0xffff)<<0)
#define DMA_TIMER2_Y_MASK DMA_TIMER2_Y(ALL1)

/*TIMER3 Register macros*/

#define DMA_TIMER3_X(v) (((v)&0xffff)<<16)
#define DMA_TIMER3_X_MASK DMA_TIMER3_X(ALL1)
#define DMA_TIMER3_Y(v) (((v)&0xffff)<<0)
#define DMA_TIMER3_Y_MASK DMA_TIMER3_Y(ALL1)

/*MULTI_CHAN_TRIGGER Register macros*/


/*SNIFF_CTRL Register macros*/

#define DMA_SNIFF_CTRL_OUT_INV(v) (((v)&0x1)<<11)
#define DMA_SNIFF_CTRL_OUT_INV_MASK DMA_SNIFF_CTRL_OUT_INV(ALL1)
#define DMA_SNIFF_CTRL_OUT_REV(v) (((v)&0x1)<<10)
#define DMA_SNIFF_CTRL_OUT_REV_MASK DMA_SNIFF_CTRL_OUT_REV(ALL1)
#define DMA_SNIFF_CTRL_BSWAP(v) (((v)&0x1)<<9)
#define DMA_SNIFF_CTRL_BSWAP_MASK DMA_SNIFF_CTRL_BSWAP(ALL1)
#define DMA_SNIFF_CTRL_CALC(v) (((v)&0xf)<<5)
#define DMA_SNIFF_CTRL_CALC_MASK DMA_SNIFF_CTRL_CALC(ALL1)
#define DMA_SNIFF_CTRL_DMACH(v) (((v)&0xf)<<1)
#define DMA_SNIFF_CTRL_DMACH_MASK DMA_SNIFF_CTRL_DMACH(ALL1)
#define DMA_SNIFF_CTRL_EN(v) (((v)&0x1)<<0)
#define DMA_SNIFF_CTRL_EN_MASK DMA_SNIFF_CTRL_EN(ALL1)

/*SNIFF_DATA Register macros*/


/*FIFO_LEVELS Register macros*/

#define DMA_FIFO_LEVELS_RAF_LVL(v) (((v)&0xff)<<16)
#define DMA_FIFO_LEVELS_RAF_LVL_MASK DMA_FIFO_LEVELS_RAF_LVL(ALL1)
#define DMA_FIFO_LEVELS_WAF_LVL(v) (((v)&0xff)<<8)
#define DMA_FIFO_LEVELS_WAF_LVL_MASK DMA_FIFO_LEVELS_WAF_LVL(ALL1)
#define DMA_FIFO_LEVELS_TDF_LVL(v) (((v)&0xff)<<0)
#define DMA_FIFO_LEVELS_TDF_LVL_MASK DMA_FIFO_LEVELS_TDF_LVL(ALL1)

/*CHAN_ABORT Register macros*/


/*N_CHANNELS Register macros*/


/*SECCFG_CH0 Register macros*/

#define DMA_SECCFG_CH0_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH0_LOCK_MASK DMA_SECCFG_CH0_LOCK(ALL1)
#define DMA_SECCFG_CH0_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH0_S_MASK DMA_SECCFG_CH0_S(ALL1)
#define DMA_SECCFG_CH0_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH0_P_MASK DMA_SECCFG_CH0_P(ALL1)

/*SECCFG_CH1 Register macros*/

#define DMA_SECCFG_CH1_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH1_LOCK_MASK DMA_SECCFG_CH1_LOCK(ALL1)
#define DMA_SECCFG_CH1_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH1_S_MASK DMA_SECCFG_CH1_S(ALL1)
#define DMA_SECCFG_CH1_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH1_P_MASK DMA_SECCFG_CH1_P(ALL1)

/*SECCFG_CH2 Register macros*/

#define DMA_SECCFG_CH2_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH2_LOCK_MASK DMA_SECCFG_CH2_LOCK(ALL1)
#define DMA_SECCFG_CH2_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH2_S_MASK DMA_SECCFG_CH2_S(ALL1)
#define DMA_SECCFG_CH2_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH2_P_MASK DMA_SECCFG_CH2_P(ALL1)

/*SECCFG_CH3 Register macros*/

#define DMA_SECCFG_CH3_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH3_LOCK_MASK DMA_SECCFG_CH3_LOCK(ALL1)
#define DMA_SECCFG_CH3_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH3_S_MASK DMA_SECCFG_CH3_S(ALL1)
#define DMA_SECCFG_CH3_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH3_P_MASK DMA_SECCFG_CH3_P(ALL1)

/*SECCFG_CH4 Register macros*/

#define DMA_SECCFG_CH4_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH4_LOCK_MASK DMA_SECCFG_CH4_LOCK(ALL1)
#define DMA_SECCFG_CH4_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH4_S_MASK DMA_SECCFG_CH4_S(ALL1)
#define DMA_SECCFG_CH4_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH4_P_MASK DMA_SECCFG_CH4_P(ALL1)

/*SECCFG_CH5 Register macros*/

#define DMA_SECCFG_CH5_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH5_LOCK_MASK DMA_SECCFG_CH5_LOCK(ALL1)
#define DMA_SECCFG_CH5_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH5_S_MASK DMA_SECCFG_CH5_S(ALL1)
#define DMA_SECCFG_CH5_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH5_P_MASK DMA_SECCFG_CH5_P(ALL1)

/*SECCFG_CH6 Register macros*/

#define DMA_SECCFG_CH6_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH6_LOCK_MASK DMA_SECCFG_CH6_LOCK(ALL1)
#define DMA_SECCFG_CH6_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH6_S_MASK DMA_SECCFG_CH6_S(ALL1)
#define DMA_SECCFG_CH6_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH6_P_MASK DMA_SECCFG_CH6_P(ALL1)

/*SECCFG_CH7 Register macros*/

#define DMA_SECCFG_CH7_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH7_LOCK_MASK DMA_SECCFG_CH7_LOCK(ALL1)
#define DMA_SECCFG_CH7_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH7_S_MASK DMA_SECCFG_CH7_S(ALL1)
#define DMA_SECCFG_CH7_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH7_P_MASK DMA_SECCFG_CH7_P(ALL1)

/*SECCFG_CH8 Register macros*/

#define DMA_SECCFG_CH8_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH8_LOCK_MASK DMA_SECCFG_CH8_LOCK(ALL1)
#define DMA_SECCFG_CH8_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH8_S_MASK DMA_SECCFG_CH8_S(ALL1)
#define DMA_SECCFG_CH8_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH8_P_MASK DMA_SECCFG_CH8_P(ALL1)

/*SECCFG_CH9 Register macros*/

#define DMA_SECCFG_CH9_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH9_LOCK_MASK DMA_SECCFG_CH9_LOCK(ALL1)
#define DMA_SECCFG_CH9_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH9_S_MASK DMA_SECCFG_CH9_S(ALL1)
#define DMA_SECCFG_CH9_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH9_P_MASK DMA_SECCFG_CH9_P(ALL1)

/*SECCFG_CH10 Register macros*/

#define DMA_SECCFG_CH10_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH10_LOCK_MASK DMA_SECCFG_CH10_LOCK(ALL1)
#define DMA_SECCFG_CH10_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH10_S_MASK DMA_SECCFG_CH10_S(ALL1)
#define DMA_SECCFG_CH10_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH10_P_MASK DMA_SECCFG_CH10_P(ALL1)

/*SECCFG_CH11 Register macros*/

#define DMA_SECCFG_CH11_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH11_LOCK_MASK DMA_SECCFG_CH11_LOCK(ALL1)
#define DMA_SECCFG_CH11_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH11_S_MASK DMA_SECCFG_CH11_S(ALL1)
#define DMA_SECCFG_CH11_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH11_P_MASK DMA_SECCFG_CH11_P(ALL1)

/*SECCFG_CH12 Register macros*/

#define DMA_SECCFG_CH12_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH12_LOCK_MASK DMA_SECCFG_CH12_LOCK(ALL1)
#define DMA_SECCFG_CH12_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH12_S_MASK DMA_SECCFG_CH12_S(ALL1)
#define DMA_SECCFG_CH12_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH12_P_MASK DMA_SECCFG_CH12_P(ALL1)

/*SECCFG_CH13 Register macros*/

#define DMA_SECCFG_CH13_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH13_LOCK_MASK DMA_SECCFG_CH13_LOCK(ALL1)
#define DMA_SECCFG_CH13_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH13_S_MASK DMA_SECCFG_CH13_S(ALL1)
#define DMA_SECCFG_CH13_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH13_P_MASK DMA_SECCFG_CH13_P(ALL1)

/*SECCFG_CH14 Register macros*/

#define DMA_SECCFG_CH14_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH14_LOCK_MASK DMA_SECCFG_CH14_LOCK(ALL1)
#define DMA_SECCFG_CH14_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH14_S_MASK DMA_SECCFG_CH14_S(ALL1)
#define DMA_SECCFG_CH14_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH14_P_MASK DMA_SECCFG_CH14_P(ALL1)

/*SECCFG_CH15 Register macros*/

#define DMA_SECCFG_CH15_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH15_LOCK_MASK DMA_SECCFG_CH15_LOCK(ALL1)
#define DMA_SECCFG_CH15_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH15_S_MASK DMA_SECCFG_CH15_S(ALL1)
#define DMA_SECCFG_CH15_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH15_P_MASK DMA_SECCFG_CH15_P(ALL1)

/*SECCFG_IRQ0 Register macros*/

#define DMA_SECCFG_IRQ0_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_IRQ0_S_MASK DMA_SECCFG_IRQ0_S(ALL1)
#define DMA_SECCFG_IRQ0_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_IRQ0_P_MASK DMA_SECCFG_IRQ0_P(ALL1)

/*SECCFG_IRQ1 Register macros*/

#define DMA_SECCFG_IRQ1_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_IRQ1_S_MASK DMA_SECCFG_IRQ1_S(ALL1)
#define DMA_SECCFG_IRQ1_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_IRQ1_P_MASK DMA_SECCFG_IRQ1_P(ALL1)

/*SECCFG_IRQ2 Register macros*/

#define DMA_SECCFG_IRQ2_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_IRQ2_S_MASK DMA_SECCFG_IRQ2_S(ALL1)
#define DMA_SECCFG_IRQ2_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_IRQ2_P_MASK DMA_SECCFG_IRQ2_P(ALL1)

/*SECCFG_IRQ3 Register macros*/

#define DMA_SECCFG_IRQ3_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_IRQ3_S_MASK DMA_SECCFG_IRQ3_S(ALL1)
#define DMA_SECCFG_IRQ3_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_IRQ3_P_MASK DMA_SECCFG_IRQ3_P(ALL1)

/*SECCFG_MISC Register macros*/

#define DMA_SECCFG_MISC_TIMER3_S(v) (((v)&0x1)<<9)
#define DMA_SECCFG_MISC_TIMER3_S_MASK DMA_SECCFG_MISC_TIMER3_S(ALL1)
#define DMA_SECCFG_MISC_TIMER3_P(v) (((v)&0x1)<<8)
#define DMA_SECCFG_MISC_TIMER3_P_MASK DMA_SECCFG_MISC_TIMER3_P(ALL1)
#define DMA_SECCFG_MISC_TIMER2_S(v) (((v)&0x1)<<7)
#define DMA_SECCFG_MISC_TIMER2_S_MASK DMA_SECCFG_MISC_TIMER2_S(ALL1)
#define DMA_SECCFG_MISC_TIMER2_P(v) (((v)&0x1)<<6)
#define DMA_SECCFG_MISC_TIMER2_P_MASK DMA_SECCFG_MISC_TIMER2_P(ALL1)
#define DMA_SECCFG_MISC_TIMER1_S(v) (((v)&0x1)<<5)
#define DMA_SECCFG_MISC_TIMER1_S_MASK DMA_SECCFG_MISC_TIMER1_S(ALL1)
#define DMA_SECCFG_MISC_TIMER1_P(v) (((v)&0x1)<<4)
#define DMA_SECCFG_MISC_TIMER1_P_MASK DMA_SECCFG_MISC_TIMER1_P(ALL1)
#define DMA_SECCFG_MISC_TIMER0_S(v) (((v)&0x1)<<3)
#define DMA_SECCFG_MISC_TIMER0_S_MASK DMA_SECCFG_MISC_TIMER0_S(ALL1)
#define DMA_SECCFG_MISC_TIMER0_P(v) (((v)&0x1)<<2)
#define DMA_SECCFG_MISC_TIMER0_P_MASK DMA_SECCFG_MISC_TIMER0_P(ALL1)
#define DMA_SECCFG_MISC_SNIFF_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_MISC_SNIFF_S_MASK DMA_SECCFG_MISC_SNIFF_S(ALL1)
#define DMA_SECCFG_MISC_SNIFF_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_MISC_SNIFF_P_MASK DMA_SECCFG_MISC_SNIFF_P(ALL1)

/*MPU_CTRL Register macros*/

#define DMA_MPU_CTRL_NS_HIDE_ADDR(v) (((v)&0x1)<<3)
#define DMA_MPU_CTRL_NS_HIDE_ADDR_MASK DMA_MPU_CTRL_NS_HIDE_ADDR(ALL1)
#define DMA_MPU_CTRL_S(v) (((v)&0x1)<<2)
#define DMA_MPU_CTRL_S_MASK DMA_MPU_CTRL_S(ALL1)
#define DMA_MPU_CTRL_P(v) (((v)&0x1)<<1)
#define DMA_MPU_CTRL_P_MASK DMA_MPU_CTRL_P(ALL1)

/*MPU_BAR0 Register macros*/

#define DMA_MPU_BAR0_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR0_ADDR_MASK DMA_MPU_BAR0_ADDR(ALL1)

/*MPU_LAR0 Register macros*/

#define DMA_MPU_LAR0_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR0_ADDR_MASK DMA_MPU_LAR0_ADDR(ALL1)
#define DMA_MPU_LAR0_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR0_S_MASK DMA_MPU_LAR0_S(ALL1)
#define DMA_MPU_LAR0_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR0_P_MASK DMA_MPU_LAR0_P(ALL1)
#define DMA_MPU_LAR0_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR0_EN_MASK DMA_MPU_LAR0_EN(ALL1)

/*MPU_BAR1 Register macros*/

#define DMA_MPU_BAR1_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR1_ADDR_MASK DMA_MPU_BAR1_ADDR(ALL1)

/*MPU_LAR1 Register macros*/

#define DMA_MPU_LAR1_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR1_ADDR_MASK DMA_MPU_LAR1_ADDR(ALL1)
#define DMA_MPU_LAR1_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR1_S_MASK DMA_MPU_LAR1_S(ALL1)
#define DMA_MPU_LAR1_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR1_P_MASK DMA_MPU_LAR1_P(ALL1)
#define DMA_MPU_LAR1_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR1_EN_MASK DMA_MPU_LAR1_EN(ALL1)

/*MPU_BAR2 Register macros*/

#define DMA_MPU_BAR2_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR2_ADDR_MASK DMA_MPU_BAR2_ADDR(ALL1)

/*MPU_LAR2 Register macros*/

#define DMA_MPU_LAR2_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR2_ADDR_MASK DMA_MPU_LAR2_ADDR(ALL1)
#define DMA_MPU_LAR2_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR2_S_MASK DMA_MPU_LAR2_S(ALL1)
#define DMA_MPU_LAR2_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR2_P_MASK DMA_MPU_LAR2_P(ALL1)
#define DMA_MPU_LAR2_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR2_EN_MASK DMA_MPU_LAR2_EN(ALL1)

/*MPU_BAR3 Register macros*/

#define DMA_MPU_BAR3_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR3_ADDR_MASK DMA_MPU_BAR3_ADDR(ALL1)

/*MPU_LAR3 Register macros*/

#define DMA_MPU_LAR3_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR3_ADDR_MASK DMA_MPU_LAR3_ADDR(ALL1)
#define DMA_MPU_LAR3_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR3_S_MASK DMA_MPU_LAR3_S(ALL1)
#define DMA_MPU_LAR3_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR3_P_MASK DMA_MPU_LAR3_P(ALL1)
#define DMA_MPU_LAR3_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR3_EN_MASK DMA_MPU_LAR3_EN(ALL1)

/*MPU_BAR4 Register macros*/

#define DMA_MPU_BAR4_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR4_ADDR_MASK DMA_MPU_BAR4_ADDR(ALL1)

/*MPU_LAR4 Register macros*/

#define DMA_MPU_LAR4_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR4_ADDR_MASK DMA_MPU_LAR4_ADDR(ALL1)
#define DMA_MPU_LAR4_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR4_S_MASK DMA_MPU_LAR4_S(ALL1)
#define DMA_MPU_LAR4_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR4_P_MASK DMA_MPU_LAR4_P(ALL1)
#define DMA_MPU_LAR4_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR4_EN_MASK DMA_MPU_LAR4_EN(ALL1)

/*MPU_BAR5 Register macros*/

#define DMA_MPU_BAR5_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR5_ADDR_MASK DMA_MPU_BAR5_ADDR(ALL1)

/*MPU_LAR5 Register macros*/

#define DMA_MPU_LAR5_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR5_ADDR_MASK DMA_MPU_LAR5_ADDR(ALL1)
#define DMA_MPU_LAR5_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR5_S_MASK DMA_MPU_LAR5_S(ALL1)
#define DMA_MPU_LAR5_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR5_P_MASK DMA_MPU_LAR5_P(ALL1)
#define DMA_MPU_LAR5_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR5_EN_MASK DMA_MPU_LAR5_EN(ALL1)

/*MPU_BAR6 Register macros*/

#define DMA_MPU_BAR6_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR6_ADDR_MASK DMA_MPU_BAR6_ADDR(ALL1)

/*MPU_LAR6 Register macros*/

#define DMA_MPU_LAR6_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR6_ADDR_MASK DMA_MPU_LAR6_ADDR(ALL1)
#define DMA_MPU_LAR6_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR6_S_MASK DMA_MPU_LAR6_S(ALL1)
#define DMA_MPU_LAR6_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR6_P_MASK DMA_MPU_LAR6_P(ALL1)
#define DMA_MPU_LAR6_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR6_EN_MASK DMA_MPU_LAR6_EN(ALL1)

/*MPU_BAR7 Register macros*/

#define DMA_MPU_BAR7_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR7_ADDR_MASK DMA_MPU_BAR7_ADDR(ALL1)

/*MPU_LAR7 Register macros*/

#define DMA_MPU_LAR7_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR7_ADDR_MASK DMA_MPU_LAR7_ADDR(ALL1)
#define DMA_MPU_LAR7_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR7_S_MASK DMA_MPU_LAR7_S(ALL1)
#define DMA_MPU_LAR7_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR7_P_MASK DMA_MPU_LAR7_P(ALL1)
#define DMA_MPU_LAR7_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR7_EN_MASK DMA_MPU_LAR7_EN(ALL1)

/*CH0_DBG_CTDREQ Register macros*/


/*CH0_DBG_TCR Register macros*/


/*CH1_DBG_CTDREQ Register macros*/


/*CH1_DBG_TCR Register macros*/


/*CH2_DBG_CTDREQ Register macros*/


/*CH2_DBG_TCR Register macros*/


/*CH3_DBG_CTDREQ Register macros*/


/*CH3_DBG_TCR Register macros*/


/*CH4_DBG_CTDREQ Register macros*/


/*CH4_DBG_TCR Register macros*/


/*CH5_DBG_CTDREQ Register macros*/


/*CH5_DBG_TCR Register macros*/


/*CH6_DBG_CTDREQ Register macros*/


/*CH6_DBG_TCR Register macros*/


/*CH7_DBG_CTDREQ Register macros*/


/*CH7_DBG_TCR Register macros*/


/*CH8_DBG_CTDREQ Register macros*/


/*CH8_DBG_TCR Register macros*/


/*CH9_DBG_CTDREQ Register macros*/


/*CH9_DBG_TCR Register macros*/


/*CH10_DBG_CTDREQ Register macros*/


/*CH10_DBG_TCR Register macros*/


/*CH11_DBG_CTDREQ Register macros*/


/*CH11_DBG_TCR Register macros*/


/*CH12_DBG_CTDREQ Register macros*/


/*CH12_DBG_TCR Register macros*/


/*CH13_DBG_CTDREQ Register macros*/


/*CH13_DBG_TCR Register macros*/


/*CH14_DBG_CTDREQ Register macros*/


/*CH14_DBG_TCR Register macros*/


/*CH15_DBG_CTDREQ Register macros*/


/*CH15_DBG_TCR Register macros*/


#endif

