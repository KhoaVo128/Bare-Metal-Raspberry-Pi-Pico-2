
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

#ifndef RP2350_RVCSR_H
#define RP2350_RVCSR_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t RSVD0[192];
		uint32_t mstatus;
		uint32_t mie;
		uint32_t RSVD1[2];
		uint32_t mstatush;
		uint32_t RSVD2[3];
		uint32_t mcountinhibit;
		uint32_t mhpmevent4;
		uint32_t mhpmevent8;
		uint32_t mhpmevent12;
		uint32_t mhpmevent16;
		uint32_t mhpmevent20;
		uint32_t mhpmevent24;
		uint32_t mhpmevent28;
		uint32_t mscratch;
		uint32_t mip;
		uint32_t RSVD3[22];
		uint32_t pmpcfg0;
		uint32_t RSVD4[3];
		uint32_t pmpaddr0;
		uint32_t pmpaddr4;
		uint32_t pmpaddr8;
		uint32_t pmpaddr12;
		uint32_t RSVD5[248];
		uint32_t tselect;
		uint32_t RSVD6[3];
		uint32_t dcsr;
		uint32_t RSVD7[211];
		uint32_t mcycle;
		uint32_t mhpmcounter4;
		uint32_t mhpmcounter8;
		uint32_t mhpmcounter12;
		uint32_t mhpmcounter16;
		uint32_t mhpmcounter20;
		uint32_t mhpmcounter24;
		uint32_t mhpmcounter28;
		uint32_t RSVD8[24];
		uint32_t mcycleh;
		uint32_t mhpmcounter4h;
		uint32_t mhpmcounter8h;
		uint32_t mhpmcounter12h;
		uint32_t mhpmcounter16h;
		uint32_t mhpmcounter20h;
		uint32_t mhpmcounter24h;
		uint32_t mhpmcounter28h;
		uint32_t RSVD9[12];
		uint32_t pmpcfgm0;
		uint32_t RSVD10[3];
		uint32_t meiea;
		uint32_t meinext;
		uint32_t RSVD11[2];
		uint32_t msleep;
		uint32_t RSVD12[3];
		uint32_t cycle;
		uint32_t RSVD13[31];
		uint32_t cycleh;
		uint32_t RSVD14[164];
		uint32_t mhartid;
		uint32_t RSVD15[58];
		uint32_t RSVDxor_0[192];
		uint32_t xor_mstatus;
		uint32_t xor_mie;
		uint32_t RSVDxor_1[2];
		uint32_t xor_mstatush;
		uint32_t RSVDxor_2[3];
		uint32_t xor_mcountinhibit;
		uint32_t xor_mhpmevent4;
		uint32_t xor_mhpmevent8;
		uint32_t xor_mhpmevent12;
		uint32_t xor_mhpmevent16;
		uint32_t xor_mhpmevent20;
		uint32_t xor_mhpmevent24;
		uint32_t xor_mhpmevent28;
		uint32_t xor_mscratch;
		uint32_t xor_mip;
		uint32_t RSVDxor_3[22];
		uint32_t xor_pmpcfg0;
		uint32_t RSVDxor_4[3];
		uint32_t xor_pmpaddr0;
		uint32_t xor_pmpaddr4;
		uint32_t xor_pmpaddr8;
		uint32_t xor_pmpaddr12;
		uint32_t RSVDxor_5[248];
		uint32_t xor_tselect;
		uint32_t RSVDxor_6[3];
		uint32_t xor_dcsr;
		uint32_t RSVDxor_7[211];
		uint32_t xor_mcycle;
		uint32_t xor_mhpmcounter4;
		uint32_t xor_mhpmcounter8;
		uint32_t xor_mhpmcounter12;
		uint32_t xor_mhpmcounter16;
		uint32_t xor_mhpmcounter20;
		uint32_t xor_mhpmcounter24;
		uint32_t xor_mhpmcounter28;
		uint32_t RSVDxor_8[24];
		uint32_t xor_mcycleh;
		uint32_t xor_mhpmcounter4h;
		uint32_t xor_mhpmcounter8h;
		uint32_t xor_mhpmcounter12h;
		uint32_t xor_mhpmcounter16h;
		uint32_t xor_mhpmcounter20h;
		uint32_t xor_mhpmcounter24h;
		uint32_t xor_mhpmcounter28h;
		uint32_t RSVDxor_9[12];
		uint32_t xor_pmpcfgm0;
		uint32_t RSVDxor_10[3];
		uint32_t xor_meiea;
		uint32_t xor_meinext;
		uint32_t RSVDxor_11[2];
		uint32_t xor_msleep;
		uint32_t RSVDxor_12[3];
		uint32_t xor_cycle;
		uint32_t RSVDxor_13[31];
		uint32_t xor_cycleh;
		uint32_t RSVDxor_14[164];
		uint32_t xor_mhartid;
		uint32_t RSVDxor_15[58];
		uint32_t RSVDset_0[192];
		uint32_t set_mstatus;
		uint32_t set_mie;
		uint32_t RSVDset_1[2];
		uint32_t set_mstatush;
		uint32_t RSVDset_2[3];
		uint32_t set_mcountinhibit;
		uint32_t set_mhpmevent4;
		uint32_t set_mhpmevent8;
		uint32_t set_mhpmevent12;
		uint32_t set_mhpmevent16;
		uint32_t set_mhpmevent20;
		uint32_t set_mhpmevent24;
		uint32_t set_mhpmevent28;
		uint32_t set_mscratch;
		uint32_t set_mip;
		uint32_t RSVDset_3[22];
		uint32_t set_pmpcfg0;
		uint32_t RSVDset_4[3];
		uint32_t set_pmpaddr0;
		uint32_t set_pmpaddr4;
		uint32_t set_pmpaddr8;
		uint32_t set_pmpaddr12;
		uint32_t RSVDset_5[248];
		uint32_t set_tselect;
		uint32_t RSVDset_6[3];
		uint32_t set_dcsr;
		uint32_t RSVDset_7[211];
		uint32_t set_mcycle;
		uint32_t set_mhpmcounter4;
		uint32_t set_mhpmcounter8;
		uint32_t set_mhpmcounter12;
		uint32_t set_mhpmcounter16;
		uint32_t set_mhpmcounter20;
		uint32_t set_mhpmcounter24;
		uint32_t set_mhpmcounter28;
		uint32_t RSVDset_8[24];
		uint32_t set_mcycleh;
		uint32_t set_mhpmcounter4h;
		uint32_t set_mhpmcounter8h;
		uint32_t set_mhpmcounter12h;
		uint32_t set_mhpmcounter16h;
		uint32_t set_mhpmcounter20h;
		uint32_t set_mhpmcounter24h;
		uint32_t set_mhpmcounter28h;
		uint32_t RSVDset_9[12];
		uint32_t set_pmpcfgm0;
		uint32_t RSVDset_10[3];
		uint32_t set_meiea;
		uint32_t set_meinext;
		uint32_t RSVDset_11[2];
		uint32_t set_msleep;
		uint32_t RSVDset_12[3];
		uint32_t set_cycle;
		uint32_t RSVDset_13[31];
		uint32_t set_cycleh;
		uint32_t RSVDset_14[164];
		uint32_t set_mhartid;
		uint32_t RSVDset_15[58];
		uint32_t RSVDclr_0[192];
		uint32_t clr_mstatus;
		uint32_t clr_mie;
		uint32_t RSVDclr_1[2];
		uint32_t clr_mstatush;
		uint32_t RSVDclr_2[3];
		uint32_t clr_mcountinhibit;
		uint32_t clr_mhpmevent4;
		uint32_t clr_mhpmevent8;
		uint32_t clr_mhpmevent12;
		uint32_t clr_mhpmevent16;
		uint32_t clr_mhpmevent20;
		uint32_t clr_mhpmevent24;
		uint32_t clr_mhpmevent28;
		uint32_t clr_mscratch;
		uint32_t clr_mip;
		uint32_t RSVDclr_3[22];
		uint32_t clr_pmpcfg0;
		uint32_t RSVDclr_4[3];
		uint32_t clr_pmpaddr0;
		uint32_t clr_pmpaddr4;
		uint32_t clr_pmpaddr8;
		uint32_t clr_pmpaddr12;
		uint32_t RSVDclr_5[248];
		uint32_t clr_tselect;
		uint32_t RSVDclr_6[3];
		uint32_t clr_dcsr;
		uint32_t RSVDclr_7[211];
		uint32_t clr_mcycle;
		uint32_t clr_mhpmcounter4;
		uint32_t clr_mhpmcounter8;
		uint32_t clr_mhpmcounter12;
		uint32_t clr_mhpmcounter16;
		uint32_t clr_mhpmcounter20;
		uint32_t clr_mhpmcounter24;
		uint32_t clr_mhpmcounter28;
		uint32_t RSVDclr_8[24];
		uint32_t clr_mcycleh;
		uint32_t clr_mhpmcounter4h;
		uint32_t clr_mhpmcounter8h;
		uint32_t clr_mhpmcounter12h;
		uint32_t clr_mhpmcounter16h;
		uint32_t clr_mhpmcounter20h;
		uint32_t clr_mhpmcounter24h;
		uint32_t clr_mhpmcounter28h;
		uint32_t RSVDclr_9[12];
		uint32_t clr_pmpcfgm0;
		uint32_t RSVDclr_10[3];
		uint32_t clr_meiea;
		uint32_t clr_meinext;
		uint32_t RSVDclr_11[2];
		uint32_t clr_msleep;
		uint32_t RSVDclr_12[3];
		uint32_t clr_cycle;
		uint32_t RSVDclr_13[31];
		uint32_t clr_cycleh;
		uint32_t RSVDclr_14[164];
		uint32_t clr_mhartid;
		uint32_t RSVDclr_15[58];
} RVCSR_REG_BLOCKS;


