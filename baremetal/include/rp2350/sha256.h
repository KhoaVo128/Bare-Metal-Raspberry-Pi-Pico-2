
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

#ifndef RP2350_SHA256_H
#define RP2350_SHA256_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t csr;
		uint32_t wdata;
		uint32_t sum0;
		uint32_t sum1;
		uint32_t sum2;
		uint32_t sum3;
		uint32_t sum4;
		uint32_t sum5;
		uint32_t sum6;
		uint32_t sum7;
		uint32_t RSVD0[1014];
		uint32_t csr_xor;
		uint32_t wdata_xor;
		uint32_t sum0_xor;
		uint32_t sum1_xor;
		uint32_t sum2_xor;
		uint32_t sum3_xor;
		uint32_t sum4_xor;
		uint32_t sum5_xor;
		uint32_t sum6_xor;
		uint32_t sum7_xor;
		uint32_t RSVDxor_0[1014];
		uint32_t csr_set;
		uint32_t wdata_set;
		uint32_t sum0_set;
		uint32_t sum1_set;
		uint32_t sum2_set;
		uint32_t sum3_set;
		uint32_t sum4_set;
		uint32_t sum5_set;
		uint32_t sum6_set;
		uint32_t sum7_set;
		uint32_t RSVDset_0[1014];
		uint32_t csr_clr;
		uint32_t wdata_clr;
		uint32_t sum0_clr;
		uint32_t sum1_clr;
		uint32_t sum2_clr;
		uint32_t sum3_clr;
		uint32_t sum4_clr;
		uint32_t sum5_clr;
		uint32_t sum6_clr;
		uint32_t sum7_clr;
		uint32_t RSVDclr_0[1014];
} SHA256_REG_BLOCKS;


/*IO Registers as struct*/

#define sha256 (*(SHA256_REG_BLOCKS volatile *)0x400f8000)


/*IO Registers AS MACROS*/

#define SHA256_CSR (*(volatile uint32_t *)0x400f8000)
#define SHA256_WDATA (*(volatile uint32_t *)0x400f8004)
#define SHA256_SUM0 (*(volatile uint32_t *)0x400f8008)
#define SHA256_SUM1 (*(volatile uint32_t *)0x400f800c)
#define SHA256_SUM2 (*(volatile uint32_t *)0x400f8010)
#define SHA256_SUM3 (*(volatile uint32_t *)0x400f8014)
#define SHA256_SUM4 (*(volatile uint32_t *)0x400f8018)
#define SHA256_SUM5 (*(volatile uint32_t *)0x400f801c)
#define SHA256_SUM6 (*(volatile uint32_t *)0x400f8020)
#define SHA256_SUM7 (*(volatile uint32_t *)0x400f8024)
#define SHA256_CSR_XOR (*(volatile uint32_t *)0x400f9000)
#define SHA256_WDATA_XOR (*(volatile uint32_t *)0x400f9004)
#define SHA256_SUM0_XOR (*(volatile uint32_t *)0x400f9008)
#define SHA256_SUM1_XOR (*(volatile uint32_t *)0x400f900c)
#define SHA256_SUM2_XOR (*(volatile uint32_t *)0x400f9010)
#define SHA256_SUM3_XOR (*(volatile uint32_t *)0x400f9014)
#define SHA256_SUM4_XOR (*(volatile uint32_t *)0x400f9018)
#define SHA256_SUM5_XOR (*(volatile uint32_t *)0x400f901c)
#define SHA256_SUM6_XOR (*(volatile uint32_t *)0x400f9020)
#define SHA256_SUM7_XOR (*(volatile uint32_t *)0x400f9024)
#define SHA256_CSR_SET (*(volatile uint32_t *)0x400fa000)
#define SHA256_WDATA_SET (*(volatile uint32_t *)0x400fa004)
#define SHA256_SUM0_SET (*(volatile uint32_t *)0x400fa008)
#define SHA256_SUM1_SET (*(volatile uint32_t *)0x400fa00c)
#define SHA256_SUM2_SET (*(volatile uint32_t *)0x400fa010)
#define SHA256_SUM3_SET (*(volatile uint32_t *)0x400fa014)
#define SHA256_SUM4_SET (*(volatile uint32_t *)0x400fa018)
#define SHA256_SUM5_SET (*(volatile uint32_t *)0x400fa01c)
#define SHA256_SUM6_SET (*(volatile uint32_t *)0x400fa020)
#define SHA256_SUM7_SET (*(volatile uint32_t *)0x400fa024)
#define SHA256_CSR_CLR (*(volatile uint32_t *)0x400fb000)
#define SHA256_WDATA_CLR (*(volatile uint32_t *)0x400fb004)
#define SHA256_SUM0_CLR (*(volatile uint32_t *)0x400fb008)
#define SHA256_SUM1_CLR (*(volatile uint32_t *)0x400fb00c)
#define SHA256_SUM2_CLR (*(volatile uint32_t *)0x400fb010)
#define SHA256_SUM3_CLR (*(volatile uint32_t *)0x400fb014)
#define SHA256_SUM4_CLR (*(volatile uint32_t *)0x400fb018)
#define SHA256_SUM5_CLR (*(volatile uint32_t *)0x400fb01c)
#define SHA256_SUM6_CLR (*(volatile uint32_t *)0x400fb020)
#define SHA256_SUM7_CLR (*(volatile uint32_t *)0x400fb024)

/*CSR Register macros*/

#define SHA256_CSR_BSWAP(v) (((v)&0x1)<<12)
#define SHA256_CSR_BSWAP_MASK SHA256_CSR_BSWAP(ALL1)
#define SHA256_CSR_DMA_SIZE(v) (((v)&0x3)<<8)
#define SHA256_CSR_DMA_SIZE_MASK SHA256_CSR_DMA_SIZE(ALL1)
#define SHA256_CSR_ERR_WDATA_NOT_RDY(v) (((v)&0x1)<<4)
#define SHA256_CSR_ERR_WDATA_NOT_RDY_MASK SHA256_CSR_ERR_WDATA_NOT_RDY(ALL1)
#define SHA256_CSR_SUM_VLD(v) (((v)&0x1)<<2)
#define SHA256_CSR_SUM_VLD_MASK SHA256_CSR_SUM_VLD(ALL1)
#define SHA256_CSR_WDATA_RDY(v) (((v)&0x1)<<1)
#define SHA256_CSR_WDATA_RDY_MASK SHA256_CSR_WDATA_RDY(ALL1)
#define SHA256_CSR_START(v) (((v)&0x1)<<0)
#define SHA256_CSR_START_MASK SHA256_CSR_START(ALL1)

/*WDATA Register macros*/


/*SUM0 Register macros*/


/*SUM1 Register macros*/


/*SUM2 Register macros*/


/*SUM3 Register macros*/


/*SUM4 Register macros*/


/*SUM5 Register macros*/


/*SUM6 Register macros*/


/*SUM7 Register macros*/


#endif

