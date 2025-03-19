
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

#ifndef RP2350_PLL_H
#define RP2350_PLL_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t cs;
		uint32_t pwr;
		uint32_t fbdiv_int;
		uint32_t prim;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[1016];
		uint32_t xor_cs;
		uint32_t xor_pwr;
		uint32_t xor_fbdiv_int;
		uint32_t xor_prim;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_0[1016];
		uint32_t set_cs;
		uint32_t set_pwr;
		uint32_t set_fbdiv_int;
		uint32_t set_prim;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_0[1016];
		uint32_t clr_cs;
		uint32_t clr_pwr;
		uint32_t clr_fbdiv_int;
		uint32_t clr_prim;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_0[1016];
} PLL_SYS_REG_BLOCKS;
typedef struct{
		uint32_t cs;
		uint32_t pwr;
		uint32_t fbdiv_int;
		uint32_t prim;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[1016];
		uint32_t xor_cs;
		uint32_t xor_pwr;
		uint32_t xor_fbdiv_int;
		uint32_t xor_prim;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_0[1016];
		uint32_t set_cs;
		uint32_t set_pwr;
		uint32_t set_fbdiv_int;
		uint32_t set_prim;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_0[1016];
		uint32_t clr_cs;
		uint32_t clr_pwr;
		uint32_t clr_fbdiv_int;
		uint32_t clr_prim;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_0[1016];
} PLL_USB_REG_BLOCKS;


/*IO Registers as struct*/

#define pll_sys (*(PLL_SYS_REG_BLOCKS volatile *)0x40050000)



#define pll_usb (*(PLL_USB_REG_BLOCKS volatile *)0x40058000)


/*IO Registers AS MACROS*/

