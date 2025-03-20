
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

#ifndef RP2350_SPI_H
#define RP2350_SPI_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t sspcr0;
		uint32_t sspcr1;
		uint32_t sspdr;
		uint32_t sspsr;
		uint32_t sspcpsr;
		uint32_t sspimsc;
		uint32_t sspris;
		uint32_t sspmis;
		uint32_t sspicr;
		uint32_t sspdmacr;
		uint32_t RSVD0[1006];
		uint32_t sspperiphid0;
		uint32_t sspperiphid1;
		uint32_t sspperiphid2;
		uint32_t sspperiphid3;
		uint32_t ssppcellid0;
		uint32_t ssppcellid1;
		uint32_t ssppcellid2;
		uint32_t ssppcellid3;
		uint32_t sspcr0_xor;
		uint32_t sspcr1_xor;
		uint32_t sspdr_xor;
		uint32_t sspsr_xor;
		uint32_t sspcpsr_xor;
		uint32_t sspimsc_xor;
		uint32_t sspris_xor;
		uint32_t sspmis_xor;
		uint32_t sspicr_xor;
		uint32_t sspdmacr_xor;
		uint32_t RSVDxor_0[1006];
		uint32_t sspperiphid0_xor;
		uint32_t sspperiphid1_xor;
		uint32_t sspperiphid2_xor;
		uint32_t sspperiphid3_xor;
		uint32_t ssppcellid0_xor;
		uint32_t ssppcellid1_xor;
		uint32_t ssppcellid2_xor;
		uint32_t ssppcellid3_xor;
		uint32_t sspcr0_set;
		uint32_t sspcr1_set;
		uint32_t sspdr_set;
		uint32_t sspsr_set;
		uint32_t sspcpsr_set;
		uint32_t sspimsc_set;
		uint32_t sspris_set;
		uint32_t sspmis_set;
		uint32_t sspicr_set;
		uint32_t sspdmacr_set;
		uint32_t RSVDset_0[1006];
		uint32_t sspperiphid0_set;
		uint32_t sspperiphid1_set;
		uint32_t sspperiphid2_set;
		uint32_t sspperiphid3_set;
		uint32_t ssppcellid0_set;
		uint32_t ssppcellid1_set;
		uint32_t ssppcellid2_set;
		uint32_t ssppcellid3_set;
		uint32_t sspcr0_clr;
		uint32_t sspcr1_clr;
		uint32_t sspdr_clr;
		uint32_t sspsr_clr;
		uint32_t sspcpsr_clr;
		uint32_t sspimsc_clr;
		uint32_t sspris_clr;
		uint32_t sspmis_clr;
		uint32_t sspicr_clr;
		uint32_t sspdmacr_clr;
		uint32_t RSVDclr_0[1006];
		uint32_t sspperiphid0_clr;
		uint32_t sspperiphid1_clr;
		uint32_t sspperiphid2_clr;
		uint32_t sspperiphid3_clr;
		uint32_t ssppcellid0_clr;
		uint32_t ssppcellid1_clr;
		uint32_t ssppcellid2_clr;
		uint32_t ssppcellid3_clr;
} SPI0_REG_BLOCKS;
typedef struct{
		uint32_t sspcr0;
		uint32_t sspcr1;
		uint32_t sspdr;
		uint32_t sspsr;
		uint32_t sspcpsr;
		uint32_t sspimsc;
		uint32_t sspris;
		uint32_t sspmis;
		uint32_t sspicr;
		uint32_t sspdmacr;
		uint32_t RSVD0[1006];
		uint32_t sspperiphid0;
		uint32_t sspperiphid1;
		uint32_t sspperiphid2;
		uint32_t sspperiphid3;
		uint32_t ssppcellid0;
		uint32_t ssppcellid1;
		uint32_t ssppcellid2;
		uint32_t ssppcellid3;
		uint32_t sspcr0_xor;
		uint32_t sspcr1_xor;
		uint32_t sspdr_xor;
		uint32_t sspsr_xor;
		uint32_t sspcpsr_xor;
		uint32_t sspimsc_xor;
		uint32_t sspris_xor;
		uint32_t sspmis_xor;
		uint32_t sspicr_xor;
		uint32_t sspdmacr_xor;
		uint32_t RSVDxor_0[1006];
		uint32_t sspperiphid0_xor;
		uint32_t sspperiphid1_xor;
		uint32_t sspperiphid2_xor;
		uint32_t sspperiphid3_xor;
		uint32_t ssppcellid0_xor;
		uint32_t ssppcellid1_xor;
		uint32_t ssppcellid2_xor;
		uint32_t ssppcellid3_xor;
		uint32_t sspcr0_set;
		uint32_t sspcr1_set;
		uint32_t sspdr_set;
		uint32_t sspsr_set;
		uint32_t sspcpsr_set;
		uint32_t sspimsc_set;
		uint32_t sspris_set;
		uint32_t sspmis_set;
		uint32_t sspicr_set;
		uint32_t sspdmacr_set;
		uint32_t RSVDset_0[1006];
		uint32_t sspperiphid0_set;
		uint32_t sspperiphid1_set;
		uint32_t sspperiphid2_set;
		uint32_t sspperiphid3_set;
		uint32_t ssppcellid0_set;
		uint32_t ssppcellid1_set;
		uint32_t ssppcellid2_set;
		uint32_t ssppcellid3_set;
		uint32_t sspcr0_clr;
		uint32_t sspcr1_clr;
		uint32_t sspdr_clr;
		uint32_t sspsr_clr;
		uint32_t sspcpsr_clr;
		uint32_t sspimsc_clr;
		uint32_t sspris_clr;
		uint32_t sspmis_clr;
		uint32_t sspicr_clr;
		uint32_t sspdmacr_clr;
		uint32_t RSVDclr_0[1006];
		uint32_t sspperiphid0_clr;
		uint32_t sspperiphid1_clr;
		uint32_t sspperiphid2_clr;
		uint32_t sspperiphid3_clr;
		uint32_t ssppcellid0_clr;
		uint32_t ssppcellid1_clr;
		uint32_t ssppcellid2_clr;
		uint32_t ssppcellid3_clr;
} SPI1_REG_BLOCKS;


