
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

#ifndef RP2350_TIMER_H
#define RP2350_TIMER_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t timehw;
		uint32_t timelw;
		uint32_t timehr;
		uint32_t timelr;
		uint32_t alarm0;
		uint32_t alarm1;
		uint32_t alarm2;
		uint32_t alarm3;
		uint32_t armed;
		uint32_t timerawh;
		uint32_t timerawl;
		uint32_t dbgpause;
		uint32_t pause;
		uint32_t locked;
		uint32_t source;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[1005];
		uint32_t xor_timehw;
		uint32_t xor_timelw;
		uint32_t xor_timehr;
		uint32_t xor_timelr;
		uint32_t xor_alarm0;
		uint32_t xor_alarm1;
		uint32_t xor_alarm2;
		uint32_t xor_alarm3;
		uint32_t xor_armed;
		uint32_t xor_timerawh;
		uint32_t xor_timerawl;
		uint32_t xor_dbgpause;
		uint32_t xor_pause;
		uint32_t xor_locked;
		uint32_t xor_source;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_0[1005];
		uint32_t set_timehw;
		uint32_t set_timelw;
		uint32_t set_timehr;
		uint32_t set_timelr;
		uint32_t set_alarm0;
		uint32_t set_alarm1;
		uint32_t set_alarm2;
		uint32_t set_alarm3;
		uint32_t set_armed;
		uint32_t set_timerawh;
		uint32_t set_timerawl;
		uint32_t set_dbgpause;
		uint32_t set_pause;
		uint32_t set_locked;
		uint32_t set_source;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_0[1005];
		uint32_t clr_timehw;
		uint32_t clr_timelw;
		uint32_t clr_timehr;
		uint32_t clr_timelr;
		uint32_t clr_alarm0;
		uint32_t clr_alarm1;
		uint32_t clr_alarm2;
		uint32_t clr_alarm3;
		uint32_t clr_armed;
		uint32_t clr_timerawh;
		uint32_t clr_timerawl;
		uint32_t clr_dbgpause;
		uint32_t clr_pause;
		uint32_t clr_locked;
		uint32_t clr_source;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_0[1005];
} TIMER0_REG_BLOCKS;
typedef struct{
		uint32_t timehw;
		uint32_t timelw;
		uint32_t timehr;
		uint32_t timelr;
		uint32_t alarm0;
		uint32_t alarm1;
		uint32_t alarm2;
		uint32_t alarm3;
		uint32_t armed;
		uint32_t timerawh;
		uint32_t timerawl;
		uint32_t dbgpause;
		uint32_t pause;
		uint32_t locked;
		uint32_t source;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[1005];
		uint32_t xor_timehw;
		uint32_t xor_timelw;
		uint32_t xor_timehr;
		uint32_t xor_timelr;
		uint32_t xor_alarm0;
		uint32_t xor_alarm1;
		uint32_t xor_alarm2;
		uint32_t xor_alarm3;
		uint32_t xor_armed;
		uint32_t xor_timerawh;
		uint32_t xor_timerawl;
		uint32_t xor_dbgpause;
		uint32_t xor_pause;
		uint32_t xor_locked;
		uint32_t xor_source;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_0[1005];
		uint32_t set_timehw;
		uint32_t set_timelw;
		uint32_t set_timehr;
		uint32_t set_timelr;
		uint32_t set_alarm0;
		uint32_t set_alarm1;
		uint32_t set_alarm2;
		uint32_t set_alarm3;
		uint32_t set_armed;
		uint32_t set_timerawh;
		uint32_t set_timerawl;
		uint32_t set_dbgpause;
		uint32_t set_pause;
		uint32_t set_locked;
		uint32_t set_source;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_0[1005];
		uint32_t clr_timehw;
		uint32_t clr_timelw;
		uint32_t clr_timehr;
		uint32_t clr_timelr;
		uint32_t clr_alarm0;
		uint32_t clr_alarm1;
		uint32_t clr_alarm2;
		uint32_t clr_alarm3;
		uint32_t clr_armed;
		uint32_t clr_timerawh;
		uint32_t clr_timerawl;
		uint32_t clr_dbgpause;
		uint32_t clr_pause;
		uint32_t clr_locked;
		uint32_t clr_source;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_0[1005];
} TIMER1_REG_BLOCKS;