/*IO Registers as struct*/

#define rvcsr (*(RVCSR_REG_BLOCKS volatile *)0xe0000000)


/*IO Registers AS MACROS*/

#define RVCSR_MSTATUS (*(volatile uint32_t *)0xe0000300)
#define RVCSR_MIE (*(volatile uint32_t *)0xe0000304)
#define RVCSR_MSTATUSH (*(volatile uint32_t *)0xe0000310)
#define RVCSR_MCOUNTINHIBIT (*(volatile uint32_t *)0xe0000320)
#define RVCSR_MHPMEVENT4 (*(volatile uint32_t *)0xe0000324)
#define RVCSR_MHPMEVENT8 (*(volatile uint32_t *)0xe0000328)
#define RVCSR_MHPMEVENT12 (*(volatile uint32_t *)0xe000032c)
#define RVCSR_MHPMEVENT16 (*(volatile uint32_t *)0xe0000330)
#define RVCSR_MHPMEVENT20 (*(volatile uint32_t *)0xe0000334)
#define RVCSR_MHPMEVENT24 (*(volatile uint32_t *)0xe0000338)
#define RVCSR_MHPMEVENT28 (*(volatile uint32_t *)0xe000033c)
#define RVCSR_MSCRATCH (*(volatile uint32_t *)0xe0000340)
#define RVCSR_MIP (*(volatile uint32_t *)0xe0000344)
#define RVCSR_PMPCFG0 (*(volatile uint32_t *)0xe00003a0)
#define RVCSR_PMPADDR0 (*(volatile uint32_t *)0xe00003b0)
#define RVCSR_PMPADDR4 (*(volatile uint32_t *)0xe00003b4)
#define RVCSR_PMPADDR8 (*(volatile uint32_t *)0xe00003b8)
#define RVCSR_PMPADDR12 (*(volatile uint32_t *)0xe00003bc)
#define RVCSR_TSELECT (*(volatile uint32_t *)0xe00007a0)
#define RVCSR_DCSR (*(volatile uint32_t *)0xe00007b0)
#define RVCSR_MCYCLE (*(volatile uint32_t *)0xe0000b00)
#define RVCSR_MHPMCOUNTER4 (*(volatile uint32_t *)0xe0000b04)
#define RVCSR_MHPMCOUNTER8 (*(volatile uint32_t *)0xe0000b08)
#define RVCSR_MHPMCOUNTER12 (*(volatile uint32_t *)0xe0000b0c)
#define RVCSR_MHPMCOUNTER16 (*(volatile uint32_t *)0xe0000b10)
#define RVCSR_MHPMCOUNTER20 (*(volatile uint32_t *)0xe0000b14)
#define RVCSR_MHPMCOUNTER24 (*(volatile uint32_t *)0xe0000b18)
#define RVCSR_MHPMCOUNTER28 (*(volatile uint32_t *)0xe0000b1c)
#define RVCSR_MCYCLEH (*(volatile uint32_t *)0xe0000b80)
#define RVCSR_MHPMCOUNTER4H (*(volatile uint32_t *)0xe0000b84)
#define RVCSR_MHPMCOUNTER8H (*(volatile uint32_t *)0xe0000b88)
#define RVCSR_MHPMCOUNTER12H (*(volatile uint32_t *)0xe0000b8c)
#define RVCSR_MHPMCOUNTER16H (*(volatile uint32_t *)0xe0000b90)
#define RVCSR_MHPMCOUNTER20H (*(volatile uint32_t *)0xe0000b94)
#define RVCSR_MHPMCOUNTER24H (*(volatile uint32_t *)0xe0000b98)
#define RVCSR_MHPMCOUNTER28H (*(volatile uint32_t *)0xe0000b9c)
#define RVCSR_PMPCFGM0 (*(volatile uint32_t *)0xe0000bd0)
#define RVCSR_MEIEA (*(volatile uint32_t *)0xe0000be0)
#define RVCSR_MEINEXT (*(volatile uint32_t *)0xe0000be4)
#define RVCSR_MSLEEP (*(volatile uint32_t *)0xe0000bf0)
#define RVCSR_CYCLE (*(volatile uint32_t *)0xe0000c00)
#define RVCSR_CYCLEH (*(volatile uint32_t *)0xe0000c80)
#define RVCSR_MHARTID (*(volatile uint32_t *)0xe0000f14)
#define RVCSR_XOR_MSTATUS (*(volatile uint32_t *)0xe0001300)
#define RVCSR_XOR_MIE (*(volatile uint32_t *)0xe0001304)
#define RVCSR_XOR_MSTATUSH (*(volatile uint32_t *)0xe0001310)
#define RVCSR_XOR_MCOUNTINHIBIT (*(volatile uint32_t *)0xe0001320)
#define RVCSR_XOR_MHPMEVENT4 (*(volatile uint32_t *)0xe0001324)
#define RVCSR_XOR_MHPMEVENT8 (*(volatile uint32_t *)0xe0001328)
#define RVCSR_XOR_MHPMEVENT12 (*(volatile uint32_t *)0xe000132c)
#define RVCSR_XOR_MHPMEVENT16 (*(volatile uint32_t *)0xe0001330)
#define RVCSR_XOR_MHPMEVENT20 (*(volatile uint32_t *)0xe0001334)
#define RVCSR_XOR_MHPMEVENT24 (*(volatile uint32_t *)0xe0001338)
#define RVCSR_XOR_MHPMEVENT28 (*(volatile uint32_t *)0xe000133c)
#define RVCSR_XOR_MSCRATCH (*(volatile uint32_t *)0xe0001340)
#define RVCSR_XOR_MIP (*(volatile uint32_t *)0xe0001344)
#define RVCSR_XOR_PMPCFG0 (*(volatile uint32_t *)0xe00013a0)
#define RVCSR_XOR_PMPADDR0 (*(volatile uint32_t *)0xe00013b0)
#define RVCSR_XOR_PMPADDR4 (*(volatile uint32_t *)0xe00013b4)
#define RVCSR_XOR_PMPADDR8 (*(volatile uint32_t *)0xe00013b8)
#define RVCSR_XOR_PMPADDR12 (*(volatile uint32_t *)0xe00013bc)
#define RVCSR_XOR_TSELECT (*(volatile uint32_t *)0xe00017a0)
#define RVCSR_XOR_DCSR (*(volatile uint32_t *)0xe00017b0)
#define RVCSR_XOR_MCYCLE (*(volatile uint32_t *)0xe0001b00)
#define RVCSR_XOR_MHPMCOUNTER4 (*(volatile uint32_t *)0xe0001b04)
#define RVCSR_XOR_MHPMCOUNTER8 (*(volatile uint32_t *)0xe0001b08)
#define RVCSR_XOR_MHPMCOUNTER12 (*(volatile uint32_t *)0xe0001b0c)
#define RVCSR_XOR_MHPMCOUNTER16 (*(volatile uint32_t *)0xe0001b10)
#define RVCSR_XOR_MHPMCOUNTER20 (*(volatile uint32_t *)0xe0001b14)
#define RVCSR_XOR_MHPMCOUNTER24 (*(volatile uint32_t *)0xe0001b18)
#define RVCSR_XOR_MHPMCOUNTER28 (*(volatile uint32_t *)0xe0001b1c)
#define RVCSR_XOR_MCYCLEH (*(volatile uint32_t *)0xe0001b80)
#define RVCSR_XOR_MHPMCOUNTER4H (*(volatile uint32_t *)0xe0001b84)
#define RVCSR_XOR_MHPMCOUNTER8H (*(volatile uint32_t *)0xe0001b88)
#define RVCSR_XOR_MHPMCOUNTER12H (*(volatile uint32_t *)0xe0001b8c)
#define RVCSR_XOR_MHPMCOUNTER16H (*(volatile uint32_t *)0xe0001b90)
#define RVCSR_XOR_MHPMCOUNTER20H (*(volatile uint32_t *)0xe0001b94)
#define RVCSR_XOR_MHPMCOUNTER24H (*(volatile uint32_t *)0xe0001b98)
#define RVCSR_XOR_MHPMCOUNTER28H (*(volatile uint32_t *)0xe0001b9c)
#define RVCSR_XOR_PMPCFGM0 (*(volatile uint32_t *)0xe0001bd0)
#define RVCSR_XOR_MEIEA (*(volatile uint32_t *)0xe0001be0)
#define RVCSR_XOR_MEINEXT (*(volatile uint32_t *)0xe0001be4)
#define RVCSR_XOR_MSLEEP (*(volatile uint32_t *)0xe0001bf0)
#define RVCSR_XOR_CYCLE (*(volatile uint32_t *)0xe0001c00)
#define RVCSR_XOR_CYCLEH (*(volatile uint32_t *)0xe0001c80)
#define RVCSR_XOR_MHARTID (*(volatile uint32_t *)0xe0001f14)
#define RVCSR_SET_MSTATUS (*(volatile uint32_t *)0xe0002300)
#define RVCSR_SET_MIE (*(volatile uint32_t *)0xe0002304)
#define RVCSR_SET_MSTATUSH (*(volatile uint32_t *)0xe0002310)
#define RVCSR_SET_MCOUNTINHIBIT (*(volatile uint32_t *)0xe0002320)
#define RVCSR_SET_MHPMEVENT4 (*(volatile uint32_t *)0xe0002324)
#define RVCSR_SET_MHPMEVENT8 (*(volatile uint32_t *)0xe0002328)
#define RVCSR_SET_MHPMEVENT12 (*(volatile uint32_t *)0xe000232c)
#define RVCSR_SET_MHPMEVENT16 (*(volatile uint32_t *)0xe0002330)
#define RVCSR_SET_MHPMEVENT20 (*(volatile uint32_t *)0xe0002334)
#define RVCSR_SET_MHPMEVENT24 (*(volatile uint32_t *)0xe0002338)
#define RVCSR_SET_MHPMEVENT28 (*(volatile uint32_t *)0xe000233c)
#define RVCSR_SET_MSCRATCH (*(volatile uint32_t *)0xe0002340)
#define RVCSR_SET_MIP (*(volatile uint32_t *)0xe0002344)
#define RVCSR_SET_PMPCFG0 (*(volatile uint32_t *)0xe00023a0)
#define RVCSR_SET_PMPADDR0 (*(volatile uint32_t *)0xe00023b0)
#define RVCSR_SET_PMPADDR4 (*(volatile uint32_t *)0xe00023b4)
#define RVCSR_SET_PMPADDR8 (*(volatile uint32_t *)0xe00023b8)
#define RVCSR_SET_PMPADDR12 (*(volatile uint32_t *)0xe00023bc)
#define RVCSR_SET_TSELECT (*(volatile uint32_t *)0xe00027a0)
#define RVCSR_SET_DCSR (*(volatile uint32_t *)0xe00027b0)
#define RVCSR_SET_MCYCLE (*(volatile uint32_t *)0xe0002b00)
#define RVCSR_SET_MHPMCOUNTER4 (*(volatile uint32_t *)0xe0002b04)
#define RVCSR_SET_MHPMCOUNTER8 (*(volatile uint32_t *)0xe0002b08)
#define RVCSR_SET_MHPMCOUNTER12 (*(volatile uint32_t *)0xe0002b0c)
#define RVCSR_SET_MHPMCOUNTER16 (*(volatile uint32_t *)0xe0002b10)
#define RVCSR_SET_MHPMCOUNTER20 (*(volatile uint32_t *)0xe0002b14)
#define RVCSR_SET_MHPMCOUNTER24 (*(volatile uint32_t *)0xe0002b18)
#define RVCSR_SET_MHPMCOUNTER28 (*(volatile uint32_t *)0xe0002b1c)
#define RVCSR_SET_MCYCLEH (*(volatile uint32_t *)0xe0002b80)
#define RVCSR_SET_MHPMCOUNTER4H (*(volatile uint32_t *)0xe0002b84)
#define RVCSR_SET_MHPMCOUNTER8H (*(volatile uint32_t *)0xe0002b88)
#define RVCSR_SET_MHPMCOUNTER12H (*(volatile uint32_t *)0xe0002b8c)
#define RVCSR_SET_MHPMCOUNTER16H (*(volatile uint32_t *)0xe0002b90)
#define RVCSR_SET_MHPMCOUNTER20H (*(volatile uint32_t *)0xe0002b94)
#define RVCSR_SET_MHPMCOUNTER24H (*(volatile uint32_t *)0xe0002b98)
#define RVCSR_SET_MHPMCOUNTER28H (*(volatile uint32_t *)0xe0002b9c)
#define RVCSR_SET_PMPCFGM0 (*(volatile uint32_t *)0xe0002bd0)
#define RVCSR_SET_MEIEA (*(volatile uint32_t *)0xe0002be0)
#define RVCSR_SET_MEINEXT (*(volatile uint32_t *)0xe0002be4)
#define RVCSR_SET_MSLEEP (*(volatile uint32_t *)0xe0002bf0)
#define RVCSR_SET_CYCLE (*(volatile uint32_t *)0xe0002c00)
#define RVCSR_SET_CYCLEH (*(volatile uint32_t *)0xe0002c80)
#define RVCSR_SET_MHARTID (*(volatile uint32_t *)0xe0002f14)
#define RVCSR_CLR_MSTATUS (*(volatile uint32_t *)0xe0003300)
#define RVCSR_CLR_MIE (*(volatile uint32_t *)0xe0003304)
#define RVCSR_CLR_MSTATUSH (*(volatile uint32_t *)0xe0003310)
#define RVCSR_CLR_MCOUNTINHIBIT (*(volatile uint32_t *)0xe0003320)
#define RVCSR_CLR_MHPMEVENT4 (*(volatile uint32_t *)0xe0003324)
#define RVCSR_CLR_MHPMEVENT8 (*(volatile uint32_t *)0xe0003328)
#define RVCSR_CLR_MHPMEVENT12 (*(volatile uint32_t *)0xe000332c)
#define RVCSR_CLR_MHPMEVENT16 (*(volatile uint32_t *)0xe0003330)
#define RVCSR_CLR_MHPMEVENT20 (*(volatile uint32_t *)0xe0003334)
#define RVCSR_CLR_MHPMEVENT24 (*(volatile uint32_t *)0xe0003338)
#define RVCSR_CLR_MHPMEVENT28 (*(volatile uint32_t *)0xe000333c)
#define RVCSR_CLR_MSCRATCH (*(volatile uint32_t *)0xe0003340)
#define RVCSR_CLR_MIP (*(volatile uint32_t *)0xe0003344)
#define RVCSR_CLR_PMPCFG0 (*(volatile uint32_t *)0xe00033a0)
#define RVCSR_CLR_PMPADDR0 (*(volatile uint32_t *)0xe00033b0)
#define RVCSR_CLR_PMPADDR4 (*(volatile uint32_t *)0xe00033b4)
#define RVCSR_CLR_PMPADDR8 (*(volatile uint32_t *)0xe00033b8)
#define RVCSR_CLR_PMPADDR12 (*(volatile uint32_t *)0xe00033bc)
#define RVCSR_CLR_TSELECT (*(volatile uint32_t *)0xe00037a0)
#define RVCSR_CLR_DCSR (*(volatile uint32_t *)0xe00037b0)
#define RVCSR_CLR_MCYCLE (*(volatile uint32_t *)0xe0003b00)
#define RVCSR_CLR_MHPMCOUNTER4 (*(volatile uint32_t *)0xe0003b04)
#define RVCSR_CLR_MHPMCOUNTER8 (*(volatile uint32_t *)0xe0003b08)
#define RVCSR_CLR_MHPMCOUNTER12 (*(volatile uint32_t *)0xe0003b0c)
#define RVCSR_CLR_MHPMCOUNTER16 (*(volatile uint32_t *)0xe0003b10)
#define RVCSR_CLR_MHPMCOUNTER20 (*(volatile uint32_t *)0xe0003b14)
#define RVCSR_CLR_MHPMCOUNTER24 (*(volatile uint32_t *)0xe0003b18)
#define RVCSR_CLR_MHPMCOUNTER28 (*(volatile uint32_t *)0xe0003b1c)
#define RVCSR_CLR_MCYCLEH (*(volatile uint32_t *)0xe0003b80)
#define RVCSR_CLR_MHPMCOUNTER4H (*(volatile uint32_t *)0xe0003b84)
#define RVCSR_CLR_MHPMCOUNTER8H (*(volatile uint32_t *)0xe0003b88)
#define RVCSR_CLR_MHPMCOUNTER12H (*(volatile uint32_t *)0xe0003b8c)
#define RVCSR_CLR_MHPMCOUNTER16H (*(volatile uint32_t *)0xe0003b90)
#define RVCSR_CLR_MHPMCOUNTER20H (*(volatile uint32_t *)0xe0003b94)
#define RVCSR_CLR_MHPMCOUNTER24H (*(volatile uint32_t *)0xe0003b98)
#define RVCSR_CLR_MHPMCOUNTER28H (*(volatile uint32_t *)0xe0003b9c)
#define RVCSR_CLR_PMPCFGM0 (*(volatile uint32_t *)0xe0003bd0)
#define RVCSR_CLR_MEIEA (*(volatile uint32_t *)0xe0003be0)
#define RVCSR_CLR_MEINEXT (*(volatile uint32_t *)0xe0003be4)
#define RVCSR_CLR_MSLEEP (*(volatile uint32_t *)0xe0003bf0)
#define RVCSR_CLR_CYCLE (*(volatile uint32_t *)0xe0003c00)
#define RVCSR_CLR_CYCLEH (*(volatile uint32_t *)0xe0003c80)
#define RVCSR_CLR_MHARTID (*(volatile uint32_t *)0xe0003f14)

