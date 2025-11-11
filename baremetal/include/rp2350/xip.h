
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

#ifndef RP2350_XIP_H
#define RP2350_XIP_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t ctrl_xor;
		uint32_t RSVDxor_0;
		uint32_t stat_xor;
		uint32_t ctr_hit_xor;
		uint32_t ctr_acc_xor;
		uint32_t stream_addr_xor;
		uint32_t stream_ctr_xor;
		uint32_t stream_fifo_xor;
		uint32_t RSVDxor_1[1016];
		uint32_t ctrl_set;
		uint32_t RSVDset_0;
		uint32_t stat_set;
		uint32_t ctr_hit_set;
		uint32_t ctr_acc_set;
		uint32_t stream_addr_set;
		uint32_t stream_ctr_set;
		uint32_t stream_fifo_set;
		uint32_t RSVDset_1[1016];
		uint32_t ctrl_clr;
		uint32_t RSVDclr_0;
		uint32_t stat_clr;
		uint32_t ctr_hit_clr;
		uint32_t ctr_acc_clr;
		uint32_t stream_addr_clr;
		uint32_t stream_ctr_clr;
		uint32_t stream_fifo_clr;
		uint32_t RSVDclr_1[1016];
} XIP_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t ctrl_xor;
		uint32_t RSVDxor_0;
		uint32_t stat_xor;
		uint32_t ctr_hit_xor;
		uint32_t ctr_acc_xor;
		uint32_t stream_addr_xor;
		uint32_t stream_ctr_xor;
		uint32_t stream_fifo_xor;
		uint32_t RSVDxor_1[1016];
		uint32_t ctrl_set;
		uint32_t RSVDset_0;
		uint32_t stat_set;
		uint32_t ctr_hit_set;
		uint32_t ctr_acc_set;
		uint32_t stream_addr_set;
		uint32_t stream_ctr_set;
		uint32_t stream_fifo_set;
		uint32_t RSVDset_1[1016];
		uint32_t ctrl_clr;
		uint32_t RSVDclr_0;
		uint32_t stat_clr;
		uint32_t ctr_hit_clr;
		uint32_t ctr_acc_clr;
		uint32_t stream_addr_clr;
		uint32_t stream_ctr_clr;
		uint32_t stream_fifo_clr;
		uint32_t RSVDclr_1[1016];
} XIP_SRAM_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t ctrl_xor;
		uint32_t RSVDxor_0;
		uint32_t stat_xor;
		uint32_t ctr_hit_xor;
		uint32_t ctr_acc_xor;
		uint32_t stream_addr_xor;
		uint32_t stream_ctr_xor;
		uint32_t stream_fifo_xor;
		uint32_t RSVDxor_1[1016];
		uint32_t ctrl_set;
		uint32_t RSVDset_0;
		uint32_t stat_set;
		uint32_t ctr_hit_set;
		uint32_t ctr_acc_set;
		uint32_t stream_addr_set;
		uint32_t stream_ctr_set;
		uint32_t stream_fifo_set;
		uint32_t RSVDset_1[1016];
		uint32_t ctrl_clr;
		uint32_t RSVDclr_0;
		uint32_t stat_clr;
		uint32_t ctr_hit_clr;
		uint32_t ctr_acc_clr;
		uint32_t stream_addr_clr;
		uint32_t stream_ctr_clr;
		uint32_t stream_fifo_clr;
		uint32_t RSVDclr_1[1016];
} XIP_NOCACHE_NOALLOC_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t ctrl_xor;
		uint32_t RSVDxor_0;
		uint32_t stat_xor;
		uint32_t ctr_hit_xor;
		uint32_t ctr_acc_xor;
		uint32_t stream_addr_xor;
		uint32_t stream_ctr_xor;
		uint32_t stream_fifo_xor;
		uint32_t RSVDxor_1[1016];
		uint32_t ctrl_set;
		uint32_t RSVDset_0;
		uint32_t stat_set;
		uint32_t ctr_hit_set;
		uint32_t ctr_acc_set;
		uint32_t stream_addr_set;
		uint32_t stream_ctr_set;
		uint32_t stream_fifo_set;
		uint32_t RSVDset_1[1016];
		uint32_t ctrl_clr;
		uint32_t RSVDclr_0;
		uint32_t stat_clr;
		uint32_t ctr_hit_clr;
		uint32_t ctr_acc_clr;
		uint32_t stream_addr_clr;
		uint32_t stream_ctr_clr;
		uint32_t stream_fifo_clr;
		uint32_t RSVDclr_1[1016];
} XIP_MAINTENANCE_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t ctrl_xor;
		uint32_t RSVDxor_0;
		uint32_t stat_xor;
		uint32_t ctr_hit_xor;
		uint32_t ctr_acc_xor;
		uint32_t stream_addr_xor;
		uint32_t stream_ctr_xor;
		uint32_t stream_fifo_xor;
		uint32_t RSVDxor_1[1016];
		uint32_t ctrl_set;
		uint32_t RSVDset_0;
		uint32_t stat_set;
		uint32_t ctr_hit_set;
		uint32_t ctr_acc_set;
		uint32_t stream_addr_set;
		uint32_t stream_ctr_set;
		uint32_t stream_fifo_set;
		uint32_t RSVDset_1[1016];
		uint32_t ctrl_clr;
		uint32_t RSVDclr_0;
		uint32_t stat_clr;
		uint32_t ctr_hit_clr;
		uint32_t ctr_acc_clr;
		uint32_t stream_addr_clr;
		uint32_t stream_ctr_clr;
		uint32_t stream_fifo_clr;
		uint32_t RSVDclr_1[1016];
} XIP_NOCACHE_NOALLOC_NOTRANSLATE_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t ctrl_xor;
		uint32_t RSVDxor_0;
		uint32_t stat_xor;
		uint32_t ctr_hit_xor;
		uint32_t ctr_acc_xor;
		uint32_t stream_addr_xor;
		uint32_t stream_ctr_xor;
		uint32_t stream_fifo_xor;
		uint32_t RSVDxor_1[1016];
		uint32_t ctrl_set;
		uint32_t RSVDset_0;
		uint32_t stat_set;
		uint32_t ctr_hit_set;
		uint32_t ctr_acc_set;
		uint32_t stream_addr_set;
		uint32_t stream_ctr_set;
		uint32_t stream_fifo_set;
		uint32_t RSVDset_1[1016];
		uint32_t ctrl_clr;
		uint32_t RSVDclr_0;
		uint32_t stat_clr;
		uint32_t ctr_hit_clr;
		uint32_t ctr_acc_clr;
		uint32_t stream_addr_clr;
		uint32_t stream_ctr_clr;
		uint32_t stream_fifo_clr;
		uint32_t RSVDclr_1[1016];
} XIP_CTRL_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t ctrl_xor;
		uint32_t RSVDxor_0;
		uint32_t stat_xor;
		uint32_t ctr_hit_xor;
		uint32_t ctr_acc_xor;
		uint32_t stream_addr_xor;
		uint32_t stream_ctr_xor;
		uint32_t stream_fifo_xor;
		uint32_t RSVDxor_1[1016];
		uint32_t ctrl_set;
		uint32_t RSVDset_0;
		uint32_t stat_set;
		uint32_t ctr_hit_set;
		uint32_t ctr_acc_set;
		uint32_t stream_addr_set;
		uint32_t stream_ctr_set;
		uint32_t stream_fifo_set;
		uint32_t RSVDset_1[1016];
		uint32_t ctrl_clr;
		uint32_t RSVDclr_0;
		uint32_t stat_clr;
		uint32_t ctr_hit_clr;
		uint32_t ctr_acc_clr;
		uint32_t stream_addr_clr;
		uint32_t stream_ctr_clr;
		uint32_t stream_fifo_clr;
		uint32_t RSVDclr_1[1016];
} XIP_QMI_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t ctrl_xor;
		uint32_t RSVDxor_0;
		uint32_t stat_xor;
		uint32_t ctr_hit_xor;
		uint32_t ctr_acc_xor;
		uint32_t stream_addr_xor;
		uint32_t stream_ctr_xor;
		uint32_t stream_fifo_xor;
		uint32_t RSVDxor_1[1016];
		uint32_t ctrl_set;
		uint32_t RSVDset_0;
		uint32_t stat_set;
		uint32_t ctr_hit_set;
		uint32_t ctr_acc_set;
		uint32_t stream_addr_set;
		uint32_t stream_ctr_set;
		uint32_t stream_fifo_set;
		uint32_t RSVDset_1[1016];
		uint32_t ctrl_clr;
		uint32_t RSVDclr_0;
		uint32_t stat_clr;
		uint32_t ctr_hit_clr;
		uint32_t ctr_acc_clr;
		uint32_t stream_addr_clr;
		uint32_t stream_ctr_clr;
		uint32_t stream_fifo_clr;
		uint32_t RSVDclr_1[1016];
} XIP_AUX_REG_BLOCKS;