/*IO Registers as struct*/

#define spi0 (*(SPI0_REG_BLOCKS volatile *)0x40080000)



#define spi1 (*(SPI1_REG_BLOCKS volatile *)0x40088000)


/*IO Registers AS MACROS*/

#define SPI0_SSPCR0 (*(volatile uint32_t *)0x40080000)
#define SPI0_SSPCR1 (*(volatile uint32_t *)0x40080004)
#define SPI0_SSPDR (*(volatile uint32_t *)0x40080008)
#define SPI0_SSPSR (*(volatile uint32_t *)0x4008000c)
#define SPI0_SSPCPSR (*(volatile uint32_t *)0x40080010)
#define SPI0_SSPIMSC (*(volatile uint32_t *)0x40080014)
#define SPI0_SSPRIS (*(volatile uint32_t *)0x40080018)
#define SPI0_SSPMIS (*(volatile uint32_t *)0x4008001c)
#define SPI0_SSPICR (*(volatile uint32_t *)0x40080020)
#define SPI0_SSPDMACR (*(volatile uint32_t *)0x40080024)
#define SPI0_SSPPERIPHID0 (*(volatile uint32_t *)0x40080fe0)
#define SPI0_SSPPERIPHID1 (*(volatile uint32_t *)0x40080fe4)
#define SPI0_SSPPERIPHID2 (*(volatile uint32_t *)0x40080fe8)
#define SPI0_SSPPERIPHID3 (*(volatile uint32_t *)0x40080fec)
#define SPI0_SSPPCELLID0 (*(volatile uint32_t *)0x40080ff0)
#define SPI0_SSPPCELLID1 (*(volatile uint32_t *)0x40080ff4)
#define SPI0_SSPPCELLID2 (*(volatile uint32_t *)0x40080ff8)
#define SPI0_SSPPCELLID3 (*(volatile uint32_t *)0x40080ffc)
#define SPI0_SSPCR0_XOR (*(volatile uint32_t *)0x40081000)
#define SPI0_SSPCR1_XOR (*(volatile uint32_t *)0x40081004)
#define SPI0_SSPDR_XOR (*(volatile uint32_t *)0x40081008)
#define SPI0_SSPSR_XOR (*(volatile uint32_t *)0x4008100c)
#define SPI0_SSPCPSR_XOR (*(volatile uint32_t *)0x40081010)
#define SPI0_SSPIMSC_XOR (*(volatile uint32_t *)0x40081014)
#define SPI0_SSPRIS_XOR (*(volatile uint32_t *)0x40081018)
#define SPI0_SSPMIS_XOR (*(volatile uint32_t *)0x4008101c)
#define SPI0_SSPICR_XOR (*(volatile uint32_t *)0x40081020)
#define SPI0_SSPDMACR_XOR (*(volatile uint32_t *)0x40081024)
#define SPI0_SSPPERIPHID0_XOR (*(volatile uint32_t *)0x40081fe0)
#define SPI0_SSPPERIPHID1_XOR (*(volatile uint32_t *)0x40081fe4)
#define SPI0_SSPPERIPHID2_XOR (*(volatile uint32_t *)0x40081fe8)
#define SPI0_SSPPERIPHID3_XOR (*(volatile uint32_t *)0x40081fec)
#define SPI0_SSPPCELLID0_XOR (*(volatile uint32_t *)0x40081ff0)
#define SPI0_SSPPCELLID1_XOR (*(volatile uint32_t *)0x40081ff4)
#define SPI0_SSPPCELLID2_XOR (*(volatile uint32_t *)0x40081ff8)
#define SPI0_SSPPCELLID3_XOR (*(volatile uint32_t *)0x40081ffc)
#define SPI0_SSPCR0_SET (*(volatile uint32_t *)0x40082000)
#define SPI0_SSPCR1_SET (*(volatile uint32_t *)0x40082004)
#define SPI0_SSPDR_SET (*(volatile uint32_t *)0x40082008)
#define SPI0_SSPSR_SET (*(volatile uint32_t *)0x4008200c)
#define SPI0_SSPCPSR_SET (*(volatile uint32_t *)0x40082010)
#define SPI0_SSPIMSC_SET (*(volatile uint32_t *)0x40082014)
#define SPI0_SSPRIS_SET (*(volatile uint32_t *)0x40082018)
#define SPI0_SSPMIS_SET (*(volatile uint32_t *)0x4008201c)
#define SPI0_SSPICR_SET (*(volatile uint32_t *)0x40082020)
#define SPI0_SSPDMACR_SET (*(volatile uint32_t *)0x40082024)
#define SPI0_SSPPERIPHID0_SET (*(volatile uint32_t *)0x40082fe0)
#define SPI0_SSPPERIPHID1_SET (*(volatile uint32_t *)0x40082fe4)
#define SPI0_SSPPERIPHID2_SET (*(volatile uint32_t *)0x40082fe8)
#define SPI0_SSPPERIPHID3_SET (*(volatile uint32_t *)0x40082fec)
#define SPI0_SSPPCELLID0_SET (*(volatile uint32_t *)0x40082ff0)
#define SPI0_SSPPCELLID1_SET (*(volatile uint32_t *)0x40082ff4)
#define SPI0_SSPPCELLID2_SET (*(volatile uint32_t *)0x40082ff8)
#define SPI0_SSPPCELLID3_SET (*(volatile uint32_t *)0x40082ffc)
#define SPI0_SSPCR0_CLR (*(volatile uint32_t *)0x40083000)
#define SPI0_SSPCR1_CLR (*(volatile uint32_t *)0x40083004)
#define SPI0_SSPDR_CLR (*(volatile uint32_t *)0x40083008)
#define SPI0_SSPSR_CLR (*(volatile uint32_t *)0x4008300c)
#define SPI0_SSPCPSR_CLR (*(volatile uint32_t *)0x40083010)
#define SPI0_SSPIMSC_CLR (*(volatile uint32_t *)0x40083014)
#define SPI0_SSPRIS_CLR (*(volatile uint32_t *)0x40083018)
#define SPI0_SSPMIS_CLR (*(volatile uint32_t *)0x4008301c)
#define SPI0_SSPICR_CLR (*(volatile uint32_t *)0x40083020)
#define SPI0_SSPDMACR_CLR (*(volatile uint32_t *)0x40083024)
#define SPI0_SSPPERIPHID0_CLR (*(volatile uint32_t *)0x40083fe0)
#define SPI0_SSPPERIPHID1_CLR (*(volatile uint32_t *)0x40083fe4)
#define SPI0_SSPPERIPHID2_CLR (*(volatile uint32_t *)0x40083fe8)
#define SPI0_SSPPERIPHID3_CLR (*(volatile uint32_t *)0x40083fec)
#define SPI0_SSPPCELLID0_CLR (*(volatile uint32_t *)0x40083ff0)
#define SPI0_SSPPCELLID1_CLR (*(volatile uint32_t *)0x40083ff4)
#define SPI0_SSPPCELLID2_CLR (*(volatile uint32_t *)0x40083ff8)
#define SPI0_SSPPCELLID3_CLR (*(volatile uint32_t *)0x40083ffc)
#define SPI1_SSPCR0 (*(volatile uint32_t *)0x40088000)
#define SPI1_SSPCR1 (*(volatile uint32_t *)0x40088004)
#define SPI1_SSPDR (*(volatile uint32_t *)0x40088008)
#define SPI1_SSPSR (*(volatile uint32_t *)0x4008800c)
#define SPI1_SSPCPSR (*(volatile uint32_t *)0x40088010)
#define SPI1_SSPIMSC (*(volatile uint32_t *)0x40088014)
#define SPI1_SSPRIS (*(volatile uint32_t *)0x40088018)
#define SPI1_SSPMIS (*(volatile uint32_t *)0x4008801c)
#define SPI1_SSPICR (*(volatile uint32_t *)0x40088020)
#define SPI1_SSPDMACR (*(volatile uint32_t *)0x40088024)
#define SPI1_SSPPERIPHID0 (*(volatile uint32_t *)0x40088fe0)
#define SPI1_SSPPERIPHID1 (*(volatile uint32_t *)0x40088fe4)
#define SPI1_SSPPERIPHID2 (*(volatile uint32_t *)0x40088fe8)
#define SPI1_SSPPERIPHID3 (*(volatile uint32_t *)0x40088fec)
#define SPI1_SSPPCELLID0 (*(volatile uint32_t *)0x40088ff0)
#define SPI1_SSPPCELLID1 (*(volatile uint32_t *)0x40088ff4)
#define SPI1_SSPPCELLID2 (*(volatile uint32_t *)0x40088ff8)
#define SPI1_SSPPCELLID3 (*(volatile uint32_t *)0x40088ffc)
#define SPI1_SSPCR0_XOR (*(volatile uint32_t *)0x40089000)
#define SPI1_SSPCR1_XOR (*(volatile uint32_t *)0x40089004)
#define SPI1_SSPDR_XOR (*(volatile uint32_t *)0x40089008)
#define SPI1_SSPSR_XOR (*(volatile uint32_t *)0x4008900c)
#define SPI1_SSPCPSR_XOR (*(volatile uint32_t *)0x40089010)
#define SPI1_SSPIMSC_XOR (*(volatile uint32_t *)0x40089014)
#define SPI1_SSPRIS_XOR (*(volatile uint32_t *)0x40089018)
#define SPI1_SSPMIS_XOR (*(volatile uint32_t *)0x4008901c)
#define SPI1_SSPICR_XOR (*(volatile uint32_t *)0x40089020)
#define SPI1_SSPDMACR_XOR (*(volatile uint32_t *)0x40089024)
#define SPI1_SSPPERIPHID0_XOR (*(volatile uint32_t *)0x40089fe0)
#define SPI1_SSPPERIPHID1_XOR (*(volatile uint32_t *)0x40089fe4)
#define SPI1_SSPPERIPHID2_XOR (*(volatile uint32_t *)0x40089fe8)
#define SPI1_SSPPERIPHID3_XOR (*(volatile uint32_t *)0x40089fec)
#define SPI1_SSPPCELLID0_XOR (*(volatile uint32_t *)0x40089ff0)
#define SPI1_SSPPCELLID1_XOR (*(volatile uint32_t *)0x40089ff4)
#define SPI1_SSPPCELLID2_XOR (*(volatile uint32_t *)0x40089ff8)
#define SPI1_SSPPCELLID3_XOR (*(volatile uint32_t *)0x40089ffc)
#define SPI1_SSPCR0_SET (*(volatile uint32_t *)0x4008a000)
#define SPI1_SSPCR1_SET (*(volatile uint32_t *)0x4008a004)
#define SPI1_SSPDR_SET (*(volatile uint32_t *)0x4008a008)
#define SPI1_SSPSR_SET (*(volatile uint32_t *)0x4008a00c)
#define SPI1_SSPCPSR_SET (*(volatile uint32_t *)0x4008a010)
#define SPI1_SSPIMSC_SET (*(volatile uint32_t *)0x4008a014)
#define SPI1_SSPRIS_SET (*(volatile uint32_t *)0x4008a018)
#define SPI1_SSPMIS_SET (*(volatile uint32_t *)0x4008a01c)
#define SPI1_SSPICR_SET (*(volatile uint32_t *)0x4008a020)
#define SPI1_SSPDMACR_SET (*(volatile uint32_t *)0x4008a024)
#define SPI1_SSPPERIPHID0_SET (*(volatile uint32_t *)0x4008afe0)
#define SPI1_SSPPERIPHID1_SET (*(volatile uint32_t *)0x4008afe4)
#define SPI1_SSPPERIPHID2_SET (*(volatile uint32_t *)0x4008afe8)
#define SPI1_SSPPERIPHID3_SET (*(volatile uint32_t *)0x4008afec)
#define SPI1_SSPPCELLID0_SET (*(volatile uint32_t *)0x4008aff0)
#define SPI1_SSPPCELLID1_SET (*(volatile uint32_t *)0x4008aff4)
#define SPI1_SSPPCELLID2_SET (*(volatile uint32_t *)0x4008aff8)
#define SPI1_SSPPCELLID3_SET (*(volatile uint32_t *)0x4008affc)
#define SPI1_SSPCR0_CLR (*(volatile uint32_t *)0x4008b000)
#define SPI1_SSPCR1_CLR (*(volatile uint32_t *)0x4008b004)
#define SPI1_SSPDR_CLR (*(volatile uint32_t *)0x4008b008)
#define SPI1_SSPSR_CLR (*(volatile uint32_t *)0x4008b00c)
#define SPI1_SSPCPSR_CLR (*(volatile uint32_t *)0x4008b010)
#define SPI1_SSPIMSC_CLR (*(volatile uint32_t *)0x4008b014)
#define SPI1_SSPRIS_CLR (*(volatile uint32_t *)0x4008b018)
#define SPI1_SSPMIS_CLR (*(volatile uint32_t *)0x4008b01c)
#define SPI1_SSPICR_CLR (*(volatile uint32_t *)0x4008b020)
#define SPI1_SSPDMACR_CLR (*(volatile uint32_t *)0x4008b024)
#define SPI1_SSPPERIPHID0_CLR (*(volatile uint32_t *)0x4008bfe0)
#define SPI1_SSPPERIPHID1_CLR (*(volatile uint32_t *)0x4008bfe4)
#define SPI1_SSPPERIPHID2_CLR (*(volatile uint32_t *)0x4008bfe8)
#define SPI1_SSPPERIPHID3_CLR (*(volatile uint32_t *)0x4008bfec)
#define SPI1_SSPPCELLID0_CLR (*(volatile uint32_t *)0x4008bff0)
#define SPI1_SSPPCELLID1_CLR (*(volatile uint32_t *)0x4008bff4)
#define SPI1_SSPPCELLID2_CLR (*(volatile uint32_t *)0x4008bff8)
#define SPI1_SSPPCELLID3_CLR (*(volatile uint32_t *)0x4008bffc)