/*MSTATUS Register macros*/

#define RVCSR_MSTATUS_TW(v) (((v)&0x1)<<21)
#define RVCSR_MSTATUS_TW_MASK RVCSR_MSTATUS_TW(ALL1)
#define RVCSR_MSTATUS_MPRV(v) (((v)&0x1)<<17)
#define RVCSR_MSTATUS_MPRV_MASK RVCSR_MSTATUS_MPRV(ALL1)
#define RVCSR_MSTATUS_MPP(v) (((v)&0x3)<<11)
#define RVCSR_MSTATUS_MPP_MASK RVCSR_MSTATUS_MPP(ALL1)
#define RVCSR_MSTATUS_MPIE(v) (((v)&0x1)<<7)
#define RVCSR_MSTATUS_MPIE_MASK RVCSR_MSTATUS_MPIE(ALL1)
#define RVCSR_MSTATUS_MIE(v) (((v)&0x1)<<3)
#define RVCSR_MSTATUS_MIE_MASK RVCSR_MSTATUS_MIE(ALL1)

/*MISA Register macros*/

#define RVCSR_MISA_MXL(v) (((v)&0x3)<<30)
#define RVCSR_MISA_MXL_MASK RVCSR_MISA_MXL(ALL1)
#define RVCSR_MISA_X(v) (((v)&0x1)<<23)
#define RVCSR_MISA_X_MASK RVCSR_MISA_X(ALL1)
#define RVCSR_MISA_U(v) (((v)&0x1)<<20)
#define RVCSR_MISA_U_MASK RVCSR_MISA_U(ALL1)
#define RVCSR_MISA_M(v) (((v)&0x1)<<12)
#define RVCSR_MISA_M_MASK RVCSR_MISA_M(ALL1)
#define RVCSR_MISA_I(v) (((v)&0x1)<<8)
#define RVCSR_MISA_I_MASK RVCSR_MISA_I(ALL1)
#define RVCSR_MISA_C(v) (((v)&0x1)<<2)
#define RVCSR_MISA_C_MASK RVCSR_MISA_C(ALL1)
#define RVCSR_MISA_B(v) (((v)&0x1)<<1)
#define RVCSR_MISA_B_MASK RVCSR_MISA_B(ALL1)
#define RVCSR_MISA_A(v) (((v)&0x1)<<0)
#define RVCSR_MISA_A_MASK RVCSR_MISA_A(ALL1)