/*IO Registers as struct*/

#define timer0 (*(TIMER0_REG_BLOCKS volatile *)0x400b0000)



#define timer1 (*(TIMER1_REG_BLOCKS volatile *)0x400b8000)


/*IO Registers AS MACROS*/

#define TIMER0_TIMEHW (*(volatile uint32_t *)0x400b0000)
#define TIMER0_TIMELW (*(volatile uint32_t *)0x400b0004)
#define TIMER0_TIMEHR (*(volatile uint32_t *)0x400b0008)
#define TIMER0_TIMELR (*(volatile uint32_t *)0x400b000c)
#define TIMER0_ALARM0 (*(volatile uint32_t *)0x400b0010)
#define TIMER0_ALARM1 (*(volatile uint32_t *)0x400b0014)
#define TIMER0_ALARM2 (*(volatile uint32_t *)0x400b0018)
#define TIMER0_ALARM3 (*(volatile uint32_t *)0x400b001c)
#define TIMER0_ARMED (*(volatile uint32_t *)0x400b0020)
#define TIMER0_TIMERAWH (*(volatile uint32_t *)0x400b0024)
#define TIMER0_TIMERAWL (*(volatile uint32_t *)0x400b0028)
#define TIMER0_DBGPAUSE (*(volatile uint32_t *)0x400b002c)
#define TIMER0_PAUSE (*(volatile uint32_t *)0x400b0030)
#define TIMER0_LOCKED (*(volatile uint32_t *)0x400b0034)
#define TIMER0_SOURCE (*(volatile uint32_t *)0x400b0038)
#define TIMER0_INTR (*(volatile uint32_t *)0x400b003c)
#define TIMER0_INTE (*(volatile uint32_t *)0x400b0040)
#define TIMER0_INTF (*(volatile uint32_t *)0x400b0044)
#define TIMER0_INTS (*(volatile uint32_t *)0x400b0048)
#define TIMER0_XOR_TIMEHW (*(volatile uint32_t *)0x400b1000)
#define TIMER0_XOR_TIMELW (*(volatile uint32_t *)0x400b1004)
#define TIMER0_XOR_TIMEHR (*(volatile uint32_t *)0x400b1008)
#define TIMER0_XOR_TIMELR (*(volatile uint32_t *)0x400b100c)
#define TIMER0_XOR_ALARM0 (*(volatile uint32_t *)0x400b1010)
#define TIMER0_XOR_ALARM1 (*(volatile uint32_t *)0x400b1014)
#define TIMER0_XOR_ALARM2 (*(volatile uint32_t *)0x400b1018)
#define TIMER0_XOR_ALARM3 (*(volatile uint32_t *)0x400b101c)
#define TIMER0_XOR_ARMED (*(volatile uint32_t *)0x400b1020)
#define TIMER0_XOR_TIMERAWH (*(volatile uint32_t *)0x400b1024)
#define TIMER0_XOR_TIMERAWL (*(volatile uint32_t *)0x400b1028)
#define TIMER0_XOR_DBGPAUSE (*(volatile uint32_t *)0x400b102c)
#define TIMER0_XOR_PAUSE (*(volatile uint32_t *)0x400b1030)
#define TIMER0_XOR_LOCKED (*(volatile uint32_t *)0x400b1034)
#define TIMER0_XOR_SOURCE (*(volatile uint32_t *)0x400b1038)
#define TIMER0_XOR_INTR (*(volatile uint32_t *)0x400b103c)
#define TIMER0_XOR_INTE (*(volatile uint32_t *)0x400b1040)
#define TIMER0_XOR_INTF (*(volatile uint32_t *)0x400b1044)
#define TIMER0_XOR_INTS (*(volatile uint32_t *)0x400b1048)
#define TIMER0_SET_TIMEHW (*(volatile uint32_t *)0x400b2000)
#define TIMER0_SET_TIMELW (*(volatile uint32_t *)0x400b2004)
#define TIMER0_SET_TIMEHR (*(volatile uint32_t *)0x400b2008)
#define TIMER0_SET_TIMELR (*(volatile uint32_t *)0x400b200c)
#define TIMER0_SET_ALARM0 (*(volatile uint32_t *)0x400b2010)
#define TIMER0_SET_ALARM1 (*(volatile uint32_t *)0x400b2014)
#define TIMER0_SET_ALARM2 (*(volatile uint32_t *)0x400b2018)
#define TIMER0_SET_ALARM3 (*(volatile uint32_t *)0x400b201c)
#define TIMER0_SET_ARMED (*(volatile uint32_t *)0x400b2020)
#define TIMER0_SET_TIMERAWH (*(volatile uint32_t *)0x400b2024)
#define TIMER0_SET_TIMERAWL (*(volatile uint32_t *)0x400b2028)
#define TIMER0_SET_DBGPAUSE (*(volatile uint32_t *)0x400b202c)
#define TIMER0_SET_PAUSE (*(volatile uint32_t *)0x400b2030)
#define TIMER0_SET_LOCKED (*(volatile uint32_t *)0x400b2034)
#define TIMER0_SET_SOURCE (*(volatile uint32_t *)0x400b2038)
#define TIMER0_SET_INTR (*(volatile uint32_t *)0x400b203c)
#define TIMER0_SET_INTE (*(volatile uint32_t *)0x400b2040)
#define TIMER0_SET_INTF (*(volatile uint32_t *)0x400b2044)
#define TIMER0_SET_INTS (*(volatile uint32_t *)0x400b2048)
#define TIMER0_CLR_TIMEHW (*(volatile uint32_t *)0x400b3000)
#define TIMER0_CLR_TIMELW (*(volatile uint32_t *)0x400b3004)
#define TIMER0_CLR_TIMEHR (*(volatile uint32_t *)0x400b3008)
#define TIMER0_CLR_TIMELR (*(volatile uint32_t *)0x400b300c)
#define TIMER0_CLR_ALARM0 (*(volatile uint32_t *)0x400b3010)
#define TIMER0_CLR_ALARM1 (*(volatile uint32_t *)0x400b3014)
#define TIMER0_CLR_ALARM2 (*(volatile uint32_t *)0x400b3018)
#define TIMER0_CLR_ALARM3 (*(volatile uint32_t *)0x400b301c)
#define TIMER0_CLR_ARMED (*(volatile uint32_t *)0x400b3020)
#define TIMER0_CLR_TIMERAWH (*(volatile uint32_t *)0x400b3024)
#define TIMER0_CLR_TIMERAWL (*(volatile uint32_t *)0x400b3028)
#define TIMER0_CLR_DBGPAUSE (*(volatile uint32_t *)0x400b302c)
#define TIMER0_CLR_PAUSE (*(volatile uint32_t *)0x400b3030)
#define TIMER0_CLR_LOCKED (*(volatile uint32_t *)0x400b3034)
#define TIMER0_CLR_SOURCE (*(volatile uint32_t *)0x400b3038)
#define TIMER0_CLR_INTR (*(volatile uint32_t *)0x400b303c)
#define TIMER0_CLR_INTE (*(volatile uint32_t *)0x400b3040)
#define TIMER0_CLR_INTF (*(volatile uint32_t *)0x400b3044)
#define TIMER0_CLR_INTS (*(volatile uint32_t *)0x400b3048)
#define TIMER1_TIMEHW (*(volatile uint32_t *)0x400b8000)
#define TIMER1_TIMELW (*(volatile uint32_t *)0x400b8004)
#define TIMER1_TIMEHR (*(volatile uint32_t *)0x400b8008)
#define TIMER1_TIMELR (*(volatile uint32_t *)0x400b800c)
#define TIMER1_ALARM0 (*(volatile uint32_t *)0x400b8010)
#define TIMER1_ALARM1 (*(volatile uint32_t *)0x400b8014)
#define TIMER1_ALARM2 (*(volatile uint32_t *)0x400b8018)
#define TIMER1_ALARM3 (*(volatile uint32_t *)0x400b801c)
#define TIMER1_ARMED (*(volatile uint32_t *)0x400b8020)
#define TIMER1_TIMERAWH (*(volatile uint32_t *)0x400b8024)
#define TIMER1_TIMERAWL (*(volatile uint32_t *)0x400b8028)
#define TIMER1_DBGPAUSE (*(volatile uint32_t *)0x400b802c)
#define TIMER1_PAUSE (*(volatile uint32_t *)0x400b8030)
#define TIMER1_LOCKED (*(volatile uint32_t *)0x400b8034)
#define TIMER1_SOURCE (*(volatile uint32_t *)0x400b8038)
#define TIMER1_INTR (*(volatile uint32_t *)0x400b803c)
#define TIMER1_INTE (*(volatile uint32_t *)0x400b8040)
#define TIMER1_INTF (*(volatile uint32_t *)0x400b8044)
#define TIMER1_INTS (*(volatile uint32_t *)0x400b8048)
#define TIMER1_XOR_TIMEHW (*(volatile uint32_t *)0x400b9000)
#define TIMER1_XOR_TIMELW (*(volatile uint32_t *)0x400b9004)
#define TIMER1_XOR_TIMEHR (*(volatile uint32_t *)0x400b9008)
#define TIMER1_XOR_TIMELR (*(volatile uint32_t *)0x400b900c)
#define TIMER1_XOR_ALARM0 (*(volatile uint32_t *)0x400b9010)
#define TIMER1_XOR_ALARM1 (*(volatile uint32_t *)0x400b9014)
#define TIMER1_XOR_ALARM2 (*(volatile uint32_t *)0x400b9018)
#define TIMER1_XOR_ALARM3 (*(volatile uint32_t *)0x400b901c)
#define TIMER1_XOR_ARMED (*(volatile uint32_t *)0x400b9020)
#define TIMER1_XOR_TIMERAWH (*(volatile uint32_t *)0x400b9024)
#define TIMER1_XOR_TIMERAWL (*(volatile uint32_t *)0x400b9028)
#define TIMER1_XOR_DBGPAUSE (*(volatile uint32_t *)0x400b902c)
#define TIMER1_XOR_PAUSE (*(volatile uint32_t *)0x400b9030)
#define TIMER1_XOR_LOCKED (*(volatile uint32_t *)0x400b9034)
#define TIMER1_XOR_SOURCE (*(volatile uint32_t *)0x400b9038)
#define TIMER1_XOR_INTR (*(volatile uint32_t *)0x400b903c)
#define TIMER1_XOR_INTE (*(volatile uint32_t *)0x400b9040)
#define TIMER1_XOR_INTF (*(volatile uint32_t *)0x400b9044)
#define TIMER1_XOR_INTS (*(volatile uint32_t *)0x400b9048)
#define TIMER1_SET_TIMEHW (*(volatile uint32_t *)0x400ba000)
#define TIMER1_SET_TIMELW (*(volatile uint32_t *)0x400ba004)
#define TIMER1_SET_TIMEHR (*(volatile uint32_t *)0x400ba008)
#define TIMER1_SET_TIMELR (*(volatile uint32_t *)0x400ba00c)
#define TIMER1_SET_ALARM0 (*(volatile uint32_t *)0x400ba010)
#define TIMER1_SET_ALARM1 (*(volatile uint32_t *)0x400ba014)
#define TIMER1_SET_ALARM2 (*(volatile uint32_t *)0x400ba018)
#define TIMER1_SET_ALARM3 (*(volatile uint32_t *)0x400ba01c)
#define TIMER1_SET_ARMED (*(volatile uint32_t *)0x400ba020)
#define TIMER1_SET_TIMERAWH (*(volatile uint32_t *)0x400ba024)
#define TIMER1_SET_TIMERAWL (*(volatile uint32_t *)0x400ba028)
#define TIMER1_SET_DBGPAUSE (*(volatile uint32_t *)0x400ba02c)
#define TIMER1_SET_PAUSE (*(volatile uint32_t *)0x400ba030)
#define TIMER1_SET_LOCKED (*(volatile uint32_t *)0x400ba034)
#define TIMER1_SET_SOURCE (*(volatile uint32_t *)0x400ba038)
#define TIMER1_SET_INTR (*(volatile uint32_t *)0x400ba03c)
#define TIMER1_SET_INTE (*(volatile uint32_t *)0x400ba040)
#define TIMER1_SET_INTF (*(volatile uint32_t *)0x400ba044)
#define TIMER1_SET_INTS (*(volatile uint32_t *)0x400ba048)
#define TIMER1_CLR_TIMEHW (*(volatile uint32_t *)0x400bb000)
#define TIMER1_CLR_TIMELW (*(volatile uint32_t *)0x400bb004)
#define TIMER1_CLR_TIMEHR (*(volatile uint32_t *)0x400bb008)
#define TIMER1_CLR_TIMELR (*(volatile uint32_t *)0x400bb00c)
#define TIMER1_CLR_ALARM0 (*(volatile uint32_t *)0x400bb010)
#define TIMER1_CLR_ALARM1 (*(volatile uint32_t *)0x400bb014)
#define TIMER1_CLR_ALARM2 (*(volatile uint32_t *)0x400bb018)
#define TIMER1_CLR_ALARM3 (*(volatile uint32_t *)0x400bb01c)
#define TIMER1_CLR_ARMED (*(volatile uint32_t *)0x400bb020)
#define TIMER1_CLR_TIMERAWH (*(volatile uint32_t *)0x400bb024)
#define TIMER1_CLR_TIMERAWL (*(volatile uint32_t *)0x400bb028)
#define TIMER1_CLR_DBGPAUSE (*(volatile uint32_t *)0x400bb02c)
#define TIMER1_CLR_PAUSE (*(volatile uint32_t *)0x400bb030)
#define TIMER1_CLR_LOCKED (*(volatile uint32_t *)0x400bb034)
#define TIMER1_CLR_SOURCE (*(volatile uint32_t *)0x400bb038)
#define TIMER1_CLR_INTR (*(volatile uint32_t *)0x400bb03c)
#define TIMER1_CLR_INTE (*(volatile uint32_t *)0x400bb040)
#define TIMER1_CLR_INTF (*(volatile uint32_t *)0x400bb044)
#define TIMER1_CLR_INTS (*(volatile uint32_t *)0x400bb048)