/*SSPCR0 Register macros*/

#define SPI0_SSPCR0_SCR(v) (((v)&0xff)<<8)
#define SPI0_SSPCR0_SCR_MASK SPI0_SSPCR0_SCR(ALL1)
#define SPI0_SSPCR0_SPH(v) (((v)&0x1)<<7)
#define SPI0_SSPCR0_SPH_MASK SPI0_SSPCR0_SPH(ALL1)
#define SPI0_SSPCR0_SPO(v) (((v)&0x1)<<6)
#define SPI0_SSPCR0_SPO_MASK SPI0_SSPCR0_SPO(ALL1)
#define SPI0_SSPCR0_FRF(v) (((v)&0x3)<<4)
#define SPI0_SSPCR0_FRF_MASK SPI0_SSPCR0_FRF(ALL1)
#define SPI0_SSPCR0_DSS(v) (((v)&0xf)<<0)
#define SPI0_SSPCR0_DSS_MASK SPI0_SSPCR0_DSS(ALL1)

/*SSPCR1 Register macros*/

#define SPI0_SSPCR1_SOD(v) (((v)&0x1)<<3)
#define SPI0_SSPCR1_SOD_MASK SPI0_SSPCR1_SOD(ALL1)
#define SPI0_SSPCR1_MS(v) (((v)&0x1)<<2)
#define SPI0_SSPCR1_MS_MASK SPI0_SSPCR1_MS(ALL1)
#define SPI0_SSPCR1_SSE(v) (((v)&0x1)<<1)
#define SPI0_SSPCR1_SSE_MASK SPI0_SSPCR1_SSE(ALL1)
#define SPI0_SSPCR1_LBM(v) (((v)&0x1)<<0)
#define SPI0_SSPCR1_LBM_MASK SPI0_SSPCR1_LBM(ALL1)