/*MEDELEG Register macros*/


/*MIDELEG Register macros*/


/*MIE Register macros*/

#define RVCSR_MIE_MEIE(v) (((v)&0x1)<<11)
#define RVCSR_MIE_MEIE_MASK RVCSR_MIE_MEIE(ALL1)
#define RVCSR_MIE_MTIE(v) (((v)&0x1)<<7)
#define RVCSR_MIE_MTIE_MASK RVCSR_MIE_MTIE(ALL1)
#define RVCSR_MIE_MSIE(v) (((v)&0x1)<<3)
#define RVCSR_MIE_MSIE_MASK RVCSR_MIE_MSIE(ALL1)

/*MTVEC Register macros*/

#define RVCSR_MTVEC_BASE(v) (((v)&0x3fffffff)<<2)
#define RVCSR_MTVEC_BASE_MASK RVCSR_MTVEC_BASE(ALL1)
#define RVCSR_MTVEC_MODE(v) (((v)&0x3)<<0)
#define RVCSR_MTVEC_MODE_MASK RVCSR_MTVEC_MODE(ALL1)

/*MCOUNTEREN Register macros*/

#define RVCSR_MCOUNTEREN_IR(v) (((v)&0x1)<<2)
#define RVCSR_MCOUNTEREN_IR_MASK RVCSR_MCOUNTEREN_IR(ALL1)
#define RVCSR_MCOUNTEREN_TM(v) (((v)&0x1)<<1)
#define RVCSR_MCOUNTEREN_TM_MASK RVCSR_MCOUNTEREN_TM(ALL1)
#define RVCSR_MCOUNTEREN_CY(v) (((v)&0x1)<<0)
#define RVCSR_MCOUNTEREN_CY_MASK RVCSR_MCOUNTEREN_CY(ALL1)

/*MENVCFG Register macros*/

#define RVCSR_MENVCFG_FIOM(v) (((v)&0x1)<<0)
#define RVCSR_MENVCFG_FIOM_MASK RVCSR_MENVCFG_FIOM(ALL1)

/*MSTATUSH Register macros*/


/*MENVCFGH Register macros*/


/*MCOUNTINHIBIT Register macros*/

#define RVCSR_MCOUNTINHIBIT_IR(v) (((v)&0x1)<<2)
#define RVCSR_MCOUNTINHIBIT_IR_MASK RVCSR_MCOUNTINHIBIT_IR(ALL1)
#define RVCSR_MCOUNTINHIBIT_CY(v) (((v)&0x1)<<0)
#define RVCSR_MCOUNTINHIBIT_CY_MASK RVCSR_MCOUNTINHIBIT_CY(ALL1)

/*MHPMEVENT3 Register macros*/


/*MHPMEVENT4 Register macros*/


/*MHPMEVENT5 Register macros*/


/*MHPMEVENT6 Register macros*/


/*MHPMEVENT7 Register macros*/


/*MHPMEVENT8 Register macros*/


/*MHPMEVENT9 Register macros*/


/*MHPMEVENT10 Register macros*/


/*MHPMEVENT11 Register macros*/


/*MHPMEVENT12 Register macros*/


/*MHPMEVENT13 Register macros*/


/*MHPMEVENT14 Register macros*/


/*MHPMEVENT15 Register macros*/


/*MHPMEVENT16 Register macros*/


/*MHPMEVENT17 Register macros*/


/*MHPMEVENT18 Register macros*/


/*MHPMEVENT19 Register macros*/


/*MHPMEVENT20 Register macros*/


/*MHPMEVENT21 Register macros*/


/*MHPMEVENT22 Register macros*/


/*MHPMEVENT23 Register macros*/


/*MHPMEVENT24 Register macros*/


/*MHPMEVENT25 Register macros*/