/*TIMEHW Register macros*/


/*TIMELW Register macros*/


/*TIMEHR Register macros*/


/*TIMELR Register macros*/


/*ALARM0 Register macros*/


/*ALARM1 Register macros*/


/*ALARM2 Register macros*/


/*ALARM3 Register macros*/


/*ARMED Register macros*/


/*TIMERAWH Register macros*/


/*TIMERAWL Register macros*/


/*DBGPAUSE Register macros*/

#define TIMER0_DBGPAUSE_DBG1(v) (((v)&0x1)<<2)
#define TIMER0_DBGPAUSE_DBG1_MASK TIMER0_DBGPAUSE_DBG1(ALL1)
#define TIMER0_DBGPAUSE_DBG0(v) (((v)&0x1)<<1)
#define TIMER0_DBGPAUSE_DBG0_MASK TIMER0_DBGPAUSE_DBG0(ALL1)

/*PAUSE Register macros*/


/*LOCKED Register macros*/


/*SOURCE Register macros*/

#define TIMER0_SOURCE_CLK_SYS(v) (((v)&0x1)<<0)
#define TIMER0_SOURCE_CLK_SYS_MASK TIMER0_SOURCE_CLK_SYS(ALL1)

/*INTR Register macros*/

#define TIMER0_INTR_ALARM_3(v) (((v)&0x1)<<3)
#define TIMER0_INTR_ALARM_3_MASK TIMER0_INTR_ALARM_3(ALL1)
#define TIMER0_INTR_ALARM_2(v) (((v)&0x1)<<2)
#define TIMER0_INTR_ALARM_2_MASK TIMER0_INTR_ALARM_2(ALL1)
#define TIMER0_INTR_ALARM_1(v) (((v)&0x1)<<1)
#define TIMER0_INTR_ALARM_1_MASK TIMER0_INTR_ALARM_1(ALL1)
#define TIMER0_INTR_ALARM_0(v) (((v)&0x1)<<0)
#define TIMER0_INTR_ALARM_0_MASK TIMER0_INTR_ALARM_0(ALL1)