#define PLL_SYS_CS (*(volatile uint32_t *)0x40050000)
#define PLL_SYS_PWR (*(volatile uint32_t *)0x40050004)
#define PLL_SYS_FBDIV_INT (*(volatile uint32_t *)0x40050008)
#define PLL_SYS_PRIM (*(volatile uint32_t *)0x4005000c)
#define PLL_SYS_INTR (*(volatile uint32_t *)0x40050010)
#define PLL_SYS_INTE (*(volatile uint32_t *)0x40050014)
#define PLL_SYS_INTF (*(volatile uint32_t *)0x40050018)
#define PLL_SYS_INTS (*(volatile uint32_t *)0x4005001c)
#define PLL_SYS_XOR_CS (*(volatile uint32_t *)0x40051000)
#define PLL_SYS_XOR_PWR (*(volatile uint32_t *)0x40051004)
#define PLL_SYS_XOR_FBDIV_INT (*(volatile uint32_t *)0x40051008)
#define PLL_SYS_XOR_PRIM (*(volatile uint32_t *)0x4005100c)
#define PLL_SYS_XOR_INTR (*(volatile uint32_t *)0x40051010)
#define PLL_SYS_XOR_INTE (*(volatile uint32_t *)0x40051014)
#define PLL_SYS_XOR_INTF (*(volatile uint32_t *)0x40051018)
#define PLL_SYS_XOR_INTS (*(volatile uint32_t *)0x4005101c)
#define PLL_SYS_SET_CS (*(volatile uint32_t *)0x40052000)
#define PLL_SYS_SET_PWR (*(volatile uint32_t *)0x40052004)
#define PLL_SYS_SET_FBDIV_INT (*(volatile uint32_t *)0x40052008)
#define PLL_SYS_SET_PRIM (*(volatile uint32_t *)0x4005200c)
#define PLL_SYS_SET_INTR (*(volatile uint32_t *)0x40052010)
#define PLL_SYS_SET_INTE (*(volatile uint32_t *)0x40052014)
#define PLL_SYS_SET_INTF (*(volatile uint32_t *)0x40052018)
#define PLL_SYS_SET_INTS (*(volatile uint32_t *)0x4005201c)
#define PLL_SYS_CLR_CS (*(volatile uint32_t *)0x40053000)
#define PLL_SYS_CLR_PWR (*(volatile uint32_t *)0x40053004)
#define PLL_SYS_CLR_FBDIV_INT (*(volatile uint32_t *)0x40053008)
#define PLL_SYS_CLR_PRIM (*(volatile uint32_t *)0x4005300c)
#define PLL_SYS_CLR_INTR (*(volatile uint32_t *)0x40053010)
#define PLL_SYS_CLR_INTE (*(volatile uint32_t *)0x40053014)
#define PLL_SYS_CLR_INTF (*(volatile uint32_t *)0x40053018)
#define PLL_SYS_CLR_INTS (*(volatile uint32_t *)0x4005301c)
#define PLL_USB_CS (*(volatile uint32_t *)0x40058000)
#define PLL_USB_PWR (*(volatile uint32_t *)0x40058004)
#define PLL_USB_FBDIV_INT (*(volatile uint32_t *)0x40058008)
#define PLL_USB_PRIM (*(volatile uint32_t *)0x4005800c)
#define PLL_USB_INTR (*(volatile uint32_t *)0x40058010)
#define PLL_USB_INTE (*(volatile uint32_t *)0x40058014)
#define PLL_USB_INTF (*(volatile uint32_t *)0x40058018)
#define PLL_USB_INTS (*(volatile uint32_t *)0x4005801c)
#define PLL_USB_XOR_CS (*(volatile uint32_t *)0x40059000)
#define PLL_USB_XOR_PWR (*(volatile uint32_t *)0x40059004)
#define PLL_USB_XOR_FBDIV_INT (*(volatile uint32_t *)0x40059008)
#define PLL_USB_XOR_PRIM (*(volatile uint32_t *)0x4005900c)
#define PLL_USB_XOR_INTR (*(volatile uint32_t *)0x40059010)
#define PLL_USB_XOR_INTE (*(volatile uint32_t *)0x40059014)
#define PLL_USB_XOR_INTF (*(volatile uint32_t *)0x40059018)
#define PLL_USB_XOR_INTS (*(volatile uint32_t *)0x4005901c)
#define PLL_USB_SET_CS (*(volatile uint32_t *)0x4005a000)
#define PLL_USB_SET_PWR (*(volatile uint32_t *)0x4005a004)
#define PLL_USB_SET_FBDIV_INT (*(volatile uint32_t *)0x4005a008)
#define PLL_USB_SET_PRIM (*(volatile uint32_t *)0x4005a00c)
#define PLL_USB_SET_INTR (*(volatile uint32_t *)0x4005a010)
#define PLL_USB_SET_INTE (*(volatile uint32_t *)0x4005a014)
#define PLL_USB_SET_INTF (*(volatile uint32_t *)0x4005a018)
#define PLL_USB_SET_INTS (*(volatile uint32_t *)0x4005a01c)
#define PLL_USB_CLR_CS (*(volatile uint32_t *)0x4005b000)
#define PLL_USB_CLR_PWR (*(volatile uint32_t *)0x4005b004)
#define PLL_USB_CLR_FBDIV_INT (*(volatile uint32_t *)0x4005b008)
#define PLL_USB_CLR_PRIM (*(volatile uint32_t *)0x4005b00c)
#define PLL_USB_CLR_INTR (*(volatile uint32_t *)0x4005b010)
#define PLL_USB_CLR_INTE (*(volatile uint32_t *)0x4005b014)
#define PLL_USB_CLR_INTF (*(volatile uint32_t *)0x4005b018)
#define PLL_USB_CLR_INTS (*(volatile uint32_t *)0x4005b01c)

/*CS Register macros*/

#define PLL_SYS_CS_LOCK(v) (((v)&0x1)<<31)
#define PLL_SYS_CS_LOCK_MASK PLL_SYS_CS_LOCK(ALL1)
#define PLL_SYS_CS_LOCK_N(v) (((v)&0x1)<<30)
#define PLL_SYS_CS_LOCK_N_MASK PLL_SYS_CS_LOCK_N(ALL1)
#define PLL_SYS_CS_BYPASS(v) (((v)&0x1)<<8)
#define PLL_SYS_CS_BYPASS_MASK PLL_SYS_CS_BYPASS(ALL1)
#define PLL_SYS_CS_REFDIV(v) (((v)&0x3f)<<0)
#define PLL_SYS_CS_REFDIV_MASK PLL_SYS_CS_REFDIV(ALL1)

/*PWR Register macros*/

#define PLL_SYS_PWR_VCOPD(v) (((v)&0x1)<<5)
#define PLL_SYS_PWR_VCOPD_MASK PLL_SYS_PWR_VCOPD(ALL1)
#define PLL_SYS_PWR_POSTDIVPD(v) (((v)&0x1)<<3)
#define PLL_SYS_PWR_POSTDIVPD_MASK PLL_SYS_PWR_POSTDIVPD(ALL1)
#define PLL_SYS_PWR_DSMPD(v) (((v)&0x1)<<2)
#define PLL_SYS_PWR_DSMPD_MASK PLL_SYS_PWR_DSMPD(ALL1)
#define PLL_SYS_PWR_PD(v) (((v)&0x1)<<0)
#define PLL_SYS_PWR_PD_MASK PLL_SYS_PWR_PD(ALL1)