/*MHPMEVENT26 Register macros*/


/*MHPMEVENT27 Register macros*/


/*MHPMEVENT28 Register macros*/


/*MHPMEVENT29 Register macros*/


/*MHPMEVENT30 Register macros*/


/*MHPMEVENT31 Register macros*/


/*MSCRATCH Register macros*/


/*MEPC Register macros*/


/*MCAUSE Register macros*/

#define RVCSR_MCAUSE_INTERRUPT(v) (((v)&0x1)<<31)
#define RVCSR_MCAUSE_INTERRUPT_MASK RVCSR_MCAUSE_INTERRUPT(ALL1)
#define RVCSR_MCAUSE_CODE(v) (((v)&0xf)<<0)
#define RVCSR_MCAUSE_CODE_MASK RVCSR_MCAUSE_CODE(ALL1)

/*MTVAL Register macros*/


/*MIP Register macros*/

#define RVCSR_MIP_MEIP(v) (((v)&0x1)<<11)
#define RVCSR_MIP_MEIP_MASK RVCSR_MIP_MEIP(ALL1)
#define RVCSR_MIP_MTIP(v) (((v)&0x1)<<7)
#define RVCSR_MIP_MTIP_MASK RVCSR_MIP_MTIP(ALL1)
#define RVCSR_MIP_MSIP(v) (((v)&0x1)<<3)
#define RVCSR_MIP_MSIP_MASK RVCSR_MIP_MSIP(ALL1)

/*PMPCFG0 Register macros*/

#define RVCSR_PMPCFG0_R3_L(v) (((v)&0x1)<<31)
#define RVCSR_PMPCFG0_R3_L_MASK RVCSR_PMPCFG0_R3_L(ALL1)
#define RVCSR_PMPCFG0_R3_A(v) (((v)&0x3)<<27)
#define RVCSR_PMPCFG0_R3_A_MASK RVCSR_PMPCFG0_R3_A(ALL1)
#define RVCSR_PMPCFG0_R3_R(v) (((v)&0x1)<<26)
#define RVCSR_PMPCFG0_R3_R_MASK RVCSR_PMPCFG0_R3_R(ALL1)
#define RVCSR_PMPCFG0_R3_W(v) (((v)&0x1)<<25)
#define RVCSR_PMPCFG0_R3_W_MASK RVCSR_PMPCFG0_R3_W(ALL1)
#define RVCSR_PMPCFG0_R3_X(v) (((v)&0x1)<<24)
#define RVCSR_PMPCFG0_R3_X_MASK RVCSR_PMPCFG0_R3_X(ALL1)
#define RVCSR_PMPCFG0_R2_L(v) (((v)&0x1)<<23)
#define RVCSR_PMPCFG0_R2_L_MASK RVCSR_PMPCFG0_R2_L(ALL1)
#define RVCSR_PMPCFG0_R2_A(v) (((v)&0x3)<<19)
#define RVCSR_PMPCFG0_R2_A_MASK RVCSR_PMPCFG0_R2_A(ALL1)
#define RVCSR_PMPCFG0_R2_R(v) (((v)&0x1)<<18)
#define RVCSR_PMPCFG0_R2_R_MASK RVCSR_PMPCFG0_R2_R(ALL1)
#define RVCSR_PMPCFG0_R2_W(v) (((v)&0x1)<<17)
#define RVCSR_PMPCFG0_R2_W_MASK RVCSR_PMPCFG0_R2_W(ALL1)
#define RVCSR_PMPCFG0_R2_X(v) (((v)&0x1)<<16)
#define RVCSR_PMPCFG0_R2_X_MASK RVCSR_PMPCFG0_R2_X(ALL1)
#define RVCSR_PMPCFG0_R1_L(v) (((v)&0x1)<<15)
#define RVCSR_PMPCFG0_R1_L_MASK RVCSR_PMPCFG0_R1_L(ALL1)
#define RVCSR_PMPCFG0_R1_A(v) (((v)&0x3)<<11)
#define RVCSR_PMPCFG0_R1_A_MASK RVCSR_PMPCFG0_R1_A(ALL1)
#define RVCSR_PMPCFG0_R1_R(v) (((v)&0x1)<<10)
#define RVCSR_PMPCFG0_R1_R_MASK RVCSR_PMPCFG0_R1_R(ALL1)
#define RVCSR_PMPCFG0_R1_W(v) (((v)&0x1)<<9)
#define RVCSR_PMPCFG0_R1_W_MASK RVCSR_PMPCFG0_R1_W(ALL1)
#define RVCSR_PMPCFG0_R1_X(v) (((v)&0x1)<<8)
#define RVCSR_PMPCFG0_R1_X_MASK RVCSR_PMPCFG0_R1_X(ALL1)
#define RVCSR_PMPCFG0_R0_L(v) (((v)&0x1)<<7)
#define RVCSR_PMPCFG0_R0_L_MASK RVCSR_PMPCFG0_R0_L(ALL1)
#define RVCSR_PMPCFG0_R0_A(v) (((v)&0x3)<<3)
#define RVCSR_PMPCFG0_R0_A_MASK RVCSR_PMPCFG0_R0_A(ALL1)
#define RVCSR_PMPCFG0_R0_R(v) (((v)&0x1)<<2)
#define RVCSR_PMPCFG0_R0_R_MASK RVCSR_PMPCFG0_R0_R(ALL1)
#define RVCSR_PMPCFG0_R0_W(v) (((v)&0x1)<<1)
#define RVCSR_PMPCFG0_R0_W_MASK RVCSR_PMPCFG0_R0_W(ALL1)
#define RVCSR_PMPCFG0_R0_X(v) (((v)&0x1)<<0)
#define RVCSR_PMPCFG0_R0_X_MASK RVCSR_PMPCFG0_R0_X(ALL1)

/*PMPCFG1 Register macros*/

#define RVCSR_PMPCFG1_R7_L(v) (((v)&0x1)<<31)
#define RVCSR_PMPCFG1_R7_L_MASK RVCSR_PMPCFG1_R7_L(ALL1)
#define RVCSR_PMPCFG1_R7_A(v) (((v)&0x3)<<27)
#define RVCSR_PMPCFG1_R7_A_MASK RVCSR_PMPCFG1_R7_A(ALL1)
#define RVCSR_PMPCFG1_R7_R(v) (((v)&0x1)<<26)
#define RVCSR_PMPCFG1_R7_R_MASK RVCSR_PMPCFG1_R7_R(ALL1)
#define RVCSR_PMPCFG1_R7_W(v) (((v)&0x1)<<25)
#define RVCSR_PMPCFG1_R7_W_MASK RVCSR_PMPCFG1_R7_W(ALL1)
#define RVCSR_PMPCFG1_R7_X(v) (((v)&0x1)<<24)
#define RVCSR_PMPCFG1_R7_X_MASK RVCSR_PMPCFG1_R7_X(ALL1)
#define RVCSR_PMPCFG1_R6_L(v) (((v)&0x1)<<23)
#define RVCSR_PMPCFG1_R6_L_MASK RVCSR_PMPCFG1_R6_L(ALL1)
#define RVCSR_PMPCFG1_R6_A(v) (((v)&0x3)<<19)
#define RVCSR_PMPCFG1_R6_A_MASK RVCSR_PMPCFG1_R6_A(ALL1)
#define RVCSR_PMPCFG1_R6_R(v) (((v)&0x1)<<18)
#define RVCSR_PMPCFG1_R6_R_MASK RVCSR_PMPCFG1_R6_R(ALL1)
#define RVCSR_PMPCFG1_R6_W(v) (((v)&0x1)<<17)
#define RVCSR_PMPCFG1_R6_W_MASK RVCSR_PMPCFG1_R6_W(ALL1)
#define RVCSR_PMPCFG1_R6_X(v) (((v)&0x1)<<16)
#define RVCSR_PMPCFG1_R6_X_MASK RVCSR_PMPCFG1_R6_X(ALL1)
#define RVCSR_PMPCFG1_R5_L(v) (((v)&0x1)<<15)
#define RVCSR_PMPCFG1_R5_L_MASK RVCSR_PMPCFG1_R5_L(ALL1)
#define RVCSR_PMPCFG1_R5_A(v) (((v)&0x3)<<11)
#define RVCSR_PMPCFG1_R5_A_MASK RVCSR_PMPCFG1_R5_A(ALL1)
#define RVCSR_PMPCFG1_R5_R(v) (((v)&0x1)<<10)
#define RVCSR_PMPCFG1_R5_R_MASK RVCSR_PMPCFG1_R5_R(ALL1)
#define RVCSR_PMPCFG1_R5_W(v) (((v)&0x1)<<9)
#define RVCSR_PMPCFG1_R5_W_MASK RVCSR_PMPCFG1_R5_W(ALL1)
#define RVCSR_PMPCFG1_R5_X(v) (((v)&0x1)<<8)
#define RVCSR_PMPCFG1_R5_X_MASK RVCSR_PMPCFG1_R5_X(ALL1)
#define RVCSR_PMPCFG1_R4_L(v) (((v)&0x1)<<7)
#define RVCSR_PMPCFG1_R4_L_MASK RVCSR_PMPCFG1_R4_L(ALL1)
#define RVCSR_PMPCFG1_R4_A(v) (((v)&0x3)<<3)
#define RVCSR_PMPCFG1_R4_A_MASK RVCSR_PMPCFG1_R4_A(ALL1)
#define RVCSR_PMPCFG1_R4_R(v) (((v)&0x1)<<2)
#define RVCSR_PMPCFG1_R4_R_MASK RVCSR_PMPCFG1_R4_R(ALL1)
#define RVCSR_PMPCFG1_R4_W(v) (((v)&0x1)<<1)
#define RVCSR_PMPCFG1_R4_W_MASK RVCSR_PMPCFG1_R4_W(ALL1)
#define RVCSR_PMPCFG1_R4_X(v) (((v)&0x1)<<0)
#define RVCSR_PMPCFG1_R4_X_MASK RVCSR_PMPCFG1_R4_X(ALL1)