/*SSPDR Register macros*/

#define SPI0_SSPDR_DATA(v) (((v)&0xffff)<<0)
#define SPI0_SSPDR_DATA_MASK SPI0_SSPDR_DATA(ALL1)

/*SSPSR Register macros*/

#define SPI0_SSPSR_BSY(v) (((v)&0x1)<<4)
#define SPI0_SSPSR_BSY_MASK SPI0_SSPSR_BSY(ALL1)
#define SPI0_SSPSR_RFF(v) (((v)&0x1)<<3)
#define SPI0_SSPSR_RFF_MASK SPI0_SSPSR_RFF(ALL1)
#define SPI0_SSPSR_RNE(v) (((v)&0x1)<<2)
#define SPI0_SSPSR_RNE_MASK SPI0_SSPSR_RNE(ALL1)
#define SPI0_SSPSR_TNF(v) (((v)&0x1)<<1)
#define SPI0_SSPSR_TNF_MASK SPI0_SSPSR_TNF(ALL1)
#define SPI0_SSPSR_TFE(v) (((v)&0x1)<<0)
#define SPI0_SSPSR_TFE_MASK SPI0_SSPSR_TFE(ALL1)

/*SSPCPSR Register macros*/

#define SPI0_SSPCPSR_CPSDVSR(v) (((v)&0xff)<<0)
#define SPI0_SSPCPSR_CPSDVSR_MASK SPI0_SSPCPSR_CPSDVSR(ALL1)