/*FBDIV_INT Register macros*/


/*PRIM Register macros*/

#define PLL_SYS_PRIM_POSTDIV1(v) (((v)&0x7)<<16)
#define PLL_SYS_PRIM_POSTDIV1_MASK PLL_SYS_PRIM_POSTDIV1(ALL1)
#define PLL_SYS_PRIM_POSTDIV2(v) (((v)&0x7)<<12)
#define PLL_SYS_PRIM_POSTDIV2_MASK PLL_SYS_PRIM_POSTDIV2(ALL1)

/*INTR Register macros*/

#define PLL_SYS_INTR_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_SYS_INTR_LOCK_N_STICKY_MASK PLL_SYS_INTR_LOCK_N_STICKY(ALL1)

/*INTE Register macros*/

#define PLL_SYS_INTE_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_SYS_INTE_LOCK_N_STICKY_MASK PLL_SYS_INTE_LOCK_N_STICKY(ALL1)

/*INTF Register macros*/

#define PLL_SYS_INTF_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_SYS_INTF_LOCK_N_STICKY_MASK PLL_SYS_INTF_LOCK_N_STICKY(ALL1)

/*INTS Register macros*/

#define PLL_SYS_INTS_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_SYS_INTS_LOCK_N_STICKY_MASK PLL_SYS_INTS_LOCK_N_STICKY(ALL1)

/*CS Register macros*/

#define PLL_USB_CS_LOCK(v) (((v)&0x1)<<31)
#define PLL_USB_CS_LOCK_MASK PLL_USB_CS_LOCK(ALL1)
#define PLL_USB_CS_LOCK_N(v) (((v)&0x1)<<30)
#define PLL_USB_CS_LOCK_N_MASK PLL_USB_CS_LOCK_N(ALL1)
#define PLL_USB_CS_BYPASS(v) (((v)&0x1)<<8)
#define PLL_USB_CS_BYPASS_MASK PLL_USB_CS_BYPASS(ALL1)
#define PLL_USB_CS_REFDIV(v) (((v)&0x3f)<<0)
#define PLL_USB_CS_REFDIV_MASK PLL_USB_CS_REFDIV(ALL1)

/*PWR Register macros*/

#define PLL_USB_PWR_VCOPD(v) (((v)&0x1)<<5)
#define PLL_USB_PWR_VCOPD_MASK PLL_USB_PWR_VCOPD(ALL1)
#define PLL_USB_PWR_POSTDIVPD(v) (((v)&0x1)<<3)
#define PLL_USB_PWR_POSTDIVPD_MASK PLL_USB_PWR_POSTDIVPD(ALL1)
#define PLL_USB_PWR_DSMPD(v) (((v)&0x1)<<2)
#define PLL_USB_PWR_DSMPD_MASK PLL_USB_PWR_DSMPD(ALL1)
#define PLL_USB_PWR_PD(v) (((v)&0x1)<<0)
#define PLL_USB_PWR_PD_MASK PLL_USB_PWR_PD(ALL1)

/*FBDIV_INT Register macros*/


/*PRIM Register macros*/

#define PLL_USB_PRIM_POSTDIV1(v) (((v)&0x7)<<16)
#define PLL_USB_PRIM_POSTDIV1_MASK PLL_USB_PRIM_POSTDIV1(ALL1)
#define PLL_USB_PRIM_POSTDIV2(v) (((v)&0x7)<<12)
#define PLL_USB_PRIM_POSTDIV2_MASK PLL_USB_PRIM_POSTDIV2(ALL1)

/*INTR Register macros*/

#define PLL_USB_INTR_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_USB_INTR_LOCK_N_STICKY_MASK PLL_USB_INTR_LOCK_N_STICKY(ALL1)

/*INTE Register macros*/

#define PLL_USB_INTE_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_USB_INTE_LOCK_N_STICKY_MASK PLL_USB_INTE_LOCK_N_STICKY(ALL1)

/*INTF Register macros*/

#define PLL_USB_INTF_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_USB_INTF_LOCK_N_STICKY_MASK PLL_USB_INTF_LOCK_N_STICKY(ALL1)

/*INTS Register macros*/

#define PLL_USB_INTS_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_USB_INTS_LOCK_N_STICKY_MASK PLL_USB_INTS_LOCK_N_STICKY(ALL1)

#endif