/*PMPCFG2 Register macros*/

#define RVCSR_PMPCFG2_R11_L(v) (((v)&0x1)<<31)
#define RVCSR_PMPCFG2_R11_L_MASK RVCSR_PMPCFG2_R11_L(ALL1)
#define RVCSR_PMPCFG2_R11_A(v) (((v)&0x3)<<27)
#define RVCSR_PMPCFG2_R11_A_MASK RVCSR_PMPCFG2_R11_A(ALL1)
#define RVCSR_PMPCFG2_R11_R(v) (((v)&0x1)<<26)
#define RVCSR_PMPCFG2_R11_R_MASK RVCSR_PMPCFG2_R11_R(ALL1)
#define RVCSR_PMPCFG2_R11_W(v) (((v)&0x1)<<25)
#define RVCSR_PMPCFG2_R11_W_MASK RVCSR_PMPCFG2_R11_W(ALL1)
#define RVCSR_PMPCFG2_R11_X(v) (((v)&0x1)<<24)
#define RVCSR_PMPCFG2_R11_X_MASK RVCSR_PMPCFG2_R11_X(ALL1)
#define RVCSR_PMPCFG2_R10_L(v) (((v)&0x1)<<23)
#define RVCSR_PMPCFG2_R10_L_MASK RVCSR_PMPCFG2_R10_L(ALL1)
#define RVCSR_PMPCFG2_R10_A(v) (((v)&0x3)<<19)
#define RVCSR_PMPCFG2_R10_A_MASK RVCSR_PMPCFG2_R10_A(ALL1)
#define RVCSR_PMPCFG2_R10_R(v) (((v)&0x1)<<18)
#define RVCSR_PMPCFG2_R10_R_MASK RVCSR_PMPCFG2_R10_R(ALL1)
#define RVCSR_PMPCFG2_R10_W(v) (((v)&0x1)<<17)
#define RVCSR_PMPCFG2_R10_W_MASK RVCSR_PMPCFG2_R10_W(ALL1)
#define RVCSR_PMPCFG2_R10_X(v) (((v)&0x1)<<16)
#define RVCSR_PMPCFG2_R10_X_MASK RVCSR_PMPCFG2_R10_X(ALL1)
#define RVCSR_PMPCFG2_R9_L(v) (((v)&0x1)<<15)
#define RVCSR_PMPCFG2_R9_L_MASK RVCSR_PMPCFG2_R9_L(ALL1)
#define RVCSR_PMPCFG2_R9_A(v) (((v)&0x3)<<11)
#define RVCSR_PMPCFG2_R9_A_MASK RVCSR_PMPCFG2_R9_A(ALL1)
#define RVCSR_PMPCFG2_R9_R(v) (((v)&0x1)<<10)
#define RVCSR_PMPCFG2_R9_R_MASK RVCSR_PMPCFG2_R9_R(ALL1)
#define RVCSR_PMPCFG2_R9_W(v) (((v)&0x1)<<9)
#define RVCSR_PMPCFG2_R9_W_MASK RVCSR_PMPCFG2_R9_W(ALL1)
#define RVCSR_PMPCFG2_R9_X(v) (((v)&0x1)<<8)
#define RVCSR_PMPCFG2_R9_X_MASK RVCSR_PMPCFG2_R9_X(ALL1)
#define RVCSR_PMPCFG2_R8_L(v) (((v)&0x1)<<7)
#define RVCSR_PMPCFG2_R8_L_MASK RVCSR_PMPCFG2_R8_L(ALL1)
#define RVCSR_PMPCFG2_R8_A(v) (((v)&0x3)<<3)
#define RVCSR_PMPCFG2_R8_A_MASK RVCSR_PMPCFG2_R8_A(ALL1)
#define RVCSR_PMPCFG2_R8_R(v) (((v)&0x1)<<2)
#define RVCSR_PMPCFG2_R8_R_MASK RVCSR_PMPCFG2_R8_R(ALL1)
#define RVCSR_PMPCFG2_R8_W(v) (((v)&0x1)<<1)
#define RVCSR_PMPCFG2_R8_W_MASK RVCSR_PMPCFG2_R8_W(ALL1)
#define RVCSR_PMPCFG2_R8_X(v) (((v)&0x1)<<0)
#define RVCSR_PMPCFG2_R8_X_MASK RVCSR_PMPCFG2_R8_X(ALL1)

/*PMPCFG3 Register macros*/

#define RVCSR_PMPCFG3_R15_L(v) (((v)&0x1)<<31)
#define RVCSR_PMPCFG3_R15_L_MASK RVCSR_PMPCFG3_R15_L(ALL1)
#define RVCSR_PMPCFG3_R15_A(v) (((v)&0x3)<<27)
#define RVCSR_PMPCFG3_R15_A_MASK RVCSR_PMPCFG3_R15_A(ALL1)
#define RVCSR_PMPCFG3_R15_R(v) (((v)&0x1)<<26)
#define RVCSR_PMPCFG3_R15_R_MASK RVCSR_PMPCFG3_R15_R(ALL1)
#define RVCSR_PMPCFG3_R15_W(v) (((v)&0x1)<<25)
#define RVCSR_PMPCFG3_R15_W_MASK RVCSR_PMPCFG3_R15_W(ALL1)
#define RVCSR_PMPCFG3_R15_X(v) (((v)&0x1)<<24)
#define RVCSR_PMPCFG3_R15_X_MASK RVCSR_PMPCFG3_R15_X(ALL1)
#define RVCSR_PMPCFG3_R14_L(v) (((v)&0x1)<<23)
#define RVCSR_PMPCFG3_R14_L_MASK RVCSR_PMPCFG3_R14_L(ALL1)
#define RVCSR_PMPCFG3_R14_A(v) (((v)&0x3)<<19)
#define RVCSR_PMPCFG3_R14_A_MASK RVCSR_PMPCFG3_R14_A(ALL1)
#define RVCSR_PMPCFG3_R14_R(v) (((v)&0x1)<<18)
#define RVCSR_PMPCFG3_R14_R_MASK RVCSR_PMPCFG3_R14_R(ALL1)
#define RVCSR_PMPCFG3_R14_W(v) (((v)&0x1)<<17)
#define RVCSR_PMPCFG3_R14_W_MASK RVCSR_PMPCFG3_R14_W(ALL1)
#define RVCSR_PMPCFG3_R14_X(v) (((v)&0x1)<<16)
#define RVCSR_PMPCFG3_R14_X_MASK RVCSR_PMPCFG3_R14_X(ALL1)
#define RVCSR_PMPCFG3_R13_L(v) (((v)&0x1)<<15)
#define RVCSR_PMPCFG3_R13_L_MASK RVCSR_PMPCFG3_R13_L(ALL1)
#define RVCSR_PMPCFG3_R13_A(v) (((v)&0x3)<<11)
#define RVCSR_PMPCFG3_R13_A_MASK RVCSR_PMPCFG3_R13_A(ALL1)
#define RVCSR_PMPCFG3_R13_R(v) (((v)&0x1)<<10)
#define RVCSR_PMPCFG3_R13_R_MASK RVCSR_PMPCFG3_R13_R(ALL1)
#define RVCSR_PMPCFG3_R13_W(v) (((v)&0x1)<<9)
#define RVCSR_PMPCFG3_R13_W_MASK RVCSR_PMPCFG3_R13_W(ALL1)
#define RVCSR_PMPCFG3_R13_X(v) (((v)&0x1)<<8)
#define RVCSR_PMPCFG3_R13_X_MASK RVCSR_PMPCFG3_R13_X(ALL1)
#define RVCSR_PMPCFG3_R12_L(v) (((v)&0x1)<<7)
#define RVCSR_PMPCFG3_R12_L_MASK RVCSR_PMPCFG3_R12_L(ALL1)
#define RVCSR_PMPCFG3_R12_A(v) (((v)&0x3)<<3)
#define RVCSR_PMPCFG3_R12_A_MASK RVCSR_PMPCFG3_R12_A(ALL1)
#define RVCSR_PMPCFG3_R12_R(v) (((v)&0x1)<<2)
#define RVCSR_PMPCFG3_R12_R_MASK RVCSR_PMPCFG3_R12_R(ALL1)
#define RVCSR_PMPCFG3_R12_W(v) (((v)&0x1)<<1)
#define RVCSR_PMPCFG3_R12_W_MASK RVCSR_PMPCFG3_R12_W(ALL1)
#define RVCSR_PMPCFG3_R12_X(v) (((v)&0x1)<<0)
#define RVCSR_PMPCFG3_R12_X_MASK RVCSR_PMPCFG3_R12_X(ALL1)