/*SSPIMSC Register macros*/

#define SPI0_SSPIMSC_TXIM(v) (((v)&0x1)<<3)
#define SPI0_SSPIMSC_TXIM_MASK SPI0_SSPIMSC_TXIM(ALL1)
#define SPI0_SSPIMSC_RXIM(v) (((v)&0x1)<<2)
#define SPI0_SSPIMSC_RXIM_MASK SPI0_SSPIMSC_RXIM(ALL1)
#define SPI0_SSPIMSC_RTIM(v) (((v)&0x1)<<1)
#define SPI0_SSPIMSC_RTIM_MASK SPI0_SSPIMSC_RTIM(ALL1)
#define SPI0_SSPIMSC_RORIM(v) (((v)&0x1)<<0)
#define SPI0_SSPIMSC_RORIM_MASK SPI0_SSPIMSC_RORIM(ALL1)

/*SSPRIS Register macros*/

#define SPI0_SSPRIS_TXRIS(v) (((v)&0x1)<<3)
#define SPI0_SSPRIS_TXRIS_MASK SPI0_SSPRIS_TXRIS(ALL1)
#define SPI0_SSPRIS_RXRIS(v) (((v)&0x1)<<2)
#define SPI0_SSPRIS_RXRIS_MASK SPI0_SSPRIS_RXRIS(ALL1)
#define SPI0_SSPRIS_RTRIS(v) (((v)&0x1)<<1)
#define SPI0_SSPRIS_RTRIS_MASK SPI0_SSPRIS_RTRIS(ALL1)
#define SPI0_SSPRIS_RORRIS(v) (((v)&0x1)<<0)
#define SPI0_SSPRIS_RORRIS_MASK SPI0_SSPRIS_RORRIS(ALL1)