/*INTE Register macros*/

#define TIMER0_INTE_ALARM_3(v) (((v)&0x1)<<3)
#define TIMER0_INTE_ALARM_3_MASK TIMER0_INTE_ALARM_3(ALL1)
#define TIMER0_INTE_ALARM_2(v) (((v)&0x1)<<2)
#define TIMER0_INTE_ALARM_2_MASK TIMER0_INTE_ALARM_2(ALL1)
#define TIMER0_INTE_ALARM_1(v) (((v)&0x1)<<1)
#define TIMER0_INTE_ALARM_1_MASK TIMER0_INTE_ALARM_1(ALL1)
#define TIMER0_INTE_ALARM_0(v) (((v)&0x1)<<0)
#define TIMER0_INTE_ALARM_0_MASK TIMER0_INTE_ALARM_0(ALL1)

/*INTF Register macros*/

#define TIMER0_INTF_ALARM_3(v) (((v)&0x1)<<3)
#define TIMER0_INTF_ALARM_3_MASK TIMER0_INTF_ALARM_3(ALL1)
#define TIMER0_INTF_ALARM_2(v) (((v)&0x1)<<2)
#define TIMER0_INTF_ALARM_2_MASK TIMER0_INTF_ALARM_2(ALL1)
#define TIMER0_INTF_ALARM_1(v) (((v)&0x1)<<1)
#define TIMER0_INTF_ALARM_1_MASK TIMER0_INTF_ALARM_1(ALL1)
#define TIMER0_INTF_ALARM_0(v) (((v)&0x1)<<0)
#define TIMER0_INTF_ALARM_0_MASK TIMER0_INTF_ALARM_0(ALL1)