/*PMPADDR0 Register macros*/


/*PMPADDR1 Register macros*/


/*PMPADDR2 Register macros*/


/*PMPADDR3 Register macros*/


/*PMPADDR4 Register macros*/


/*PMPADDR5 Register macros*/


/*PMPADDR6 Register macros*/


/*PMPADDR7 Register macros*/


/*PMPADDR8 Register macros*/


/*PMPADDR9 Register macros*/


/*PMPADDR10 Register macros*/


/*PMPADDR11 Register macros*/


/*PMPADDR12 Register macros*/


/*PMPADDR13 Register macros*/


/*PMPADDR14 Register macros*/


/*PMPADDR15 Register macros*/


/*TSELECT Register macros*/


/*TDATA1 Register macros*/

#define RVCSR_TDATA1_TYPE(v) (((v)&0xf)<<28)
#define RVCSR_TDATA1_TYPE_MASK RVCSR_TDATA1_TYPE(ALL1)
#define RVCSR_TDATA1_DMODE(v) (((v)&0x1)<<27)
#define RVCSR_TDATA1_DMODE_MASK RVCSR_TDATA1_DMODE(ALL1)
#define RVCSR_TDATA1_MASKMAX(v) (((v)&0x3f)<<21)
#define RVCSR_TDATA1_MASKMAX_MASK RVCSR_TDATA1_MASKMAX(ALL1)
#define RVCSR_TDATA1_HIT(v) (((v)&0x1)<<20)
#define RVCSR_TDATA1_HIT_MASK RVCSR_TDATA1_HIT(ALL1)
#define RVCSR_TDATA1_SELECT(v) (((v)&0x1)<<19)
#define RVCSR_TDATA1_SELECT_MASK RVCSR_TDATA1_SELECT(ALL1)
#define RVCSR_TDATA1_TIMING(v) (((v)&0x1)<<18)
#define RVCSR_TDATA1_TIMING_MASK RVCSR_TDATA1_TIMING(ALL1)
#define RVCSR_TDATA1_SIZELO(v) (((v)&0x3)<<16)
#define RVCSR_TDATA1_SIZELO_MASK RVCSR_TDATA1_SIZELO(ALL1)
#define RVCSR_TDATA1_ACTION(v) (((v)&0xf)<<12)
#define RVCSR_TDATA1_ACTION_MASK RVCSR_TDATA1_ACTION(ALL1)
#define RVCSR_TDATA1_CHAIN(v) (((v)&0x1)<<11)
#define RVCSR_TDATA1_CHAIN_MASK RVCSR_TDATA1_CHAIN(ALL1)
#define RVCSR_TDATA1_MATCH(v) (((v)&0xf)<<7)
#define RVCSR_TDATA1_MATCH_MASK RVCSR_TDATA1_MATCH(ALL1)
#define RVCSR_TDATA1_M(v) (((v)&0x1)<<6)
#define RVCSR_TDATA1_M_MASK RVCSR_TDATA1_M(ALL1)
#define RVCSR_TDATA1_U(v) (((v)&0x1)<<3)
#define RVCSR_TDATA1_U_MASK RVCSR_TDATA1_U(ALL1)
#define RVCSR_TDATA1_EXECUTE(v) (((v)&0x1)<<2)
#define RVCSR_TDATA1_EXECUTE_MASK RVCSR_TDATA1_EXECUTE(ALL1)
#define RVCSR_TDATA1_STORE(v) (((v)&0x1)<<1)
#define RVCSR_TDATA1_STORE_MASK RVCSR_TDATA1_STORE(ALL1)
#define RVCSR_TDATA1_LOAD(v) (((v)&0x1)<<0)
#define RVCSR_TDATA1_LOAD_MASK RVCSR_TDATA1_LOAD(ALL1)

/*TDATA2 Register macros*/


/*DCSR Register macros*/

#define RVCSR_DCSR_XDEBUGVER(v) (((v)&0xf)<<28)
#define RVCSR_DCSR_XDEBUGVER_MASK RVCSR_DCSR_XDEBUGVER(ALL1)
#define RVCSR_DCSR_EBREAKM(v) (((v)&0x1)<<15)
#define RVCSR_DCSR_EBREAKM_MASK RVCSR_DCSR_EBREAKM(ALL1)
#define RVCSR_DCSR_EBREAKU(v) (((v)&0x1)<<12)
#define RVCSR_DCSR_EBREAKU_MASK RVCSR_DCSR_EBREAKU(ALL1)
#define RVCSR_DCSR_STEPIE(v) (((v)&0x1)<<11)
#define RVCSR_DCSR_STEPIE_MASK RVCSR_DCSR_STEPIE(ALL1)
#define RVCSR_DCSR_STOPCOUNT(v) (((v)&0x1)<<10)
#define RVCSR_DCSR_STOPCOUNT_MASK RVCSR_DCSR_STOPCOUNT(ALL1)
#define RVCSR_DCSR_STOPTIME(v) (((v)&0x1)<<9)
#define RVCSR_DCSR_STOPTIME_MASK RVCSR_DCSR_STOPTIME(ALL1)
#define RVCSR_DCSR_CAUSE(v) (((v)&0x7)<<6)
#define RVCSR_DCSR_CAUSE_MASK RVCSR_DCSR_CAUSE(ALL1)
#define RVCSR_DCSR_STEP(v) (((v)&0x1)<<2)
#define RVCSR_DCSR_STEP_MASK RVCSR_DCSR_STEP(ALL1)
#define RVCSR_DCSR_PRV(v) (((v)&0x3)<<0)
#define RVCSR_DCSR_PRV_MASK RVCSR_DCSR_PRV(ALL1)

/*DPC Register macros*/


/*MCYCLE Register macros*/


/*MINSTRET Register macros*/


/*MHPMCOUNTER3 Register macros*/


/*MHPMCOUNTER4 Register macros*/


/*MHPMCOUNTER5 Register macros*/


/*MHPMCOUNTER6 Register macros*/


/*MHPMCOUNTER7 Register macros*/


/*MHPMCOUNTER8 Register macros*/


/*MHPMCOUNTER9 Register macros*/


/*MHPMCOUNTER10 Register macros*/


/*MHPMCOUNTER11 Register macros*/


/*MHPMCOUNTER12 Register macros*/


/*MHPMCOUNTER13 Register macros*/


/*MHPMCOUNTER14 Register macros*/


/*MHPMCOUNTER15 Register macros*/


/*MHPMCOUNTER16 Register macros*/


/*MHPMCOUNTER17 Register macros*/


/*MHPMCOUNTER18 Register macros*/


/*MHPMCOUNTER19 Register macros*/


/*MHPMCOUNTER20 Register macros*/