/*SSPMIS Register macros*/

#define SPI0_SSPMIS_TXMIS(v) (((v)&0x1)<<3)
#define SPI0_SSPMIS_TXMIS_MASK SPI0_SSPMIS_TXMIS(ALL1)
#define SPI0_SSPMIS_RXMIS(v) (((v)&0x1)<<2)
#define SPI0_SSPMIS_RXMIS_MASK SPI0_SSPMIS_RXMIS(ALL1)
#define SPI0_SSPMIS_RTMIS(v) (((v)&0x1)<<1)
#define SPI0_SSPMIS_RTMIS_MASK SPI0_SSPMIS_RTMIS(ALL1)
#define SPI0_SSPMIS_RORMIS(v) (((v)&0x1)<<0)
#define SPI0_SSPMIS_RORMIS_MASK SPI0_SSPMIS_RORMIS(ALL1)

/*SSPICR Register macros*/

#define SPI0_SSPICR_RTIC(v) (((v)&0x1)<<1)
#define SPI0_SSPICR_RTIC_MASK SPI0_SSPICR_RTIC(ALL1)
#define SPI0_SSPICR_RORIC(v) (((v)&0x1)<<0)
#define SPI0_SSPICR_RORIC_MASK SPI0_SSPICR_RORIC(ALL1)

/*SSPDMACR Register macros*/

#define SPI0_SSPDMACR_TXDMAE(v) (((v)&0x1)<<1)
#define SPI0_SSPDMACR_TXDMAE_MASK SPI0_SSPDMACR_TXDMAE(ALL1)
#define SPI0_SSPDMACR_RXDMAE(v) (((v)&0x1)<<0)
#define SPI0_SSPDMACR_RXDMAE_MASK SPI0_SSPDMACR_RXDMAE(ALL1)

/*SSPPERIPHID0 Register macros*/

#define SPI0_SSPPERIPHID0_PARTNUMBER0(v) (((v)&0xff)<<0)
#define SPI0_SSPPERIPHID0_PARTNUMBER0_MASK SPI0_SSPPERIPHID0_PARTNUMBER0(ALL1)

/*SSPPERIPHID1 Register macros*/

#define SPI0_SSPPERIPHID1_DESIGNER0(v) (((v)&0xf)<<4)
#define SPI0_SSPPERIPHID1_DESIGNER0_MASK SPI0_SSPPERIPHID1_DESIGNER0(ALL1)
#define SPI0_SSPPERIPHID1_PARTNUMBER1(v) (((v)&0xf)<<0)
#define SPI0_SSPPERIPHID1_PARTNUMBER1_MASK SPI0_SSPPERIPHID1_PARTNUMBER1(ALL1)

/*SSPPERIPHID2 Register macros*/

#define SPI0_SSPPERIPHID2_REVISION(v) (((v)&0xf)<<4)
#define SPI0_SSPPERIPHID2_REVISION_MASK SPI0_SSPPERIPHID2_REVISION(ALL1)
#define SPI0_SSPPERIPHID2_DESIGNER1(v) (((v)&0xf)<<0)
#define SPI0_SSPPERIPHID2_DESIGNER1_MASK SPI0_SSPPERIPHID2_DESIGNER1(ALL1)

/*SSPPERIPHID3 Register macros*/

#define SPI0_SSPPERIPHID3_CONFIGURATION(v) (((v)&0xff)<<0)
#define SPI0_SSPPERIPHID3_CONFIGURATION_MASK SPI0_SSPPERIPHID3_CONFIGURATION(ALL1)

/*SSPPCELLID0 Register macros*/

#define SPI0_SSPPCELLID0_SSPPCELLID0(v) (((v)&0xff)<<0)
#define SPI0_SSPPCELLID0_SSPPCELLID0_MASK SPI0_SSPPCELLID0_SSPPCELLID0(ALL1)

/*SSPPCELLID1 Register macros*/

#define SPI0_SSPPCELLID1_SSPPCELLID1(v) (((v)&0xff)<<0)
#define SPI0_SSPPCELLID1_SSPPCELLID1_MASK SPI0_SSPPCELLID1_SSPPCELLID1(ALL1)

/*SSPPCELLID2 Register macros*/

#define SPI0_SSPPCELLID2_SSPPCELLID2(v) (((v)&0xff)<<0)
#define SPI0_SSPPCELLID2_SSPPCELLID2_MASK SPI0_SSPPCELLID2_SSPPCELLID2(ALL1)

/*SSPPCELLID3 Register macros*/