/*INTS Register macros*/

#define TIMER0_INTS_ALARM_3(v) (((v)&0x1)<<3)
#define TIMER0_INTS_ALARM_3_MASK TIMER0_INTS_ALARM_3(ALL1)
#define TIMER0_INTS_ALARM_2(v) (((v)&0x1)<<2)
#define TIMER0_INTS_ALARM_2_MASK TIMER0_INTS_ALARM_2(ALL1)
#define TIMER0_INTS_ALARM_1(v) (((v)&0x1)<<1)
#define TIMER0_INTS_ALARM_1_MASK TIMER0_INTS_ALARM_1(ALL1)
#define TIMER0_INTS_ALARM_0(v) (((v)&0x1)<<0)
#define TIMER0_INTS_ALARM_0_MASK TIMER0_INTS_ALARM_0(ALL1)

/*TIMEHW Register macros*/


/*TIMELW Register macros*/


/*TIMEHR Register macros*/


/*TIMELR Register macros*/


/*ALARM0 Register macros*/


/*ALARM1 Register macros*/


/*ALARM2 Register macros*/


/*ALARM3 Register macros*/


/*ARMED Register macros*/


/*TIMERAWH Register macros*/


/*TIMERAWL Register macros*/


/*DBGPAUSE Register macros*/