/*MHPMCOUNTER21 Register macros*/


/*MHPMCOUNTER22 Register macros*/


/*MHPMCOUNTER23 Register macros*/


/*MHPMCOUNTER24 Register macros*/


/*MHPMCOUNTER25 Register macros*/


/*MHPMCOUNTER26 Register macros*/


/*MHPMCOUNTER27 Register macros*/


/*MHPMCOUNTER28 Register macros*/


/*MHPMCOUNTER29 Register macros*/


/*MHPMCOUNTER30 Register macros*/


/*MHPMCOUNTER31 Register macros*/


/*MCYCLEH Register macros*/


/*MINSTRETH Register macros*/


/*MHPMCOUNTER3H Register macros*/


/*MHPMCOUNTER4H Register macros*/


/*MHPMCOUNTER5H Register macros*/


/*MHPMCOUNTER6H Register macros*/


/*MHPMCOUNTER7H Register macros*/


/*MHPMCOUNTER8H Register macros*/


/*MHPMCOUNTER9H Register macros*/


/*MHPMCOUNTER10H Register macros*/


/*MHPMCOUNTER11H Register macros*/


/*MHPMCOUNTER12H Register macros*/


/*MHPMCOUNTER13H Register macros*/


/*MHPMCOUNTER14H Register macros*/


/*MHPMCOUNTER15H Register macros*/


/*MHPMCOUNTER16H Register macros*/


/*MHPMCOUNTER17H Register macros*/


/*MHPMCOUNTER18H Register macros*/


/*MHPMCOUNTER19H Register macros*/


/*MHPMCOUNTER20H Register macros*/


/*MHPMCOUNTER21H Register macros*/


/*MHPMCOUNTER22H Register macros*/


/*MHPMCOUNTER23H Register macros*/


/*MHPMCOUNTER24H Register macros*/


/*MHPMCOUNTER25H Register macros*/


/*MHPMCOUNTER26H Register macros*/


/*MHPMCOUNTER27H Register macros*/


/*MHPMCOUNTER28H Register macros*/


/*MHPMCOUNTER29H Register macros*/


/*MHPMCOUNTER30H Register macros*/


/*MHPMCOUNTER31H Register macros*/


/*PMPCFGM0 Register macros*/


/*MEIEA Register macros*/

#define RVCSR_MEIEA_WINDOW(v) (((v)&0xffff)<<16)
#define RVCSR_MEIEA_WINDOW_MASK RVCSR_MEIEA_WINDOW(ALL1)
#define RVCSR_MEIEA_INDEX(v) (((v)&0x1f)<<0)
#define RVCSR_MEIEA_INDEX_MASK RVCSR_MEIEA_INDEX(ALL1)

/*MEIPA Register macros*/

#define RVCSR_MEIPA_WINDOW(v) (((v)&0xffff)<<16)
#define RVCSR_MEIPA_WINDOW_MASK RVCSR_MEIPA_WINDOW(ALL1)
#define RVCSR_MEIPA_INDEX(v) (((v)&0x1f)<<0)
#define RVCSR_MEIPA_INDEX_MASK RVCSR_MEIPA_INDEX(ALL1)

/*MEIFA Register macros*/

#define RVCSR_MEIFA_WINDOW(v) (((v)&0xffff)<<16)
#define RVCSR_MEIFA_WINDOW_MASK RVCSR_MEIFA_WINDOW(ALL1)
#define RVCSR_MEIFA_INDEX(v) (((v)&0x1f)<<0)
#define RVCSR_MEIFA_INDEX_MASK RVCSR_MEIFA_INDEX(ALL1)

/*MEIPRA Register macros*/

#define RVCSR_MEIPRA_WINDOW(v) (((v)&0xffff)<<16)
#define RVCSR_MEIPRA_WINDOW_MASK RVCSR_MEIPRA_WINDOW(ALL1)
#define RVCSR_MEIPRA_INDEX(v) (((v)&0x1f)<<0)
#define RVCSR_MEIPRA_INDEX_MASK RVCSR_MEIPRA_INDEX(ALL1)

/*MEINEXT Register macros*/

#define RVCSR_MEINEXT_NOIRQ(v) (((v)&0x1)<<31)
#define RVCSR_MEINEXT_NOIRQ_MASK RVCSR_MEINEXT_NOIRQ(ALL1)
#define RVCSR_MEINEXT_IRQ(v) (((v)&0x1ff)<<2)
#define RVCSR_MEINEXT_IRQ_MASK RVCSR_MEINEXT_IRQ(ALL1)
#define RVCSR_MEINEXT_UPDATE(v) (((v)&0x1)<<0)
#define RVCSR_MEINEXT_UPDATE_MASK RVCSR_MEINEXT_UPDATE(ALL1)

/*MEICONTEXT Register macros*/

#define RVCSR_MEICONTEXT_PPPREEMPT(v) (((v)&0xf)<<28)
#define RVCSR_MEICONTEXT_PPPREEMPT_MASK RVCSR_MEICONTEXT_PPPREEMPT(ALL1)
#define RVCSR_MEICONTEXT_PPREEMPT(v) (((v)&0xf)<<24)
#define RVCSR_MEICONTEXT_PPREEMPT_MASK RVCSR_MEICONTEXT_PPREEMPT(ALL1)
#define RVCSR_MEICONTEXT_PREEMPT(v) (((v)&0x1f)<<16)
#define RVCSR_MEICONTEXT_PREEMPT_MASK RVCSR_MEICONTEXT_PREEMPT(ALL1)
#define RVCSR_MEICONTEXT_NOIRQ(v) (((v)&0x1)<<15)
#define RVCSR_MEICONTEXT_NOIRQ_MASK RVCSR_MEICONTEXT_NOIRQ(ALL1)
#define RVCSR_MEICONTEXT_IRQ(v) (((v)&0x1ff)<<4)
#define RVCSR_MEICONTEXT_IRQ_MASK RVCSR_MEICONTEXT_IRQ(ALL1)
#define RVCSR_MEICONTEXT_MTIESAVE(v) (((v)&0x1)<<3)
#define RVCSR_MEICONTEXT_MTIESAVE_MASK RVCSR_MEICONTEXT_MTIESAVE(ALL1)
#define RVCSR_MEICONTEXT_MSIESAVE(v) (((v)&0x1)<<2)
#define RVCSR_MEICONTEXT_MSIESAVE_MASK RVCSR_MEICONTEXT_MSIESAVE(ALL1)
#define RVCSR_MEICONTEXT_CLEARTS(v) (((v)&0x1)<<1)
#define RVCSR_MEICONTEXT_CLEARTS_MASK RVCSR_MEICONTEXT_CLEARTS(ALL1)
#define RVCSR_MEICONTEXT_MRETEIRQ(v) (((v)&0x1)<<0)
#define RVCSR_MEICONTEXT_MRETEIRQ_MASK RVCSR_MEICONTEXT_MRETEIRQ(ALL1)

/*MSLEEP Register macros*/

#define RVCSR_MSLEEP_SLEEPONBLOCK(v) (((v)&0x1)<<2)
#define RVCSR_MSLEEP_SLEEPONBLOCK_MASK RVCSR_MSLEEP_SLEEPONBLOCK(ALL1)
#define RVCSR_MSLEEP_POWERDOWN(v) (((v)&0x1)<<1)
#define RVCSR_MSLEEP_POWERDOWN_MASK RVCSR_MSLEEP_POWERDOWN(ALL1)
#define RVCSR_MSLEEP_DEEPSLEEP(v) (((v)&0x1)<<0)
#define RVCSR_MSLEEP_DEEPSLEEP_MASK RVCSR_MSLEEP_DEEPSLEEP(ALL1)

/*DMDATA0 Register macros*/


/*CYCLE Register macros*/


/*INSTRET Register macros*/


/*CYCLEH Register macros*/


/*INSTRETH Register macros*/


/*MVENDORID Register macros*/

#define RVCSR_MVENDORID_BANK(v) (((v)&0x1ffffff)<<7)
#define RVCSR_MVENDORID_BANK_MASK RVCSR_MVENDORID_BANK(ALL1)
#define RVCSR_MVENDORID_OFFSET(v) (((v)&0x7f)<<0)
#define RVCSR_MVENDORID_OFFSET_MASK RVCSR_MVENDORID_OFFSET(ALL1)

/*MARCHID Register macros*/


/*MIMPID Register macros*/


/*MHARTID Register macros*/


/*MCONFIGPTR Register macros*/


#endif