#define SPI0_SSPPCELLID3_SSPPCELLID3(v) (((v)&0xff)<<0)
#define SPI0_SSPPCELLID3_SSPPCELLID3_MASK SPI0_SSPPCELLID3_SSPPCELLID3(ALL1)

/*SSPCR0 Register macros*/

#define SPI1_SSPCR0_SCR(v) (((v)&0xff)<<8)
#define SPI1_SSPCR0_SCR_MASK SPI1_SSPCR0_SCR(ALL1)
#define SPI1_SSPCR0_SPH(v) (((v)&0x1)<<7)
#define SPI1_SSPCR0_SPH_MASK SPI1_SSPCR0_SPH(ALL1)
#define SPI1_SSPCR0_SPO(v) (((v)&0x1)<<6)
#define SPI1_SSPCR0_SPO_MASK SPI1_SSPCR0_SPO(ALL1)
#define SPI1_SSPCR0_FRF(v) (((v)&0x3)<<4)
#define SPI1_SSPCR0_FRF_MASK SPI1_SSPCR0_FRF(ALL1)
#define SPI1_SSPCR0_DSS(v) (((v)&0xf)<<0)
#define SPI1_SSPCR0_DSS_MASK SPI1_SSPCR0_DSS(ALL1)

/*SSPCR1 Register macros*/

#define SPI1_SSPCR1_SOD(v) (((v)&0x1)<<3)
#define SPI1_SSPCR1_SOD_MASK SPI1_SSPCR1_SOD(ALL1)
#define SPI1_SSPCR1_MS(v) (((v)&0x1)<<2)
#define SPI1_SSPCR1_MS_MASK SPI1_SSPCR1_MS(ALL1)
#define SPI1_SSPCR1_SSE(v) (((v)&0x1)<<1)
#define SPI1_SSPCR1_SSE_MASK SPI1_SSPCR1_SSE(ALL1)
#define SPI1_SSPCR1_LBM(v) (((v)&0x1)<<0)
#define SPI1_SSPCR1_LBM_MASK SPI1_SSPCR1_LBM(ALL1)

/*SSPDR Register macros*/

#define SPI1_SSPDR_DATA(v) (((v)&0xffff)<<0)
#define SPI1_SSPDR_DATA_MASK SPI1_SSPDR_DATA(ALL1)

/*SSPSR Register macros*/

#define SPI1_SSPSR_BSY(v) (((v)&0x1)<<4)
#define SPI1_SSPSR_BSY_MASK SPI1_SSPSR_BSY(ALL1)
#define SPI1_SSPSR_RFF(v) (((v)&0x1)<<3)
#define SPI1_SSPSR_RFF_MASK SPI1_SSPSR_RFF(ALL1)
#define SPI1_SSPSR_RNE(v) (((v)&0x1)<<2)
#define SPI1_SSPSR_RNE_MASK SPI1_SSPSR_RNE(ALL1)
#define SPI1_SSPSR_TNF(v) (((v)&0x1)<<1)
#define SPI1_SSPSR_TNF_MASK SPI1_SSPSR_TNF(ALL1)
#define SPI1_SSPSR_TFE(v) (((v)&0x1)<<0)
#define SPI1_SSPSR_TFE_MASK SPI1_SSPSR_TFE(ALL1)

/*SSPCPSR Register macros*/

#define SPI1_SSPCPSR_CPSDVSR(v) (((v)&0xff)<<0)
#define SPI1_SSPCPSR_CPSDVSR_MASK SPI1_SSPCPSR_CPSDVSR(ALL1)

/*SSPIMSC Register macros*/

#define SPI1_SSPIMSC_TXIM(v) (((v)&0x1)<<3)
#define SPI1_SSPIMSC_TXIM_MASK SPI1_SSPIMSC_TXIM(ALL1)
#define SPI1_SSPIMSC_RXIM(v) (((v)&0x1)<<2)
#define SPI1_SSPIMSC_RXIM_MASK SPI1_SSPIMSC_RXIM(ALL1)
#define SPI1_SSPIMSC_RTIM(v) (((v)&0x1)<<1)
#define SPI1_SSPIMSC_RTIM_MASK SPI1_SSPIMSC_RTIM(ALL1)
#define SPI1_SSPIMSC_RORIM(v) (((v)&0x1)<<0)
#define SPI1_SSPIMSC_RORIM_MASK SPI1_SSPIMSC_RORIM(ALL1)

/*SSPRIS Register macros*/

#define SPI1_SSPRIS_TXRIS(v) (((v)&0x1)<<3)
#define SPI1_SSPRIS_TXRIS_MASK SPI1_SSPRIS_TXRIS(ALL1)
#define SPI1_SSPRIS_RXRIS(v) (((v)&0x1)<<2)
#define SPI1_SSPRIS_RXRIS_MASK SPI1_SSPRIS_RXRIS(ALL1)
#define SPI1_SSPRIS_RTRIS(v) (((v)&0x1)<<1)
#define SPI1_SSPRIS_RTRIS_MASK SPI1_SSPRIS_RTRIS(ALL1)
#define SPI1_SSPRIS_RORRIS(v) (((v)&0x1)<<0)
#define SPI1_SSPRIS_RORRIS_MASK SPI1_SSPRIS_RORRIS(ALL1)