/*IO Registers as struct*/

#define xip (*(XIP_REG_BLOCKS volatile *)0x10000000)



#define xip_sram (*(XIP_SRAM_REG_BLOCKS volatile *)0x13ffc000)



#define xip_nocache_noalloc (*(XIP_NOCACHE_NOALLOC_REG_BLOCKS volatile *)0x14000000)



#define xip_maintenance (*(XIP_MAINTENANCE_REG_BLOCKS volatile *)0x18000000)



#define xip_nocache_noalloc_notranslate (*(XIP_NOCACHE_NOALLOC_NOTRANSLATE_REG_BLOCKS volatile *)0x1c000000)



#define xip_ctrl (*(XIP_CTRL_REG_BLOCKS volatile *)0x400c8000)



#define xip_qmi (*(XIP_QMI_REG_BLOCKS volatile *)0x400d0000)



#define xip_aux (*(XIP_AUX_REG_BLOCKS volatile *)0x50500000)


/*IO Registers AS MACROS*/

#define XIP_CTRL (*(volatile uint32_t *)0x10000000)
#define XIP_STAT (*(volatile uint32_t *)0x10000008)
#define XIP_CTR_HIT (*(volatile uint32_t *)0x1000000c)
#define XIP_CTR_ACC (*(volatile uint32_t *)0x10000010)
#define XIP_STREAM_ADDR (*(volatile uint32_t *)0x10000014)
#define XIP_STREAM_CTR (*(volatile uint32_t *)0x10000018)
#define XIP_STREAM_FIFO (*(volatile uint32_t *)0x1000001c)
#define XIP_CTRL_XOR (*(volatile uint32_t *)0x10001000)
#define XIP_STAT_XOR (*(volatile uint32_t *)0x10001008)
#define XIP_CTR_HIT_XOR (*(volatile uint32_t *)0x1000100c)
#define XIP_CTR_ACC_XOR (*(volatile uint32_t *)0x10001010)
#define XIP_STREAM_ADDR_XOR (*(volatile uint32_t *)0x10001014)
#define XIP_STREAM_CTR_XOR (*(volatile uint32_t *)0x10001018)
#define XIP_STREAM_FIFO_XOR (*(volatile uint32_t *)0x1000101c)
#define XIP_CTRL_SET (*(volatile uint32_t *)0x10002000)
#define XIP_STAT_SET (*(volatile uint32_t *)0x10002008)
#define XIP_CTR_HIT_SET (*(volatile uint32_t *)0x1000200c)
#define XIP_CTR_ACC_SET (*(volatile uint32_t *)0x10002010)
#define XIP_STREAM_ADDR_SET (*(volatile uint32_t *)0x10002014)
#define XIP_STREAM_CTR_SET (*(volatile uint32_t *)0x10002018)
#define XIP_STREAM_FIFO_SET (*(volatile uint32_t *)0x1000201c)
#define XIP_CTRL_CLR (*(volatile uint32_t *)0x10003000)
#define XIP_STAT_CLR (*(volatile uint32_t *)0x10003008)
#define XIP_CTR_HIT_CLR (*(volatile uint32_t *)0x1000300c)
#define XIP_CTR_ACC_CLR (*(volatile uint32_t *)0x10003010)
#define XIP_STREAM_ADDR_CLR (*(volatile uint32_t *)0x10003014)
#define XIP_STREAM_CTR_CLR (*(volatile uint32_t *)0x10003018)
#define XIP_STREAM_FIFO_CLR (*(volatile uint32_t *)0x1000301c)
#define XIP_SRAM_CTRL (*(volatile uint32_t *)0x13ffc000)
#define XIP_SRAM_STAT (*(volatile uint32_t *)0x13ffc008)
#define XIP_SRAM_CTR_HIT (*(volatile uint32_t *)0x13ffc00c)
#define XIP_SRAM_CTR_ACC (*(volatile uint32_t *)0x13ffc010)
#define XIP_SRAM_STREAM_ADDR (*(volatile uint32_t *)0x13ffc014)
#define XIP_SRAM_STREAM_CTR (*(volatile uint32_t *)0x13ffc018)
#define XIP_SRAM_STREAM_FIFO (*(volatile uint32_t *)0x13ffc01c)
#define XIP_SRAM_CTRL_XOR (*(volatile uint32_t *)0x13ffd000)
#define XIP_SRAM_STAT_XOR (*(volatile uint32_t *)0x13ffd008)
#define XIP_SRAM_CTR_HIT_XOR (*(volatile uint32_t *)0x13ffd00c)
#define XIP_SRAM_CTR_ACC_XOR (*(volatile uint32_t *)0x13ffd010)
#define XIP_SRAM_STREAM_ADDR_XOR (*(volatile uint32_t *)0x13ffd014)
#define XIP_SRAM_STREAM_CTR_XOR (*(volatile uint32_t *)0x13ffd018)
#define XIP_SRAM_STREAM_FIFO_XOR (*(volatile uint32_t *)0x13ffd01c)
#define XIP_SRAM_CTRL_SET (*(volatile uint32_t *)0x13ffe000)
#define XIP_SRAM_STAT_SET (*(volatile uint32_t *)0x13ffe008)
#define XIP_SRAM_CTR_HIT_SET (*(volatile uint32_t *)0x13ffe00c)
#define XIP_SRAM_CTR_ACC_SET (*(volatile uint32_t *)0x13ffe010)
#define XIP_SRAM_STREAM_ADDR_SET (*(volatile uint32_t *)0x13ffe014)
#define XIP_SRAM_STREAM_CTR_SET (*(volatile uint32_t *)0x13ffe018)
#define XIP_SRAM_STREAM_FIFO_SET (*(volatile uint32_t *)0x13ffe01c)
#define XIP_SRAM_CTRL_CLR (*(volatile uint32_t *)0x13fff000)
#define XIP_SRAM_STAT_CLR (*(volatile uint32_t *)0x13fff008)
#define XIP_SRAM_CTR_HIT_CLR (*(volatile uint32_t *)0x13fff00c)
#define XIP_SRAM_CTR_ACC_CLR (*(volatile uint32_t *)0x13fff010)
#define XIP_SRAM_STREAM_ADDR_CLR (*(volatile uint32_t *)0x13fff014)
#define XIP_SRAM_STREAM_CTR_CLR (*(volatile uint32_t *)0x13fff018)
#define XIP_SRAM_STREAM_FIFO_CLR (*(volatile uint32_t *)0x13fff01c)
#define XIP_NOCACHE_NOALLOC_CTRL (*(volatile uint32_t *)0x14000000)
#define XIP_NOCACHE_NOALLOC_STAT (*(volatile uint32_t *)0x14000008)
#define XIP_NOCACHE_NOALLOC_CTR_HIT (*(volatile uint32_t *)0x1400000c)
#define XIP_NOCACHE_NOALLOC_CTR_ACC (*(volatile uint32_t *)0x14000010)
#define XIP_NOCACHE_NOALLOC_STREAM_ADDR (*(volatile uint32_t *)0x14000014)
#define XIP_NOCACHE_NOALLOC_STREAM_CTR (*(volatile uint32_t *)0x14000018)
#define XIP_NOCACHE_NOALLOC_STREAM_FIFO (*(volatile uint32_t *)0x1400001c)
#define XIP_NOCACHE_NOALLOC_CTRL_XOR (*(volatile uint32_t *)0x14001000)
#define XIP_NOCACHE_NOALLOC_STAT_XOR (*(volatile uint32_t *)0x14001008)
#define XIP_NOCACHE_NOALLOC_CTR_HIT_XOR (*(volatile uint32_t *)0x1400100c)
#define XIP_NOCACHE_NOALLOC_CTR_ACC_XOR (*(volatile uint32_t *)0x14001010)
#define XIP_NOCACHE_NOALLOC_STREAM_ADDR_XOR (*(volatile uint32_t *)0x14001014)
#define XIP_NOCACHE_NOALLOC_STREAM_CTR_XOR (*(volatile uint32_t *)0x14001018)
#define XIP_NOCACHE_NOALLOC_STREAM_FIFO_XOR (*(volatile uint32_t *)0x1400101c)
#define XIP_NOCACHE_NOALLOC_CTRL_SET (*(volatile uint32_t *)0x14002000)
#define XIP_NOCACHE_NOALLOC_STAT_SET (*(volatile uint32_t *)0x14002008)
#define XIP_NOCACHE_NOALLOC_CTR_HIT_SET (*(volatile uint32_t *)0x1400200c)
#define XIP_NOCACHE_NOALLOC_CTR_ACC_SET (*(volatile uint32_t *)0x14002010)
#define XIP_NOCACHE_NOALLOC_STREAM_ADDR_SET (*(volatile uint32_t *)0x14002014)
#define XIP_NOCACHE_NOALLOC_STREAM_CTR_SET (*(volatile uint32_t *)0x14002018)
#define XIP_NOCACHE_NOALLOC_STREAM_FIFO_SET (*(volatile uint32_t *)0x1400201c)
#define XIP_NOCACHE_NOALLOC_CTRL_CLR (*(volatile uint32_t *)0x14003000)
#define XIP_NOCACHE_NOALLOC_STAT_CLR (*(volatile uint32_t *)0x14003008)
#define XIP_NOCACHE_NOALLOC_CTR_HIT_CLR (*(volatile uint32_t *)0x1400300c)
#define XIP_NOCACHE_NOALLOC_CTR_ACC_CLR (*(volatile uint32_t *)0x14003010)
#define XIP_NOCACHE_NOALLOC_STREAM_ADDR_CLR (*(volatile uint32_t *)0x14003014)
#define XIP_NOCACHE_NOALLOC_STREAM_CTR_CLR (*(volatile uint32_t *)0x14003018)
#define XIP_NOCACHE_NOALLOC_STREAM_FIFO_CLR (*(volatile uint32_t *)0x1400301c)
#define XIP_MAINTENANCE_CTRL (*(volatile uint32_t *)0x18000000)
#define XIP_MAINTENANCE_STAT (*(volatile uint32_t *)0x18000008)
#define XIP_MAINTENANCE_CTR_HIT (*(volatile uint32_t *)0x1800000c)
#define XIP_MAINTENANCE_CTR_ACC (*(volatile uint32_t *)0x18000010)
#define XIP_MAINTENANCE_STREAM_ADDR (*(volatile uint32_t *)0x18000014)
#define XIP_MAINTENANCE_STREAM_CTR (*(volatile uint32_t *)0x18000018)
#define XIP_MAINTENANCE_STREAM_FIFO (*(volatile uint32_t *)0x1800001c)
#define XIP_MAINTENANCE_CTRL_XOR (*(volatile uint32_t *)0x18001000)
#define XIP_MAINTENANCE_STAT_XOR (*(volatile uint32_t *)0x18001008)
#define XIP_MAINTENANCE_CTR_HIT_XOR (*(volatile uint32_t *)0x1800100c)
#define XIP_MAINTENANCE_CTR_ACC_XOR (*(volatile uint32_t *)0x18001010)
#define XIP_MAINTENANCE_STREAM_ADDR_XOR (*(volatile uint32_t *)0x18001014)
#define XIP_MAINTENANCE_STREAM_CTR_XOR (*(volatile uint32_t *)0x18001018)
#define XIP_MAINTENANCE_STREAM_FIFO_XOR (*(volatile uint32_t *)0x1800101c)
#define XIP_MAINTENANCE_CTRL_SET (*(volatile uint32_t *)0x18002000)
#define XIP_MAINTENANCE_STAT_SET (*(volatile uint32_t *)0x18002008)
#define XIP_MAINTENANCE_CTR_HIT_SET (*(volatile uint32_t *)0x1800200c)
#define XIP_MAINTENANCE_CTR_ACC_SET (*(volatile uint32_t *)0x18002010)
#define XIP_MAINTENANCE_STREAM_ADDR_SET (*(volatile uint32_t *)0x18002014)
#define XIP_MAINTENANCE_STREAM_CTR_SET (*(volatile uint32_t *)0x18002018)
#define XIP_MAINTENANCE_STREAM_FIFO_SET (*(volatile uint32_t *)0x1800201c)
#define XIP_MAINTENANCE_CTRL_CLR (*(volatile uint32_t *)0x18003000)
#define XIP_MAINTENANCE_STAT_CLR (*(volatile uint32_t *)0x18003008)
#define XIP_MAINTENANCE_CTR_HIT_CLR (*(volatile uint32_t *)0x1800300c)
#define XIP_MAINTENANCE_CTR_ACC_CLR (*(volatile uint32_t *)0x18003010)
#define XIP_MAINTENANCE_STREAM_ADDR_CLR (*(volatile uint32_t *)0x18003014)
#define XIP_MAINTENANCE_STREAM_CTR_CLR (*(volatile uint32_t *)0x18003018)
#define XIP_MAINTENANCE_STREAM_FIFO_CLR (*(volatile uint32_t *)0x1800301c)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL (*(volatile uint32_t *)0x1c000000)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT (*(volatile uint32_t *)0x1c000008)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTR_HIT (*(volatile uint32_t *)0x1c00000c)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTR_ACC (*(volatile uint32_t *)0x1c000010)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STREAM_ADDR (*(volatile uint32_t *)0x1c000014)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STREAM_CTR (*(volatile uint32_t *)0x1c000018)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STREAM_FIFO (*(volatile uint32_t *)0x1c00001c)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_XOR (*(volatile uint32_t *)0x1c001000)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_XOR (*(volatile uint32_t *)0x1c001008)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTR_HIT_XOR (*(volatile uint32_t *)0x1c00100c)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTR_ACC_XOR (*(volatile uint32_t *)0x1c001010)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STREAM_ADDR_XOR (*(volatile uint32_t *)0x1c001014)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STREAM_CTR_XOR (*(volatile uint32_t *)0x1c001018)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STREAM_FIFO_XOR (*(volatile uint32_t *)0x1c00101c)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_SET (*(volatile uint32_t *)0x1c002000)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_SET (*(volatile uint32_t *)0x1c002008)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTR_HIT_SET (*(volatile uint32_t *)0x1c00200c)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTR_ACC_SET (*(volatile uint32_t *)0x1c002010)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STREAM_ADDR_SET (*(volatile uint32_t *)0x1c002014)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STREAM_CTR_SET (*(volatile uint32_t *)0x1c002018)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STREAM_FIFO_SET (*(volatile uint32_t *)0x1c00201c)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_CLR (*(volatile uint32_t *)0x1c003000)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_CLR (*(volatile uint32_t *)0x1c003008)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTR_HIT_CLR (*(volatile uint32_t *)0x1c00300c)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTR_ACC_CLR (*(volatile uint32_t *)0x1c003010)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STREAM_ADDR_CLR (*(volatile uint32_t *)0x1c003014)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STREAM_CTR_CLR (*(volatile uint32_t *)0x1c003018)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STREAM_FIFO_CLR (*(volatile uint32_t *)0x1c00301c)
#define XIP_CTRL_CTRL (*(volatile uint32_t *)0x400c8000)
#define XIP_CTRL_STAT (*(volatile uint32_t *)0x400c8008)
#define XIP_CTRL_CTR_HIT (*(volatile uint32_t *)0x400c800c)
#define XIP_CTRL_CTR_ACC (*(volatile uint32_t *)0x400c8010)
#define XIP_CTRL_STREAM_ADDR (*(volatile uint32_t *)0x400c8014)
#define XIP_CTRL_STREAM_CTR (*(volatile uint32_t *)0x400c8018)
#define XIP_CTRL_STREAM_FIFO (*(volatile uint32_t *)0x400c801c)
#define XIP_CTRL_CTRL_XOR (*(volatile uint32_t *)0x400c9000)
#define XIP_CTRL_STAT_XOR (*(volatile uint32_t *)0x400c9008)
#define XIP_CTRL_CTR_HIT_XOR (*(volatile uint32_t *)0x400c900c)
#define XIP_CTRL_CTR_ACC_XOR (*(volatile uint32_t *)0x400c9010)
#define XIP_CTRL_STREAM_ADDR_XOR (*(volatile uint32_t *)0x400c9014)
#define XIP_CTRL_STREAM_CTR_XOR (*(volatile uint32_t *)0x400c9018)
#define XIP_CTRL_STREAM_FIFO_XOR (*(volatile uint32_t *)0x400c901c)
#define XIP_CTRL_CTRL_SET (*(volatile uint32_t *)0x400ca000)
#define XIP_CTRL_STAT_SET (*(volatile uint32_t *)0x400ca008)
#define XIP_CTRL_CTR_HIT_SET (*(volatile uint32_t *)0x400ca00c)
#define XIP_CTRL_CTR_ACC_SET (*(volatile uint32_t *)0x400ca010)
#define XIP_CTRL_STREAM_ADDR_SET (*(volatile uint32_t *)0x400ca014)
#define XIP_CTRL_STREAM_CTR_SET (*(volatile uint32_t *)0x400ca018)
#define XIP_CTRL_STREAM_FIFO_SET (*(volatile uint32_t *)0x400ca01c)
#define XIP_CTRL_CTRL_CLR (*(volatile uint32_t *)0x400cb000)
#define XIP_CTRL_STAT_CLR (*(volatile uint32_t *)0x400cb008)
#define XIP_CTRL_CTR_HIT_CLR (*(volatile uint32_t *)0x400cb00c)
#define XIP_CTRL_CTR_ACC_CLR (*(volatile uint32_t *)0x400cb010)
#define XIP_CTRL_STREAM_ADDR_CLR (*(volatile uint32_t *)0x400cb014)
#define XIP_CTRL_STREAM_CTR_CLR (*(volatile uint32_t *)0x400cb018)
#define XIP_CTRL_STREAM_FIFO_CLR (*(volatile uint32_t *)0x400cb01c)
#define XIP_QMI_CTRL (*(volatile uint32_t *)0x400d0000)
#define XIP_QMI_STAT (*(volatile uint32_t *)0x400d0008)
#define XIP_QMI_CTR_HIT (*(volatile uint32_t *)0x400d000c)
#define XIP_QMI_CTR_ACC (*(volatile uint32_t *)0x400d0010)
#define XIP_QMI_STREAM_ADDR (*(volatile uint32_t *)0x400d0014)
#define XIP_QMI_STREAM_CTR (*(volatile uint32_t *)0x400d0018)
#define XIP_QMI_STREAM_FIFO (*(volatile uint32_t *)0x400d001c)
#define XIP_QMI_CTRL_XOR (*(volatile uint32_t *)0x400d1000)
#define XIP_QMI_STAT_XOR (*(volatile uint32_t *)0x400d1008)
#define XIP_QMI_CTR_HIT_XOR (*(volatile uint32_t *)0x400d100c)
#define XIP_QMI_CTR_ACC_XOR (*(volatile uint32_t *)0x400d1010)
#define XIP_QMI_STREAM_ADDR_XOR (*(volatile uint32_t *)0x400d1014)
#define XIP_QMI_STREAM_CTR_XOR (*(volatile uint32_t *)0x400d1018)
#define XIP_QMI_STREAM_FIFO_XOR (*(volatile uint32_t *)0x400d101c)
#define XIP_QMI_CTRL_SET (*(volatile uint32_t *)0x400d2000)
#define XIP_QMI_STAT_SET (*(volatile uint32_t *)0x400d2008)
#define XIP_QMI_CTR_HIT_SET (*(volatile uint32_t *)0x400d200c)
#define XIP_QMI_CTR_ACC_SET (*(volatile uint32_t *)0x400d2010)
#define XIP_QMI_STREAM_ADDR_SET (*(volatile uint32_t *)0x400d2014)
#define XIP_QMI_STREAM_CTR_SET (*(volatile uint32_t *)0x400d2018)
#define XIP_QMI_STREAM_FIFO_SET (*(volatile uint32_t *)0x400d201c)
#define XIP_QMI_CTRL_CLR (*(volatile uint32_t *)0x400d3000)
#define XIP_QMI_STAT_CLR (*(volatile uint32_t *)0x400d3008)
#define XIP_QMI_CTR_HIT_CLR (*(volatile uint32_t *)0x400d300c)
#define XIP_QMI_CTR_ACC_CLR (*(volatile uint32_t *)0x400d3010)
#define XIP_QMI_STREAM_ADDR_CLR (*(volatile uint32_t *)0x400d3014)
#define XIP_QMI_STREAM_CTR_CLR (*(volatile uint32_t *)0x400d3018)
#define XIP_QMI_STREAM_FIFO_CLR (*(volatile uint32_t *)0x400d301c)
#define XIP_AUX_CTRL (*(volatile uint32_t *)0x50500000)
#define XIP_AUX_STAT (*(volatile uint32_t *)0x50500008)
#define XIP_AUX_CTR_HIT (*(volatile uint32_t *)0x5050000c)
#define XIP_AUX_CTR_ACC (*(volatile uint32_t *)0x50500010)
#define XIP_AUX_STREAM_ADDR (*(volatile uint32_t *)0x50500014)
#define XIP_AUX_STREAM_CTR (*(volatile uint32_t *)0x50500018)
#define XIP_AUX_STREAM_FIFO (*(volatile uint32_t *)0x5050001c)
#define XIP_AUX_CTRL_XOR (*(volatile uint32_t *)0x50501000)
#define XIP_AUX_STAT_XOR (*(volatile uint32_t *)0x50501008)
#define XIP_AUX_CTR_HIT_XOR (*(volatile uint32_t *)0x5050100c)
#define XIP_AUX_CTR_ACC_XOR (*(volatile uint32_t *)0x50501010)
#define XIP_AUX_STREAM_ADDR_XOR (*(volatile uint32_t *)0x50501014)
#define XIP_AUX_STREAM_CTR_XOR (*(volatile uint32_t *)0x50501018)
#define XIP_AUX_STREAM_FIFO_XOR (*(volatile uint32_t *)0x5050101c)
#define XIP_AUX_CTRL_SET (*(volatile uint32_t *)0x50502000)
#define XIP_AUX_STAT_SET (*(volatile uint32_t *)0x50502008)
#define XIP_AUX_CTR_HIT_SET (*(volatile uint32_t *)0x5050200c)
#define XIP_AUX_CTR_ACC_SET (*(volatile uint32_t *)0x50502010)
#define XIP_AUX_STREAM_ADDR_SET (*(volatile uint32_t *)0x50502014)
#define XIP_AUX_STREAM_CTR_SET (*(volatile uint32_t *)0x50502018)
#define XIP_AUX_STREAM_FIFO_SET (*(volatile uint32_t *)0x5050201c)
#define XIP_AUX_CTRL_CLR (*(volatile uint32_t *)0x50503000)
#define XIP_AUX_STAT_CLR (*(volatile uint32_t *)0x50503008)
#define XIP_AUX_CTR_HIT_CLR (*(volatile uint32_t *)0x5050300c)
#define XIP_AUX_CTR_ACC_CLR (*(volatile uint32_t *)0x50503010)
#define XIP_AUX_STREAM_ADDR_CLR (*(volatile uint32_t *)0x50503014)
#define XIP_AUX_STREAM_CTR_CLR (*(volatile uint32_t *)0x50503018)
#define XIP_AUX_STREAM_FIFO_CLR (*(volatile uint32_t *)0x5050301c)