#define TIMER1_DBGPAUSE_DBG1(v) (((v)&0x1)<<2)
#define TIMER1_DBGPAUSE_DBG1_MASK TIMER1_DBGPAUSE_DBG1(ALL1)
#define TIMER1_DBGPAUSE_DBG0(v) (((v)&0x1)<<1)
#define TIMER1_DBGPAUSE_DBG0_MASK TIMER1_DBGPAUSE_DBG0(ALL1)

/*PAUSE Register macros*/


/*LOCKED Register macros*/


/*SOURCE Register macros*/

#define TIMER1_SOURCE_CLK_SYS(v) (((v)&0x1)<<0)
#define TIMER1_SOURCE_CLK_SYS_MASK TIMER1_SOURCE_CLK_SYS(ALL1)

/*INTR Register macros*/

#define TIMER1_INTR_ALARM_3(v) (((v)&0x1)<<3)
#define TIMER1_INTR_ALARM_3_MASK TIMER1_INTR_ALARM_3(ALL1)
#define TIMER1_INTR_ALARM_2(v) (((v)&0x1)<<2)
#define TIMER1_INTR_ALARM_2_MASK TIMER1_INTR_ALARM_2(ALL1)
#define TIMER1_INTR_ALARM_1(v) (((v)&0x1)<<1)
#define TIMER1_INTR_ALARM_1_MASK TIMER1_INTR_ALARM_1(ALL1)
#define TIMER1_INTR_ALARM_0(v) (((v)&0x1)<<0)
#define TIMER1_INTR_ALARM_0_MASK TIMER1_INTR_ALARM_0(ALL1)