/*SSPMIS Register macros*/

#define SPI1_SSPMIS_TXMIS(v) (((v)&0x1)<<3)
#define SPI1_SSPMIS_TXMIS_MASK SPI1_SSPMIS_TXMIS(ALL1)
#define SPI1_SSPMIS_RXMIS(v) (((v)&0x1)<<2)
#define SPI1_SSPMIS_RXMIS_MASK SPI1_SSPMIS_RXMIS(ALL1)
#define SPI1_SSPMIS_RTMIS(v) (((v)&0x1)<<1)
#define SPI1_SSPMIS_RTMIS_MASK SPI1_SSPMIS_RTMIS(ALL1)
#define SPI1_SSPMIS_RORMIS(v) (((v)&0x1)<<0)
#define SPI1_SSPMIS_RORMIS_MASK SPI1_SSPMIS_RORMIS(ALL1)

/*SSPICR Register macros*/

#define SPI1_SSPICR_RTIC(v) (((v)&0x1)<<1)
#define SPI1_SSPICR_RTIC_MASK SPI1_SSPICR_RTIC(ALL1)
#define SPI1_SSPICR_RORIC(v) (((v)&0x1)<<0)
#define SPI1_SSPICR_RORIC_MASK SPI1_SSPICR_RORIC(ALL1)

/*SSPDMACR Register macros*/

#define SPI1_SSPDMACR_TXDMAE(v) (((v)&0x1)<<1)
#define SPI1_SSPDMACR_TXDMAE_MASK SPI1_SSPDMACR_TXDMAE(ALL1)
#define SPI1_SSPDMACR_RXDMAE(v) (((v)&0x1)<<0)
#define SPI1_SSPDMACR_RXDMAE_MASK SPI1_SSPDMACR_RXDMAE(ALL1)

/*SSPPERIPHID0 Register macros*/

#define SPI1_SSPPERIPHID0_PARTNUMBER0(v) (((v)&0xff)<<0)
#define SPI1_SSPPERIPHID0_PARTNUMBER0_MASK SPI1_SSPPERIPHID0_PARTNUMBER0(ALL1)

/*SSPPERIPHID1 Register macros*/

#define SPI1_SSPPERIPHID1_DESIGNER0(v) (((v)&0xf)<<4)
#define SPI1_SSPPERIPHID1_DESIGNER0_MASK SPI1_SSPPERIPHID1_DESIGNER0(ALL1)
#define SPI1_SSPPERIPHID1_PARTNUMBER1(v) (((v)&0xf)<<0)
#define SPI1_SSPPERIPHID1_PARTNUMBER1_MASK SPI1_SSPPERIPHID1_PARTNUMBER1(ALL1)

/*SSPPERIPHID2 Register macros*/

#define SPI1_SSPPERIPHID2_REVISION(v) (((v)&0xf)<<4)
#define SPI1_SSPPERIPHID2_REVISION_MASK SPI1_SSPPERIPHID2_REVISION(ALL1)
#define SPI1_SSPPERIPHID2_DESIGNER1(v) (((v)&0xf)<<0)
#define SPI1_SSPPERIPHID2_DESIGNER1_MASK SPI1_SSPPERIPHID2_DESIGNER1(ALL1)

/*SSPPERIPHID3 Register macros*/

#define SPI1_SSPPERIPHID3_CONFIGURATION(v) (((v)&0xff)<<0)
#define SPI1_SSPPERIPHID3_CONFIGURATION_MASK SPI1_SSPPERIPHID3_CONFIGURATION(ALL1)

/*SSPPCELLID0 Register macros*/

#define SPI1_SSPPCELLID0_SSPPCELLID0(v) (((v)&0xff)<<0)
#define SPI1_SSPPCELLID0_SSPPCELLID0_MASK SPI1_SSPPCELLID0_SSPPCELLID0(ALL1)

/*SSPPCELLID1 Register macros*/

#define SPI1_SSPPCELLID1_SSPPCELLID1(v) (((v)&0xff)<<0)
#define SPI1_SSPPCELLID1_SSPPCELLID1_MASK SPI1_SSPPCELLID1_SSPPCELLID1(ALL1)

/*SSPPCELLID2 Register macros*/

#define SPI1_SSPPCELLID2_SSPPCELLID2(v) (((v)&0xff)<<0)
#define SPI1_SSPPCELLID2_SSPPCELLID2_MASK SPI1_SSPPCELLID2_SSPPCELLID2(ALL1)

/*SSPPCELLID3 Register macros*/

#define SPI1_SSPPCELLID3_SSPPCELLID3(v) (((v)&0xff)<<0)
#define SPI1_SSPPCELLID3_SSPPCELLID3_MASK SPI1_SSPPCELLID3_SSPPCELLID3(ALL1)

#endif