/*CTRL Register macros*/

#define XIP_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_CTRL_WRITABLE_M1_MASK XIP_CTRL_WRITABLE_M1(ALL1)
#define XIP_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_CTRL_WRITABLE_M0_MASK XIP_CTRL_WRITABLE_M0(ALL1)
#define XIP_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_CTRL_SPLIT_WAYS_MASK XIP_CTRL_SPLIT_WAYS(ALL1)
#define XIP_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_CTRL_MAINT_NONSEC_MASK XIP_CTRL_MAINT_NONSEC(ALL1)
#define XIP_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_CTRL_NO_UNCACHED_NONSEC_MASK XIP_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_CTRL_NO_UNCACHED_SEC_MASK XIP_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_CTRL_POWER_DOWN_MASK XIP_CTRL_POWER_DOWN(ALL1)
#define XIP_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_CTRL_EN_NONSECURE_MASK XIP_CTRL_EN_NONSECURE(ALL1)
#define XIP_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_CTRL_EN_SECURE_MASK XIP_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_STAT_FIFO_FULL_MASK XIP_STAT_FIFO_FULL(ALL1)
#define XIP_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_STAT_FIFO_EMPTY_MASK XIP_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_SRAM_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_SRAM_CTRL_WRITABLE_M1_MASK XIP_SRAM_CTRL_WRITABLE_M1(ALL1)
#define XIP_SRAM_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_SRAM_CTRL_WRITABLE_M0_MASK XIP_SRAM_CTRL_WRITABLE_M0(ALL1)
#define XIP_SRAM_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_SRAM_CTRL_SPLIT_WAYS_MASK XIP_SRAM_CTRL_SPLIT_WAYS(ALL1)
#define XIP_SRAM_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_SRAM_CTRL_MAINT_NONSEC_MASK XIP_SRAM_CTRL_MAINT_NONSEC(ALL1)
#define XIP_SRAM_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_SRAM_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_SRAM_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_SRAM_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_SRAM_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_SRAM_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_SRAM_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_SRAM_CTRL_NO_UNCACHED_NONSEC_MASK XIP_SRAM_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_SRAM_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_SRAM_CTRL_NO_UNCACHED_SEC_MASK XIP_SRAM_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_SRAM_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_SRAM_CTRL_POWER_DOWN_MASK XIP_SRAM_CTRL_POWER_DOWN(ALL1)
#define XIP_SRAM_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_SRAM_CTRL_EN_NONSECURE_MASK XIP_SRAM_CTRL_EN_NONSECURE(ALL1)
#define XIP_SRAM_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_SRAM_CTRL_EN_SECURE_MASK XIP_SRAM_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_SRAM_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_SRAM_STAT_FIFO_FULL_MASK XIP_SRAM_STAT_FIFO_FULL(ALL1)
#define XIP_SRAM_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_SRAM_STAT_FIFO_EMPTY_MASK XIP_SRAM_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_NOCACHE_NOALLOC_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_NOCACHE_NOALLOC_CTRL_WRITABLE_M1_MASK XIP_NOCACHE_NOALLOC_CTRL_WRITABLE_M1(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_NOCACHE_NOALLOC_CTRL_WRITABLE_M0_MASK XIP_NOCACHE_NOALLOC_CTRL_WRITABLE_M0(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_NOCACHE_NOALLOC_CTRL_SPLIT_WAYS_MASK XIP_NOCACHE_NOALLOC_CTRL_SPLIT_WAYS(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_NOCACHE_NOALLOC_CTRL_MAINT_NONSEC_MASK XIP_NOCACHE_NOALLOC_CTRL_MAINT_NONSEC(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_NOCACHE_NOALLOC_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_NOCACHE_NOALLOC_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNCACHED_NONSEC_MASK XIP_NOCACHE_NOALLOC_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNCACHED_SEC_MASK XIP_NOCACHE_NOALLOC_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_NOCACHE_NOALLOC_CTRL_POWER_DOWN_MASK XIP_NOCACHE_NOALLOC_CTRL_POWER_DOWN(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_NOCACHE_NOALLOC_CTRL_EN_NONSECURE_MASK XIP_NOCACHE_NOALLOC_CTRL_EN_NONSECURE(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_NOCACHE_NOALLOC_CTRL_EN_SECURE_MASK XIP_NOCACHE_NOALLOC_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_NOCACHE_NOALLOC_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_NOCACHE_NOALLOC_STAT_FIFO_FULL_MASK XIP_NOCACHE_NOALLOC_STAT_FIFO_FULL(ALL1)
#define XIP_NOCACHE_NOALLOC_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_NOCACHE_NOALLOC_STAT_FIFO_EMPTY_MASK XIP_NOCACHE_NOALLOC_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_MAINTENANCE_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_MAINTENANCE_CTRL_WRITABLE_M1_MASK XIP_MAINTENANCE_CTRL_WRITABLE_M1(ALL1)
#define XIP_MAINTENANCE_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_MAINTENANCE_CTRL_WRITABLE_M0_MASK XIP_MAINTENANCE_CTRL_WRITABLE_M0(ALL1)
#define XIP_MAINTENANCE_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_MAINTENANCE_CTRL_SPLIT_WAYS_MASK XIP_MAINTENANCE_CTRL_SPLIT_WAYS(ALL1)
#define XIP_MAINTENANCE_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_MAINTENANCE_CTRL_MAINT_NONSEC_MASK XIP_MAINTENANCE_CTRL_MAINT_NONSEC(ALL1)
#define XIP_MAINTENANCE_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_MAINTENANCE_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_MAINTENANCE_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_MAINTENANCE_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_MAINTENANCE_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_MAINTENANCE_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_MAINTENANCE_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_MAINTENANCE_CTRL_NO_UNCACHED_NONSEC_MASK XIP_MAINTENANCE_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_MAINTENANCE_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_MAINTENANCE_CTRL_NO_UNCACHED_SEC_MASK XIP_MAINTENANCE_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_MAINTENANCE_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_MAINTENANCE_CTRL_POWER_DOWN_MASK XIP_MAINTENANCE_CTRL_POWER_DOWN(ALL1)
#define XIP_MAINTENANCE_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_MAINTENANCE_CTRL_EN_NONSECURE_MASK XIP_MAINTENANCE_CTRL_EN_NONSECURE(ALL1)
#define XIP_MAINTENANCE_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_MAINTENANCE_CTRL_EN_SECURE_MASK XIP_MAINTENANCE_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_MAINTENANCE_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_MAINTENANCE_STAT_FIFO_FULL_MASK XIP_MAINTENANCE_STAT_FIFO_FULL(ALL1)
#define XIP_MAINTENANCE_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_MAINTENANCE_STAT_FIFO_EMPTY_MASK XIP_MAINTENANCE_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_WRITABLE_M1_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_WRITABLE_M1(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_WRITABLE_M0_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_WRITABLE_M0(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_SPLIT_WAYS_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_SPLIT_WAYS(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_MAINT_NONSEC_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_MAINT_NONSEC(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNCACHED_NONSEC_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNCACHED_SEC_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_POWER_DOWN_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_POWER_DOWN(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_EN_NONSECURE_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_EN_NONSECURE(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_EN_SECURE_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_FIFO_FULL_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_FIFO_FULL(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_FIFO_EMPTY_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_CTRL_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_CTRL_CTRL_WRITABLE_M1_MASK XIP_CTRL_CTRL_WRITABLE_M1(ALL1)
#define XIP_CTRL_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_CTRL_CTRL_WRITABLE_M0_MASK XIP_CTRL_CTRL_WRITABLE_M0(ALL1)
#define XIP_CTRL_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_CTRL_CTRL_SPLIT_WAYS_MASK XIP_CTRL_CTRL_SPLIT_WAYS(ALL1)
#define XIP_CTRL_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_CTRL_CTRL_MAINT_NONSEC_MASK XIP_CTRL_CTRL_MAINT_NONSEC(ALL1)
#define XIP_CTRL_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_CTRL_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_CTRL_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_CTRL_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_CTRL_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_CTRL_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_CTRL_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_CTRL_CTRL_NO_UNCACHED_NONSEC_MASK XIP_CTRL_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_CTRL_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_CTRL_CTRL_NO_UNCACHED_SEC_MASK XIP_CTRL_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_CTRL_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_CTRL_CTRL_POWER_DOWN_MASK XIP_CTRL_CTRL_POWER_DOWN(ALL1)
#define XIP_CTRL_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_CTRL_CTRL_EN_NONSECURE_MASK XIP_CTRL_CTRL_EN_NONSECURE(ALL1)
#define XIP_CTRL_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_CTRL_CTRL_EN_SECURE_MASK XIP_CTRL_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_CTRL_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_CTRL_STAT_FIFO_FULL_MASK XIP_CTRL_STAT_FIFO_FULL(ALL1)
#define XIP_CTRL_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_CTRL_STAT_FIFO_EMPTY_MASK XIP_CTRL_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_QMI_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_QMI_CTRL_WRITABLE_M1_MASK XIP_QMI_CTRL_WRITABLE_M1(ALL1)
#define XIP_QMI_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_QMI_CTRL_WRITABLE_M0_MASK XIP_QMI_CTRL_WRITABLE_M0(ALL1)
#define XIP_QMI_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_QMI_CTRL_SPLIT_WAYS_MASK XIP_QMI_CTRL_SPLIT_WAYS(ALL1)
#define XIP_QMI_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_QMI_CTRL_MAINT_NONSEC_MASK XIP_QMI_CTRL_MAINT_NONSEC(ALL1)
#define XIP_QMI_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_QMI_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_QMI_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_QMI_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_QMI_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_QMI_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_QMI_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_QMI_CTRL_NO_UNCACHED_NONSEC_MASK XIP_QMI_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_QMI_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_QMI_CTRL_NO_UNCACHED_SEC_MASK XIP_QMI_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_QMI_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_QMI_CTRL_POWER_DOWN_MASK XIP_QMI_CTRL_POWER_DOWN(ALL1)
#define XIP_QMI_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_QMI_CTRL_EN_NONSECURE_MASK XIP_QMI_CTRL_EN_NONSECURE(ALL1)
#define XIP_QMI_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_QMI_CTRL_EN_SECURE_MASK XIP_QMI_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_QMI_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_QMI_STAT_FIFO_FULL_MASK XIP_QMI_STAT_FIFO_FULL(ALL1)
#define XIP_QMI_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_QMI_STAT_FIFO_EMPTY_MASK XIP_QMI_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_AUX_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_AUX_CTRL_WRITABLE_M1_MASK XIP_AUX_CTRL_WRITABLE_M1(ALL1)
#define XIP_AUX_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_AUX_CTRL_WRITABLE_M0_MASK XIP_AUX_CTRL_WRITABLE_M0(ALL1)
#define XIP_AUX_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_AUX_CTRL_SPLIT_WAYS_MASK XIP_AUX_CTRL_SPLIT_WAYS(ALL1)
#define XIP_AUX_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_AUX_CTRL_MAINT_NONSEC_MASK XIP_AUX_CTRL_MAINT_NONSEC(ALL1)
#define XIP_AUX_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_AUX_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_AUX_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_AUX_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_AUX_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_AUX_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_AUX_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_AUX_CTRL_NO_UNCACHED_NONSEC_MASK XIP_AUX_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_AUX_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_AUX_CTRL_NO_UNCACHED_SEC_MASK XIP_AUX_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_AUX_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_AUX_CTRL_POWER_DOWN_MASK XIP_AUX_CTRL_POWER_DOWN(ALL1)
#define XIP_AUX_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_AUX_CTRL_EN_NONSECURE_MASK XIP_AUX_CTRL_EN_NONSECURE(ALL1)
#define XIP_AUX_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_AUX_CTRL_EN_SECURE_MASK XIP_AUX_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_AUX_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_AUX_STAT_FIFO_FULL_MASK XIP_AUX_STAT_FIFO_FULL(ALL1)
#define XIP_AUX_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_AUX_STAT_FIFO_EMPTY_MASK XIP_AUX_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


#endif