/*INTE Register macros*/

#define TIMER1_INTE_ALARM_3(v) (((v)&0x1)<<3)
#define TIMER1_INTE_ALARM_3_MASK TIMER1_INTE_ALARM_3(ALL1)
#define TIMER1_INTE_ALARM_2(v) (((v)&0x1)<<2)
#define TIMER1_INTE_ALARM_2_MASK TIMER1_INTE_ALARM_2(ALL1)
#define TIMER1_INTE_ALARM_1(v) (((v)&0x1)<<1)
#define TIMER1_INTE_ALARM_1_MASK TIMER1_INTE_ALARM_1(ALL1)
#define TIMER1_INTE_ALARM_0(v) (((v)&0x1)<<0)
#define TIMER1_INTE_ALARM_0_MASK TIMER1_INTE_ALARM_0(ALL1)

/*INTF Register macros*/

#define TIMER1_INTF_ALARM_3(v) (((v)&0x1)<<3)
#define TIMER1_INTF_ALARM_3_MASK TIMER1_INTF_ALARM_3(ALL1)
#define TIMER1_INTF_ALARM_2(v) (((v)&0x1)<<2)
#define TIMER1_INTF_ALARM_2_MASK TIMER1_INTF_ALARM_2(ALL1)
#define TIMER1_INTF_ALARM_1(v) (((v)&0x1)<<1)
#define TIMER1_INTF_ALARM_1_MASK TIMER1_INTF_ALARM_1(ALL1)
#define TIMER1_INTF_ALARM_0(v) (((v)&0x1)<<0)
#define TIMER1_INTF_ALARM_0_MASK TIMER1_INTF_ALARM_0(ALL1)

/*INTS Register macros*/

#define TIMER1_INTS_ALARM_3(v) (((v)&0x1)<<3)
#define TIMER1_INTS_ALARM_3_MASK TIMER1_INTS_ALARM_3(ALL1)
#define TIMER1_INTS_ALARM_2(v) (((v)&0x1)<<2)
#define TIMER1_INTS_ALARM_2_MASK TIMER1_INTS_ALARM_2(ALL1)
#define TIMER1_INTS_ALARM_1(v) (((v)&0x1)<<1)
#define TIMER1_INTS_ALARM_1_MASK TIMER1_INTS_ALARM_1(ALL1)
#define TIMER1_INTS_ALARM_0(v) (((v)&0x1)<<0)
#define TIMER1_INTS_ALARM_0_MASK TIMER1_INTS_ALARM_0(ALL1)

#endif

