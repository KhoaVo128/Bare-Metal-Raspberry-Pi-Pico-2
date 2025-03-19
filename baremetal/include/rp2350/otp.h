
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

#ifndef RP2350_OTP_H
#define RP2350_OTP_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t sw_lock0;
		uint32_t sw_lock1;
		uint32_t sw_lock2;
		uint32_t sw_lock3;
		uint32_t sw_lock4;
		uint32_t sw_lock5;
		uint32_t sw_lock6;
		uint32_t sw_lock7;
		uint32_t sw_lock8;
		uint32_t sw_lock9;
		uint32_t sw_lock10;
		uint32_t sw_lock11;
		uint32_t sw_lock12;
		uint32_t sw_lock13;
		uint32_t sw_lock14;
		uint32_t sw_lock15;
		uint32_t sw_lock16;
		uint32_t sw_lock17;
		uint32_t sw_lock18;
		uint32_t sw_lock19;
		uint32_t sw_lock20;
		uint32_t sw_lock21;
		uint32_t sw_lock22;
		uint32_t sw_lock23;
		uint32_t sw_lock24;
		uint32_t sw_lock25;
		uint32_t sw_lock26;
		uint32_t sw_lock27;
		uint32_t sw_lock28;
		uint32_t sw_lock29;
		uint32_t sw_lock30;
		uint32_t sw_lock31;
		uint32_t sw_lock32;
		uint32_t sw_lock33;
		uint32_t sw_lock34;
		uint32_t sw_lock35;
		uint32_t sw_lock36;
		uint32_t sw_lock37;
		uint32_t sw_lock38;
		uint32_t sw_lock39;
		uint32_t sw_lock40;
		uint32_t sw_lock41;
		uint32_t sw_lock42;
		uint32_t sw_lock43;
		uint32_t sw_lock44;
		uint32_t sw_lock45;
		uint32_t sw_lock46;
		uint32_t sw_lock47;
		uint32_t sw_lock48;
		uint32_t sw_lock49;
		uint32_t sw_lock50;
		uint32_t sw_lock51;
		uint32_t sw_lock52;
		uint32_t sw_lock53;
		uint32_t sw_lock54;
		uint32_t sw_lock55;
		uint32_t sw_lock56;
		uint32_t sw_lock57;
		uint32_t sw_lock58;
		uint32_t sw_lock59;
		uint32_t sw_lock60;
		uint32_t sw_lock61;
		uint32_t sw_lock62;
		uint32_t sw_lock63;
		uint32_t sbpi_instr;
		uint32_t sbpi_wdata_0;
		uint32_t sbpi_wdata_1;
		uint32_t sbpi_wdata_2;
		uint32_t sbpi_wdata_3;
		uint32_t sbpi_rdata_0;
		uint32_t sbpi_rdata_1;
		uint32_t sbpi_rdata_2;
		uint32_t sbpi_rdata_3;
		uint32_t sbpi_status;
		uint32_t usr;
		uint32_t dbg;
		uint32_t RSVD0;
		uint32_t bist;
		uint32_t crt_key_w0;
		uint32_t crt_key_w1;
		uint32_t crt_key_w2;
		uint32_t crt_key_w3;
		uint32_t critical;
		uint32_t key_valid;
		uint32_t debugen;
		uint32_t debugen_lock;
		uint32_t archsel;
		uint32_t archsel_status;
		uint32_t bootdis;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD1[931];
		uint32_t xor_sw_lock0;
		uint32_t xor_sw_lock1;
		uint32_t xor_sw_lock2;
		uint32_t xor_sw_lock3;
		uint32_t xor_sw_lock4;
		uint32_t xor_sw_lock5;
		uint32_t xor_sw_lock6;
		uint32_t xor_sw_lock7;
		uint32_t xor_sw_lock8;
		uint32_t xor_sw_lock9;
		uint32_t xor_sw_lock10;
		uint32_t xor_sw_lock11;
		uint32_t xor_sw_lock12;
		uint32_t xor_sw_lock13;
		uint32_t xor_sw_lock14;
		uint32_t xor_sw_lock15;
		uint32_t xor_sw_lock16;
		uint32_t xor_sw_lock17;
		uint32_t xor_sw_lock18;
		uint32_t xor_sw_lock19;
		uint32_t xor_sw_lock20;
		uint32_t xor_sw_lock21;
		uint32_t xor_sw_lock22;
		uint32_t xor_sw_lock23;
		uint32_t xor_sw_lock24;
		uint32_t xor_sw_lock25;
		uint32_t xor_sw_lock26;
		uint32_t xor_sw_lock27;
		uint32_t xor_sw_lock28;
		uint32_t xor_sw_lock29;
		uint32_t xor_sw_lock30;
		uint32_t xor_sw_lock31;
		uint32_t xor_sw_lock32;
		uint32_t xor_sw_lock33;
		uint32_t xor_sw_lock34;
		uint32_t xor_sw_lock35;
		uint32_t xor_sw_lock36;
		uint32_t xor_sw_lock37;
		uint32_t xor_sw_lock38;
		uint32_t xor_sw_lock39;
		uint32_t xor_sw_lock40;
		uint32_t xor_sw_lock41;
		uint32_t xor_sw_lock42;
		uint32_t xor_sw_lock43;
		uint32_t xor_sw_lock44;
		uint32_t xor_sw_lock45;
		uint32_t xor_sw_lock46;
		uint32_t xor_sw_lock47;
		uint32_t xor_sw_lock48;
		uint32_t xor_sw_lock49;
		uint32_t xor_sw_lock50;
		uint32_t xor_sw_lock51;
		uint32_t xor_sw_lock52;
		uint32_t xor_sw_lock53;
		uint32_t xor_sw_lock54;
		uint32_t xor_sw_lock55;
		uint32_t xor_sw_lock56;
		uint32_t xor_sw_lock57;
		uint32_t xor_sw_lock58;
		uint32_t xor_sw_lock59;
		uint32_t xor_sw_lock60;
		uint32_t xor_sw_lock61;
		uint32_t xor_sw_lock62;
		uint32_t xor_sw_lock63;
		uint32_t xor_sbpi_instr;
		uint32_t xor_sbpi_wdata_0;
		uint32_t xor_sbpi_wdata_1;
		uint32_t xor_sbpi_wdata_2;
		uint32_t xor_sbpi_wdata_3;
		uint32_t xor_sbpi_rdata_0;
		uint32_t xor_sbpi_rdata_1;
		uint32_t xor_sbpi_rdata_2;
		uint32_t xor_sbpi_rdata_3;
		uint32_t xor_sbpi_status;
		uint32_t xor_usr;
		uint32_t xor_dbg;
		uint32_t RSVDxor_0;
		uint32_t xor_bist;
		uint32_t xor_crt_key_w0;
		uint32_t xor_crt_key_w1;
		uint32_t xor_crt_key_w2;
		uint32_t xor_crt_key_w3;
		uint32_t xor_critical;
		uint32_t xor_key_valid;
		uint32_t xor_debugen;
		uint32_t xor_debugen_lock;
		uint32_t xor_archsel;
		uint32_t xor_archsel_status;
		uint32_t xor_bootdis;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_1[931];
		uint32_t set_sw_lock0;
		uint32_t set_sw_lock1;
		uint32_t set_sw_lock2;
		uint32_t set_sw_lock3;
		uint32_t set_sw_lock4;
		uint32_t set_sw_lock5;
		uint32_t set_sw_lock6;
		uint32_t set_sw_lock7;
		uint32_t set_sw_lock8;
		uint32_t set_sw_lock9;
		uint32_t set_sw_lock10;
		uint32_t set_sw_lock11;
		uint32_t set_sw_lock12;
		uint32_t set_sw_lock13;
		uint32_t set_sw_lock14;
		uint32_t set_sw_lock15;
		uint32_t set_sw_lock16;
		uint32_t set_sw_lock17;
		uint32_t set_sw_lock18;
		uint32_t set_sw_lock19;
		uint32_t set_sw_lock20;
		uint32_t set_sw_lock21;
		uint32_t set_sw_lock22;
		uint32_t set_sw_lock23;
		uint32_t set_sw_lock24;
		uint32_t set_sw_lock25;
		uint32_t set_sw_lock26;
		uint32_t set_sw_lock27;
		uint32_t set_sw_lock28;
		uint32_t set_sw_lock29;
		uint32_t set_sw_lock30;
		uint32_t set_sw_lock31;
		uint32_t set_sw_lock32;
		uint32_t set_sw_lock33;
		uint32_t set_sw_lock34;
		uint32_t set_sw_lock35;
		uint32_t set_sw_lock36;
		uint32_t set_sw_lock37;
		uint32_t set_sw_lock38;
		uint32_t set_sw_lock39;
		uint32_t set_sw_lock40;
		uint32_t set_sw_lock41;
		uint32_t set_sw_lock42;
		uint32_t set_sw_lock43;
		uint32_t set_sw_lock44;
		uint32_t set_sw_lock45;
		uint32_t set_sw_lock46;
		uint32_t set_sw_lock47;
		uint32_t set_sw_lock48;
		uint32_t set_sw_lock49;
		uint32_t set_sw_lock50;
		uint32_t set_sw_lock51;
		uint32_t set_sw_lock52;
		uint32_t set_sw_lock53;
		uint32_t set_sw_lock54;
		uint32_t set_sw_lock55;
		uint32_t set_sw_lock56;
		uint32_t set_sw_lock57;
		uint32_t set_sw_lock58;
		uint32_t set_sw_lock59;
		uint32_t set_sw_lock60;
		uint32_t set_sw_lock61;
		uint32_t set_sw_lock62;
		uint32_t set_sw_lock63;
		uint32_t set_sbpi_instr;
		uint32_t set_sbpi_wdata_0;
		uint32_t set_sbpi_wdata_1;
		uint32_t set_sbpi_wdata_2;
		uint32_t set_sbpi_wdata_3;
		uint32_t set_sbpi_rdata_0;
		uint32_t set_sbpi_rdata_1;
		uint32_t set_sbpi_rdata_2;
		uint32_t set_sbpi_rdata_3;
		uint32_t set_sbpi_status;
		uint32_t set_usr;
		uint32_t set_dbg;
		uint32_t RSVDset_0;
		uint32_t set_bist;
		uint32_t set_crt_key_w0;
		uint32_t set_crt_key_w1;
		uint32_t set_crt_key_w2;
		uint32_t set_crt_key_w3;
		uint32_t set_critical;
		uint32_t set_key_valid;
		uint32_t set_debugen;
		uint32_t set_debugen_lock;
		uint32_t set_archsel;
		uint32_t set_archsel_status;
		uint32_t set_bootdis;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_1[931];
		uint32_t clr_sw_lock0;
		uint32_t clr_sw_lock1;
		uint32_t clr_sw_lock2;
		uint32_t clr_sw_lock3;
		uint32_t clr_sw_lock4;
		uint32_t clr_sw_lock5;
		uint32_t clr_sw_lock6;
		uint32_t clr_sw_lock7;
		uint32_t clr_sw_lock8;
		uint32_t clr_sw_lock9;
		uint32_t clr_sw_lock10;
		uint32_t clr_sw_lock11;
		uint32_t clr_sw_lock12;
		uint32_t clr_sw_lock13;
		uint32_t clr_sw_lock14;
		uint32_t clr_sw_lock15;
		uint32_t clr_sw_lock16;
		uint32_t clr_sw_lock17;
		uint32_t clr_sw_lock18;
		uint32_t clr_sw_lock19;
		uint32_t clr_sw_lock20;
		uint32_t clr_sw_lock21;
		uint32_t clr_sw_lock22;
		uint32_t clr_sw_lock23;
		uint32_t clr_sw_lock24;
		uint32_t clr_sw_lock25;
		uint32_t clr_sw_lock26;
		uint32_t clr_sw_lock27;
		uint32_t clr_sw_lock28;
		uint32_t clr_sw_lock29;
		uint32_t clr_sw_lock30;
		uint32_t clr_sw_lock31;
		uint32_t clr_sw_lock32;
		uint32_t clr_sw_lock33;
		uint32_t clr_sw_lock34;
		uint32_t clr_sw_lock35;
		uint32_t clr_sw_lock36;
		uint32_t clr_sw_lock37;
		uint32_t clr_sw_lock38;
		uint32_t clr_sw_lock39;
		uint32_t clr_sw_lock40;
		uint32_t clr_sw_lock41;
		uint32_t clr_sw_lock42;
		uint32_t clr_sw_lock43;
		uint32_t clr_sw_lock44;
		uint32_t clr_sw_lock45;
		uint32_t clr_sw_lock46;
		uint32_t clr_sw_lock47;
		uint32_t clr_sw_lock48;
		uint32_t clr_sw_lock49;
		uint32_t clr_sw_lock50;
		uint32_t clr_sw_lock51;
		uint32_t clr_sw_lock52;
		uint32_t clr_sw_lock53;
		uint32_t clr_sw_lock54;
		uint32_t clr_sw_lock55;
		uint32_t clr_sw_lock56;
		uint32_t clr_sw_lock57;
		uint32_t clr_sw_lock58;
		uint32_t clr_sw_lock59;
		uint32_t clr_sw_lock60;
		uint32_t clr_sw_lock61;
		uint32_t clr_sw_lock62;
		uint32_t clr_sw_lock63;
		uint32_t clr_sbpi_instr;
		uint32_t clr_sbpi_wdata_0;
		uint32_t clr_sbpi_wdata_1;
		uint32_t clr_sbpi_wdata_2;
		uint32_t clr_sbpi_wdata_3;
		uint32_t clr_sbpi_rdata_0;
		uint32_t clr_sbpi_rdata_1;
		uint32_t clr_sbpi_rdata_2;
		uint32_t clr_sbpi_rdata_3;
		uint32_t clr_sbpi_status;
		uint32_t clr_usr;
		uint32_t clr_dbg;
		uint32_t RSVDclr_0;
		uint32_t clr_bist;
		uint32_t clr_crt_key_w0;
		uint32_t clr_crt_key_w1;
		uint32_t clr_crt_key_w2;
		uint32_t clr_crt_key_w3;
		uint32_t clr_critical;
		uint32_t clr_key_valid;
		uint32_t clr_debugen;
		uint32_t clr_debugen_lock;
		uint32_t clr_archsel;
		uint32_t clr_archsel_status;
		uint32_t clr_bootdis;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_1[931];
} OTP_REG_BLOCKS;
typedef struct{
		uint32_t sw_lock0;
		uint32_t sw_lock1;
		uint32_t sw_lock2;
		uint32_t sw_lock3;
		uint32_t sw_lock4;
		uint32_t sw_lock5;
		uint32_t sw_lock6;
		uint32_t sw_lock7;
		uint32_t sw_lock8;
		uint32_t sw_lock9;
		uint32_t sw_lock10;
		uint32_t sw_lock11;
		uint32_t sw_lock12;
		uint32_t sw_lock13;
		uint32_t sw_lock14;
		uint32_t sw_lock15;
		uint32_t sw_lock16;
		uint32_t sw_lock17;
		uint32_t sw_lock18;
		uint32_t sw_lock19;
		uint32_t sw_lock20;
		uint32_t sw_lock21;
		uint32_t sw_lock22;
		uint32_t sw_lock23;
		uint32_t sw_lock24;
		uint32_t sw_lock25;
		uint32_t sw_lock26;
		uint32_t sw_lock27;
		uint32_t sw_lock28;
		uint32_t sw_lock29;
		uint32_t sw_lock30;
		uint32_t sw_lock31;
		uint32_t sw_lock32;
		uint32_t sw_lock33;
		uint32_t sw_lock34;
		uint32_t sw_lock35;
		uint32_t sw_lock36;
		uint32_t sw_lock37;
		uint32_t sw_lock38;
		uint32_t sw_lock39;
		uint32_t sw_lock40;
		uint32_t sw_lock41;
		uint32_t sw_lock42;
		uint32_t sw_lock43;
		uint32_t sw_lock44;
		uint32_t sw_lock45;
		uint32_t sw_lock46;
		uint32_t sw_lock47;
		uint32_t sw_lock48;
		uint32_t sw_lock49;
		uint32_t sw_lock50;
		uint32_t sw_lock51;
		uint32_t sw_lock52;
		uint32_t sw_lock53;
		uint32_t sw_lock54;
		uint32_t sw_lock55;
		uint32_t sw_lock56;
		uint32_t sw_lock57;
		uint32_t sw_lock58;
		uint32_t sw_lock59;
		uint32_t sw_lock60;
		uint32_t sw_lock61;
		uint32_t sw_lock62;
		uint32_t sw_lock63;
		uint32_t sbpi_instr;
		uint32_t sbpi_wdata_0;
		uint32_t sbpi_wdata_1;
		uint32_t sbpi_wdata_2;
		uint32_t sbpi_wdata_3;
		uint32_t sbpi_rdata_0;
		uint32_t sbpi_rdata_1;
		uint32_t sbpi_rdata_2;
		uint32_t sbpi_rdata_3;
		uint32_t sbpi_status;
		uint32_t usr;
		uint32_t dbg;
		uint32_t RSVD0;
		uint32_t bist;
		uint32_t crt_key_w0;
		uint32_t crt_key_w1;
		uint32_t crt_key_w2;
		uint32_t crt_key_w3;
		uint32_t critical;
		uint32_t key_valid;
		uint32_t debugen;
		uint32_t debugen_lock;
		uint32_t archsel;
		uint32_t archsel_status;
		uint32_t bootdis;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD1[931];
		uint32_t xor_sw_lock0;
		uint32_t xor_sw_lock1;
		uint32_t xor_sw_lock2;
		uint32_t xor_sw_lock3;
		uint32_t xor_sw_lock4;
		uint32_t xor_sw_lock5;
		uint32_t xor_sw_lock6;
		uint32_t xor_sw_lock7;
		uint32_t xor_sw_lock8;
		uint32_t xor_sw_lock9;
		uint32_t xor_sw_lock10;
		uint32_t xor_sw_lock11;
		uint32_t xor_sw_lock12;
		uint32_t xor_sw_lock13;
		uint32_t xor_sw_lock14;
		uint32_t xor_sw_lock15;
		uint32_t xor_sw_lock16;
		uint32_t xor_sw_lock17;
		uint32_t xor_sw_lock18;
		uint32_t xor_sw_lock19;
		uint32_t xor_sw_lock20;
		uint32_t xor_sw_lock21;
		uint32_t xor_sw_lock22;
		uint32_t xor_sw_lock23;
		uint32_t xor_sw_lock24;
		uint32_t xor_sw_lock25;
		uint32_t xor_sw_lock26;
		uint32_t xor_sw_lock27;
		uint32_t xor_sw_lock28;
		uint32_t xor_sw_lock29;
		uint32_t xor_sw_lock30;
		uint32_t xor_sw_lock31;
		uint32_t xor_sw_lock32;
		uint32_t xor_sw_lock33;
		uint32_t xor_sw_lock34;
		uint32_t xor_sw_lock35;
		uint32_t xor_sw_lock36;
		uint32_t xor_sw_lock37;
		uint32_t xor_sw_lock38;
		uint32_t xor_sw_lock39;
		uint32_t xor_sw_lock40;
		uint32_t xor_sw_lock41;
		uint32_t xor_sw_lock42;
		uint32_t xor_sw_lock43;
		uint32_t xor_sw_lock44;
		uint32_t xor_sw_lock45;
		uint32_t xor_sw_lock46;
		uint32_t xor_sw_lock47;
		uint32_t xor_sw_lock48;
		uint32_t xor_sw_lock49;
		uint32_t xor_sw_lock50;
		uint32_t xor_sw_lock51;
		uint32_t xor_sw_lock52;
		uint32_t xor_sw_lock53;
		uint32_t xor_sw_lock54;
		uint32_t xor_sw_lock55;
		uint32_t xor_sw_lock56;
		uint32_t xor_sw_lock57;
		uint32_t xor_sw_lock58;
		uint32_t xor_sw_lock59;
		uint32_t xor_sw_lock60;
		uint32_t xor_sw_lock61;
		uint32_t xor_sw_lock62;
		uint32_t xor_sw_lock63;
		uint32_t xor_sbpi_instr;
		uint32_t xor_sbpi_wdata_0;
		uint32_t xor_sbpi_wdata_1;
		uint32_t xor_sbpi_wdata_2;
		uint32_t xor_sbpi_wdata_3;
		uint32_t xor_sbpi_rdata_0;
		uint32_t xor_sbpi_rdata_1;
		uint32_t xor_sbpi_rdata_2;
		uint32_t xor_sbpi_rdata_3;
		uint32_t xor_sbpi_status;
		uint32_t xor_usr;
		uint32_t xor_dbg;
		uint32_t RSVDxor_0;
		uint32_t xor_bist;
		uint32_t xor_crt_key_w0;
		uint32_t xor_crt_key_w1;
		uint32_t xor_crt_key_w2;
		uint32_t xor_crt_key_w3;
		uint32_t xor_critical;
		uint32_t xor_key_valid;
		uint32_t xor_debugen;
		uint32_t xor_debugen_lock;
		uint32_t xor_archsel;
		uint32_t xor_archsel_status;
		uint32_t xor_bootdis;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_1[931];
		uint32_t set_sw_lock0;
		uint32_t set_sw_lock1;
		uint32_t set_sw_lock2;
		uint32_t set_sw_lock3;
		uint32_t set_sw_lock4;
		uint32_t set_sw_lock5;
		uint32_t set_sw_lock6;
		uint32_t set_sw_lock7;
		uint32_t set_sw_lock8;
		uint32_t set_sw_lock9;
		uint32_t set_sw_lock10;
		uint32_t set_sw_lock11;
		uint32_t set_sw_lock12;
		uint32_t set_sw_lock13;
		uint32_t set_sw_lock14;
		uint32_t set_sw_lock15;
		uint32_t set_sw_lock16;
		uint32_t set_sw_lock17;
		uint32_t set_sw_lock18;
		uint32_t set_sw_lock19;
		uint32_t set_sw_lock20;
		uint32_t set_sw_lock21;
		uint32_t set_sw_lock22;
		uint32_t set_sw_lock23;
		uint32_t set_sw_lock24;
		uint32_t set_sw_lock25;
		uint32_t set_sw_lock26;
		uint32_t set_sw_lock27;
		uint32_t set_sw_lock28;
		uint32_t set_sw_lock29;
		uint32_t set_sw_lock30;
		uint32_t set_sw_lock31;
		uint32_t set_sw_lock32;
		uint32_t set_sw_lock33;
		uint32_t set_sw_lock34;
		uint32_t set_sw_lock35;
		uint32_t set_sw_lock36;
		uint32_t set_sw_lock37;
		uint32_t set_sw_lock38;
		uint32_t set_sw_lock39;
		uint32_t set_sw_lock40;
		uint32_t set_sw_lock41;
		uint32_t set_sw_lock42;
		uint32_t set_sw_lock43;
		uint32_t set_sw_lock44;
		uint32_t set_sw_lock45;
		uint32_t set_sw_lock46;
		uint32_t set_sw_lock47;
		uint32_t set_sw_lock48;
		uint32_t set_sw_lock49;
		uint32_t set_sw_lock50;
		uint32_t set_sw_lock51;
		uint32_t set_sw_lock52;
		uint32_t set_sw_lock53;
		uint32_t set_sw_lock54;
		uint32_t set_sw_lock55;
		uint32_t set_sw_lock56;
		uint32_t set_sw_lock57;
		uint32_t set_sw_lock58;
		uint32_t set_sw_lock59;
		uint32_t set_sw_lock60;
		uint32_t set_sw_lock61;
		uint32_t set_sw_lock62;
		uint32_t set_sw_lock63;
		uint32_t set_sbpi_instr;
		uint32_t set_sbpi_wdata_0;
		uint32_t set_sbpi_wdata_1;
		uint32_t set_sbpi_wdata_2;
		uint32_t set_sbpi_wdata_3;
		uint32_t set_sbpi_rdata_0;
		uint32_t set_sbpi_rdata_1;
		uint32_t set_sbpi_rdata_2;
		uint32_t set_sbpi_rdata_3;
		uint32_t set_sbpi_status;
		uint32_t set_usr;
		uint32_t set_dbg;
		uint32_t RSVDset_0;
		uint32_t set_bist;
		uint32_t set_crt_key_w0;
		uint32_t set_crt_key_w1;
		uint32_t set_crt_key_w2;
		uint32_t set_crt_key_w3;
		uint32_t set_critical;
		uint32_t set_key_valid;
		uint32_t set_debugen;
		uint32_t set_debugen_lock;
		uint32_t set_archsel;
		uint32_t set_archsel_status;
		uint32_t set_bootdis;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_1[931];
		uint32_t clr_sw_lock0;
		uint32_t clr_sw_lock1;
		uint32_t clr_sw_lock2;
		uint32_t clr_sw_lock3;
		uint32_t clr_sw_lock4;
		uint32_t clr_sw_lock5;
		uint32_t clr_sw_lock6;
		uint32_t clr_sw_lock7;
		uint32_t clr_sw_lock8;
		uint32_t clr_sw_lock9;
		uint32_t clr_sw_lock10;
		uint32_t clr_sw_lock11;
		uint32_t clr_sw_lock12;
		uint32_t clr_sw_lock13;
		uint32_t clr_sw_lock14;
		uint32_t clr_sw_lock15;
		uint32_t clr_sw_lock16;
		uint32_t clr_sw_lock17;
		uint32_t clr_sw_lock18;
		uint32_t clr_sw_lock19;
		uint32_t clr_sw_lock20;
		uint32_t clr_sw_lock21;
		uint32_t clr_sw_lock22;
		uint32_t clr_sw_lock23;
		uint32_t clr_sw_lock24;
		uint32_t clr_sw_lock25;
		uint32_t clr_sw_lock26;
		uint32_t clr_sw_lock27;
		uint32_t clr_sw_lock28;
		uint32_t clr_sw_lock29;
		uint32_t clr_sw_lock30;
		uint32_t clr_sw_lock31;
		uint32_t clr_sw_lock32;
		uint32_t clr_sw_lock33;
		uint32_t clr_sw_lock34;
		uint32_t clr_sw_lock35;
		uint32_t clr_sw_lock36;
		uint32_t clr_sw_lock37;
		uint32_t clr_sw_lock38;
		uint32_t clr_sw_lock39;
		uint32_t clr_sw_lock40;
		uint32_t clr_sw_lock41;
		uint32_t clr_sw_lock42;
		uint32_t clr_sw_lock43;
		uint32_t clr_sw_lock44;
		uint32_t clr_sw_lock45;
		uint32_t clr_sw_lock46;
		uint32_t clr_sw_lock47;
		uint32_t clr_sw_lock48;
		uint32_t clr_sw_lock49;
		uint32_t clr_sw_lock50;
		uint32_t clr_sw_lock51;
		uint32_t clr_sw_lock52;
		uint32_t clr_sw_lock53;
		uint32_t clr_sw_lock54;
		uint32_t clr_sw_lock55;
		uint32_t clr_sw_lock56;
		uint32_t clr_sw_lock57;
		uint32_t clr_sw_lock58;
		uint32_t clr_sw_lock59;
		uint32_t clr_sw_lock60;
		uint32_t clr_sw_lock61;
		uint32_t clr_sw_lock62;
		uint32_t clr_sw_lock63;
		uint32_t clr_sbpi_instr;
		uint32_t clr_sbpi_wdata_0;
		uint32_t clr_sbpi_wdata_1;
		uint32_t clr_sbpi_wdata_2;
		uint32_t clr_sbpi_wdata_3;
		uint32_t clr_sbpi_rdata_0;
		uint32_t clr_sbpi_rdata_1;
		uint32_t clr_sbpi_rdata_2;
		uint32_t clr_sbpi_rdata_3;
		uint32_t clr_sbpi_status;
		uint32_t clr_usr;
		uint32_t clr_dbg;
		uint32_t RSVDclr_0;
		uint32_t clr_bist;
		uint32_t clr_crt_key_w0;
		uint32_t clr_crt_key_w1;
		uint32_t clr_crt_key_w2;
		uint32_t clr_crt_key_w3;
		uint32_t clr_critical;
		uint32_t clr_key_valid;
		uint32_t clr_debugen;
		uint32_t clr_debugen_lock;
		uint32_t clr_archsel;
		uint32_t clr_archsel_status;
		uint32_t clr_bootdis;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_1[931];
} OTP_DATA_REG_BLOCKS;
typedef struct{
		uint32_t sw_lock0;
		uint32_t sw_lock1;
		uint32_t sw_lock2;
		uint32_t sw_lock3;
		uint32_t sw_lock4;
		uint32_t sw_lock5;
		uint32_t sw_lock6;
		uint32_t sw_lock7;
		uint32_t sw_lock8;
		uint32_t sw_lock9;
		uint32_t sw_lock10;
		uint32_t sw_lock11;
		uint32_t sw_lock12;
		uint32_t sw_lock13;
		uint32_t sw_lock14;
		uint32_t sw_lock15;
		uint32_t sw_lock16;
		uint32_t sw_lock17;
		uint32_t sw_lock18;
		uint32_t sw_lock19;
		uint32_t sw_lock20;
		uint32_t sw_lock21;
		uint32_t sw_lock22;
		uint32_t sw_lock23;
		uint32_t sw_lock24;
		uint32_t sw_lock25;
		uint32_t sw_lock26;
		uint32_t sw_lock27;
		uint32_t sw_lock28;
		uint32_t sw_lock29;
		uint32_t sw_lock30;
		uint32_t sw_lock31;
		uint32_t sw_lock32;
		uint32_t sw_lock33;
		uint32_t sw_lock34;
		uint32_t sw_lock35;
		uint32_t sw_lock36;
		uint32_t sw_lock37;
		uint32_t sw_lock38;
		uint32_t sw_lock39;
		uint32_t sw_lock40;
		uint32_t sw_lock41;
		uint32_t sw_lock42;
		uint32_t sw_lock43;
		uint32_t sw_lock44;
		uint32_t sw_lock45;
		uint32_t sw_lock46;
		uint32_t sw_lock47;
		uint32_t sw_lock48;
		uint32_t sw_lock49;
		uint32_t sw_lock50;
		uint32_t sw_lock51;
		uint32_t sw_lock52;
		uint32_t sw_lock53;
		uint32_t sw_lock54;
		uint32_t sw_lock55;
		uint32_t sw_lock56;
		uint32_t sw_lock57;
		uint32_t sw_lock58;
		uint32_t sw_lock59;
		uint32_t sw_lock60;
		uint32_t sw_lock61;
		uint32_t sw_lock62;
		uint32_t sw_lock63;
		uint32_t sbpi_instr;
		uint32_t sbpi_wdata_0;
		uint32_t sbpi_wdata_1;
		uint32_t sbpi_wdata_2;
		uint32_t sbpi_wdata_3;
		uint32_t sbpi_rdata_0;
		uint32_t sbpi_rdata_1;
		uint32_t sbpi_rdata_2;
		uint32_t sbpi_rdata_3;
		uint32_t sbpi_status;
		uint32_t usr;
		uint32_t dbg;
		uint32_t RSVD0;
		uint32_t bist;
		uint32_t crt_key_w0;
		uint32_t crt_key_w1;
		uint32_t crt_key_w2;
		uint32_t crt_key_w3;
		uint32_t critical;
		uint32_t key_valid;
		uint32_t debugen;
		uint32_t debugen_lock;
		uint32_t archsel;
		uint32_t archsel_status;
		uint32_t bootdis;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD1[931];
		uint32_t xor_sw_lock0;
		uint32_t xor_sw_lock1;
		uint32_t xor_sw_lock2;
		uint32_t xor_sw_lock3;
		uint32_t xor_sw_lock4;
		uint32_t xor_sw_lock5;
		uint32_t xor_sw_lock6;
		uint32_t xor_sw_lock7;
		uint32_t xor_sw_lock8;
		uint32_t xor_sw_lock9;
		uint32_t xor_sw_lock10;
		uint32_t xor_sw_lock11;
		uint32_t xor_sw_lock12;
		uint32_t xor_sw_lock13;
		uint32_t xor_sw_lock14;
		uint32_t xor_sw_lock15;
		uint32_t xor_sw_lock16;
		uint32_t xor_sw_lock17;
		uint32_t xor_sw_lock18;
		uint32_t xor_sw_lock19;
		uint32_t xor_sw_lock20;
		uint32_t xor_sw_lock21;
		uint32_t xor_sw_lock22;
		uint32_t xor_sw_lock23;
		uint32_t xor_sw_lock24;
		uint32_t xor_sw_lock25;
		uint32_t xor_sw_lock26;
		uint32_t xor_sw_lock27;
		uint32_t xor_sw_lock28;
		uint32_t xor_sw_lock29;
		uint32_t xor_sw_lock30;
		uint32_t xor_sw_lock31;
		uint32_t xor_sw_lock32;
		uint32_t xor_sw_lock33;
		uint32_t xor_sw_lock34;
		uint32_t xor_sw_lock35;
		uint32_t xor_sw_lock36;
		uint32_t xor_sw_lock37;
		uint32_t xor_sw_lock38;
		uint32_t xor_sw_lock39;
		uint32_t xor_sw_lock40;
		uint32_t xor_sw_lock41;
		uint32_t xor_sw_lock42;
		uint32_t xor_sw_lock43;
		uint32_t xor_sw_lock44;
		uint32_t xor_sw_lock45;
		uint32_t xor_sw_lock46;
		uint32_t xor_sw_lock47;
		uint32_t xor_sw_lock48;
		uint32_t xor_sw_lock49;
		uint32_t xor_sw_lock50;
		uint32_t xor_sw_lock51;
		uint32_t xor_sw_lock52;
		uint32_t xor_sw_lock53;
		uint32_t xor_sw_lock54;
		uint32_t xor_sw_lock55;
		uint32_t xor_sw_lock56;
		uint32_t xor_sw_lock57;
		uint32_t xor_sw_lock58;
		uint32_t xor_sw_lock59;
		uint32_t xor_sw_lock60;
		uint32_t xor_sw_lock61;
		uint32_t xor_sw_lock62;
		uint32_t xor_sw_lock63;
		uint32_t xor_sbpi_instr;
		uint32_t xor_sbpi_wdata_0;
		uint32_t xor_sbpi_wdata_1;
		uint32_t xor_sbpi_wdata_2;
		uint32_t xor_sbpi_wdata_3;
		uint32_t xor_sbpi_rdata_0;
		uint32_t xor_sbpi_rdata_1;
		uint32_t xor_sbpi_rdata_2;
		uint32_t xor_sbpi_rdata_3;
		uint32_t xor_sbpi_status;
		uint32_t xor_usr;
		uint32_t xor_dbg;
		uint32_t RSVDxor_0;
		uint32_t xor_bist;
		uint32_t xor_crt_key_w0;
		uint32_t xor_crt_key_w1;
		uint32_t xor_crt_key_w2;
		uint32_t xor_crt_key_w3;
		uint32_t xor_critical;
		uint32_t xor_key_valid;
		uint32_t xor_debugen;
		uint32_t xor_debugen_lock;
		uint32_t xor_archsel;
		uint32_t xor_archsel_status;
		uint32_t xor_bootdis;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_1[931];
		uint32_t set_sw_lock0;
		uint32_t set_sw_lock1;
		uint32_t set_sw_lock2;
		uint32_t set_sw_lock3;
		uint32_t set_sw_lock4;
		uint32_t set_sw_lock5;
		uint32_t set_sw_lock6;
		uint32_t set_sw_lock7;
		uint32_t set_sw_lock8;
		uint32_t set_sw_lock9;
		uint32_t set_sw_lock10;
		uint32_t set_sw_lock11;
		uint32_t set_sw_lock12;
		uint32_t set_sw_lock13;
		uint32_t set_sw_lock14;
		uint32_t set_sw_lock15;
		uint32_t set_sw_lock16;
		uint32_t set_sw_lock17;
		uint32_t set_sw_lock18;
		uint32_t set_sw_lock19;
		uint32_t set_sw_lock20;
		uint32_t set_sw_lock21;
		uint32_t set_sw_lock22;
		uint32_t set_sw_lock23;
		uint32_t set_sw_lock24;
		uint32_t set_sw_lock25;
		uint32_t set_sw_lock26;
		uint32_t set_sw_lock27;
		uint32_t set_sw_lock28;
		uint32_t set_sw_lock29;
		uint32_t set_sw_lock30;
		uint32_t set_sw_lock31;
		uint32_t set_sw_lock32;
		uint32_t set_sw_lock33;
		uint32_t set_sw_lock34;
		uint32_t set_sw_lock35;
		uint32_t set_sw_lock36;
		uint32_t set_sw_lock37;
		uint32_t set_sw_lock38;
		uint32_t set_sw_lock39;
		uint32_t set_sw_lock40;
		uint32_t set_sw_lock41;
		uint32_t set_sw_lock42;
		uint32_t set_sw_lock43;
		uint32_t set_sw_lock44;
		uint32_t set_sw_lock45;
		uint32_t set_sw_lock46;
		uint32_t set_sw_lock47;
		uint32_t set_sw_lock48;
		uint32_t set_sw_lock49;
		uint32_t set_sw_lock50;
		uint32_t set_sw_lock51;
		uint32_t set_sw_lock52;
		uint32_t set_sw_lock53;
		uint32_t set_sw_lock54;
		uint32_t set_sw_lock55;
		uint32_t set_sw_lock56;
		uint32_t set_sw_lock57;
		uint32_t set_sw_lock58;
		uint32_t set_sw_lock59;
		uint32_t set_sw_lock60;
		uint32_t set_sw_lock61;
		uint32_t set_sw_lock62;
		uint32_t set_sw_lock63;
		uint32_t set_sbpi_instr;
		uint32_t set_sbpi_wdata_0;
		uint32_t set_sbpi_wdata_1;
		uint32_t set_sbpi_wdata_2;
		uint32_t set_sbpi_wdata_3;
		uint32_t set_sbpi_rdata_0;
		uint32_t set_sbpi_rdata_1;
		uint32_t set_sbpi_rdata_2;
		uint32_t set_sbpi_rdata_3;
		uint32_t set_sbpi_status;
		uint32_t set_usr;
		uint32_t set_dbg;
		uint32_t RSVDset_0;
		uint32_t set_bist;
		uint32_t set_crt_key_w0;
		uint32_t set_crt_key_w1;
		uint32_t set_crt_key_w2;
		uint32_t set_crt_key_w3;
		uint32_t set_critical;
		uint32_t set_key_valid;
		uint32_t set_debugen;
		uint32_t set_debugen_lock;
		uint32_t set_archsel;
		uint32_t set_archsel_status;
		uint32_t set_bootdis;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_1[931];
		uint32_t clr_sw_lock0;
		uint32_t clr_sw_lock1;
		uint32_t clr_sw_lock2;
		uint32_t clr_sw_lock3;
		uint32_t clr_sw_lock4;
		uint32_t clr_sw_lock5;
		uint32_t clr_sw_lock6;
		uint32_t clr_sw_lock7;
		uint32_t clr_sw_lock8;
		uint32_t clr_sw_lock9;
		uint32_t clr_sw_lock10;
		uint32_t clr_sw_lock11;
		uint32_t clr_sw_lock12;
		uint32_t clr_sw_lock13;
		uint32_t clr_sw_lock14;
		uint32_t clr_sw_lock15;
		uint32_t clr_sw_lock16;
		uint32_t clr_sw_lock17;
		uint32_t clr_sw_lock18;
		uint32_t clr_sw_lock19;
		uint32_t clr_sw_lock20;
		uint32_t clr_sw_lock21;
		uint32_t clr_sw_lock22;
		uint32_t clr_sw_lock23;
		uint32_t clr_sw_lock24;
		uint32_t clr_sw_lock25;
		uint32_t clr_sw_lock26;
		uint32_t clr_sw_lock27;
		uint32_t clr_sw_lock28;
		uint32_t clr_sw_lock29;
		uint32_t clr_sw_lock30;
		uint32_t clr_sw_lock31;
		uint32_t clr_sw_lock32;
		uint32_t clr_sw_lock33;
		uint32_t clr_sw_lock34;
		uint32_t clr_sw_lock35;
		uint32_t clr_sw_lock36;
		uint32_t clr_sw_lock37;
		uint32_t clr_sw_lock38;
		uint32_t clr_sw_lock39;
		uint32_t clr_sw_lock40;
		uint32_t clr_sw_lock41;
		uint32_t clr_sw_lock42;
		uint32_t clr_sw_lock43;
		uint32_t clr_sw_lock44;
		uint32_t clr_sw_lock45;
		uint32_t clr_sw_lock46;
		uint32_t clr_sw_lock47;
		uint32_t clr_sw_lock48;
		uint32_t clr_sw_lock49;
		uint32_t clr_sw_lock50;
		uint32_t clr_sw_lock51;
		uint32_t clr_sw_lock52;
		uint32_t clr_sw_lock53;
		uint32_t clr_sw_lock54;
		uint32_t clr_sw_lock55;
		uint32_t clr_sw_lock56;
		uint32_t clr_sw_lock57;
		uint32_t clr_sw_lock58;
		uint32_t clr_sw_lock59;
		uint32_t clr_sw_lock60;
		uint32_t clr_sw_lock61;
		uint32_t clr_sw_lock62;
		uint32_t clr_sw_lock63;
		uint32_t clr_sbpi_instr;
		uint32_t clr_sbpi_wdata_0;
		uint32_t clr_sbpi_wdata_1;
		uint32_t clr_sbpi_wdata_2;
		uint32_t clr_sbpi_wdata_3;
		uint32_t clr_sbpi_rdata_0;
		uint32_t clr_sbpi_rdata_1;
		uint32_t clr_sbpi_rdata_2;
		uint32_t clr_sbpi_rdata_3;
		uint32_t clr_sbpi_status;
		uint32_t clr_usr;
		uint32_t clr_dbg;
		uint32_t RSVDclr_0;
		uint32_t clr_bist;
		uint32_t clr_crt_key_w0;
		uint32_t clr_crt_key_w1;
		uint32_t clr_crt_key_w2;
		uint32_t clr_crt_key_w3;
		uint32_t clr_critical;
		uint32_t clr_key_valid;
		uint32_t clr_debugen;
		uint32_t clr_debugen_lock;
		uint32_t clr_archsel;
		uint32_t clr_archsel_status;
		uint32_t clr_bootdis;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_1[931];
} OTP_DATA_RAW_REG_BLOCKS;
typedef struct{
		uint32_t sw_lock0;
		uint32_t sw_lock1;
		uint32_t sw_lock2;
		uint32_t sw_lock3;
		uint32_t sw_lock4;
		uint32_t sw_lock5;
		uint32_t sw_lock6;
		uint32_t sw_lock7;
		uint32_t sw_lock8;
		uint32_t sw_lock9;
		uint32_t sw_lock10;
		uint32_t sw_lock11;
		uint32_t sw_lock12;
		uint32_t sw_lock13;
		uint32_t sw_lock14;
		uint32_t sw_lock15;
		uint32_t sw_lock16;
		uint32_t sw_lock17;
		uint32_t sw_lock18;
		uint32_t sw_lock19;
		uint32_t sw_lock20;
		uint32_t sw_lock21;
		uint32_t sw_lock22;
		uint32_t sw_lock23;
		uint32_t sw_lock24;
		uint32_t sw_lock25;
		uint32_t sw_lock26;
		uint32_t sw_lock27;
		uint32_t sw_lock28;
		uint32_t sw_lock29;
		uint32_t sw_lock30;
		uint32_t sw_lock31;
		uint32_t sw_lock32;
		uint32_t sw_lock33;
		uint32_t sw_lock34;
		uint32_t sw_lock35;
		uint32_t sw_lock36;
		uint32_t sw_lock37;
		uint32_t sw_lock38;
		uint32_t sw_lock39;
		uint32_t sw_lock40;
		uint32_t sw_lock41;
		uint32_t sw_lock42;
		uint32_t sw_lock43;
		uint32_t sw_lock44;
		uint32_t sw_lock45;
		uint32_t sw_lock46;
		uint32_t sw_lock47;
		uint32_t sw_lock48;
		uint32_t sw_lock49;
		uint32_t sw_lock50;
		uint32_t sw_lock51;
		uint32_t sw_lock52;
		uint32_t sw_lock53;
		uint32_t sw_lock54;
		uint32_t sw_lock55;
		uint32_t sw_lock56;
		uint32_t sw_lock57;
		uint32_t sw_lock58;
		uint32_t sw_lock59;
		uint32_t sw_lock60;
		uint32_t sw_lock61;
		uint32_t sw_lock62;
		uint32_t sw_lock63;
		uint32_t sbpi_instr;
		uint32_t sbpi_wdata_0;
		uint32_t sbpi_wdata_1;
		uint32_t sbpi_wdata_2;
		uint32_t sbpi_wdata_3;
		uint32_t sbpi_rdata_0;
		uint32_t sbpi_rdata_1;
		uint32_t sbpi_rdata_2;
		uint32_t sbpi_rdata_3;
		uint32_t sbpi_status;
		uint32_t usr;
		uint32_t dbg;
		uint32_t RSVD0;
		uint32_t bist;
		uint32_t crt_key_w0;
		uint32_t crt_key_w1;
		uint32_t crt_key_w2;
		uint32_t crt_key_w3;
		uint32_t critical;
		uint32_t key_valid;
		uint32_t debugen;
		uint32_t debugen_lock;
		uint32_t archsel;
		uint32_t archsel_status;
		uint32_t bootdis;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD1[931];
		uint32_t xor_sw_lock0;
		uint32_t xor_sw_lock1;
		uint32_t xor_sw_lock2;
		uint32_t xor_sw_lock3;
		uint32_t xor_sw_lock4;
		uint32_t xor_sw_lock5;
		uint32_t xor_sw_lock6;
		uint32_t xor_sw_lock7;
		uint32_t xor_sw_lock8;
		uint32_t xor_sw_lock9;
		uint32_t xor_sw_lock10;
		uint32_t xor_sw_lock11;
		uint32_t xor_sw_lock12;
		uint32_t xor_sw_lock13;
		uint32_t xor_sw_lock14;
		uint32_t xor_sw_lock15;
		uint32_t xor_sw_lock16;
		uint32_t xor_sw_lock17;
		uint32_t xor_sw_lock18;
		uint32_t xor_sw_lock19;
		uint32_t xor_sw_lock20;
		uint32_t xor_sw_lock21;
		uint32_t xor_sw_lock22;
		uint32_t xor_sw_lock23;
		uint32_t xor_sw_lock24;
		uint32_t xor_sw_lock25;
		uint32_t xor_sw_lock26;
		uint32_t xor_sw_lock27;
		uint32_t xor_sw_lock28;
		uint32_t xor_sw_lock29;
		uint32_t xor_sw_lock30;
		uint32_t xor_sw_lock31;
		uint32_t xor_sw_lock32;
		uint32_t xor_sw_lock33;
		uint32_t xor_sw_lock34;
		uint32_t xor_sw_lock35;
		uint32_t xor_sw_lock36;
		uint32_t xor_sw_lock37;
		uint32_t xor_sw_lock38;
		uint32_t xor_sw_lock39;
		uint32_t xor_sw_lock40;
		uint32_t xor_sw_lock41;
		uint32_t xor_sw_lock42;
		uint32_t xor_sw_lock43;
		uint32_t xor_sw_lock44;
		uint32_t xor_sw_lock45;
		uint32_t xor_sw_lock46;
		uint32_t xor_sw_lock47;
		uint32_t xor_sw_lock48;
		uint32_t xor_sw_lock49;
		uint32_t xor_sw_lock50;
		uint32_t xor_sw_lock51;
		uint32_t xor_sw_lock52;
		uint32_t xor_sw_lock53;
		uint32_t xor_sw_lock54;
		uint32_t xor_sw_lock55;
		uint32_t xor_sw_lock56;
		uint32_t xor_sw_lock57;
		uint32_t xor_sw_lock58;
		uint32_t xor_sw_lock59;
		uint32_t xor_sw_lock60;
		uint32_t xor_sw_lock61;
		uint32_t xor_sw_lock62;
		uint32_t xor_sw_lock63;
		uint32_t xor_sbpi_instr;
		uint32_t xor_sbpi_wdata_0;
		uint32_t xor_sbpi_wdata_1;
		uint32_t xor_sbpi_wdata_2;
		uint32_t xor_sbpi_wdata_3;
		uint32_t xor_sbpi_rdata_0;
		uint32_t xor_sbpi_rdata_1;
		uint32_t xor_sbpi_rdata_2;
		uint32_t xor_sbpi_rdata_3;
		uint32_t xor_sbpi_status;
		uint32_t xor_usr;
		uint32_t xor_dbg;
		uint32_t RSVDxor_0;
		uint32_t xor_bist;
		uint32_t xor_crt_key_w0;
		uint32_t xor_crt_key_w1;
		uint32_t xor_crt_key_w2;
		uint32_t xor_crt_key_w3;
		uint32_t xor_critical;
		uint32_t xor_key_valid;
		uint32_t xor_debugen;
		uint32_t xor_debugen_lock;
		uint32_t xor_archsel;
		uint32_t xor_archsel_status;
		uint32_t xor_bootdis;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_1[931];
		uint32_t set_sw_lock0;
		uint32_t set_sw_lock1;
		uint32_t set_sw_lock2;
		uint32_t set_sw_lock3;
		uint32_t set_sw_lock4;
		uint32_t set_sw_lock5;
		uint32_t set_sw_lock6;
		uint32_t set_sw_lock7;
		uint32_t set_sw_lock8;
		uint32_t set_sw_lock9;
		uint32_t set_sw_lock10;
		uint32_t set_sw_lock11;
		uint32_t set_sw_lock12;
		uint32_t set_sw_lock13;
		uint32_t set_sw_lock14;
		uint32_t set_sw_lock15;
		uint32_t set_sw_lock16;
		uint32_t set_sw_lock17;
		uint32_t set_sw_lock18;
		uint32_t set_sw_lock19;
		uint32_t set_sw_lock20;
		uint32_t set_sw_lock21;
		uint32_t set_sw_lock22;
		uint32_t set_sw_lock23;
		uint32_t set_sw_lock24;
		uint32_t set_sw_lock25;
		uint32_t set_sw_lock26;
		uint32_t set_sw_lock27;
		uint32_t set_sw_lock28;
		uint32_t set_sw_lock29;
		uint32_t set_sw_lock30;
		uint32_t set_sw_lock31;
		uint32_t set_sw_lock32;
		uint32_t set_sw_lock33;
		uint32_t set_sw_lock34;
		uint32_t set_sw_lock35;
		uint32_t set_sw_lock36;
		uint32_t set_sw_lock37;
		uint32_t set_sw_lock38;
		uint32_t set_sw_lock39;
		uint32_t set_sw_lock40;
		uint32_t set_sw_lock41;
		uint32_t set_sw_lock42;
		uint32_t set_sw_lock43;
		uint32_t set_sw_lock44;
		uint32_t set_sw_lock45;
		uint32_t set_sw_lock46;
		uint32_t set_sw_lock47;
		uint32_t set_sw_lock48;
		uint32_t set_sw_lock49;
		uint32_t set_sw_lock50;
		uint32_t set_sw_lock51;
		uint32_t set_sw_lock52;
		uint32_t set_sw_lock53;
		uint32_t set_sw_lock54;
		uint32_t set_sw_lock55;
		uint32_t set_sw_lock56;
		uint32_t set_sw_lock57;
		uint32_t set_sw_lock58;
		uint32_t set_sw_lock59;
		uint32_t set_sw_lock60;
		uint32_t set_sw_lock61;
		uint32_t set_sw_lock62;
		uint32_t set_sw_lock63;
		uint32_t set_sbpi_instr;
		uint32_t set_sbpi_wdata_0;
		uint32_t set_sbpi_wdata_1;
		uint32_t set_sbpi_wdata_2;
		uint32_t set_sbpi_wdata_3;
		uint32_t set_sbpi_rdata_0;
		uint32_t set_sbpi_rdata_1;
		uint32_t set_sbpi_rdata_2;
		uint32_t set_sbpi_rdata_3;
		uint32_t set_sbpi_status;
		uint32_t set_usr;
		uint32_t set_dbg;
		uint32_t RSVDset_0;
		uint32_t set_bist;
		uint32_t set_crt_key_w0;
		uint32_t set_crt_key_w1;
		uint32_t set_crt_key_w2;
		uint32_t set_crt_key_w3;
		uint32_t set_critical;
		uint32_t set_key_valid;
		uint32_t set_debugen;
		uint32_t set_debugen_lock;
		uint32_t set_archsel;
		uint32_t set_archsel_status;
		uint32_t set_bootdis;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_1[931];
		uint32_t clr_sw_lock0;
		uint32_t clr_sw_lock1;
		uint32_t clr_sw_lock2;
		uint32_t clr_sw_lock3;
		uint32_t clr_sw_lock4;
		uint32_t clr_sw_lock5;
		uint32_t clr_sw_lock6;
		uint32_t clr_sw_lock7;
		uint32_t clr_sw_lock8;
		uint32_t clr_sw_lock9;
		uint32_t clr_sw_lock10;
		uint32_t clr_sw_lock11;
		uint32_t clr_sw_lock12;
		uint32_t clr_sw_lock13;
		uint32_t clr_sw_lock14;
		uint32_t clr_sw_lock15;
		uint32_t clr_sw_lock16;
		uint32_t clr_sw_lock17;
		uint32_t clr_sw_lock18;
		uint32_t clr_sw_lock19;
		uint32_t clr_sw_lock20;
		uint32_t clr_sw_lock21;
		uint32_t clr_sw_lock22;
		uint32_t clr_sw_lock23;
		uint32_t clr_sw_lock24;
		uint32_t clr_sw_lock25;
		uint32_t clr_sw_lock26;
		uint32_t clr_sw_lock27;
		uint32_t clr_sw_lock28;
		uint32_t clr_sw_lock29;
		uint32_t clr_sw_lock30;
		uint32_t clr_sw_lock31;
		uint32_t clr_sw_lock32;
		uint32_t clr_sw_lock33;
		uint32_t clr_sw_lock34;
		uint32_t clr_sw_lock35;
		uint32_t clr_sw_lock36;
		uint32_t clr_sw_lock37;
		uint32_t clr_sw_lock38;
		uint32_t clr_sw_lock39;
		uint32_t clr_sw_lock40;
		uint32_t clr_sw_lock41;
		uint32_t clr_sw_lock42;
		uint32_t clr_sw_lock43;
		uint32_t clr_sw_lock44;
		uint32_t clr_sw_lock45;
		uint32_t clr_sw_lock46;
		uint32_t clr_sw_lock47;
		uint32_t clr_sw_lock48;
		uint32_t clr_sw_lock49;
		uint32_t clr_sw_lock50;
		uint32_t clr_sw_lock51;
		uint32_t clr_sw_lock52;
		uint32_t clr_sw_lock53;
		uint32_t clr_sw_lock54;
		uint32_t clr_sw_lock55;
		uint32_t clr_sw_lock56;
		uint32_t clr_sw_lock57;
		uint32_t clr_sw_lock58;
		uint32_t clr_sw_lock59;
		uint32_t clr_sw_lock60;
		uint32_t clr_sw_lock61;
		uint32_t clr_sw_lock62;
		uint32_t clr_sw_lock63;
		uint32_t clr_sbpi_instr;
		uint32_t clr_sbpi_wdata_0;
		uint32_t clr_sbpi_wdata_1;
		uint32_t clr_sbpi_wdata_2;
		uint32_t clr_sbpi_wdata_3;
		uint32_t clr_sbpi_rdata_0;
		uint32_t clr_sbpi_rdata_1;
		uint32_t clr_sbpi_rdata_2;
		uint32_t clr_sbpi_rdata_3;
		uint32_t clr_sbpi_status;
		uint32_t clr_usr;
		uint32_t clr_dbg;
		uint32_t RSVDclr_0;
		uint32_t clr_bist;
		uint32_t clr_crt_key_w0;
		uint32_t clr_crt_key_w1;
		uint32_t clr_crt_key_w2;
		uint32_t clr_crt_key_w3;
		uint32_t clr_critical;
		uint32_t clr_key_valid;
		uint32_t clr_debugen;
		uint32_t clr_debugen_lock;
		uint32_t clr_archsel;
		uint32_t clr_archsel_status;
		uint32_t clr_bootdis;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_1[931];
} OTP_DATA_GUARDED_REG_BLOCKS;
typedef struct{
		uint32_t sw_lock0;
		uint32_t sw_lock1;
		uint32_t sw_lock2;
		uint32_t sw_lock3;
		uint32_t sw_lock4;
		uint32_t sw_lock5;
		uint32_t sw_lock6;
		uint32_t sw_lock7;
		uint32_t sw_lock8;
		uint32_t sw_lock9;
		uint32_t sw_lock10;
		uint32_t sw_lock11;
		uint32_t sw_lock12;
		uint32_t sw_lock13;
		uint32_t sw_lock14;
		uint32_t sw_lock15;
		uint32_t sw_lock16;
		uint32_t sw_lock17;
		uint32_t sw_lock18;
		uint32_t sw_lock19;
		uint32_t sw_lock20;
		uint32_t sw_lock21;
		uint32_t sw_lock22;
		uint32_t sw_lock23;
		uint32_t sw_lock24;
		uint32_t sw_lock25;
		uint32_t sw_lock26;
		uint32_t sw_lock27;
		uint32_t sw_lock28;
		uint32_t sw_lock29;
		uint32_t sw_lock30;
		uint32_t sw_lock31;
		uint32_t sw_lock32;
		uint32_t sw_lock33;
		uint32_t sw_lock34;
		uint32_t sw_lock35;
		uint32_t sw_lock36;
		uint32_t sw_lock37;
		uint32_t sw_lock38;
		uint32_t sw_lock39;
		uint32_t sw_lock40;
		uint32_t sw_lock41;
		uint32_t sw_lock42;
		uint32_t sw_lock43;
		uint32_t sw_lock44;
		uint32_t sw_lock45;
		uint32_t sw_lock46;
		uint32_t sw_lock47;
		uint32_t sw_lock48;
		uint32_t sw_lock49;
		uint32_t sw_lock50;
		uint32_t sw_lock51;
		uint32_t sw_lock52;
		uint32_t sw_lock53;
		uint32_t sw_lock54;
		uint32_t sw_lock55;
		uint32_t sw_lock56;
		uint32_t sw_lock57;
		uint32_t sw_lock58;
		uint32_t sw_lock59;
		uint32_t sw_lock60;
		uint32_t sw_lock61;
		uint32_t sw_lock62;
		uint32_t sw_lock63;
		uint32_t sbpi_instr;
		uint32_t sbpi_wdata_0;
		uint32_t sbpi_wdata_1;
		uint32_t sbpi_wdata_2;
		uint32_t sbpi_wdata_3;
		uint32_t sbpi_rdata_0;
		uint32_t sbpi_rdata_1;
		uint32_t sbpi_rdata_2;
		uint32_t sbpi_rdata_3;
		uint32_t sbpi_status;
		uint32_t usr;
		uint32_t dbg;
		uint32_t RSVD0;
		uint32_t bist;
		uint32_t crt_key_w0;
		uint32_t crt_key_w1;
		uint32_t crt_key_w2;
		uint32_t crt_key_w3;
		uint32_t critical;
		uint32_t key_valid;
		uint32_t debugen;
		uint32_t debugen_lock;
		uint32_t archsel;
		uint32_t archsel_status;
		uint32_t bootdis;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD1[931];
		uint32_t xor_sw_lock0;
		uint32_t xor_sw_lock1;
		uint32_t xor_sw_lock2;
		uint32_t xor_sw_lock3;
		uint32_t xor_sw_lock4;
		uint32_t xor_sw_lock5;
		uint32_t xor_sw_lock6;
		uint32_t xor_sw_lock7;
		uint32_t xor_sw_lock8;
		uint32_t xor_sw_lock9;
		uint32_t xor_sw_lock10;
		uint32_t xor_sw_lock11;
		uint32_t xor_sw_lock12;
		uint32_t xor_sw_lock13;
		uint32_t xor_sw_lock14;
		uint32_t xor_sw_lock15;
		uint32_t xor_sw_lock16;
		uint32_t xor_sw_lock17;
		uint32_t xor_sw_lock18;
		uint32_t xor_sw_lock19;
		uint32_t xor_sw_lock20;
		uint32_t xor_sw_lock21;
		uint32_t xor_sw_lock22;
		uint32_t xor_sw_lock23;
		uint32_t xor_sw_lock24;
		uint32_t xor_sw_lock25;
		uint32_t xor_sw_lock26;
		uint32_t xor_sw_lock27;
		uint32_t xor_sw_lock28;
		uint32_t xor_sw_lock29;
		uint32_t xor_sw_lock30;
		uint32_t xor_sw_lock31;
		uint32_t xor_sw_lock32;
		uint32_t xor_sw_lock33;
		uint32_t xor_sw_lock34;
		uint32_t xor_sw_lock35;
		uint32_t xor_sw_lock36;
		uint32_t xor_sw_lock37;
		uint32_t xor_sw_lock38;
		uint32_t xor_sw_lock39;
		uint32_t xor_sw_lock40;
		uint32_t xor_sw_lock41;
		uint32_t xor_sw_lock42;
		uint32_t xor_sw_lock43;
		uint32_t xor_sw_lock44;
		uint32_t xor_sw_lock45;
		uint32_t xor_sw_lock46;
		uint32_t xor_sw_lock47;
		uint32_t xor_sw_lock48;
		uint32_t xor_sw_lock49;
		uint32_t xor_sw_lock50;
		uint32_t xor_sw_lock51;
		uint32_t xor_sw_lock52;
		uint32_t xor_sw_lock53;
		uint32_t xor_sw_lock54;
		uint32_t xor_sw_lock55;
		uint32_t xor_sw_lock56;
		uint32_t xor_sw_lock57;
		uint32_t xor_sw_lock58;
		uint32_t xor_sw_lock59;
		uint32_t xor_sw_lock60;
		uint32_t xor_sw_lock61;
		uint32_t xor_sw_lock62;
		uint32_t xor_sw_lock63;
		uint32_t xor_sbpi_instr;
		uint32_t xor_sbpi_wdata_0;
		uint32_t xor_sbpi_wdata_1;
		uint32_t xor_sbpi_wdata_2;
		uint32_t xor_sbpi_wdata_3;
		uint32_t xor_sbpi_rdata_0;
		uint32_t xor_sbpi_rdata_1;
		uint32_t xor_sbpi_rdata_2;
		uint32_t xor_sbpi_rdata_3;
		uint32_t xor_sbpi_status;
		uint32_t xor_usr;
		uint32_t xor_dbg;
		uint32_t RSVDxor_0;
		uint32_t xor_bist;
		uint32_t xor_crt_key_w0;
		uint32_t xor_crt_key_w1;
		uint32_t xor_crt_key_w2;
		uint32_t xor_crt_key_w3;
		uint32_t xor_critical;
		uint32_t xor_key_valid;
		uint32_t xor_debugen;
		uint32_t xor_debugen_lock;
		uint32_t xor_archsel;
		uint32_t xor_archsel_status;
		uint32_t xor_bootdis;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_1[931];
		uint32_t set_sw_lock0;
		uint32_t set_sw_lock1;
		uint32_t set_sw_lock2;
		uint32_t set_sw_lock3;
		uint32_t set_sw_lock4;
		uint32_t set_sw_lock5;
		uint32_t set_sw_lock6;
		uint32_t set_sw_lock7;
		uint32_t set_sw_lock8;
		uint32_t set_sw_lock9;
		uint32_t set_sw_lock10;
		uint32_t set_sw_lock11;
		uint32_t set_sw_lock12;
		uint32_t set_sw_lock13;
		uint32_t set_sw_lock14;
		uint32_t set_sw_lock15;
		uint32_t set_sw_lock16;
		uint32_t set_sw_lock17;
		uint32_t set_sw_lock18;
		uint32_t set_sw_lock19;
		uint32_t set_sw_lock20;
		uint32_t set_sw_lock21;
		uint32_t set_sw_lock22;
		uint32_t set_sw_lock23;
		uint32_t set_sw_lock24;
		uint32_t set_sw_lock25;
		uint32_t set_sw_lock26;
		uint32_t set_sw_lock27;
		uint32_t set_sw_lock28;
		uint32_t set_sw_lock29;
		uint32_t set_sw_lock30;
		uint32_t set_sw_lock31;
		uint32_t set_sw_lock32;
		uint32_t set_sw_lock33;
		uint32_t set_sw_lock34;
		uint32_t set_sw_lock35;
		uint32_t set_sw_lock36;
		uint32_t set_sw_lock37;
		uint32_t set_sw_lock38;
		uint32_t set_sw_lock39;
		uint32_t set_sw_lock40;
		uint32_t set_sw_lock41;
		uint32_t set_sw_lock42;
		uint32_t set_sw_lock43;
		uint32_t set_sw_lock44;
		uint32_t set_sw_lock45;
		uint32_t set_sw_lock46;
		uint32_t set_sw_lock47;
		uint32_t set_sw_lock48;
		uint32_t set_sw_lock49;
		uint32_t set_sw_lock50;
		uint32_t set_sw_lock51;
		uint32_t set_sw_lock52;
		uint32_t set_sw_lock53;
		uint32_t set_sw_lock54;
		uint32_t set_sw_lock55;
		uint32_t set_sw_lock56;
		uint32_t set_sw_lock57;
		uint32_t set_sw_lock58;
		uint32_t set_sw_lock59;
		uint32_t set_sw_lock60;
		uint32_t set_sw_lock61;
		uint32_t set_sw_lock62;
		uint32_t set_sw_lock63;
		uint32_t set_sbpi_instr;
		uint32_t set_sbpi_wdata_0;
		uint32_t set_sbpi_wdata_1;
		uint32_t set_sbpi_wdata_2;
		uint32_t set_sbpi_wdata_3;
		uint32_t set_sbpi_rdata_0;
		uint32_t set_sbpi_rdata_1;
		uint32_t set_sbpi_rdata_2;
		uint32_t set_sbpi_rdata_3;
		uint32_t set_sbpi_status;
		uint32_t set_usr;
		uint32_t set_dbg;
		uint32_t RSVDset_0;
		uint32_t set_bist;
		uint32_t set_crt_key_w0;
		uint32_t set_crt_key_w1;
		uint32_t set_crt_key_w2;
		uint32_t set_crt_key_w3;
		uint32_t set_critical;
		uint32_t set_key_valid;
		uint32_t set_debugen;
		uint32_t set_debugen_lock;
		uint32_t set_archsel;
		uint32_t set_archsel_status;
		uint32_t set_bootdis;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_1[931];
		uint32_t clr_sw_lock0;
		uint32_t clr_sw_lock1;
		uint32_t clr_sw_lock2;
		uint32_t clr_sw_lock3;
		uint32_t clr_sw_lock4;
		uint32_t clr_sw_lock5;
		uint32_t clr_sw_lock6;
		uint32_t clr_sw_lock7;
		uint32_t clr_sw_lock8;
		uint32_t clr_sw_lock9;
		uint32_t clr_sw_lock10;
		uint32_t clr_sw_lock11;
		uint32_t clr_sw_lock12;
		uint32_t clr_sw_lock13;
		uint32_t clr_sw_lock14;
		uint32_t clr_sw_lock15;
		uint32_t clr_sw_lock16;
		uint32_t clr_sw_lock17;
		uint32_t clr_sw_lock18;
		uint32_t clr_sw_lock19;
		uint32_t clr_sw_lock20;
		uint32_t clr_sw_lock21;
		uint32_t clr_sw_lock22;
		uint32_t clr_sw_lock23;
		uint32_t clr_sw_lock24;
		uint32_t clr_sw_lock25;
		uint32_t clr_sw_lock26;
		uint32_t clr_sw_lock27;
		uint32_t clr_sw_lock28;
		uint32_t clr_sw_lock29;
		uint32_t clr_sw_lock30;
		uint32_t clr_sw_lock31;
		uint32_t clr_sw_lock32;
		uint32_t clr_sw_lock33;
		uint32_t clr_sw_lock34;
		uint32_t clr_sw_lock35;
		uint32_t clr_sw_lock36;
		uint32_t clr_sw_lock37;
		uint32_t clr_sw_lock38;
		uint32_t clr_sw_lock39;
		uint32_t clr_sw_lock40;
		uint32_t clr_sw_lock41;
		uint32_t clr_sw_lock42;
		uint32_t clr_sw_lock43;
		uint32_t clr_sw_lock44;
		uint32_t clr_sw_lock45;
		uint32_t clr_sw_lock46;
		uint32_t clr_sw_lock47;
		uint32_t clr_sw_lock48;
		uint32_t clr_sw_lock49;
		uint32_t clr_sw_lock50;
		uint32_t clr_sw_lock51;
		uint32_t clr_sw_lock52;
		uint32_t clr_sw_lock53;
		uint32_t clr_sw_lock54;
		uint32_t clr_sw_lock55;
		uint32_t clr_sw_lock56;
		uint32_t clr_sw_lock57;
		uint32_t clr_sw_lock58;
		uint32_t clr_sw_lock59;
		uint32_t clr_sw_lock60;
		uint32_t clr_sw_lock61;
		uint32_t clr_sw_lock62;
		uint32_t clr_sw_lock63;
		uint32_t clr_sbpi_instr;
		uint32_t clr_sbpi_wdata_0;
		uint32_t clr_sbpi_wdata_1;
		uint32_t clr_sbpi_wdata_2;
		uint32_t clr_sbpi_wdata_3;
		uint32_t clr_sbpi_rdata_0;
		uint32_t clr_sbpi_rdata_1;
		uint32_t clr_sbpi_rdata_2;
		uint32_t clr_sbpi_rdata_3;
		uint32_t clr_sbpi_status;
		uint32_t clr_usr;
		uint32_t clr_dbg;
		uint32_t RSVDclr_0;
		uint32_t clr_bist;
		uint32_t clr_crt_key_w0;
		uint32_t clr_crt_key_w1;
		uint32_t clr_crt_key_w2;
		uint32_t clr_crt_key_w3;
		uint32_t clr_critical;
		uint32_t clr_key_valid;
		uint32_t clr_debugen;
		uint32_t clr_debugen_lock;
		uint32_t clr_archsel;
		uint32_t clr_archsel_status;
		uint32_t clr_bootdis;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_1[931];
} OTP_DATA_RAW_GUARDED_REG_BLOCKS;


/*IO Registers as struct*/

#define otp (*(OTP_REG_BLOCKS volatile *)0x40120000)



#define otp_data (*(OTP_DATA_REG_BLOCKS volatile *)0x40130000)



#define otp_data_raw (*(OTP_DATA_RAW_REG_BLOCKS volatile *)0x40134000)



#define otp_data_guarded (*(OTP_DATA_GUARDED_REG_BLOCKS volatile *)0x40138000)



#define otp_data_raw_guarded (*(OTP_DATA_RAW_GUARDED_REG_BLOCKS volatile *)0x4013c000)


/*IO Registers AS MACROS*/

#define OTP_SW_LOCK0 (*(volatile uint32_t *)0x40120000)
#define OTP_SW_LOCK1 (*(volatile uint32_t *)0x40120004)
#define OTP_SW_LOCK2 (*(volatile uint32_t *)0x40120008)
#define OTP_SW_LOCK3 (*(volatile uint32_t *)0x4012000c)
#define OTP_SW_LOCK4 (*(volatile uint32_t *)0x40120010)
#define OTP_SW_LOCK5 (*(volatile uint32_t *)0x40120014)
#define OTP_SW_LOCK6 (*(volatile uint32_t *)0x40120018)
#define OTP_SW_LOCK7 (*(volatile uint32_t *)0x4012001c)
#define OTP_SW_LOCK8 (*(volatile uint32_t *)0x40120020)
#define OTP_SW_LOCK9 (*(volatile uint32_t *)0x40120024)
#define OTP_SW_LOCK10 (*(volatile uint32_t *)0x40120028)
#define OTP_SW_LOCK11 (*(volatile uint32_t *)0x4012002c)
#define OTP_SW_LOCK12 (*(volatile uint32_t *)0x40120030)
#define OTP_SW_LOCK13 (*(volatile uint32_t *)0x40120034)
#define OTP_SW_LOCK14 (*(volatile uint32_t *)0x40120038)
#define OTP_SW_LOCK15 (*(volatile uint32_t *)0x4012003c)
#define OTP_SW_LOCK16 (*(volatile uint32_t *)0x40120040)
#define OTP_SW_LOCK17 (*(volatile uint32_t *)0x40120044)
#define OTP_SW_LOCK18 (*(volatile uint32_t *)0x40120048)
#define OTP_SW_LOCK19 (*(volatile uint32_t *)0x4012004c)
#define OTP_SW_LOCK20 (*(volatile uint32_t *)0x40120050)
#define OTP_SW_LOCK21 (*(volatile uint32_t *)0x40120054)
#define OTP_SW_LOCK22 (*(volatile uint32_t *)0x40120058)
#define OTP_SW_LOCK23 (*(volatile uint32_t *)0x4012005c)
#define OTP_SW_LOCK24 (*(volatile uint32_t *)0x40120060)
#define OTP_SW_LOCK25 (*(volatile uint32_t *)0x40120064)
#define OTP_SW_LOCK26 (*(volatile uint32_t *)0x40120068)
#define OTP_SW_LOCK27 (*(volatile uint32_t *)0x4012006c)
#define OTP_SW_LOCK28 (*(volatile uint32_t *)0x40120070)
#define OTP_SW_LOCK29 (*(volatile uint32_t *)0x40120074)
#define OTP_SW_LOCK30 (*(volatile uint32_t *)0x40120078)
#define OTP_SW_LOCK31 (*(volatile uint32_t *)0x4012007c)
#define OTP_SW_LOCK32 (*(volatile uint32_t *)0x40120080)
#define OTP_SW_LOCK33 (*(volatile uint32_t *)0x40120084)
#define OTP_SW_LOCK34 (*(volatile uint32_t *)0x40120088)
#define OTP_SW_LOCK35 (*(volatile uint32_t *)0x4012008c)
#define OTP_SW_LOCK36 (*(volatile uint32_t *)0x40120090)
#define OTP_SW_LOCK37 (*(volatile uint32_t *)0x40120094)
#define OTP_SW_LOCK38 (*(volatile uint32_t *)0x40120098)
#define OTP_SW_LOCK39 (*(volatile uint32_t *)0x4012009c)
#define OTP_SW_LOCK40 (*(volatile uint32_t *)0x401200a0)
#define OTP_SW_LOCK41 (*(volatile uint32_t *)0x401200a4)
#define OTP_SW_LOCK42 (*(volatile uint32_t *)0x401200a8)
#define OTP_SW_LOCK43 (*(volatile uint32_t *)0x401200ac)
#define OTP_SW_LOCK44 (*(volatile uint32_t *)0x401200b0)
#define OTP_SW_LOCK45 (*(volatile uint32_t *)0x401200b4)
#define OTP_SW_LOCK46 (*(volatile uint32_t *)0x401200b8)
#define OTP_SW_LOCK47 (*(volatile uint32_t *)0x401200bc)
#define OTP_SW_LOCK48 (*(volatile uint32_t *)0x401200c0)
#define OTP_SW_LOCK49 (*(volatile uint32_t *)0x401200c4)
#define OTP_SW_LOCK50 (*(volatile uint32_t *)0x401200c8)
#define OTP_SW_LOCK51 (*(volatile uint32_t *)0x401200cc)
#define OTP_SW_LOCK52 (*(volatile uint32_t *)0x401200d0)
#define OTP_SW_LOCK53 (*(volatile uint32_t *)0x401200d4)
#define OTP_SW_LOCK54 (*(volatile uint32_t *)0x401200d8)
#define OTP_SW_LOCK55 (*(volatile uint32_t *)0x401200dc)
#define OTP_SW_LOCK56 (*(volatile uint32_t *)0x401200e0)
#define OTP_SW_LOCK57 (*(volatile uint32_t *)0x401200e4)
#define OTP_SW_LOCK58 (*(volatile uint32_t *)0x401200e8)
#define OTP_SW_LOCK59 (*(volatile uint32_t *)0x401200ec)
#define OTP_SW_LOCK60 (*(volatile uint32_t *)0x401200f0)
#define OTP_SW_LOCK61 (*(volatile uint32_t *)0x401200f4)
#define OTP_SW_LOCK62 (*(volatile uint32_t *)0x401200f8)
#define OTP_SW_LOCK63 (*(volatile uint32_t *)0x401200fc)
#define OTP_SBPI_INSTR (*(volatile uint32_t *)0x40120100)
#define OTP_SBPI_WDATA_0 (*(volatile uint32_t *)0x40120104)
#define OTP_SBPI_WDATA_1 (*(volatile uint32_t *)0x40120108)
#define OTP_SBPI_WDATA_2 (*(volatile uint32_t *)0x4012010c)
#define OTP_SBPI_WDATA_3 (*(volatile uint32_t *)0x40120110)
#define OTP_SBPI_RDATA_0 (*(volatile uint32_t *)0x40120114)
#define OTP_SBPI_RDATA_1 (*(volatile uint32_t *)0x40120118)
#define OTP_SBPI_RDATA_2 (*(volatile uint32_t *)0x4012011c)
#define OTP_SBPI_RDATA_3 (*(volatile uint32_t *)0x40120120)
#define OTP_SBPI_STATUS (*(volatile uint32_t *)0x40120124)
#define OTP_USR (*(volatile uint32_t *)0x40120128)
#define OTP_DBG (*(volatile uint32_t *)0x4012012c)
#define OTP_BIST (*(volatile uint32_t *)0x40120134)
#define OTP_CRT_KEY_W0 (*(volatile uint32_t *)0x40120138)
#define OTP_CRT_KEY_W1 (*(volatile uint32_t *)0x4012013c)
#define OTP_CRT_KEY_W2 (*(volatile uint32_t *)0x40120140)
#define OTP_CRT_KEY_W3 (*(volatile uint32_t *)0x40120144)
#define OTP_CRITICAL (*(volatile uint32_t *)0x40120148)
#define OTP_KEY_VALID (*(volatile uint32_t *)0x4012014c)
#define OTP_DEBUGEN (*(volatile uint32_t *)0x40120150)
#define OTP_DEBUGEN_LOCK (*(volatile uint32_t *)0x40120154)
#define OTP_ARCHSEL (*(volatile uint32_t *)0x40120158)
#define OTP_ARCHSEL_STATUS (*(volatile uint32_t *)0x4012015c)
#define OTP_BOOTDIS (*(volatile uint32_t *)0x40120160)
#define OTP_INTR (*(volatile uint32_t *)0x40120164)
#define OTP_INTE (*(volatile uint32_t *)0x40120168)
#define OTP_INTF (*(volatile uint32_t *)0x4012016c)
#define OTP_INTS (*(volatile uint32_t *)0x40120170)
#define OTP_XOR_SW_LOCK0 (*(volatile uint32_t *)0x40121000)
#define OTP_XOR_SW_LOCK1 (*(volatile uint32_t *)0x40121004)
#define OTP_XOR_SW_LOCK2 (*(volatile uint32_t *)0x40121008)
#define OTP_XOR_SW_LOCK3 (*(volatile uint32_t *)0x4012100c)
#define OTP_XOR_SW_LOCK4 (*(volatile uint32_t *)0x40121010)
#define OTP_XOR_SW_LOCK5 (*(volatile uint32_t *)0x40121014)
#define OTP_XOR_SW_LOCK6 (*(volatile uint32_t *)0x40121018)
#define OTP_XOR_SW_LOCK7 (*(volatile uint32_t *)0x4012101c)
#define OTP_XOR_SW_LOCK8 (*(volatile uint32_t *)0x40121020)
#define OTP_XOR_SW_LOCK9 (*(volatile uint32_t *)0x40121024)
#define OTP_XOR_SW_LOCK10 (*(volatile uint32_t *)0x40121028)
#define OTP_XOR_SW_LOCK11 (*(volatile uint32_t *)0x4012102c)
#define OTP_XOR_SW_LOCK12 (*(volatile uint32_t *)0x40121030)
#define OTP_XOR_SW_LOCK13 (*(volatile uint32_t *)0x40121034)
#define OTP_XOR_SW_LOCK14 (*(volatile uint32_t *)0x40121038)
#define OTP_XOR_SW_LOCK15 (*(volatile uint32_t *)0x4012103c)
#define OTP_XOR_SW_LOCK16 (*(volatile uint32_t *)0x40121040)
#define OTP_XOR_SW_LOCK17 (*(volatile uint32_t *)0x40121044)
#define OTP_XOR_SW_LOCK18 (*(volatile uint32_t *)0x40121048)
#define OTP_XOR_SW_LOCK19 (*(volatile uint32_t *)0x4012104c)
#define OTP_XOR_SW_LOCK20 (*(volatile uint32_t *)0x40121050)
#define OTP_XOR_SW_LOCK21 (*(volatile uint32_t *)0x40121054)
#define OTP_XOR_SW_LOCK22 (*(volatile uint32_t *)0x40121058)
#define OTP_XOR_SW_LOCK23 (*(volatile uint32_t *)0x4012105c)
#define OTP_XOR_SW_LOCK24 (*(volatile uint32_t *)0x40121060)
#define OTP_XOR_SW_LOCK25 (*(volatile uint32_t *)0x40121064)
#define OTP_XOR_SW_LOCK26 (*(volatile uint32_t *)0x40121068)
#define OTP_XOR_SW_LOCK27 (*(volatile uint32_t *)0x4012106c)
#define OTP_XOR_SW_LOCK28 (*(volatile uint32_t *)0x40121070)
#define OTP_XOR_SW_LOCK29 (*(volatile uint32_t *)0x40121074)
#define OTP_XOR_SW_LOCK30 (*(volatile uint32_t *)0x40121078)
#define OTP_XOR_SW_LOCK31 (*(volatile uint32_t *)0x4012107c)
#define OTP_XOR_SW_LOCK32 (*(volatile uint32_t *)0x40121080)
#define OTP_XOR_SW_LOCK33 (*(volatile uint32_t *)0x40121084)
#define OTP_XOR_SW_LOCK34 (*(volatile uint32_t *)0x40121088)
#define OTP_XOR_SW_LOCK35 (*(volatile uint32_t *)0x4012108c)
#define OTP_XOR_SW_LOCK36 (*(volatile uint32_t *)0x40121090)
#define OTP_XOR_SW_LOCK37 (*(volatile uint32_t *)0x40121094)
#define OTP_XOR_SW_LOCK38 (*(volatile uint32_t *)0x40121098)
#define OTP_XOR_SW_LOCK39 (*(volatile uint32_t *)0x4012109c)
#define OTP_XOR_SW_LOCK40 (*(volatile uint32_t *)0x401210a0)
#define OTP_XOR_SW_LOCK41 (*(volatile uint32_t *)0x401210a4)
#define OTP_XOR_SW_LOCK42 (*(volatile uint32_t *)0x401210a8)
#define OTP_XOR_SW_LOCK43 (*(volatile uint32_t *)0x401210ac)
#define OTP_XOR_SW_LOCK44 (*(volatile uint32_t *)0x401210b0)
#define OTP_XOR_SW_LOCK45 (*(volatile uint32_t *)0x401210b4)
#define OTP_XOR_SW_LOCK46 (*(volatile uint32_t *)0x401210b8)
#define OTP_XOR_SW_LOCK47 (*(volatile uint32_t *)0x401210bc)
#define OTP_XOR_SW_LOCK48 (*(volatile uint32_t *)0x401210c0)
#define OTP_XOR_SW_LOCK49 (*(volatile uint32_t *)0x401210c4)
#define OTP_XOR_SW_LOCK50 (*(volatile uint32_t *)0x401210c8)
#define OTP_XOR_SW_LOCK51 (*(volatile uint32_t *)0x401210cc)
#define OTP_XOR_SW_LOCK52 (*(volatile uint32_t *)0x401210d0)
#define OTP_XOR_SW_LOCK53 (*(volatile uint32_t *)0x401210d4)
#define OTP_XOR_SW_LOCK54 (*(volatile uint32_t *)0x401210d8)
#define OTP_XOR_SW_LOCK55 (*(volatile uint32_t *)0x401210dc)
#define OTP_XOR_SW_LOCK56 (*(volatile uint32_t *)0x401210e0)
#define OTP_XOR_SW_LOCK57 (*(volatile uint32_t *)0x401210e4)
#define OTP_XOR_SW_LOCK58 (*(volatile uint32_t *)0x401210e8)
#define OTP_XOR_SW_LOCK59 (*(volatile uint32_t *)0x401210ec)
#define OTP_XOR_SW_LOCK60 (*(volatile uint32_t *)0x401210f0)
#define OTP_XOR_SW_LOCK61 (*(volatile uint32_t *)0x401210f4)
#define OTP_XOR_SW_LOCK62 (*(volatile uint32_t *)0x401210f8)
#define OTP_XOR_SW_LOCK63 (*(volatile uint32_t *)0x401210fc)
#define OTP_XOR_SBPI_INSTR (*(volatile uint32_t *)0x40121100)
#define OTP_XOR_SBPI_WDATA_0 (*(volatile uint32_t *)0x40121104)
#define OTP_XOR_SBPI_WDATA_1 (*(volatile uint32_t *)0x40121108)
#define OTP_XOR_SBPI_WDATA_2 (*(volatile uint32_t *)0x4012110c)
#define OTP_XOR_SBPI_WDATA_3 (*(volatile uint32_t *)0x40121110)
#define OTP_XOR_SBPI_RDATA_0 (*(volatile uint32_t *)0x40121114)
#define OTP_XOR_SBPI_RDATA_1 (*(volatile uint32_t *)0x40121118)
#define OTP_XOR_SBPI_RDATA_2 (*(volatile uint32_t *)0x4012111c)
#define OTP_XOR_SBPI_RDATA_3 (*(volatile uint32_t *)0x40121120)
#define OTP_XOR_SBPI_STATUS (*(volatile uint32_t *)0x40121124)
#define OTP_XOR_USR (*(volatile uint32_t *)0x40121128)
#define OTP_XOR_DBG (*(volatile uint32_t *)0x4012112c)
#define OTP_XOR_BIST (*(volatile uint32_t *)0x40121134)
#define OTP_XOR_CRT_KEY_W0 (*(volatile uint32_t *)0x40121138)
#define OTP_XOR_CRT_KEY_W1 (*(volatile uint32_t *)0x4012113c)
#define OTP_XOR_CRT_KEY_W2 (*(volatile uint32_t *)0x40121140)
#define OTP_XOR_CRT_KEY_W3 (*(volatile uint32_t *)0x40121144)
#define OTP_XOR_CRITICAL (*(volatile uint32_t *)0x40121148)
#define OTP_XOR_KEY_VALID (*(volatile uint32_t *)0x4012114c)
#define OTP_XOR_DEBUGEN (*(volatile uint32_t *)0x40121150)
#define OTP_XOR_DEBUGEN_LOCK (*(volatile uint32_t *)0x40121154)
#define OTP_XOR_ARCHSEL (*(volatile uint32_t *)0x40121158)
#define OTP_XOR_ARCHSEL_STATUS (*(volatile uint32_t *)0x4012115c)
#define OTP_XOR_BOOTDIS (*(volatile uint32_t *)0x40121160)
#define OTP_XOR_INTR (*(volatile uint32_t *)0x40121164)
#define OTP_XOR_INTE (*(volatile uint32_t *)0x40121168)
#define OTP_XOR_INTF (*(volatile uint32_t *)0x4012116c)
#define OTP_XOR_INTS (*(volatile uint32_t *)0x40121170)
#define OTP_SET_SW_LOCK0 (*(volatile uint32_t *)0x40122000)
#define OTP_SET_SW_LOCK1 (*(volatile uint32_t *)0x40122004)
#define OTP_SET_SW_LOCK2 (*(volatile uint32_t *)0x40122008)
#define OTP_SET_SW_LOCK3 (*(volatile uint32_t *)0x4012200c)
#define OTP_SET_SW_LOCK4 (*(volatile uint32_t *)0x40122010)
#define OTP_SET_SW_LOCK5 (*(volatile uint32_t *)0x40122014)
#define OTP_SET_SW_LOCK6 (*(volatile uint32_t *)0x40122018)
#define OTP_SET_SW_LOCK7 (*(volatile uint32_t *)0x4012201c)
#define OTP_SET_SW_LOCK8 (*(volatile uint32_t *)0x40122020)
#define OTP_SET_SW_LOCK9 (*(volatile uint32_t *)0x40122024)
#define OTP_SET_SW_LOCK10 (*(volatile uint32_t *)0x40122028)
#define OTP_SET_SW_LOCK11 (*(volatile uint32_t *)0x4012202c)
#define OTP_SET_SW_LOCK12 (*(volatile uint32_t *)0x40122030)
#define OTP_SET_SW_LOCK13 (*(volatile uint32_t *)0x40122034)
#define OTP_SET_SW_LOCK14 (*(volatile uint32_t *)0x40122038)
#define OTP_SET_SW_LOCK15 (*(volatile uint32_t *)0x4012203c)
#define OTP_SET_SW_LOCK16 (*(volatile uint32_t *)0x40122040)
#define OTP_SET_SW_LOCK17 (*(volatile uint32_t *)0x40122044)
#define OTP_SET_SW_LOCK18 (*(volatile uint32_t *)0x40122048)
#define OTP_SET_SW_LOCK19 (*(volatile uint32_t *)0x4012204c)
#define OTP_SET_SW_LOCK20 (*(volatile uint32_t *)0x40122050)
#define OTP_SET_SW_LOCK21 (*(volatile uint32_t *)0x40122054)
#define OTP_SET_SW_LOCK22 (*(volatile uint32_t *)0x40122058)
#define OTP_SET_SW_LOCK23 (*(volatile uint32_t *)0x4012205c)
#define OTP_SET_SW_LOCK24 (*(volatile uint32_t *)0x40122060)
#define OTP_SET_SW_LOCK25 (*(volatile uint32_t *)0x40122064)
#define OTP_SET_SW_LOCK26 (*(volatile uint32_t *)0x40122068)
#define OTP_SET_SW_LOCK27 (*(volatile uint32_t *)0x4012206c)
#define OTP_SET_SW_LOCK28 (*(volatile uint32_t *)0x40122070)
#define OTP_SET_SW_LOCK29 (*(volatile uint32_t *)0x40122074)
#define OTP_SET_SW_LOCK30 (*(volatile uint32_t *)0x40122078)
#define OTP_SET_SW_LOCK31 (*(volatile uint32_t *)0x4012207c)
#define OTP_SET_SW_LOCK32 (*(volatile uint32_t *)0x40122080)
#define OTP_SET_SW_LOCK33 (*(volatile uint32_t *)0x40122084)
#define OTP_SET_SW_LOCK34 (*(volatile uint32_t *)0x40122088)
#define OTP_SET_SW_LOCK35 (*(volatile uint32_t *)0x4012208c)
#define OTP_SET_SW_LOCK36 (*(volatile uint32_t *)0x40122090)
#define OTP_SET_SW_LOCK37 (*(volatile uint32_t *)0x40122094)
#define OTP_SET_SW_LOCK38 (*(volatile uint32_t *)0x40122098)
#define OTP_SET_SW_LOCK39 (*(volatile uint32_t *)0x4012209c)
#define OTP_SET_SW_LOCK40 (*(volatile uint32_t *)0x401220a0)
#define OTP_SET_SW_LOCK41 (*(volatile uint32_t *)0x401220a4)
#define OTP_SET_SW_LOCK42 (*(volatile uint32_t *)0x401220a8)
#define OTP_SET_SW_LOCK43 (*(volatile uint32_t *)0x401220ac)
#define OTP_SET_SW_LOCK44 (*(volatile uint32_t *)0x401220b0)
#define OTP_SET_SW_LOCK45 (*(volatile uint32_t *)0x401220b4)
#define OTP_SET_SW_LOCK46 (*(volatile uint32_t *)0x401220b8)
#define OTP_SET_SW_LOCK47 (*(volatile uint32_t *)0x401220bc)
#define OTP_SET_SW_LOCK48 (*(volatile uint32_t *)0x401220c0)
#define OTP_SET_SW_LOCK49 (*(volatile uint32_t *)0x401220c4)
#define OTP_SET_SW_LOCK50 (*(volatile uint32_t *)0x401220c8)
#define OTP_SET_SW_LOCK51 (*(volatile uint32_t *)0x401220cc)
#define OTP_SET_SW_LOCK52 (*(volatile uint32_t *)0x401220d0)
#define OTP_SET_SW_LOCK53 (*(volatile uint32_t *)0x401220d4)
#define OTP_SET_SW_LOCK54 (*(volatile uint32_t *)0x401220d8)
#define OTP_SET_SW_LOCK55 (*(volatile uint32_t *)0x401220dc)
#define OTP_SET_SW_LOCK56 (*(volatile uint32_t *)0x401220e0)
#define OTP_SET_SW_LOCK57 (*(volatile uint32_t *)0x401220e4)
#define OTP_SET_SW_LOCK58 (*(volatile uint32_t *)0x401220e8)
#define OTP_SET_SW_LOCK59 (*(volatile uint32_t *)0x401220ec)
#define OTP_SET_SW_LOCK60 (*(volatile uint32_t *)0x401220f0)
#define OTP_SET_SW_LOCK61 (*(volatile uint32_t *)0x401220f4)
#define OTP_SET_SW_LOCK62 (*(volatile uint32_t *)0x401220f8)
#define OTP_SET_SW_LOCK63 (*(volatile uint32_t *)0x401220fc)
#define OTP_SET_SBPI_INSTR (*(volatile uint32_t *)0x40122100)
#define OTP_SET_SBPI_WDATA_0 (*(volatile uint32_t *)0x40122104)
#define OTP_SET_SBPI_WDATA_1 (*(volatile uint32_t *)0x40122108)
#define OTP_SET_SBPI_WDATA_2 (*(volatile uint32_t *)0x4012210c)
#define OTP_SET_SBPI_WDATA_3 (*(volatile uint32_t *)0x40122110)
#define OTP_SET_SBPI_RDATA_0 (*(volatile uint32_t *)0x40122114)
#define OTP_SET_SBPI_RDATA_1 (*(volatile uint32_t *)0x40122118)
#define OTP_SET_SBPI_RDATA_2 (*(volatile uint32_t *)0x4012211c)
#define OTP_SET_SBPI_RDATA_3 (*(volatile uint32_t *)0x40122120)
#define OTP_SET_SBPI_STATUS (*(volatile uint32_t *)0x40122124)
#define OTP_SET_USR (*(volatile uint32_t *)0x40122128)
#define OTP_SET_DBG (*(volatile uint32_t *)0x4012212c)
#define OTP_SET_BIST (*(volatile uint32_t *)0x40122134)
#define OTP_SET_CRT_KEY_W0 (*(volatile uint32_t *)0x40122138)
#define OTP_SET_CRT_KEY_W1 (*(volatile uint32_t *)0x4012213c)
#define OTP_SET_CRT_KEY_W2 (*(volatile uint32_t *)0x40122140)
#define OTP_SET_CRT_KEY_W3 (*(volatile uint32_t *)0x40122144)
#define OTP_SET_CRITICAL (*(volatile uint32_t *)0x40122148)
#define OTP_SET_KEY_VALID (*(volatile uint32_t *)0x4012214c)
#define OTP_SET_DEBUGEN (*(volatile uint32_t *)0x40122150)
#define OTP_SET_DEBUGEN_LOCK (*(volatile uint32_t *)0x40122154)
#define OTP_SET_ARCHSEL (*(volatile uint32_t *)0x40122158)
#define OTP_SET_ARCHSEL_STATUS (*(volatile uint32_t *)0x4012215c)
#define OTP_SET_BOOTDIS (*(volatile uint32_t *)0x40122160)
#define OTP_SET_INTR (*(volatile uint32_t *)0x40122164)
#define OTP_SET_INTE (*(volatile uint32_t *)0x40122168)
#define OTP_SET_INTF (*(volatile uint32_t *)0x4012216c)
#define OTP_SET_INTS (*(volatile uint32_t *)0x40122170)
#define OTP_CLR_SW_LOCK0 (*(volatile uint32_t *)0x40123000)
#define OTP_CLR_SW_LOCK1 (*(volatile uint32_t *)0x40123004)
#define OTP_CLR_SW_LOCK2 (*(volatile uint32_t *)0x40123008)
#define OTP_CLR_SW_LOCK3 (*(volatile uint32_t *)0x4012300c)
#define OTP_CLR_SW_LOCK4 (*(volatile uint32_t *)0x40123010)
#define OTP_CLR_SW_LOCK5 (*(volatile uint32_t *)0x40123014)
#define OTP_CLR_SW_LOCK6 (*(volatile uint32_t *)0x40123018)
#define OTP_CLR_SW_LOCK7 (*(volatile uint32_t *)0x4012301c)
#define OTP_CLR_SW_LOCK8 (*(volatile uint32_t *)0x40123020)
#define OTP_CLR_SW_LOCK9 (*(volatile uint32_t *)0x40123024)
#define OTP_CLR_SW_LOCK10 (*(volatile uint32_t *)0x40123028)
#define OTP_CLR_SW_LOCK11 (*(volatile uint32_t *)0x4012302c)
#define OTP_CLR_SW_LOCK12 (*(volatile uint32_t *)0x40123030)
#define OTP_CLR_SW_LOCK13 (*(volatile uint32_t *)0x40123034)
#define OTP_CLR_SW_LOCK14 (*(volatile uint32_t *)0x40123038)
#define OTP_CLR_SW_LOCK15 (*(volatile uint32_t *)0x4012303c)
#define OTP_CLR_SW_LOCK16 (*(volatile uint32_t *)0x40123040)
#define OTP_CLR_SW_LOCK17 (*(volatile uint32_t *)0x40123044)
#define OTP_CLR_SW_LOCK18 (*(volatile uint32_t *)0x40123048)
#define OTP_CLR_SW_LOCK19 (*(volatile uint32_t *)0x4012304c)
#define OTP_CLR_SW_LOCK20 (*(volatile uint32_t *)0x40123050)
#define OTP_CLR_SW_LOCK21 (*(volatile uint32_t *)0x40123054)
#define OTP_CLR_SW_LOCK22 (*(volatile uint32_t *)0x40123058)
#define OTP_CLR_SW_LOCK23 (*(volatile uint32_t *)0x4012305c)
#define OTP_CLR_SW_LOCK24 (*(volatile uint32_t *)0x40123060)
#define OTP_CLR_SW_LOCK25 (*(volatile uint32_t *)0x40123064)
#define OTP_CLR_SW_LOCK26 (*(volatile uint32_t *)0x40123068)
#define OTP_CLR_SW_LOCK27 (*(volatile uint32_t *)0x4012306c)
#define OTP_CLR_SW_LOCK28 (*(volatile uint32_t *)0x40123070)
#define OTP_CLR_SW_LOCK29 (*(volatile uint32_t *)0x40123074)
#define OTP_CLR_SW_LOCK30 (*(volatile uint32_t *)0x40123078)
#define OTP_CLR_SW_LOCK31 (*(volatile uint32_t *)0x4012307c)
#define OTP_CLR_SW_LOCK32 (*(volatile uint32_t *)0x40123080)
#define OTP_CLR_SW_LOCK33 (*(volatile uint32_t *)0x40123084)
#define OTP_CLR_SW_LOCK34 (*(volatile uint32_t *)0x40123088)
#define OTP_CLR_SW_LOCK35 (*(volatile uint32_t *)0x4012308c)
#define OTP_CLR_SW_LOCK36 (*(volatile uint32_t *)0x40123090)
#define OTP_CLR_SW_LOCK37 (*(volatile uint32_t *)0x40123094)
#define OTP_CLR_SW_LOCK38 (*(volatile uint32_t *)0x40123098)
#define OTP_CLR_SW_LOCK39 (*(volatile uint32_t *)0x4012309c)
#define OTP_CLR_SW_LOCK40 (*(volatile uint32_t *)0x401230a0)
#define OTP_CLR_SW_LOCK41 (*(volatile uint32_t *)0x401230a4)
#define OTP_CLR_SW_LOCK42 (*(volatile uint32_t *)0x401230a8)
#define OTP_CLR_SW_LOCK43 (*(volatile uint32_t *)0x401230ac)
#define OTP_CLR_SW_LOCK44 (*(volatile uint32_t *)0x401230b0)
#define OTP_CLR_SW_LOCK45 (*(volatile uint32_t *)0x401230b4)
#define OTP_CLR_SW_LOCK46 (*(volatile uint32_t *)0x401230b8)
#define OTP_CLR_SW_LOCK47 (*(volatile uint32_t *)0x401230bc)
#define OTP_CLR_SW_LOCK48 (*(volatile uint32_t *)0x401230c0)
#define OTP_CLR_SW_LOCK49 (*(volatile uint32_t *)0x401230c4)
#define OTP_CLR_SW_LOCK50 (*(volatile uint32_t *)0x401230c8)
#define OTP_CLR_SW_LOCK51 (*(volatile uint32_t *)0x401230cc)
#define OTP_CLR_SW_LOCK52 (*(volatile uint32_t *)0x401230d0)
#define OTP_CLR_SW_LOCK53 (*(volatile uint32_t *)0x401230d4)
#define OTP_CLR_SW_LOCK54 (*(volatile uint32_t *)0x401230d8)
#define OTP_CLR_SW_LOCK55 (*(volatile uint32_t *)0x401230dc)
#define OTP_CLR_SW_LOCK56 (*(volatile uint32_t *)0x401230e0)
#define OTP_CLR_SW_LOCK57 (*(volatile uint32_t *)0x401230e4)
#define OTP_CLR_SW_LOCK58 (*(volatile uint32_t *)0x401230e8)
#define OTP_CLR_SW_LOCK59 (*(volatile uint32_t *)0x401230ec)
#define OTP_CLR_SW_LOCK60 (*(volatile uint32_t *)0x401230f0)
#define OTP_CLR_SW_LOCK61 (*(volatile uint32_t *)0x401230f4)
#define OTP_CLR_SW_LOCK62 (*(volatile uint32_t *)0x401230f8)
#define OTP_CLR_SW_LOCK63 (*(volatile uint32_t *)0x401230fc)
#define OTP_CLR_SBPI_INSTR (*(volatile uint32_t *)0x40123100)
#define OTP_CLR_SBPI_WDATA_0 (*(volatile uint32_t *)0x40123104)
#define OTP_CLR_SBPI_WDATA_1 (*(volatile uint32_t *)0x40123108)
#define OTP_CLR_SBPI_WDATA_2 (*(volatile uint32_t *)0x4012310c)
#define OTP_CLR_SBPI_WDATA_3 (*(volatile uint32_t *)0x40123110)
#define OTP_CLR_SBPI_RDATA_0 (*(volatile uint32_t *)0x40123114)
#define OTP_CLR_SBPI_RDATA_1 (*(volatile uint32_t *)0x40123118)
#define OTP_CLR_SBPI_RDATA_2 (*(volatile uint32_t *)0x4012311c)
#define OTP_CLR_SBPI_RDATA_3 (*(volatile uint32_t *)0x40123120)
#define OTP_CLR_SBPI_STATUS (*(volatile uint32_t *)0x40123124)
#define OTP_CLR_USR (*(volatile uint32_t *)0x40123128)
#define OTP_CLR_DBG (*(volatile uint32_t *)0x4012312c)
#define OTP_CLR_BIST (*(volatile uint32_t *)0x40123134)
#define OTP_CLR_CRT_KEY_W0 (*(volatile uint32_t *)0x40123138)
#define OTP_CLR_CRT_KEY_W1 (*(volatile uint32_t *)0x4012313c)
#define OTP_CLR_CRT_KEY_W2 (*(volatile uint32_t *)0x40123140)
#define OTP_CLR_CRT_KEY_W3 (*(volatile uint32_t *)0x40123144)
#define OTP_CLR_CRITICAL (*(volatile uint32_t *)0x40123148)
#define OTP_CLR_KEY_VALID (*(volatile uint32_t *)0x4012314c)
#define OTP_CLR_DEBUGEN (*(volatile uint32_t *)0x40123150)
#define OTP_CLR_DEBUGEN_LOCK (*(volatile uint32_t *)0x40123154)
#define OTP_CLR_ARCHSEL (*(volatile uint32_t *)0x40123158)
#define OTP_CLR_ARCHSEL_STATUS (*(volatile uint32_t *)0x4012315c)
#define OTP_CLR_BOOTDIS (*(volatile uint32_t *)0x40123160)
#define OTP_CLR_INTR (*(volatile uint32_t *)0x40123164)
#define OTP_CLR_INTE (*(volatile uint32_t *)0x40123168)
#define OTP_CLR_INTF (*(volatile uint32_t *)0x4012316c)
#define OTP_CLR_INTS (*(volatile uint32_t *)0x40123170)
#define OTP_DATA_SW_LOCK0 (*(volatile uint32_t *)0x40130000)
#define OTP_DATA_SW_LOCK1 (*(volatile uint32_t *)0x40130004)
#define OTP_DATA_SW_LOCK2 (*(volatile uint32_t *)0x40130008)
#define OTP_DATA_SW_LOCK3 (*(volatile uint32_t *)0x4013000c)
#define OTP_DATA_SW_LOCK4 (*(volatile uint32_t *)0x40130010)
#define OTP_DATA_SW_LOCK5 (*(volatile uint32_t *)0x40130014)
#define OTP_DATA_SW_LOCK6 (*(volatile uint32_t *)0x40130018)
#define OTP_DATA_SW_LOCK7 (*(volatile uint32_t *)0x4013001c)
#define OTP_DATA_SW_LOCK8 (*(volatile uint32_t *)0x40130020)
#define OTP_DATA_SW_LOCK9 (*(volatile uint32_t *)0x40130024)
#define OTP_DATA_SW_LOCK10 (*(volatile uint32_t *)0x40130028)
#define OTP_DATA_SW_LOCK11 (*(volatile uint32_t *)0x4013002c)
#define OTP_DATA_SW_LOCK12 (*(volatile uint32_t *)0x40130030)
#define OTP_DATA_SW_LOCK13 (*(volatile uint32_t *)0x40130034)
#define OTP_DATA_SW_LOCK14 (*(volatile uint32_t *)0x40130038)
#define OTP_DATA_SW_LOCK15 (*(volatile uint32_t *)0x4013003c)
#define OTP_DATA_SW_LOCK16 (*(volatile uint32_t *)0x40130040)
#define OTP_DATA_SW_LOCK17 (*(volatile uint32_t *)0x40130044)
#define OTP_DATA_SW_LOCK18 (*(volatile uint32_t *)0x40130048)
#define OTP_DATA_SW_LOCK19 (*(volatile uint32_t *)0x4013004c)
#define OTP_DATA_SW_LOCK20 (*(volatile uint32_t *)0x40130050)
#define OTP_DATA_SW_LOCK21 (*(volatile uint32_t *)0x40130054)
#define OTP_DATA_SW_LOCK22 (*(volatile uint32_t *)0x40130058)
#define OTP_DATA_SW_LOCK23 (*(volatile uint32_t *)0x4013005c)
#define OTP_DATA_SW_LOCK24 (*(volatile uint32_t *)0x40130060)
#define OTP_DATA_SW_LOCK25 (*(volatile uint32_t *)0x40130064)
#define OTP_DATA_SW_LOCK26 (*(volatile uint32_t *)0x40130068)
#define OTP_DATA_SW_LOCK27 (*(volatile uint32_t *)0x4013006c)
#define OTP_DATA_SW_LOCK28 (*(volatile uint32_t *)0x40130070)
#define OTP_DATA_SW_LOCK29 (*(volatile uint32_t *)0x40130074)
#define OTP_DATA_SW_LOCK30 (*(volatile uint32_t *)0x40130078)
#define OTP_DATA_SW_LOCK31 (*(volatile uint32_t *)0x4013007c)
#define OTP_DATA_SW_LOCK32 (*(volatile uint32_t *)0x40130080)
#define OTP_DATA_SW_LOCK33 (*(volatile uint32_t *)0x40130084)
#define OTP_DATA_SW_LOCK34 (*(volatile uint32_t *)0x40130088)
#define OTP_DATA_SW_LOCK35 (*(volatile uint32_t *)0x4013008c)
#define OTP_DATA_SW_LOCK36 (*(volatile uint32_t *)0x40130090)
#define OTP_DATA_SW_LOCK37 (*(volatile uint32_t *)0x40130094)
#define OTP_DATA_SW_LOCK38 (*(volatile uint32_t *)0x40130098)
#define OTP_DATA_SW_LOCK39 (*(volatile uint32_t *)0x4013009c)
#define OTP_DATA_SW_LOCK40 (*(volatile uint32_t *)0x401300a0)
#define OTP_DATA_SW_LOCK41 (*(volatile uint32_t *)0x401300a4)
#define OTP_DATA_SW_LOCK42 (*(volatile uint32_t *)0x401300a8)
#define OTP_DATA_SW_LOCK43 (*(volatile uint32_t *)0x401300ac)
#define OTP_DATA_SW_LOCK44 (*(volatile uint32_t *)0x401300b0)
#define OTP_DATA_SW_LOCK45 (*(volatile uint32_t *)0x401300b4)
#define OTP_DATA_SW_LOCK46 (*(volatile uint32_t *)0x401300b8)
#define OTP_DATA_SW_LOCK47 (*(volatile uint32_t *)0x401300bc)
#define OTP_DATA_SW_LOCK48 (*(volatile uint32_t *)0x401300c0)
#define OTP_DATA_SW_LOCK49 (*(volatile uint32_t *)0x401300c4)
#define OTP_DATA_SW_LOCK50 (*(volatile uint32_t *)0x401300c8)
#define OTP_DATA_SW_LOCK51 (*(volatile uint32_t *)0x401300cc)
#define OTP_DATA_SW_LOCK52 (*(volatile uint32_t *)0x401300d0)
#define OTP_DATA_SW_LOCK53 (*(volatile uint32_t *)0x401300d4)
#define OTP_DATA_SW_LOCK54 (*(volatile uint32_t *)0x401300d8)
#define OTP_DATA_SW_LOCK55 (*(volatile uint32_t *)0x401300dc)
#define OTP_DATA_SW_LOCK56 (*(volatile uint32_t *)0x401300e0)
#define OTP_DATA_SW_LOCK57 (*(volatile uint32_t *)0x401300e4)
#define OTP_DATA_SW_LOCK58 (*(volatile uint32_t *)0x401300e8)
#define OTP_DATA_SW_LOCK59 (*(volatile uint32_t *)0x401300ec)
#define OTP_DATA_SW_LOCK60 (*(volatile uint32_t *)0x401300f0)
#define OTP_DATA_SW_LOCK61 (*(volatile uint32_t *)0x401300f4)
#define OTP_DATA_SW_LOCK62 (*(volatile uint32_t *)0x401300f8)
#define OTP_DATA_SW_LOCK63 (*(volatile uint32_t *)0x401300fc)
#define OTP_DATA_SBPI_INSTR (*(volatile uint32_t *)0x40130100)
#define OTP_DATA_SBPI_WDATA_0 (*(volatile uint32_t *)0x40130104)
#define OTP_DATA_SBPI_WDATA_1 (*(volatile uint32_t *)0x40130108)
#define OTP_DATA_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013010c)
#define OTP_DATA_SBPI_WDATA_3 (*(volatile uint32_t *)0x40130110)
#define OTP_DATA_SBPI_RDATA_0 (*(volatile uint32_t *)0x40130114)
#define OTP_DATA_SBPI_RDATA_1 (*(volatile uint32_t *)0x40130118)
#define OTP_DATA_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013011c)
#define OTP_DATA_SBPI_RDATA_3 (*(volatile uint32_t *)0x40130120)
#define OTP_DATA_SBPI_STATUS (*(volatile uint32_t *)0x40130124)
#define OTP_DATA_USR (*(volatile uint32_t *)0x40130128)
#define OTP_DATA_DBG (*(volatile uint32_t *)0x4013012c)
#define OTP_DATA_BIST (*(volatile uint32_t *)0x40130134)
#define OTP_DATA_CRT_KEY_W0 (*(volatile uint32_t *)0x40130138)
#define OTP_DATA_CRT_KEY_W1 (*(volatile uint32_t *)0x4013013c)
#define OTP_DATA_CRT_KEY_W2 (*(volatile uint32_t *)0x40130140)
#define OTP_DATA_CRT_KEY_W3 (*(volatile uint32_t *)0x40130144)
#define OTP_DATA_CRITICAL (*(volatile uint32_t *)0x40130148)
#define OTP_DATA_KEY_VALID (*(volatile uint32_t *)0x4013014c)
#define OTP_DATA_DEBUGEN (*(volatile uint32_t *)0x40130150)
#define OTP_DATA_DEBUGEN_LOCK (*(volatile uint32_t *)0x40130154)
#define OTP_DATA_ARCHSEL (*(volatile uint32_t *)0x40130158)
#define OTP_DATA_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013015c)
#define OTP_DATA_BOOTDIS (*(volatile uint32_t *)0x40130160)
#define OTP_DATA_INTR (*(volatile uint32_t *)0x40130164)
#define OTP_DATA_INTE (*(volatile uint32_t *)0x40130168)
#define OTP_DATA_INTF (*(volatile uint32_t *)0x4013016c)
#define OTP_DATA_INTS (*(volatile uint32_t *)0x40130170)
#define OTP_DATA_XOR_SW_LOCK0 (*(volatile uint32_t *)0x40131000)
#define OTP_DATA_XOR_SW_LOCK1 (*(volatile uint32_t *)0x40131004)
#define OTP_DATA_XOR_SW_LOCK2 (*(volatile uint32_t *)0x40131008)
#define OTP_DATA_XOR_SW_LOCK3 (*(volatile uint32_t *)0x4013100c)
#define OTP_DATA_XOR_SW_LOCK4 (*(volatile uint32_t *)0x40131010)
#define OTP_DATA_XOR_SW_LOCK5 (*(volatile uint32_t *)0x40131014)
#define OTP_DATA_XOR_SW_LOCK6 (*(volatile uint32_t *)0x40131018)
#define OTP_DATA_XOR_SW_LOCK7 (*(volatile uint32_t *)0x4013101c)
#define OTP_DATA_XOR_SW_LOCK8 (*(volatile uint32_t *)0x40131020)
#define OTP_DATA_XOR_SW_LOCK9 (*(volatile uint32_t *)0x40131024)
#define OTP_DATA_XOR_SW_LOCK10 (*(volatile uint32_t *)0x40131028)
#define OTP_DATA_XOR_SW_LOCK11 (*(volatile uint32_t *)0x4013102c)
#define OTP_DATA_XOR_SW_LOCK12 (*(volatile uint32_t *)0x40131030)
#define OTP_DATA_XOR_SW_LOCK13 (*(volatile uint32_t *)0x40131034)
#define OTP_DATA_XOR_SW_LOCK14 (*(volatile uint32_t *)0x40131038)
#define OTP_DATA_XOR_SW_LOCK15 (*(volatile uint32_t *)0x4013103c)
#define OTP_DATA_XOR_SW_LOCK16 (*(volatile uint32_t *)0x40131040)
#define OTP_DATA_XOR_SW_LOCK17 (*(volatile uint32_t *)0x40131044)
#define OTP_DATA_XOR_SW_LOCK18 (*(volatile uint32_t *)0x40131048)
#define OTP_DATA_XOR_SW_LOCK19 (*(volatile uint32_t *)0x4013104c)
#define OTP_DATA_XOR_SW_LOCK20 (*(volatile uint32_t *)0x40131050)
#define OTP_DATA_XOR_SW_LOCK21 (*(volatile uint32_t *)0x40131054)
#define OTP_DATA_XOR_SW_LOCK22 (*(volatile uint32_t *)0x40131058)
#define OTP_DATA_XOR_SW_LOCK23 (*(volatile uint32_t *)0x4013105c)
#define OTP_DATA_XOR_SW_LOCK24 (*(volatile uint32_t *)0x40131060)
#define OTP_DATA_XOR_SW_LOCK25 (*(volatile uint32_t *)0x40131064)
#define OTP_DATA_XOR_SW_LOCK26 (*(volatile uint32_t *)0x40131068)
#define OTP_DATA_XOR_SW_LOCK27 (*(volatile uint32_t *)0x4013106c)
#define OTP_DATA_XOR_SW_LOCK28 (*(volatile uint32_t *)0x40131070)
#define OTP_DATA_XOR_SW_LOCK29 (*(volatile uint32_t *)0x40131074)
#define OTP_DATA_XOR_SW_LOCK30 (*(volatile uint32_t *)0x40131078)
#define OTP_DATA_XOR_SW_LOCK31 (*(volatile uint32_t *)0x4013107c)
#define OTP_DATA_XOR_SW_LOCK32 (*(volatile uint32_t *)0x40131080)
#define OTP_DATA_XOR_SW_LOCK33 (*(volatile uint32_t *)0x40131084)
#define OTP_DATA_XOR_SW_LOCK34 (*(volatile uint32_t *)0x40131088)
#define OTP_DATA_XOR_SW_LOCK35 (*(volatile uint32_t *)0x4013108c)
#define OTP_DATA_XOR_SW_LOCK36 (*(volatile uint32_t *)0x40131090)
#define OTP_DATA_XOR_SW_LOCK37 (*(volatile uint32_t *)0x40131094)
#define OTP_DATA_XOR_SW_LOCK38 (*(volatile uint32_t *)0x40131098)
#define OTP_DATA_XOR_SW_LOCK39 (*(volatile uint32_t *)0x4013109c)
#define OTP_DATA_XOR_SW_LOCK40 (*(volatile uint32_t *)0x401310a0)
#define OTP_DATA_XOR_SW_LOCK41 (*(volatile uint32_t *)0x401310a4)
#define OTP_DATA_XOR_SW_LOCK42 (*(volatile uint32_t *)0x401310a8)
#define OTP_DATA_XOR_SW_LOCK43 (*(volatile uint32_t *)0x401310ac)
#define OTP_DATA_XOR_SW_LOCK44 (*(volatile uint32_t *)0x401310b0)
#define OTP_DATA_XOR_SW_LOCK45 (*(volatile uint32_t *)0x401310b4)
#define OTP_DATA_XOR_SW_LOCK46 (*(volatile uint32_t *)0x401310b8)
#define OTP_DATA_XOR_SW_LOCK47 (*(volatile uint32_t *)0x401310bc)
#define OTP_DATA_XOR_SW_LOCK48 (*(volatile uint32_t *)0x401310c0)
#define OTP_DATA_XOR_SW_LOCK49 (*(volatile uint32_t *)0x401310c4)
#define OTP_DATA_XOR_SW_LOCK50 (*(volatile uint32_t *)0x401310c8)
#define OTP_DATA_XOR_SW_LOCK51 (*(volatile uint32_t *)0x401310cc)
#define OTP_DATA_XOR_SW_LOCK52 (*(volatile uint32_t *)0x401310d0)
#define OTP_DATA_XOR_SW_LOCK53 (*(volatile uint32_t *)0x401310d4)
#define OTP_DATA_XOR_SW_LOCK54 (*(volatile uint32_t *)0x401310d8)
#define OTP_DATA_XOR_SW_LOCK55 (*(volatile uint32_t *)0x401310dc)
#define OTP_DATA_XOR_SW_LOCK56 (*(volatile uint32_t *)0x401310e0)
#define OTP_DATA_XOR_SW_LOCK57 (*(volatile uint32_t *)0x401310e4)
#define OTP_DATA_XOR_SW_LOCK58 (*(volatile uint32_t *)0x401310e8)
#define OTP_DATA_XOR_SW_LOCK59 (*(volatile uint32_t *)0x401310ec)
#define OTP_DATA_XOR_SW_LOCK60 (*(volatile uint32_t *)0x401310f0)
#define OTP_DATA_XOR_SW_LOCK61 (*(volatile uint32_t *)0x401310f4)
#define OTP_DATA_XOR_SW_LOCK62 (*(volatile uint32_t *)0x401310f8)
#define OTP_DATA_XOR_SW_LOCK63 (*(volatile uint32_t *)0x401310fc)
#define OTP_DATA_XOR_SBPI_INSTR (*(volatile uint32_t *)0x40131100)
#define OTP_DATA_XOR_SBPI_WDATA_0 (*(volatile uint32_t *)0x40131104)
#define OTP_DATA_XOR_SBPI_WDATA_1 (*(volatile uint32_t *)0x40131108)
#define OTP_DATA_XOR_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013110c)
#define OTP_DATA_XOR_SBPI_WDATA_3 (*(volatile uint32_t *)0x40131110)
#define OTP_DATA_XOR_SBPI_RDATA_0 (*(volatile uint32_t *)0x40131114)
#define OTP_DATA_XOR_SBPI_RDATA_1 (*(volatile uint32_t *)0x40131118)
#define OTP_DATA_XOR_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013111c)
#define OTP_DATA_XOR_SBPI_RDATA_3 (*(volatile uint32_t *)0x40131120)
#define OTP_DATA_XOR_SBPI_STATUS (*(volatile uint32_t *)0x40131124)
#define OTP_DATA_XOR_USR (*(volatile uint32_t *)0x40131128)
#define OTP_DATA_XOR_DBG (*(volatile uint32_t *)0x4013112c)
#define OTP_DATA_XOR_BIST (*(volatile uint32_t *)0x40131134)
#define OTP_DATA_XOR_CRT_KEY_W0 (*(volatile uint32_t *)0x40131138)
#define OTP_DATA_XOR_CRT_KEY_W1 (*(volatile uint32_t *)0x4013113c)
#define OTP_DATA_XOR_CRT_KEY_W2 (*(volatile uint32_t *)0x40131140)
#define OTP_DATA_XOR_CRT_KEY_W3 (*(volatile uint32_t *)0x40131144)
#define OTP_DATA_XOR_CRITICAL (*(volatile uint32_t *)0x40131148)
#define OTP_DATA_XOR_KEY_VALID (*(volatile uint32_t *)0x4013114c)
#define OTP_DATA_XOR_DEBUGEN (*(volatile uint32_t *)0x40131150)
#define OTP_DATA_XOR_DEBUGEN_LOCK (*(volatile uint32_t *)0x40131154)
#define OTP_DATA_XOR_ARCHSEL (*(volatile uint32_t *)0x40131158)
#define OTP_DATA_XOR_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013115c)
#define OTP_DATA_XOR_BOOTDIS (*(volatile uint32_t *)0x40131160)
#define OTP_DATA_XOR_INTR (*(volatile uint32_t *)0x40131164)
#define OTP_DATA_XOR_INTE (*(volatile uint32_t *)0x40131168)
#define OTP_DATA_XOR_INTF (*(volatile uint32_t *)0x4013116c)
#define OTP_DATA_XOR_INTS (*(volatile uint32_t *)0x40131170)
#define OTP_DATA_SET_SW_LOCK0 (*(volatile uint32_t *)0x40132000)
#define OTP_DATA_SET_SW_LOCK1 (*(volatile uint32_t *)0x40132004)
#define OTP_DATA_SET_SW_LOCK2 (*(volatile uint32_t *)0x40132008)
#define OTP_DATA_SET_SW_LOCK3 (*(volatile uint32_t *)0x4013200c)
#define OTP_DATA_SET_SW_LOCK4 (*(volatile uint32_t *)0x40132010)
#define OTP_DATA_SET_SW_LOCK5 (*(volatile uint32_t *)0x40132014)
#define OTP_DATA_SET_SW_LOCK6 (*(volatile uint32_t *)0x40132018)
#define OTP_DATA_SET_SW_LOCK7 (*(volatile uint32_t *)0x4013201c)
#define OTP_DATA_SET_SW_LOCK8 (*(volatile uint32_t *)0x40132020)
#define OTP_DATA_SET_SW_LOCK9 (*(volatile uint32_t *)0x40132024)
#define OTP_DATA_SET_SW_LOCK10 (*(volatile uint32_t *)0x40132028)
#define OTP_DATA_SET_SW_LOCK11 (*(volatile uint32_t *)0x4013202c)
#define OTP_DATA_SET_SW_LOCK12 (*(volatile uint32_t *)0x40132030)
#define OTP_DATA_SET_SW_LOCK13 (*(volatile uint32_t *)0x40132034)
#define OTP_DATA_SET_SW_LOCK14 (*(volatile uint32_t *)0x40132038)
#define OTP_DATA_SET_SW_LOCK15 (*(volatile uint32_t *)0x4013203c)
#define OTP_DATA_SET_SW_LOCK16 (*(volatile uint32_t *)0x40132040)
#define OTP_DATA_SET_SW_LOCK17 (*(volatile uint32_t *)0x40132044)
#define OTP_DATA_SET_SW_LOCK18 (*(volatile uint32_t *)0x40132048)
#define OTP_DATA_SET_SW_LOCK19 (*(volatile uint32_t *)0x4013204c)
#define OTP_DATA_SET_SW_LOCK20 (*(volatile uint32_t *)0x40132050)
#define OTP_DATA_SET_SW_LOCK21 (*(volatile uint32_t *)0x40132054)
#define OTP_DATA_SET_SW_LOCK22 (*(volatile uint32_t *)0x40132058)
#define OTP_DATA_SET_SW_LOCK23 (*(volatile uint32_t *)0x4013205c)
#define OTP_DATA_SET_SW_LOCK24 (*(volatile uint32_t *)0x40132060)
#define OTP_DATA_SET_SW_LOCK25 (*(volatile uint32_t *)0x40132064)
#define OTP_DATA_SET_SW_LOCK26 (*(volatile uint32_t *)0x40132068)
#define OTP_DATA_SET_SW_LOCK27 (*(volatile uint32_t *)0x4013206c)
#define OTP_DATA_SET_SW_LOCK28 (*(volatile uint32_t *)0x40132070)
#define OTP_DATA_SET_SW_LOCK29 (*(volatile uint32_t *)0x40132074)
#define OTP_DATA_SET_SW_LOCK30 (*(volatile uint32_t *)0x40132078)
#define OTP_DATA_SET_SW_LOCK31 (*(volatile uint32_t *)0x4013207c)
#define OTP_DATA_SET_SW_LOCK32 (*(volatile uint32_t *)0x40132080)
#define OTP_DATA_SET_SW_LOCK33 (*(volatile uint32_t *)0x40132084)
#define OTP_DATA_SET_SW_LOCK34 (*(volatile uint32_t *)0x40132088)
#define OTP_DATA_SET_SW_LOCK35 (*(volatile uint32_t *)0x4013208c)
#define OTP_DATA_SET_SW_LOCK36 (*(volatile uint32_t *)0x40132090)
#define OTP_DATA_SET_SW_LOCK37 (*(volatile uint32_t *)0x40132094)
#define OTP_DATA_SET_SW_LOCK38 (*(volatile uint32_t *)0x40132098)
#define OTP_DATA_SET_SW_LOCK39 (*(volatile uint32_t *)0x4013209c)
#define OTP_DATA_SET_SW_LOCK40 (*(volatile uint32_t *)0x401320a0)
#define OTP_DATA_SET_SW_LOCK41 (*(volatile uint32_t *)0x401320a4)
#define OTP_DATA_SET_SW_LOCK42 (*(volatile uint32_t *)0x401320a8)
#define OTP_DATA_SET_SW_LOCK43 (*(volatile uint32_t *)0x401320ac)
#define OTP_DATA_SET_SW_LOCK44 (*(volatile uint32_t *)0x401320b0)
#define OTP_DATA_SET_SW_LOCK45 (*(volatile uint32_t *)0x401320b4)
#define OTP_DATA_SET_SW_LOCK46 (*(volatile uint32_t *)0x401320b8)
#define OTP_DATA_SET_SW_LOCK47 (*(volatile uint32_t *)0x401320bc)
#define OTP_DATA_SET_SW_LOCK48 (*(volatile uint32_t *)0x401320c0)
#define OTP_DATA_SET_SW_LOCK49 (*(volatile uint32_t *)0x401320c4)
#define OTP_DATA_SET_SW_LOCK50 (*(volatile uint32_t *)0x401320c8)
#define OTP_DATA_SET_SW_LOCK51 (*(volatile uint32_t *)0x401320cc)
#define OTP_DATA_SET_SW_LOCK52 (*(volatile uint32_t *)0x401320d0)
#define OTP_DATA_SET_SW_LOCK53 (*(volatile uint32_t *)0x401320d4)
#define OTP_DATA_SET_SW_LOCK54 (*(volatile uint32_t *)0x401320d8)
#define OTP_DATA_SET_SW_LOCK55 (*(volatile uint32_t *)0x401320dc)
#define OTP_DATA_SET_SW_LOCK56 (*(volatile uint32_t *)0x401320e0)
#define OTP_DATA_SET_SW_LOCK57 (*(volatile uint32_t *)0x401320e4)
#define OTP_DATA_SET_SW_LOCK58 (*(volatile uint32_t *)0x401320e8)
#define OTP_DATA_SET_SW_LOCK59 (*(volatile uint32_t *)0x401320ec)
#define OTP_DATA_SET_SW_LOCK60 (*(volatile uint32_t *)0x401320f0)
#define OTP_DATA_SET_SW_LOCK61 (*(volatile uint32_t *)0x401320f4)
#define OTP_DATA_SET_SW_LOCK62 (*(volatile uint32_t *)0x401320f8)
#define OTP_DATA_SET_SW_LOCK63 (*(volatile uint32_t *)0x401320fc)
#define OTP_DATA_SET_SBPI_INSTR (*(volatile uint32_t *)0x40132100)
#define OTP_DATA_SET_SBPI_WDATA_0 (*(volatile uint32_t *)0x40132104)
#define OTP_DATA_SET_SBPI_WDATA_1 (*(volatile uint32_t *)0x40132108)
#define OTP_DATA_SET_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013210c)
#define OTP_DATA_SET_SBPI_WDATA_3 (*(volatile uint32_t *)0x40132110)
#define OTP_DATA_SET_SBPI_RDATA_0 (*(volatile uint32_t *)0x40132114)
#define OTP_DATA_SET_SBPI_RDATA_1 (*(volatile uint32_t *)0x40132118)
#define OTP_DATA_SET_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013211c)
#define OTP_DATA_SET_SBPI_RDATA_3 (*(volatile uint32_t *)0x40132120)
#define OTP_DATA_SET_SBPI_STATUS (*(volatile uint32_t *)0x40132124)
#define OTP_DATA_SET_USR (*(volatile uint32_t *)0x40132128)
#define OTP_DATA_SET_DBG (*(volatile uint32_t *)0x4013212c)
#define OTP_DATA_SET_BIST (*(volatile uint32_t *)0x40132134)
#define OTP_DATA_SET_CRT_KEY_W0 (*(volatile uint32_t *)0x40132138)
#define OTP_DATA_SET_CRT_KEY_W1 (*(volatile uint32_t *)0x4013213c)
#define OTP_DATA_SET_CRT_KEY_W2 (*(volatile uint32_t *)0x40132140)
#define OTP_DATA_SET_CRT_KEY_W3 (*(volatile uint32_t *)0x40132144)
#define OTP_DATA_SET_CRITICAL (*(volatile uint32_t *)0x40132148)
#define OTP_DATA_SET_KEY_VALID (*(volatile uint32_t *)0x4013214c)
#define OTP_DATA_SET_DEBUGEN (*(volatile uint32_t *)0x40132150)
#define OTP_DATA_SET_DEBUGEN_LOCK (*(volatile uint32_t *)0x40132154)
#define OTP_DATA_SET_ARCHSEL (*(volatile uint32_t *)0x40132158)
#define OTP_DATA_SET_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013215c)
#define OTP_DATA_SET_BOOTDIS (*(volatile uint32_t *)0x40132160)
#define OTP_DATA_SET_INTR (*(volatile uint32_t *)0x40132164)
#define OTP_DATA_SET_INTE (*(volatile uint32_t *)0x40132168)
#define OTP_DATA_SET_INTF (*(volatile uint32_t *)0x4013216c)
#define OTP_DATA_SET_INTS (*(volatile uint32_t *)0x40132170)
#define OTP_DATA_CLR_SW_LOCK0 (*(volatile uint32_t *)0x40133000)
#define OTP_DATA_CLR_SW_LOCK1 (*(volatile uint32_t *)0x40133004)
#define OTP_DATA_CLR_SW_LOCK2 (*(volatile uint32_t *)0x40133008)
#define OTP_DATA_CLR_SW_LOCK3 (*(volatile uint32_t *)0x4013300c)
#define OTP_DATA_CLR_SW_LOCK4 (*(volatile uint32_t *)0x40133010)
#define OTP_DATA_CLR_SW_LOCK5 (*(volatile uint32_t *)0x40133014)
#define OTP_DATA_CLR_SW_LOCK6 (*(volatile uint32_t *)0x40133018)
#define OTP_DATA_CLR_SW_LOCK7 (*(volatile uint32_t *)0x4013301c)
#define OTP_DATA_CLR_SW_LOCK8 (*(volatile uint32_t *)0x40133020)
#define OTP_DATA_CLR_SW_LOCK9 (*(volatile uint32_t *)0x40133024)
#define OTP_DATA_CLR_SW_LOCK10 (*(volatile uint32_t *)0x40133028)
#define OTP_DATA_CLR_SW_LOCK11 (*(volatile uint32_t *)0x4013302c)
#define OTP_DATA_CLR_SW_LOCK12 (*(volatile uint32_t *)0x40133030)
#define OTP_DATA_CLR_SW_LOCK13 (*(volatile uint32_t *)0x40133034)
#define OTP_DATA_CLR_SW_LOCK14 (*(volatile uint32_t *)0x40133038)
#define OTP_DATA_CLR_SW_LOCK15 (*(volatile uint32_t *)0x4013303c)
#define OTP_DATA_CLR_SW_LOCK16 (*(volatile uint32_t *)0x40133040)
#define OTP_DATA_CLR_SW_LOCK17 (*(volatile uint32_t *)0x40133044)
#define OTP_DATA_CLR_SW_LOCK18 (*(volatile uint32_t *)0x40133048)
#define OTP_DATA_CLR_SW_LOCK19 (*(volatile uint32_t *)0x4013304c)
#define OTP_DATA_CLR_SW_LOCK20 (*(volatile uint32_t *)0x40133050)
#define OTP_DATA_CLR_SW_LOCK21 (*(volatile uint32_t *)0x40133054)
#define OTP_DATA_CLR_SW_LOCK22 (*(volatile uint32_t *)0x40133058)
#define OTP_DATA_CLR_SW_LOCK23 (*(volatile uint32_t *)0x4013305c)
#define OTP_DATA_CLR_SW_LOCK24 (*(volatile uint32_t *)0x40133060)
#define OTP_DATA_CLR_SW_LOCK25 (*(volatile uint32_t *)0x40133064)
#define OTP_DATA_CLR_SW_LOCK26 (*(volatile uint32_t *)0x40133068)
#define OTP_DATA_CLR_SW_LOCK27 (*(volatile uint32_t *)0x4013306c)
#define OTP_DATA_CLR_SW_LOCK28 (*(volatile uint32_t *)0x40133070)
#define OTP_DATA_CLR_SW_LOCK29 (*(volatile uint32_t *)0x40133074)
#define OTP_DATA_CLR_SW_LOCK30 (*(volatile uint32_t *)0x40133078)
#define OTP_DATA_CLR_SW_LOCK31 (*(volatile uint32_t *)0x4013307c)
#define OTP_DATA_CLR_SW_LOCK32 (*(volatile uint32_t *)0x40133080)
#define OTP_DATA_CLR_SW_LOCK33 (*(volatile uint32_t *)0x40133084)
#define OTP_DATA_CLR_SW_LOCK34 (*(volatile uint32_t *)0x40133088)
#define OTP_DATA_CLR_SW_LOCK35 (*(volatile uint32_t *)0x4013308c)
#define OTP_DATA_CLR_SW_LOCK36 (*(volatile uint32_t *)0x40133090)
#define OTP_DATA_CLR_SW_LOCK37 (*(volatile uint32_t *)0x40133094)
#define OTP_DATA_CLR_SW_LOCK38 (*(volatile uint32_t *)0x40133098)
#define OTP_DATA_CLR_SW_LOCK39 (*(volatile uint32_t *)0x4013309c)
#define OTP_DATA_CLR_SW_LOCK40 (*(volatile uint32_t *)0x401330a0)
#define OTP_DATA_CLR_SW_LOCK41 (*(volatile uint32_t *)0x401330a4)
#define OTP_DATA_CLR_SW_LOCK42 (*(volatile uint32_t *)0x401330a8)
#define OTP_DATA_CLR_SW_LOCK43 (*(volatile uint32_t *)0x401330ac)
#define OTP_DATA_CLR_SW_LOCK44 (*(volatile uint32_t *)0x401330b0)
#define OTP_DATA_CLR_SW_LOCK45 (*(volatile uint32_t *)0x401330b4)
#define OTP_DATA_CLR_SW_LOCK46 (*(volatile uint32_t *)0x401330b8)
#define OTP_DATA_CLR_SW_LOCK47 (*(volatile uint32_t *)0x401330bc)
#define OTP_DATA_CLR_SW_LOCK48 (*(volatile uint32_t *)0x401330c0)
#define OTP_DATA_CLR_SW_LOCK49 (*(volatile uint32_t *)0x401330c4)
#define OTP_DATA_CLR_SW_LOCK50 (*(volatile uint32_t *)0x401330c8)
#define OTP_DATA_CLR_SW_LOCK51 (*(volatile uint32_t *)0x401330cc)
#define OTP_DATA_CLR_SW_LOCK52 (*(volatile uint32_t *)0x401330d0)
#define OTP_DATA_CLR_SW_LOCK53 (*(volatile uint32_t *)0x401330d4)
#define OTP_DATA_CLR_SW_LOCK54 (*(volatile uint32_t *)0x401330d8)
#define OTP_DATA_CLR_SW_LOCK55 (*(volatile uint32_t *)0x401330dc)
#define OTP_DATA_CLR_SW_LOCK56 (*(volatile uint32_t *)0x401330e0)
#define OTP_DATA_CLR_SW_LOCK57 (*(volatile uint32_t *)0x401330e4)
#define OTP_DATA_CLR_SW_LOCK58 (*(volatile uint32_t *)0x401330e8)
#define OTP_DATA_CLR_SW_LOCK59 (*(volatile uint32_t *)0x401330ec)
#define OTP_DATA_CLR_SW_LOCK60 (*(volatile uint32_t *)0x401330f0)
#define OTP_DATA_CLR_SW_LOCK61 (*(volatile uint32_t *)0x401330f4)
#define OTP_DATA_CLR_SW_LOCK62 (*(volatile uint32_t *)0x401330f8)
#define OTP_DATA_CLR_SW_LOCK63 (*(volatile uint32_t *)0x401330fc)
#define OTP_DATA_CLR_SBPI_INSTR (*(volatile uint32_t *)0x40133100)
#define OTP_DATA_CLR_SBPI_WDATA_0 (*(volatile uint32_t *)0x40133104)
#define OTP_DATA_CLR_SBPI_WDATA_1 (*(volatile uint32_t *)0x40133108)
#define OTP_DATA_CLR_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013310c)
#define OTP_DATA_CLR_SBPI_WDATA_3 (*(volatile uint32_t *)0x40133110)
#define OTP_DATA_CLR_SBPI_RDATA_0 (*(volatile uint32_t *)0x40133114)
#define OTP_DATA_CLR_SBPI_RDATA_1 (*(volatile uint32_t *)0x40133118)
#define OTP_DATA_CLR_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013311c)
#define OTP_DATA_CLR_SBPI_RDATA_3 (*(volatile uint32_t *)0x40133120)
#define OTP_DATA_CLR_SBPI_STATUS (*(volatile uint32_t *)0x40133124)
#define OTP_DATA_CLR_USR (*(volatile uint32_t *)0x40133128)
#define OTP_DATA_CLR_DBG (*(volatile uint32_t *)0x4013312c)
#define OTP_DATA_CLR_BIST (*(volatile uint32_t *)0x40133134)
#define OTP_DATA_CLR_CRT_KEY_W0 (*(volatile uint32_t *)0x40133138)
#define OTP_DATA_CLR_CRT_KEY_W1 (*(volatile uint32_t *)0x4013313c)
#define OTP_DATA_CLR_CRT_KEY_W2 (*(volatile uint32_t *)0x40133140)
#define OTP_DATA_CLR_CRT_KEY_W3 (*(volatile uint32_t *)0x40133144)
#define OTP_DATA_CLR_CRITICAL (*(volatile uint32_t *)0x40133148)
#define OTP_DATA_CLR_KEY_VALID (*(volatile uint32_t *)0x4013314c)
#define OTP_DATA_CLR_DEBUGEN (*(volatile uint32_t *)0x40133150)
#define OTP_DATA_CLR_DEBUGEN_LOCK (*(volatile uint32_t *)0x40133154)
#define OTP_DATA_CLR_ARCHSEL (*(volatile uint32_t *)0x40133158)
#define OTP_DATA_CLR_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013315c)
#define OTP_DATA_CLR_BOOTDIS (*(volatile uint32_t *)0x40133160)
#define OTP_DATA_CLR_INTR (*(volatile uint32_t *)0x40133164)
#define OTP_DATA_CLR_INTE (*(volatile uint32_t *)0x40133168)
#define OTP_DATA_CLR_INTF (*(volatile uint32_t *)0x4013316c)
#define OTP_DATA_CLR_INTS (*(volatile uint32_t *)0x40133170)
#define OTP_DATA_RAW_SW_LOCK0 (*(volatile uint32_t *)0x40134000)
#define OTP_DATA_RAW_SW_LOCK1 (*(volatile uint32_t *)0x40134004)
#define OTP_DATA_RAW_SW_LOCK2 (*(volatile uint32_t *)0x40134008)
#define OTP_DATA_RAW_SW_LOCK3 (*(volatile uint32_t *)0x4013400c)
#define OTP_DATA_RAW_SW_LOCK4 (*(volatile uint32_t *)0x40134010)
#define OTP_DATA_RAW_SW_LOCK5 (*(volatile uint32_t *)0x40134014)
#define OTP_DATA_RAW_SW_LOCK6 (*(volatile uint32_t *)0x40134018)
#define OTP_DATA_RAW_SW_LOCK7 (*(volatile uint32_t *)0x4013401c)
#define OTP_DATA_RAW_SW_LOCK8 (*(volatile uint32_t *)0x40134020)
#define OTP_DATA_RAW_SW_LOCK9 (*(volatile uint32_t *)0x40134024)
#define OTP_DATA_RAW_SW_LOCK10 (*(volatile uint32_t *)0x40134028)
#define OTP_DATA_RAW_SW_LOCK11 (*(volatile uint32_t *)0x4013402c)
#define OTP_DATA_RAW_SW_LOCK12 (*(volatile uint32_t *)0x40134030)
#define OTP_DATA_RAW_SW_LOCK13 (*(volatile uint32_t *)0x40134034)
#define OTP_DATA_RAW_SW_LOCK14 (*(volatile uint32_t *)0x40134038)
#define OTP_DATA_RAW_SW_LOCK15 (*(volatile uint32_t *)0x4013403c)
#define OTP_DATA_RAW_SW_LOCK16 (*(volatile uint32_t *)0x40134040)
#define OTP_DATA_RAW_SW_LOCK17 (*(volatile uint32_t *)0x40134044)
#define OTP_DATA_RAW_SW_LOCK18 (*(volatile uint32_t *)0x40134048)
#define OTP_DATA_RAW_SW_LOCK19 (*(volatile uint32_t *)0x4013404c)
#define OTP_DATA_RAW_SW_LOCK20 (*(volatile uint32_t *)0x40134050)
#define OTP_DATA_RAW_SW_LOCK21 (*(volatile uint32_t *)0x40134054)
#define OTP_DATA_RAW_SW_LOCK22 (*(volatile uint32_t *)0x40134058)
#define OTP_DATA_RAW_SW_LOCK23 (*(volatile uint32_t *)0x4013405c)
#define OTP_DATA_RAW_SW_LOCK24 (*(volatile uint32_t *)0x40134060)
#define OTP_DATA_RAW_SW_LOCK25 (*(volatile uint32_t *)0x40134064)
#define OTP_DATA_RAW_SW_LOCK26 (*(volatile uint32_t *)0x40134068)
#define OTP_DATA_RAW_SW_LOCK27 (*(volatile uint32_t *)0x4013406c)
#define OTP_DATA_RAW_SW_LOCK28 (*(volatile uint32_t *)0x40134070)
#define OTP_DATA_RAW_SW_LOCK29 (*(volatile uint32_t *)0x40134074)
#define OTP_DATA_RAW_SW_LOCK30 (*(volatile uint32_t *)0x40134078)
#define OTP_DATA_RAW_SW_LOCK31 (*(volatile uint32_t *)0x4013407c)
#define OTP_DATA_RAW_SW_LOCK32 (*(volatile uint32_t *)0x40134080)
#define OTP_DATA_RAW_SW_LOCK33 (*(volatile uint32_t *)0x40134084)
#define OTP_DATA_RAW_SW_LOCK34 (*(volatile uint32_t *)0x40134088)
#define OTP_DATA_RAW_SW_LOCK35 (*(volatile uint32_t *)0x4013408c)
#define OTP_DATA_RAW_SW_LOCK36 (*(volatile uint32_t *)0x40134090)
#define OTP_DATA_RAW_SW_LOCK37 (*(volatile uint32_t *)0x40134094)
#define OTP_DATA_RAW_SW_LOCK38 (*(volatile uint32_t *)0x40134098)
#define OTP_DATA_RAW_SW_LOCK39 (*(volatile uint32_t *)0x4013409c)
#define OTP_DATA_RAW_SW_LOCK40 (*(volatile uint32_t *)0x401340a0)
#define OTP_DATA_RAW_SW_LOCK41 (*(volatile uint32_t *)0x401340a4)
#define OTP_DATA_RAW_SW_LOCK42 (*(volatile uint32_t *)0x401340a8)
#define OTP_DATA_RAW_SW_LOCK43 (*(volatile uint32_t *)0x401340ac)
#define OTP_DATA_RAW_SW_LOCK44 (*(volatile uint32_t *)0x401340b0)
#define OTP_DATA_RAW_SW_LOCK45 (*(volatile uint32_t *)0x401340b4)
#define OTP_DATA_RAW_SW_LOCK46 (*(volatile uint32_t *)0x401340b8)
#define OTP_DATA_RAW_SW_LOCK47 (*(volatile uint32_t *)0x401340bc)
#define OTP_DATA_RAW_SW_LOCK48 (*(volatile uint32_t *)0x401340c0)
#define OTP_DATA_RAW_SW_LOCK49 (*(volatile uint32_t *)0x401340c4)
#define OTP_DATA_RAW_SW_LOCK50 (*(volatile uint32_t *)0x401340c8)
#define OTP_DATA_RAW_SW_LOCK51 (*(volatile uint32_t *)0x401340cc)
#define OTP_DATA_RAW_SW_LOCK52 (*(volatile uint32_t *)0x401340d0)
#define OTP_DATA_RAW_SW_LOCK53 (*(volatile uint32_t *)0x401340d4)
#define OTP_DATA_RAW_SW_LOCK54 (*(volatile uint32_t *)0x401340d8)
#define OTP_DATA_RAW_SW_LOCK55 (*(volatile uint32_t *)0x401340dc)
#define OTP_DATA_RAW_SW_LOCK56 (*(volatile uint32_t *)0x401340e0)
#define OTP_DATA_RAW_SW_LOCK57 (*(volatile uint32_t *)0x401340e4)
#define OTP_DATA_RAW_SW_LOCK58 (*(volatile uint32_t *)0x401340e8)
#define OTP_DATA_RAW_SW_LOCK59 (*(volatile uint32_t *)0x401340ec)
#define OTP_DATA_RAW_SW_LOCK60 (*(volatile uint32_t *)0x401340f0)
#define OTP_DATA_RAW_SW_LOCK61 (*(volatile uint32_t *)0x401340f4)
#define OTP_DATA_RAW_SW_LOCK62 (*(volatile uint32_t *)0x401340f8)
#define OTP_DATA_RAW_SW_LOCK63 (*(volatile uint32_t *)0x401340fc)
#define OTP_DATA_RAW_SBPI_INSTR (*(volatile uint32_t *)0x40134100)
#define OTP_DATA_RAW_SBPI_WDATA_0 (*(volatile uint32_t *)0x40134104)
#define OTP_DATA_RAW_SBPI_WDATA_1 (*(volatile uint32_t *)0x40134108)
#define OTP_DATA_RAW_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013410c)
#define OTP_DATA_RAW_SBPI_WDATA_3 (*(volatile uint32_t *)0x40134110)
#define OTP_DATA_RAW_SBPI_RDATA_0 (*(volatile uint32_t *)0x40134114)
#define OTP_DATA_RAW_SBPI_RDATA_1 (*(volatile uint32_t *)0x40134118)
#define OTP_DATA_RAW_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013411c)
#define OTP_DATA_RAW_SBPI_RDATA_3 (*(volatile uint32_t *)0x40134120)
#define OTP_DATA_RAW_SBPI_STATUS (*(volatile uint32_t *)0x40134124)
#define OTP_DATA_RAW_USR (*(volatile uint32_t *)0x40134128)
#define OTP_DATA_RAW_DBG (*(volatile uint32_t *)0x4013412c)
#define OTP_DATA_RAW_BIST (*(volatile uint32_t *)0x40134134)
#define OTP_DATA_RAW_CRT_KEY_W0 (*(volatile uint32_t *)0x40134138)
#define OTP_DATA_RAW_CRT_KEY_W1 (*(volatile uint32_t *)0x4013413c)
#define OTP_DATA_RAW_CRT_KEY_W2 (*(volatile uint32_t *)0x40134140)
#define OTP_DATA_RAW_CRT_KEY_W3 (*(volatile uint32_t *)0x40134144)
#define OTP_DATA_RAW_CRITICAL (*(volatile uint32_t *)0x40134148)
#define OTP_DATA_RAW_KEY_VALID (*(volatile uint32_t *)0x4013414c)
#define OTP_DATA_RAW_DEBUGEN (*(volatile uint32_t *)0x40134150)
#define OTP_DATA_RAW_DEBUGEN_LOCK (*(volatile uint32_t *)0x40134154)
#define OTP_DATA_RAW_ARCHSEL (*(volatile uint32_t *)0x40134158)
#define OTP_DATA_RAW_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013415c)
#define OTP_DATA_RAW_BOOTDIS (*(volatile uint32_t *)0x40134160)
#define OTP_DATA_RAW_INTR (*(volatile uint32_t *)0x40134164)
#define OTP_DATA_RAW_INTE (*(volatile uint32_t *)0x40134168)
#define OTP_DATA_RAW_INTF (*(volatile uint32_t *)0x4013416c)
#define OTP_DATA_RAW_INTS (*(volatile uint32_t *)0x40134170)
#define OTP_DATA_RAW_XOR_SW_LOCK0 (*(volatile uint32_t *)0x40135000)
#define OTP_DATA_RAW_XOR_SW_LOCK1 (*(volatile uint32_t *)0x40135004)
#define OTP_DATA_RAW_XOR_SW_LOCK2 (*(volatile uint32_t *)0x40135008)
#define OTP_DATA_RAW_XOR_SW_LOCK3 (*(volatile uint32_t *)0x4013500c)
#define OTP_DATA_RAW_XOR_SW_LOCK4 (*(volatile uint32_t *)0x40135010)
#define OTP_DATA_RAW_XOR_SW_LOCK5 (*(volatile uint32_t *)0x40135014)
#define OTP_DATA_RAW_XOR_SW_LOCK6 (*(volatile uint32_t *)0x40135018)
#define OTP_DATA_RAW_XOR_SW_LOCK7 (*(volatile uint32_t *)0x4013501c)
#define OTP_DATA_RAW_XOR_SW_LOCK8 (*(volatile uint32_t *)0x40135020)
#define OTP_DATA_RAW_XOR_SW_LOCK9 (*(volatile uint32_t *)0x40135024)
#define OTP_DATA_RAW_XOR_SW_LOCK10 (*(volatile uint32_t *)0x40135028)
#define OTP_DATA_RAW_XOR_SW_LOCK11 (*(volatile uint32_t *)0x4013502c)
#define OTP_DATA_RAW_XOR_SW_LOCK12 (*(volatile uint32_t *)0x40135030)
#define OTP_DATA_RAW_XOR_SW_LOCK13 (*(volatile uint32_t *)0x40135034)
#define OTP_DATA_RAW_XOR_SW_LOCK14 (*(volatile uint32_t *)0x40135038)
#define OTP_DATA_RAW_XOR_SW_LOCK15 (*(volatile uint32_t *)0x4013503c)
#define OTP_DATA_RAW_XOR_SW_LOCK16 (*(volatile uint32_t *)0x40135040)
#define OTP_DATA_RAW_XOR_SW_LOCK17 (*(volatile uint32_t *)0x40135044)
#define OTP_DATA_RAW_XOR_SW_LOCK18 (*(volatile uint32_t *)0x40135048)
#define OTP_DATA_RAW_XOR_SW_LOCK19 (*(volatile uint32_t *)0x4013504c)
#define OTP_DATA_RAW_XOR_SW_LOCK20 (*(volatile uint32_t *)0x40135050)
#define OTP_DATA_RAW_XOR_SW_LOCK21 (*(volatile uint32_t *)0x40135054)
#define OTP_DATA_RAW_XOR_SW_LOCK22 (*(volatile uint32_t *)0x40135058)
#define OTP_DATA_RAW_XOR_SW_LOCK23 (*(volatile uint32_t *)0x4013505c)
#define OTP_DATA_RAW_XOR_SW_LOCK24 (*(volatile uint32_t *)0x40135060)
#define OTP_DATA_RAW_XOR_SW_LOCK25 (*(volatile uint32_t *)0x40135064)
#define OTP_DATA_RAW_XOR_SW_LOCK26 (*(volatile uint32_t *)0x40135068)
#define OTP_DATA_RAW_XOR_SW_LOCK27 (*(volatile uint32_t *)0x4013506c)
#define OTP_DATA_RAW_XOR_SW_LOCK28 (*(volatile uint32_t *)0x40135070)
#define OTP_DATA_RAW_XOR_SW_LOCK29 (*(volatile uint32_t *)0x40135074)
#define OTP_DATA_RAW_XOR_SW_LOCK30 (*(volatile uint32_t *)0x40135078)
#define OTP_DATA_RAW_XOR_SW_LOCK31 (*(volatile uint32_t *)0x4013507c)
#define OTP_DATA_RAW_XOR_SW_LOCK32 (*(volatile uint32_t *)0x40135080)
#define OTP_DATA_RAW_XOR_SW_LOCK33 (*(volatile uint32_t *)0x40135084)
#define OTP_DATA_RAW_XOR_SW_LOCK34 (*(volatile uint32_t *)0x40135088)
#define OTP_DATA_RAW_XOR_SW_LOCK35 (*(volatile uint32_t *)0x4013508c)
#define OTP_DATA_RAW_XOR_SW_LOCK36 (*(volatile uint32_t *)0x40135090)
#define OTP_DATA_RAW_XOR_SW_LOCK37 (*(volatile uint32_t *)0x40135094)
#define OTP_DATA_RAW_XOR_SW_LOCK38 (*(volatile uint32_t *)0x40135098)
#define OTP_DATA_RAW_XOR_SW_LOCK39 (*(volatile uint32_t *)0x4013509c)
#define OTP_DATA_RAW_XOR_SW_LOCK40 (*(volatile uint32_t *)0x401350a0)
#define OTP_DATA_RAW_XOR_SW_LOCK41 (*(volatile uint32_t *)0x401350a4)
#define OTP_DATA_RAW_XOR_SW_LOCK42 (*(volatile uint32_t *)0x401350a8)
#define OTP_DATA_RAW_XOR_SW_LOCK43 (*(volatile uint32_t *)0x401350ac)
#define OTP_DATA_RAW_XOR_SW_LOCK44 (*(volatile uint32_t *)0x401350b0)
#define OTP_DATA_RAW_XOR_SW_LOCK45 (*(volatile uint32_t *)0x401350b4)
#define OTP_DATA_RAW_XOR_SW_LOCK46 (*(volatile uint32_t *)0x401350b8)
#define OTP_DATA_RAW_XOR_SW_LOCK47 (*(volatile uint32_t *)0x401350bc)
#define OTP_DATA_RAW_XOR_SW_LOCK48 (*(volatile uint32_t *)0x401350c0)
#define OTP_DATA_RAW_XOR_SW_LOCK49 (*(volatile uint32_t *)0x401350c4)
#define OTP_DATA_RAW_XOR_SW_LOCK50 (*(volatile uint32_t *)0x401350c8)
#define OTP_DATA_RAW_XOR_SW_LOCK51 (*(volatile uint32_t *)0x401350cc)
#define OTP_DATA_RAW_XOR_SW_LOCK52 (*(volatile uint32_t *)0x401350d0)
#define OTP_DATA_RAW_XOR_SW_LOCK53 (*(volatile uint32_t *)0x401350d4)
#define OTP_DATA_RAW_XOR_SW_LOCK54 (*(volatile uint32_t *)0x401350d8)
#define OTP_DATA_RAW_XOR_SW_LOCK55 (*(volatile uint32_t *)0x401350dc)
#define OTP_DATA_RAW_XOR_SW_LOCK56 (*(volatile uint32_t *)0x401350e0)
#define OTP_DATA_RAW_XOR_SW_LOCK57 (*(volatile uint32_t *)0x401350e4)
#define OTP_DATA_RAW_XOR_SW_LOCK58 (*(volatile uint32_t *)0x401350e8)
#define OTP_DATA_RAW_XOR_SW_LOCK59 (*(volatile uint32_t *)0x401350ec)
#define OTP_DATA_RAW_XOR_SW_LOCK60 (*(volatile uint32_t *)0x401350f0)
#define OTP_DATA_RAW_XOR_SW_LOCK61 (*(volatile uint32_t *)0x401350f4)
#define OTP_DATA_RAW_XOR_SW_LOCK62 (*(volatile uint32_t *)0x401350f8)
#define OTP_DATA_RAW_XOR_SW_LOCK63 (*(volatile uint32_t *)0x401350fc)
#define OTP_DATA_RAW_XOR_SBPI_INSTR (*(volatile uint32_t *)0x40135100)
#define OTP_DATA_RAW_XOR_SBPI_WDATA_0 (*(volatile uint32_t *)0x40135104)
#define OTP_DATA_RAW_XOR_SBPI_WDATA_1 (*(volatile uint32_t *)0x40135108)
#define OTP_DATA_RAW_XOR_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013510c)
#define OTP_DATA_RAW_XOR_SBPI_WDATA_3 (*(volatile uint32_t *)0x40135110)
#define OTP_DATA_RAW_XOR_SBPI_RDATA_0 (*(volatile uint32_t *)0x40135114)
#define OTP_DATA_RAW_XOR_SBPI_RDATA_1 (*(volatile uint32_t *)0x40135118)
#define OTP_DATA_RAW_XOR_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013511c)
#define OTP_DATA_RAW_XOR_SBPI_RDATA_3 (*(volatile uint32_t *)0x40135120)
#define OTP_DATA_RAW_XOR_SBPI_STATUS (*(volatile uint32_t *)0x40135124)
#define OTP_DATA_RAW_XOR_USR (*(volatile uint32_t *)0x40135128)
#define OTP_DATA_RAW_XOR_DBG (*(volatile uint32_t *)0x4013512c)
#define OTP_DATA_RAW_XOR_BIST (*(volatile uint32_t *)0x40135134)
#define OTP_DATA_RAW_XOR_CRT_KEY_W0 (*(volatile uint32_t *)0x40135138)
#define OTP_DATA_RAW_XOR_CRT_KEY_W1 (*(volatile uint32_t *)0x4013513c)
#define OTP_DATA_RAW_XOR_CRT_KEY_W2 (*(volatile uint32_t *)0x40135140)
#define OTP_DATA_RAW_XOR_CRT_KEY_W3 (*(volatile uint32_t *)0x40135144)
#define OTP_DATA_RAW_XOR_CRITICAL (*(volatile uint32_t *)0x40135148)
#define OTP_DATA_RAW_XOR_KEY_VALID (*(volatile uint32_t *)0x4013514c)
#define OTP_DATA_RAW_XOR_DEBUGEN (*(volatile uint32_t *)0x40135150)
#define OTP_DATA_RAW_XOR_DEBUGEN_LOCK (*(volatile uint32_t *)0x40135154)
#define OTP_DATA_RAW_XOR_ARCHSEL (*(volatile uint32_t *)0x40135158)
#define OTP_DATA_RAW_XOR_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013515c)
#define OTP_DATA_RAW_XOR_BOOTDIS (*(volatile uint32_t *)0x40135160)
#define OTP_DATA_RAW_XOR_INTR (*(volatile uint32_t *)0x40135164)
#define OTP_DATA_RAW_XOR_INTE (*(volatile uint32_t *)0x40135168)
#define OTP_DATA_RAW_XOR_INTF (*(volatile uint32_t *)0x4013516c)
#define OTP_DATA_RAW_XOR_INTS (*(volatile uint32_t *)0x40135170)
#define OTP_DATA_RAW_SET_SW_LOCK0 (*(volatile uint32_t *)0x40136000)
#define OTP_DATA_RAW_SET_SW_LOCK1 (*(volatile uint32_t *)0x40136004)
#define OTP_DATA_RAW_SET_SW_LOCK2 (*(volatile uint32_t *)0x40136008)
#define OTP_DATA_RAW_SET_SW_LOCK3 (*(volatile uint32_t *)0x4013600c)
#define OTP_DATA_RAW_SET_SW_LOCK4 (*(volatile uint32_t *)0x40136010)
#define OTP_DATA_RAW_SET_SW_LOCK5 (*(volatile uint32_t *)0x40136014)
#define OTP_DATA_RAW_SET_SW_LOCK6 (*(volatile uint32_t *)0x40136018)
#define OTP_DATA_RAW_SET_SW_LOCK7 (*(volatile uint32_t *)0x4013601c)
#define OTP_DATA_RAW_SET_SW_LOCK8 (*(volatile uint32_t *)0x40136020)
#define OTP_DATA_RAW_SET_SW_LOCK9 (*(volatile uint32_t *)0x40136024)
#define OTP_DATA_RAW_SET_SW_LOCK10 (*(volatile uint32_t *)0x40136028)
#define OTP_DATA_RAW_SET_SW_LOCK11 (*(volatile uint32_t *)0x4013602c)
#define OTP_DATA_RAW_SET_SW_LOCK12 (*(volatile uint32_t *)0x40136030)
#define OTP_DATA_RAW_SET_SW_LOCK13 (*(volatile uint32_t *)0x40136034)
#define OTP_DATA_RAW_SET_SW_LOCK14 (*(volatile uint32_t *)0x40136038)
#define OTP_DATA_RAW_SET_SW_LOCK15 (*(volatile uint32_t *)0x4013603c)
#define OTP_DATA_RAW_SET_SW_LOCK16 (*(volatile uint32_t *)0x40136040)
#define OTP_DATA_RAW_SET_SW_LOCK17 (*(volatile uint32_t *)0x40136044)
#define OTP_DATA_RAW_SET_SW_LOCK18 (*(volatile uint32_t *)0x40136048)
#define OTP_DATA_RAW_SET_SW_LOCK19 (*(volatile uint32_t *)0x4013604c)
#define OTP_DATA_RAW_SET_SW_LOCK20 (*(volatile uint32_t *)0x40136050)
#define OTP_DATA_RAW_SET_SW_LOCK21 (*(volatile uint32_t *)0x40136054)
#define OTP_DATA_RAW_SET_SW_LOCK22 (*(volatile uint32_t *)0x40136058)
#define OTP_DATA_RAW_SET_SW_LOCK23 (*(volatile uint32_t *)0x4013605c)
#define OTP_DATA_RAW_SET_SW_LOCK24 (*(volatile uint32_t *)0x40136060)
#define OTP_DATA_RAW_SET_SW_LOCK25 (*(volatile uint32_t *)0x40136064)
#define OTP_DATA_RAW_SET_SW_LOCK26 (*(volatile uint32_t *)0x40136068)
#define OTP_DATA_RAW_SET_SW_LOCK27 (*(volatile uint32_t *)0x4013606c)
#define OTP_DATA_RAW_SET_SW_LOCK28 (*(volatile uint32_t *)0x40136070)
#define OTP_DATA_RAW_SET_SW_LOCK29 (*(volatile uint32_t *)0x40136074)
#define OTP_DATA_RAW_SET_SW_LOCK30 (*(volatile uint32_t *)0x40136078)
#define OTP_DATA_RAW_SET_SW_LOCK31 (*(volatile uint32_t *)0x4013607c)
#define OTP_DATA_RAW_SET_SW_LOCK32 (*(volatile uint32_t *)0x40136080)
#define OTP_DATA_RAW_SET_SW_LOCK33 (*(volatile uint32_t *)0x40136084)
#define OTP_DATA_RAW_SET_SW_LOCK34 (*(volatile uint32_t *)0x40136088)
#define OTP_DATA_RAW_SET_SW_LOCK35 (*(volatile uint32_t *)0x4013608c)
#define OTP_DATA_RAW_SET_SW_LOCK36 (*(volatile uint32_t *)0x40136090)
#define OTP_DATA_RAW_SET_SW_LOCK37 (*(volatile uint32_t *)0x40136094)
#define OTP_DATA_RAW_SET_SW_LOCK38 (*(volatile uint32_t *)0x40136098)
#define OTP_DATA_RAW_SET_SW_LOCK39 (*(volatile uint32_t *)0x4013609c)
#define OTP_DATA_RAW_SET_SW_LOCK40 (*(volatile uint32_t *)0x401360a0)
#define OTP_DATA_RAW_SET_SW_LOCK41 (*(volatile uint32_t *)0x401360a4)
#define OTP_DATA_RAW_SET_SW_LOCK42 (*(volatile uint32_t *)0x401360a8)
#define OTP_DATA_RAW_SET_SW_LOCK43 (*(volatile uint32_t *)0x401360ac)
#define OTP_DATA_RAW_SET_SW_LOCK44 (*(volatile uint32_t *)0x401360b0)
#define OTP_DATA_RAW_SET_SW_LOCK45 (*(volatile uint32_t *)0x401360b4)
#define OTP_DATA_RAW_SET_SW_LOCK46 (*(volatile uint32_t *)0x401360b8)
#define OTP_DATA_RAW_SET_SW_LOCK47 (*(volatile uint32_t *)0x401360bc)
#define OTP_DATA_RAW_SET_SW_LOCK48 (*(volatile uint32_t *)0x401360c0)
#define OTP_DATA_RAW_SET_SW_LOCK49 (*(volatile uint32_t *)0x401360c4)
#define OTP_DATA_RAW_SET_SW_LOCK50 (*(volatile uint32_t *)0x401360c8)
#define OTP_DATA_RAW_SET_SW_LOCK51 (*(volatile uint32_t *)0x401360cc)
#define OTP_DATA_RAW_SET_SW_LOCK52 (*(volatile uint32_t *)0x401360d0)
#define OTP_DATA_RAW_SET_SW_LOCK53 (*(volatile uint32_t *)0x401360d4)
#define OTP_DATA_RAW_SET_SW_LOCK54 (*(volatile uint32_t *)0x401360d8)
#define OTP_DATA_RAW_SET_SW_LOCK55 (*(volatile uint32_t *)0x401360dc)
#define OTP_DATA_RAW_SET_SW_LOCK56 (*(volatile uint32_t *)0x401360e0)
#define OTP_DATA_RAW_SET_SW_LOCK57 (*(volatile uint32_t *)0x401360e4)
#define OTP_DATA_RAW_SET_SW_LOCK58 (*(volatile uint32_t *)0x401360e8)
#define OTP_DATA_RAW_SET_SW_LOCK59 (*(volatile uint32_t *)0x401360ec)
#define OTP_DATA_RAW_SET_SW_LOCK60 (*(volatile uint32_t *)0x401360f0)
#define OTP_DATA_RAW_SET_SW_LOCK61 (*(volatile uint32_t *)0x401360f4)
#define OTP_DATA_RAW_SET_SW_LOCK62 (*(volatile uint32_t *)0x401360f8)
#define OTP_DATA_RAW_SET_SW_LOCK63 (*(volatile uint32_t *)0x401360fc)
#define OTP_DATA_RAW_SET_SBPI_INSTR (*(volatile uint32_t *)0x40136100)
#define OTP_DATA_RAW_SET_SBPI_WDATA_0 (*(volatile uint32_t *)0x40136104)
#define OTP_DATA_RAW_SET_SBPI_WDATA_1 (*(volatile uint32_t *)0x40136108)
#define OTP_DATA_RAW_SET_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013610c)
#define OTP_DATA_RAW_SET_SBPI_WDATA_3 (*(volatile uint32_t *)0x40136110)
#define OTP_DATA_RAW_SET_SBPI_RDATA_0 (*(volatile uint32_t *)0x40136114)
#define OTP_DATA_RAW_SET_SBPI_RDATA_1 (*(volatile uint32_t *)0x40136118)
#define OTP_DATA_RAW_SET_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013611c)
#define OTP_DATA_RAW_SET_SBPI_RDATA_3 (*(volatile uint32_t *)0x40136120)
#define OTP_DATA_RAW_SET_SBPI_STATUS (*(volatile uint32_t *)0x40136124)
#define OTP_DATA_RAW_SET_USR (*(volatile uint32_t *)0x40136128)
#define OTP_DATA_RAW_SET_DBG (*(volatile uint32_t *)0x4013612c)
#define OTP_DATA_RAW_SET_BIST (*(volatile uint32_t *)0x40136134)
#define OTP_DATA_RAW_SET_CRT_KEY_W0 (*(volatile uint32_t *)0x40136138)
#define OTP_DATA_RAW_SET_CRT_KEY_W1 (*(volatile uint32_t *)0x4013613c)
#define OTP_DATA_RAW_SET_CRT_KEY_W2 (*(volatile uint32_t *)0x40136140)
#define OTP_DATA_RAW_SET_CRT_KEY_W3 (*(volatile uint32_t *)0x40136144)
#define OTP_DATA_RAW_SET_CRITICAL (*(volatile uint32_t *)0x40136148)
#define OTP_DATA_RAW_SET_KEY_VALID (*(volatile uint32_t *)0x4013614c)
#define OTP_DATA_RAW_SET_DEBUGEN (*(volatile uint32_t *)0x40136150)
#define OTP_DATA_RAW_SET_DEBUGEN_LOCK (*(volatile uint32_t *)0x40136154)
#define OTP_DATA_RAW_SET_ARCHSEL (*(volatile uint32_t *)0x40136158)
#define OTP_DATA_RAW_SET_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013615c)
#define OTP_DATA_RAW_SET_BOOTDIS (*(volatile uint32_t *)0x40136160)
#define OTP_DATA_RAW_SET_INTR (*(volatile uint32_t *)0x40136164)
#define OTP_DATA_RAW_SET_INTE (*(volatile uint32_t *)0x40136168)
#define OTP_DATA_RAW_SET_INTF (*(volatile uint32_t *)0x4013616c)
#define OTP_DATA_RAW_SET_INTS (*(volatile uint32_t *)0x40136170)
#define OTP_DATA_RAW_CLR_SW_LOCK0 (*(volatile uint32_t *)0x40137000)
#define OTP_DATA_RAW_CLR_SW_LOCK1 (*(volatile uint32_t *)0x40137004)
#define OTP_DATA_RAW_CLR_SW_LOCK2 (*(volatile uint32_t *)0x40137008)
#define OTP_DATA_RAW_CLR_SW_LOCK3 (*(volatile uint32_t *)0x4013700c)
#define OTP_DATA_RAW_CLR_SW_LOCK4 (*(volatile uint32_t *)0x40137010)
#define OTP_DATA_RAW_CLR_SW_LOCK5 (*(volatile uint32_t *)0x40137014)
#define OTP_DATA_RAW_CLR_SW_LOCK6 (*(volatile uint32_t *)0x40137018)
#define OTP_DATA_RAW_CLR_SW_LOCK7 (*(volatile uint32_t *)0x4013701c)
#define OTP_DATA_RAW_CLR_SW_LOCK8 (*(volatile uint32_t *)0x40137020)
#define OTP_DATA_RAW_CLR_SW_LOCK9 (*(volatile uint32_t *)0x40137024)
#define OTP_DATA_RAW_CLR_SW_LOCK10 (*(volatile uint32_t *)0x40137028)
#define OTP_DATA_RAW_CLR_SW_LOCK11 (*(volatile uint32_t *)0x4013702c)
#define OTP_DATA_RAW_CLR_SW_LOCK12 (*(volatile uint32_t *)0x40137030)
#define OTP_DATA_RAW_CLR_SW_LOCK13 (*(volatile uint32_t *)0x40137034)
#define OTP_DATA_RAW_CLR_SW_LOCK14 (*(volatile uint32_t *)0x40137038)
#define OTP_DATA_RAW_CLR_SW_LOCK15 (*(volatile uint32_t *)0x4013703c)
#define OTP_DATA_RAW_CLR_SW_LOCK16 (*(volatile uint32_t *)0x40137040)
#define OTP_DATA_RAW_CLR_SW_LOCK17 (*(volatile uint32_t *)0x40137044)
#define OTP_DATA_RAW_CLR_SW_LOCK18 (*(volatile uint32_t *)0x40137048)
#define OTP_DATA_RAW_CLR_SW_LOCK19 (*(volatile uint32_t *)0x4013704c)
#define OTP_DATA_RAW_CLR_SW_LOCK20 (*(volatile uint32_t *)0x40137050)
#define OTP_DATA_RAW_CLR_SW_LOCK21 (*(volatile uint32_t *)0x40137054)
#define OTP_DATA_RAW_CLR_SW_LOCK22 (*(volatile uint32_t *)0x40137058)
#define OTP_DATA_RAW_CLR_SW_LOCK23 (*(volatile uint32_t *)0x4013705c)
#define OTP_DATA_RAW_CLR_SW_LOCK24 (*(volatile uint32_t *)0x40137060)
#define OTP_DATA_RAW_CLR_SW_LOCK25 (*(volatile uint32_t *)0x40137064)
#define OTP_DATA_RAW_CLR_SW_LOCK26 (*(volatile uint32_t *)0x40137068)
#define OTP_DATA_RAW_CLR_SW_LOCK27 (*(volatile uint32_t *)0x4013706c)
#define OTP_DATA_RAW_CLR_SW_LOCK28 (*(volatile uint32_t *)0x40137070)
#define OTP_DATA_RAW_CLR_SW_LOCK29 (*(volatile uint32_t *)0x40137074)
#define OTP_DATA_RAW_CLR_SW_LOCK30 (*(volatile uint32_t *)0x40137078)
#define OTP_DATA_RAW_CLR_SW_LOCK31 (*(volatile uint32_t *)0x4013707c)
#define OTP_DATA_RAW_CLR_SW_LOCK32 (*(volatile uint32_t *)0x40137080)
#define OTP_DATA_RAW_CLR_SW_LOCK33 (*(volatile uint32_t *)0x40137084)
#define OTP_DATA_RAW_CLR_SW_LOCK34 (*(volatile uint32_t *)0x40137088)
#define OTP_DATA_RAW_CLR_SW_LOCK35 (*(volatile uint32_t *)0x4013708c)
#define OTP_DATA_RAW_CLR_SW_LOCK36 (*(volatile uint32_t *)0x40137090)
#define OTP_DATA_RAW_CLR_SW_LOCK37 (*(volatile uint32_t *)0x40137094)
#define OTP_DATA_RAW_CLR_SW_LOCK38 (*(volatile uint32_t *)0x40137098)
#define OTP_DATA_RAW_CLR_SW_LOCK39 (*(volatile uint32_t *)0x4013709c)
#define OTP_DATA_RAW_CLR_SW_LOCK40 (*(volatile uint32_t *)0x401370a0)
#define OTP_DATA_RAW_CLR_SW_LOCK41 (*(volatile uint32_t *)0x401370a4)
#define OTP_DATA_RAW_CLR_SW_LOCK42 (*(volatile uint32_t *)0x401370a8)
#define OTP_DATA_RAW_CLR_SW_LOCK43 (*(volatile uint32_t *)0x401370ac)
#define OTP_DATA_RAW_CLR_SW_LOCK44 (*(volatile uint32_t *)0x401370b0)
#define OTP_DATA_RAW_CLR_SW_LOCK45 (*(volatile uint32_t *)0x401370b4)
#define OTP_DATA_RAW_CLR_SW_LOCK46 (*(volatile uint32_t *)0x401370b8)
#define OTP_DATA_RAW_CLR_SW_LOCK47 (*(volatile uint32_t *)0x401370bc)
#define OTP_DATA_RAW_CLR_SW_LOCK48 (*(volatile uint32_t *)0x401370c0)
#define OTP_DATA_RAW_CLR_SW_LOCK49 (*(volatile uint32_t *)0x401370c4)
#define OTP_DATA_RAW_CLR_SW_LOCK50 (*(volatile uint32_t *)0x401370c8)
#define OTP_DATA_RAW_CLR_SW_LOCK51 (*(volatile uint32_t *)0x401370cc)
#define OTP_DATA_RAW_CLR_SW_LOCK52 (*(volatile uint32_t *)0x401370d0)
#define OTP_DATA_RAW_CLR_SW_LOCK53 (*(volatile uint32_t *)0x401370d4)
#define OTP_DATA_RAW_CLR_SW_LOCK54 (*(volatile uint32_t *)0x401370d8)
#define OTP_DATA_RAW_CLR_SW_LOCK55 (*(volatile uint32_t *)0x401370dc)
#define OTP_DATA_RAW_CLR_SW_LOCK56 (*(volatile uint32_t *)0x401370e0)
#define OTP_DATA_RAW_CLR_SW_LOCK57 (*(volatile uint32_t *)0x401370e4)
#define OTP_DATA_RAW_CLR_SW_LOCK58 (*(volatile uint32_t *)0x401370e8)
#define OTP_DATA_RAW_CLR_SW_LOCK59 (*(volatile uint32_t *)0x401370ec)
#define OTP_DATA_RAW_CLR_SW_LOCK60 (*(volatile uint32_t *)0x401370f0)
#define OTP_DATA_RAW_CLR_SW_LOCK61 (*(volatile uint32_t *)0x401370f4)
#define OTP_DATA_RAW_CLR_SW_LOCK62 (*(volatile uint32_t *)0x401370f8)
#define OTP_DATA_RAW_CLR_SW_LOCK63 (*(volatile uint32_t *)0x401370fc)
#define OTP_DATA_RAW_CLR_SBPI_INSTR (*(volatile uint32_t *)0x40137100)
#define OTP_DATA_RAW_CLR_SBPI_WDATA_0 (*(volatile uint32_t *)0x40137104)
#define OTP_DATA_RAW_CLR_SBPI_WDATA_1 (*(volatile uint32_t *)0x40137108)
#define OTP_DATA_RAW_CLR_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013710c)
#define OTP_DATA_RAW_CLR_SBPI_WDATA_3 (*(volatile uint32_t *)0x40137110)
#define OTP_DATA_RAW_CLR_SBPI_RDATA_0 (*(volatile uint32_t *)0x40137114)
#define OTP_DATA_RAW_CLR_SBPI_RDATA_1 (*(volatile uint32_t *)0x40137118)
#define OTP_DATA_RAW_CLR_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013711c)
#define OTP_DATA_RAW_CLR_SBPI_RDATA_3 (*(volatile uint32_t *)0x40137120)
#define OTP_DATA_RAW_CLR_SBPI_STATUS (*(volatile uint32_t *)0x40137124)
#define OTP_DATA_RAW_CLR_USR (*(volatile uint32_t *)0x40137128)
#define OTP_DATA_RAW_CLR_DBG (*(volatile uint32_t *)0x4013712c)
#define OTP_DATA_RAW_CLR_BIST (*(volatile uint32_t *)0x40137134)
#define OTP_DATA_RAW_CLR_CRT_KEY_W0 (*(volatile uint32_t *)0x40137138)
#define OTP_DATA_RAW_CLR_CRT_KEY_W1 (*(volatile uint32_t *)0x4013713c)
#define OTP_DATA_RAW_CLR_CRT_KEY_W2 (*(volatile uint32_t *)0x40137140)
#define OTP_DATA_RAW_CLR_CRT_KEY_W3 (*(volatile uint32_t *)0x40137144)
#define OTP_DATA_RAW_CLR_CRITICAL (*(volatile uint32_t *)0x40137148)
#define OTP_DATA_RAW_CLR_KEY_VALID (*(volatile uint32_t *)0x4013714c)
#define OTP_DATA_RAW_CLR_DEBUGEN (*(volatile uint32_t *)0x40137150)
#define OTP_DATA_RAW_CLR_DEBUGEN_LOCK (*(volatile uint32_t *)0x40137154)
#define OTP_DATA_RAW_CLR_ARCHSEL (*(volatile uint32_t *)0x40137158)
#define OTP_DATA_RAW_CLR_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013715c)
#define OTP_DATA_RAW_CLR_BOOTDIS (*(volatile uint32_t *)0x40137160)
#define OTP_DATA_RAW_CLR_INTR (*(volatile uint32_t *)0x40137164)
#define OTP_DATA_RAW_CLR_INTE (*(volatile uint32_t *)0x40137168)
#define OTP_DATA_RAW_CLR_INTF (*(volatile uint32_t *)0x4013716c)
#define OTP_DATA_RAW_CLR_INTS (*(volatile uint32_t *)0x40137170)
#define OTP_DATA_GUARDED_SW_LOCK0 (*(volatile uint32_t *)0x40138000)
#define OTP_DATA_GUARDED_SW_LOCK1 (*(volatile uint32_t *)0x40138004)
#define OTP_DATA_GUARDED_SW_LOCK2 (*(volatile uint32_t *)0x40138008)
#define OTP_DATA_GUARDED_SW_LOCK3 (*(volatile uint32_t *)0x4013800c)
#define OTP_DATA_GUARDED_SW_LOCK4 (*(volatile uint32_t *)0x40138010)
#define OTP_DATA_GUARDED_SW_LOCK5 (*(volatile uint32_t *)0x40138014)
#define OTP_DATA_GUARDED_SW_LOCK6 (*(volatile uint32_t *)0x40138018)
#define OTP_DATA_GUARDED_SW_LOCK7 (*(volatile uint32_t *)0x4013801c)
#define OTP_DATA_GUARDED_SW_LOCK8 (*(volatile uint32_t *)0x40138020)
#define OTP_DATA_GUARDED_SW_LOCK9 (*(volatile uint32_t *)0x40138024)
#define OTP_DATA_GUARDED_SW_LOCK10 (*(volatile uint32_t *)0x40138028)
#define OTP_DATA_GUARDED_SW_LOCK11 (*(volatile uint32_t *)0x4013802c)
#define OTP_DATA_GUARDED_SW_LOCK12 (*(volatile uint32_t *)0x40138030)
#define OTP_DATA_GUARDED_SW_LOCK13 (*(volatile uint32_t *)0x40138034)
#define OTP_DATA_GUARDED_SW_LOCK14 (*(volatile uint32_t *)0x40138038)
#define OTP_DATA_GUARDED_SW_LOCK15 (*(volatile uint32_t *)0x4013803c)
#define OTP_DATA_GUARDED_SW_LOCK16 (*(volatile uint32_t *)0x40138040)
#define OTP_DATA_GUARDED_SW_LOCK17 (*(volatile uint32_t *)0x40138044)
#define OTP_DATA_GUARDED_SW_LOCK18 (*(volatile uint32_t *)0x40138048)
#define OTP_DATA_GUARDED_SW_LOCK19 (*(volatile uint32_t *)0x4013804c)
#define OTP_DATA_GUARDED_SW_LOCK20 (*(volatile uint32_t *)0x40138050)
#define OTP_DATA_GUARDED_SW_LOCK21 (*(volatile uint32_t *)0x40138054)
#define OTP_DATA_GUARDED_SW_LOCK22 (*(volatile uint32_t *)0x40138058)
#define OTP_DATA_GUARDED_SW_LOCK23 (*(volatile uint32_t *)0x4013805c)
#define OTP_DATA_GUARDED_SW_LOCK24 (*(volatile uint32_t *)0x40138060)
#define OTP_DATA_GUARDED_SW_LOCK25 (*(volatile uint32_t *)0x40138064)
#define OTP_DATA_GUARDED_SW_LOCK26 (*(volatile uint32_t *)0x40138068)
#define OTP_DATA_GUARDED_SW_LOCK27 (*(volatile uint32_t *)0x4013806c)
#define OTP_DATA_GUARDED_SW_LOCK28 (*(volatile uint32_t *)0x40138070)
#define OTP_DATA_GUARDED_SW_LOCK29 (*(volatile uint32_t *)0x40138074)
#define OTP_DATA_GUARDED_SW_LOCK30 (*(volatile uint32_t *)0x40138078)
#define OTP_DATA_GUARDED_SW_LOCK31 (*(volatile uint32_t *)0x4013807c)
#define OTP_DATA_GUARDED_SW_LOCK32 (*(volatile uint32_t *)0x40138080)
#define OTP_DATA_GUARDED_SW_LOCK33 (*(volatile uint32_t *)0x40138084)
#define OTP_DATA_GUARDED_SW_LOCK34 (*(volatile uint32_t *)0x40138088)
#define OTP_DATA_GUARDED_SW_LOCK35 (*(volatile uint32_t *)0x4013808c)
#define OTP_DATA_GUARDED_SW_LOCK36 (*(volatile uint32_t *)0x40138090)
#define OTP_DATA_GUARDED_SW_LOCK37 (*(volatile uint32_t *)0x40138094)
#define OTP_DATA_GUARDED_SW_LOCK38 (*(volatile uint32_t *)0x40138098)
#define OTP_DATA_GUARDED_SW_LOCK39 (*(volatile uint32_t *)0x4013809c)
#define OTP_DATA_GUARDED_SW_LOCK40 (*(volatile uint32_t *)0x401380a0)
#define OTP_DATA_GUARDED_SW_LOCK41 (*(volatile uint32_t *)0x401380a4)
#define OTP_DATA_GUARDED_SW_LOCK42 (*(volatile uint32_t *)0x401380a8)
#define OTP_DATA_GUARDED_SW_LOCK43 (*(volatile uint32_t *)0x401380ac)
#define OTP_DATA_GUARDED_SW_LOCK44 (*(volatile uint32_t *)0x401380b0)
#define OTP_DATA_GUARDED_SW_LOCK45 (*(volatile uint32_t *)0x401380b4)
#define OTP_DATA_GUARDED_SW_LOCK46 (*(volatile uint32_t *)0x401380b8)
#define OTP_DATA_GUARDED_SW_LOCK47 (*(volatile uint32_t *)0x401380bc)
#define OTP_DATA_GUARDED_SW_LOCK48 (*(volatile uint32_t *)0x401380c0)
#define OTP_DATA_GUARDED_SW_LOCK49 (*(volatile uint32_t *)0x401380c4)
#define OTP_DATA_GUARDED_SW_LOCK50 (*(volatile uint32_t *)0x401380c8)
#define OTP_DATA_GUARDED_SW_LOCK51 (*(volatile uint32_t *)0x401380cc)
#define OTP_DATA_GUARDED_SW_LOCK52 (*(volatile uint32_t *)0x401380d0)
#define OTP_DATA_GUARDED_SW_LOCK53 (*(volatile uint32_t *)0x401380d4)
#define OTP_DATA_GUARDED_SW_LOCK54 (*(volatile uint32_t *)0x401380d8)
#define OTP_DATA_GUARDED_SW_LOCK55 (*(volatile uint32_t *)0x401380dc)
#define OTP_DATA_GUARDED_SW_LOCK56 (*(volatile uint32_t *)0x401380e0)
#define OTP_DATA_GUARDED_SW_LOCK57 (*(volatile uint32_t *)0x401380e4)
#define OTP_DATA_GUARDED_SW_LOCK58 (*(volatile uint32_t *)0x401380e8)
#define OTP_DATA_GUARDED_SW_LOCK59 (*(volatile uint32_t *)0x401380ec)
#define OTP_DATA_GUARDED_SW_LOCK60 (*(volatile uint32_t *)0x401380f0)
#define OTP_DATA_GUARDED_SW_LOCK61 (*(volatile uint32_t *)0x401380f4)
#define OTP_DATA_GUARDED_SW_LOCK62 (*(volatile uint32_t *)0x401380f8)
#define OTP_DATA_GUARDED_SW_LOCK63 (*(volatile uint32_t *)0x401380fc)
#define OTP_DATA_GUARDED_SBPI_INSTR (*(volatile uint32_t *)0x40138100)
#define OTP_DATA_GUARDED_SBPI_WDATA_0 (*(volatile uint32_t *)0x40138104)
#define OTP_DATA_GUARDED_SBPI_WDATA_1 (*(volatile uint32_t *)0x40138108)
#define OTP_DATA_GUARDED_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013810c)
#define OTP_DATA_GUARDED_SBPI_WDATA_3 (*(volatile uint32_t *)0x40138110)
#define OTP_DATA_GUARDED_SBPI_RDATA_0 (*(volatile uint32_t *)0x40138114)
#define OTP_DATA_GUARDED_SBPI_RDATA_1 (*(volatile uint32_t *)0x40138118)
#define OTP_DATA_GUARDED_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013811c)
#define OTP_DATA_GUARDED_SBPI_RDATA_3 (*(volatile uint32_t *)0x40138120)
#define OTP_DATA_GUARDED_SBPI_STATUS (*(volatile uint32_t *)0x40138124)
#define OTP_DATA_GUARDED_USR (*(volatile uint32_t *)0x40138128)
#define OTP_DATA_GUARDED_DBG (*(volatile uint32_t *)0x4013812c)
#define OTP_DATA_GUARDED_BIST (*(volatile uint32_t *)0x40138134)
#define OTP_DATA_GUARDED_CRT_KEY_W0 (*(volatile uint32_t *)0x40138138)
#define OTP_DATA_GUARDED_CRT_KEY_W1 (*(volatile uint32_t *)0x4013813c)
#define OTP_DATA_GUARDED_CRT_KEY_W2 (*(volatile uint32_t *)0x40138140)
#define OTP_DATA_GUARDED_CRT_KEY_W3 (*(volatile uint32_t *)0x40138144)
#define OTP_DATA_GUARDED_CRITICAL (*(volatile uint32_t *)0x40138148)
#define OTP_DATA_GUARDED_KEY_VALID (*(volatile uint32_t *)0x4013814c)
#define OTP_DATA_GUARDED_DEBUGEN (*(volatile uint32_t *)0x40138150)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK (*(volatile uint32_t *)0x40138154)
#define OTP_DATA_GUARDED_ARCHSEL (*(volatile uint32_t *)0x40138158)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013815c)
#define OTP_DATA_GUARDED_BOOTDIS (*(volatile uint32_t *)0x40138160)
#define OTP_DATA_GUARDED_INTR (*(volatile uint32_t *)0x40138164)
#define OTP_DATA_GUARDED_INTE (*(volatile uint32_t *)0x40138168)
#define OTP_DATA_GUARDED_INTF (*(volatile uint32_t *)0x4013816c)
#define OTP_DATA_GUARDED_INTS (*(volatile uint32_t *)0x40138170)
#define OTP_DATA_GUARDED_XOR_SW_LOCK0 (*(volatile uint32_t *)0x40139000)
#define OTP_DATA_GUARDED_XOR_SW_LOCK1 (*(volatile uint32_t *)0x40139004)
#define OTP_DATA_GUARDED_XOR_SW_LOCK2 (*(volatile uint32_t *)0x40139008)
#define OTP_DATA_GUARDED_XOR_SW_LOCK3 (*(volatile uint32_t *)0x4013900c)
#define OTP_DATA_GUARDED_XOR_SW_LOCK4 (*(volatile uint32_t *)0x40139010)
#define OTP_DATA_GUARDED_XOR_SW_LOCK5 (*(volatile uint32_t *)0x40139014)
#define OTP_DATA_GUARDED_XOR_SW_LOCK6 (*(volatile uint32_t *)0x40139018)
#define OTP_DATA_GUARDED_XOR_SW_LOCK7 (*(volatile uint32_t *)0x4013901c)
#define OTP_DATA_GUARDED_XOR_SW_LOCK8 (*(volatile uint32_t *)0x40139020)
#define OTP_DATA_GUARDED_XOR_SW_LOCK9 (*(volatile uint32_t *)0x40139024)
#define OTP_DATA_GUARDED_XOR_SW_LOCK10 (*(volatile uint32_t *)0x40139028)
#define OTP_DATA_GUARDED_XOR_SW_LOCK11 (*(volatile uint32_t *)0x4013902c)
#define OTP_DATA_GUARDED_XOR_SW_LOCK12 (*(volatile uint32_t *)0x40139030)
#define OTP_DATA_GUARDED_XOR_SW_LOCK13 (*(volatile uint32_t *)0x40139034)
#define OTP_DATA_GUARDED_XOR_SW_LOCK14 (*(volatile uint32_t *)0x40139038)
#define OTP_DATA_GUARDED_XOR_SW_LOCK15 (*(volatile uint32_t *)0x4013903c)
#define OTP_DATA_GUARDED_XOR_SW_LOCK16 (*(volatile uint32_t *)0x40139040)
#define OTP_DATA_GUARDED_XOR_SW_LOCK17 (*(volatile uint32_t *)0x40139044)
#define OTP_DATA_GUARDED_XOR_SW_LOCK18 (*(volatile uint32_t *)0x40139048)
#define OTP_DATA_GUARDED_XOR_SW_LOCK19 (*(volatile uint32_t *)0x4013904c)
#define OTP_DATA_GUARDED_XOR_SW_LOCK20 (*(volatile uint32_t *)0x40139050)
#define OTP_DATA_GUARDED_XOR_SW_LOCK21 (*(volatile uint32_t *)0x40139054)
#define OTP_DATA_GUARDED_XOR_SW_LOCK22 (*(volatile uint32_t *)0x40139058)
#define OTP_DATA_GUARDED_XOR_SW_LOCK23 (*(volatile uint32_t *)0x4013905c)
#define OTP_DATA_GUARDED_XOR_SW_LOCK24 (*(volatile uint32_t *)0x40139060)
#define OTP_DATA_GUARDED_XOR_SW_LOCK25 (*(volatile uint32_t *)0x40139064)
#define OTP_DATA_GUARDED_XOR_SW_LOCK26 (*(volatile uint32_t *)0x40139068)
#define OTP_DATA_GUARDED_XOR_SW_LOCK27 (*(volatile uint32_t *)0x4013906c)
#define OTP_DATA_GUARDED_XOR_SW_LOCK28 (*(volatile uint32_t *)0x40139070)
#define OTP_DATA_GUARDED_XOR_SW_LOCK29 (*(volatile uint32_t *)0x40139074)
#define OTP_DATA_GUARDED_XOR_SW_LOCK30 (*(volatile uint32_t *)0x40139078)
#define OTP_DATA_GUARDED_XOR_SW_LOCK31 (*(volatile uint32_t *)0x4013907c)
#define OTP_DATA_GUARDED_XOR_SW_LOCK32 (*(volatile uint32_t *)0x40139080)
#define OTP_DATA_GUARDED_XOR_SW_LOCK33 (*(volatile uint32_t *)0x40139084)
#define OTP_DATA_GUARDED_XOR_SW_LOCK34 (*(volatile uint32_t *)0x40139088)
#define OTP_DATA_GUARDED_XOR_SW_LOCK35 (*(volatile uint32_t *)0x4013908c)
#define OTP_DATA_GUARDED_XOR_SW_LOCK36 (*(volatile uint32_t *)0x40139090)
#define OTP_DATA_GUARDED_XOR_SW_LOCK37 (*(volatile uint32_t *)0x40139094)
#define OTP_DATA_GUARDED_XOR_SW_LOCK38 (*(volatile uint32_t *)0x40139098)
#define OTP_DATA_GUARDED_XOR_SW_LOCK39 (*(volatile uint32_t *)0x4013909c)
#define OTP_DATA_GUARDED_XOR_SW_LOCK40 (*(volatile uint32_t *)0x401390a0)
#define OTP_DATA_GUARDED_XOR_SW_LOCK41 (*(volatile uint32_t *)0x401390a4)
#define OTP_DATA_GUARDED_XOR_SW_LOCK42 (*(volatile uint32_t *)0x401390a8)
#define OTP_DATA_GUARDED_XOR_SW_LOCK43 (*(volatile uint32_t *)0x401390ac)
#define OTP_DATA_GUARDED_XOR_SW_LOCK44 (*(volatile uint32_t *)0x401390b0)
#define OTP_DATA_GUARDED_XOR_SW_LOCK45 (*(volatile uint32_t *)0x401390b4)
#define OTP_DATA_GUARDED_XOR_SW_LOCK46 (*(volatile uint32_t *)0x401390b8)
#define OTP_DATA_GUARDED_XOR_SW_LOCK47 (*(volatile uint32_t *)0x401390bc)
#define OTP_DATA_GUARDED_XOR_SW_LOCK48 (*(volatile uint32_t *)0x401390c0)
#define OTP_DATA_GUARDED_XOR_SW_LOCK49 (*(volatile uint32_t *)0x401390c4)
#define OTP_DATA_GUARDED_XOR_SW_LOCK50 (*(volatile uint32_t *)0x401390c8)
#define OTP_DATA_GUARDED_XOR_SW_LOCK51 (*(volatile uint32_t *)0x401390cc)
#define OTP_DATA_GUARDED_XOR_SW_LOCK52 (*(volatile uint32_t *)0x401390d0)
#define OTP_DATA_GUARDED_XOR_SW_LOCK53 (*(volatile uint32_t *)0x401390d4)
#define OTP_DATA_GUARDED_XOR_SW_LOCK54 (*(volatile uint32_t *)0x401390d8)
#define OTP_DATA_GUARDED_XOR_SW_LOCK55 (*(volatile uint32_t *)0x401390dc)
#define OTP_DATA_GUARDED_XOR_SW_LOCK56 (*(volatile uint32_t *)0x401390e0)
#define OTP_DATA_GUARDED_XOR_SW_LOCK57 (*(volatile uint32_t *)0x401390e4)
#define OTP_DATA_GUARDED_XOR_SW_LOCK58 (*(volatile uint32_t *)0x401390e8)
#define OTP_DATA_GUARDED_XOR_SW_LOCK59 (*(volatile uint32_t *)0x401390ec)
#define OTP_DATA_GUARDED_XOR_SW_LOCK60 (*(volatile uint32_t *)0x401390f0)
#define OTP_DATA_GUARDED_XOR_SW_LOCK61 (*(volatile uint32_t *)0x401390f4)
#define OTP_DATA_GUARDED_XOR_SW_LOCK62 (*(volatile uint32_t *)0x401390f8)
#define OTP_DATA_GUARDED_XOR_SW_LOCK63 (*(volatile uint32_t *)0x401390fc)
#define OTP_DATA_GUARDED_XOR_SBPI_INSTR (*(volatile uint32_t *)0x40139100)
#define OTP_DATA_GUARDED_XOR_SBPI_WDATA_0 (*(volatile uint32_t *)0x40139104)
#define OTP_DATA_GUARDED_XOR_SBPI_WDATA_1 (*(volatile uint32_t *)0x40139108)
#define OTP_DATA_GUARDED_XOR_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013910c)
#define OTP_DATA_GUARDED_XOR_SBPI_WDATA_3 (*(volatile uint32_t *)0x40139110)
#define OTP_DATA_GUARDED_XOR_SBPI_RDATA_0 (*(volatile uint32_t *)0x40139114)
#define OTP_DATA_GUARDED_XOR_SBPI_RDATA_1 (*(volatile uint32_t *)0x40139118)
#define OTP_DATA_GUARDED_XOR_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013911c)
#define OTP_DATA_GUARDED_XOR_SBPI_RDATA_3 (*(volatile uint32_t *)0x40139120)
#define OTP_DATA_GUARDED_XOR_SBPI_STATUS (*(volatile uint32_t *)0x40139124)
#define OTP_DATA_GUARDED_XOR_USR (*(volatile uint32_t *)0x40139128)
#define OTP_DATA_GUARDED_XOR_DBG (*(volatile uint32_t *)0x4013912c)
#define OTP_DATA_GUARDED_XOR_BIST (*(volatile uint32_t *)0x40139134)
#define OTP_DATA_GUARDED_XOR_CRT_KEY_W0 (*(volatile uint32_t *)0x40139138)
#define OTP_DATA_GUARDED_XOR_CRT_KEY_W1 (*(volatile uint32_t *)0x4013913c)
#define OTP_DATA_GUARDED_XOR_CRT_KEY_W2 (*(volatile uint32_t *)0x40139140)
#define OTP_DATA_GUARDED_XOR_CRT_KEY_W3 (*(volatile uint32_t *)0x40139144)
#define OTP_DATA_GUARDED_XOR_CRITICAL (*(volatile uint32_t *)0x40139148)
#define OTP_DATA_GUARDED_XOR_KEY_VALID (*(volatile uint32_t *)0x4013914c)
#define OTP_DATA_GUARDED_XOR_DEBUGEN (*(volatile uint32_t *)0x40139150)
#define OTP_DATA_GUARDED_XOR_DEBUGEN_LOCK (*(volatile uint32_t *)0x40139154)
#define OTP_DATA_GUARDED_XOR_ARCHSEL (*(volatile uint32_t *)0x40139158)
#define OTP_DATA_GUARDED_XOR_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013915c)
#define OTP_DATA_GUARDED_XOR_BOOTDIS (*(volatile uint32_t *)0x40139160)
#define OTP_DATA_GUARDED_XOR_INTR (*(volatile uint32_t *)0x40139164)
#define OTP_DATA_GUARDED_XOR_INTE (*(volatile uint32_t *)0x40139168)
#define OTP_DATA_GUARDED_XOR_INTF (*(volatile uint32_t *)0x4013916c)
#define OTP_DATA_GUARDED_XOR_INTS (*(volatile uint32_t *)0x40139170)
#define OTP_DATA_GUARDED_SET_SW_LOCK0 (*(volatile uint32_t *)0x4013a000)
#define OTP_DATA_GUARDED_SET_SW_LOCK1 (*(volatile uint32_t *)0x4013a004)
#define OTP_DATA_GUARDED_SET_SW_LOCK2 (*(volatile uint32_t *)0x4013a008)
#define OTP_DATA_GUARDED_SET_SW_LOCK3 (*(volatile uint32_t *)0x4013a00c)
#define OTP_DATA_GUARDED_SET_SW_LOCK4 (*(volatile uint32_t *)0x4013a010)
#define OTP_DATA_GUARDED_SET_SW_LOCK5 (*(volatile uint32_t *)0x4013a014)
#define OTP_DATA_GUARDED_SET_SW_LOCK6 (*(volatile uint32_t *)0x4013a018)
#define OTP_DATA_GUARDED_SET_SW_LOCK7 (*(volatile uint32_t *)0x4013a01c)
#define OTP_DATA_GUARDED_SET_SW_LOCK8 (*(volatile uint32_t *)0x4013a020)
#define OTP_DATA_GUARDED_SET_SW_LOCK9 (*(volatile uint32_t *)0x4013a024)
#define OTP_DATA_GUARDED_SET_SW_LOCK10 (*(volatile uint32_t *)0x4013a028)
#define OTP_DATA_GUARDED_SET_SW_LOCK11 (*(volatile uint32_t *)0x4013a02c)
#define OTP_DATA_GUARDED_SET_SW_LOCK12 (*(volatile uint32_t *)0x4013a030)
#define OTP_DATA_GUARDED_SET_SW_LOCK13 (*(volatile uint32_t *)0x4013a034)
#define OTP_DATA_GUARDED_SET_SW_LOCK14 (*(volatile uint32_t *)0x4013a038)
#define OTP_DATA_GUARDED_SET_SW_LOCK15 (*(volatile uint32_t *)0x4013a03c)
#define OTP_DATA_GUARDED_SET_SW_LOCK16 (*(volatile uint32_t *)0x4013a040)
#define OTP_DATA_GUARDED_SET_SW_LOCK17 (*(volatile uint32_t *)0x4013a044)
#define OTP_DATA_GUARDED_SET_SW_LOCK18 (*(volatile uint32_t *)0x4013a048)
#define OTP_DATA_GUARDED_SET_SW_LOCK19 (*(volatile uint32_t *)0x4013a04c)
#define OTP_DATA_GUARDED_SET_SW_LOCK20 (*(volatile uint32_t *)0x4013a050)
#define OTP_DATA_GUARDED_SET_SW_LOCK21 (*(volatile uint32_t *)0x4013a054)
#define OTP_DATA_GUARDED_SET_SW_LOCK22 (*(volatile uint32_t *)0x4013a058)
#define OTP_DATA_GUARDED_SET_SW_LOCK23 (*(volatile uint32_t *)0x4013a05c)
#define OTP_DATA_GUARDED_SET_SW_LOCK24 (*(volatile uint32_t *)0x4013a060)
#define OTP_DATA_GUARDED_SET_SW_LOCK25 (*(volatile uint32_t *)0x4013a064)
#define OTP_DATA_GUARDED_SET_SW_LOCK26 (*(volatile uint32_t *)0x4013a068)
#define OTP_DATA_GUARDED_SET_SW_LOCK27 (*(volatile uint32_t *)0x4013a06c)
#define OTP_DATA_GUARDED_SET_SW_LOCK28 (*(volatile uint32_t *)0x4013a070)
#define OTP_DATA_GUARDED_SET_SW_LOCK29 (*(volatile uint32_t *)0x4013a074)
#define OTP_DATA_GUARDED_SET_SW_LOCK30 (*(volatile uint32_t *)0x4013a078)
#define OTP_DATA_GUARDED_SET_SW_LOCK31 (*(volatile uint32_t *)0x4013a07c)
#define OTP_DATA_GUARDED_SET_SW_LOCK32 (*(volatile uint32_t *)0x4013a080)
#define OTP_DATA_GUARDED_SET_SW_LOCK33 (*(volatile uint32_t *)0x4013a084)
#define OTP_DATA_GUARDED_SET_SW_LOCK34 (*(volatile uint32_t *)0x4013a088)
#define OTP_DATA_GUARDED_SET_SW_LOCK35 (*(volatile uint32_t *)0x4013a08c)
#define OTP_DATA_GUARDED_SET_SW_LOCK36 (*(volatile uint32_t *)0x4013a090)
#define OTP_DATA_GUARDED_SET_SW_LOCK37 (*(volatile uint32_t *)0x4013a094)
#define OTP_DATA_GUARDED_SET_SW_LOCK38 (*(volatile uint32_t *)0x4013a098)
#define OTP_DATA_GUARDED_SET_SW_LOCK39 (*(volatile uint32_t *)0x4013a09c)
#define OTP_DATA_GUARDED_SET_SW_LOCK40 (*(volatile uint32_t *)0x4013a0a0)
#define OTP_DATA_GUARDED_SET_SW_LOCK41 (*(volatile uint32_t *)0x4013a0a4)
#define OTP_DATA_GUARDED_SET_SW_LOCK42 (*(volatile uint32_t *)0x4013a0a8)
#define OTP_DATA_GUARDED_SET_SW_LOCK43 (*(volatile uint32_t *)0x4013a0ac)
#define OTP_DATA_GUARDED_SET_SW_LOCK44 (*(volatile uint32_t *)0x4013a0b0)
#define OTP_DATA_GUARDED_SET_SW_LOCK45 (*(volatile uint32_t *)0x4013a0b4)
#define OTP_DATA_GUARDED_SET_SW_LOCK46 (*(volatile uint32_t *)0x4013a0b8)
#define OTP_DATA_GUARDED_SET_SW_LOCK47 (*(volatile uint32_t *)0x4013a0bc)
#define OTP_DATA_GUARDED_SET_SW_LOCK48 (*(volatile uint32_t *)0x4013a0c0)
#define OTP_DATA_GUARDED_SET_SW_LOCK49 (*(volatile uint32_t *)0x4013a0c4)
#define OTP_DATA_GUARDED_SET_SW_LOCK50 (*(volatile uint32_t *)0x4013a0c8)
#define OTP_DATA_GUARDED_SET_SW_LOCK51 (*(volatile uint32_t *)0x4013a0cc)
#define OTP_DATA_GUARDED_SET_SW_LOCK52 (*(volatile uint32_t *)0x4013a0d0)
#define OTP_DATA_GUARDED_SET_SW_LOCK53 (*(volatile uint32_t *)0x4013a0d4)
#define OTP_DATA_GUARDED_SET_SW_LOCK54 (*(volatile uint32_t *)0x4013a0d8)
#define OTP_DATA_GUARDED_SET_SW_LOCK55 (*(volatile uint32_t *)0x4013a0dc)
#define OTP_DATA_GUARDED_SET_SW_LOCK56 (*(volatile uint32_t *)0x4013a0e0)
#define OTP_DATA_GUARDED_SET_SW_LOCK57 (*(volatile uint32_t *)0x4013a0e4)
#define OTP_DATA_GUARDED_SET_SW_LOCK58 (*(volatile uint32_t *)0x4013a0e8)
#define OTP_DATA_GUARDED_SET_SW_LOCK59 (*(volatile uint32_t *)0x4013a0ec)
#define OTP_DATA_GUARDED_SET_SW_LOCK60 (*(volatile uint32_t *)0x4013a0f0)
#define OTP_DATA_GUARDED_SET_SW_LOCK61 (*(volatile uint32_t *)0x4013a0f4)
#define OTP_DATA_GUARDED_SET_SW_LOCK62 (*(volatile uint32_t *)0x4013a0f8)
#define OTP_DATA_GUARDED_SET_SW_LOCK63 (*(volatile uint32_t *)0x4013a0fc)
#define OTP_DATA_GUARDED_SET_SBPI_INSTR (*(volatile uint32_t *)0x4013a100)
#define OTP_DATA_GUARDED_SET_SBPI_WDATA_0 (*(volatile uint32_t *)0x4013a104)
#define OTP_DATA_GUARDED_SET_SBPI_WDATA_1 (*(volatile uint32_t *)0x4013a108)
#define OTP_DATA_GUARDED_SET_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013a10c)
#define OTP_DATA_GUARDED_SET_SBPI_WDATA_3 (*(volatile uint32_t *)0x4013a110)
#define OTP_DATA_GUARDED_SET_SBPI_RDATA_0 (*(volatile uint32_t *)0x4013a114)
#define OTP_DATA_GUARDED_SET_SBPI_RDATA_1 (*(volatile uint32_t *)0x4013a118)
#define OTP_DATA_GUARDED_SET_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013a11c)
#define OTP_DATA_GUARDED_SET_SBPI_RDATA_3 (*(volatile uint32_t *)0x4013a120)
#define OTP_DATA_GUARDED_SET_SBPI_STATUS (*(volatile uint32_t *)0x4013a124)
#define OTP_DATA_GUARDED_SET_USR (*(volatile uint32_t *)0x4013a128)
#define OTP_DATA_GUARDED_SET_DBG (*(volatile uint32_t *)0x4013a12c)
#define OTP_DATA_GUARDED_SET_BIST (*(volatile uint32_t *)0x4013a134)
#define OTP_DATA_GUARDED_SET_CRT_KEY_W0 (*(volatile uint32_t *)0x4013a138)
#define OTP_DATA_GUARDED_SET_CRT_KEY_W1 (*(volatile uint32_t *)0x4013a13c)
#define OTP_DATA_GUARDED_SET_CRT_KEY_W2 (*(volatile uint32_t *)0x4013a140)
#define OTP_DATA_GUARDED_SET_CRT_KEY_W3 (*(volatile uint32_t *)0x4013a144)
#define OTP_DATA_GUARDED_SET_CRITICAL (*(volatile uint32_t *)0x4013a148)
#define OTP_DATA_GUARDED_SET_KEY_VALID (*(volatile uint32_t *)0x4013a14c)
#define OTP_DATA_GUARDED_SET_DEBUGEN (*(volatile uint32_t *)0x4013a150)
#define OTP_DATA_GUARDED_SET_DEBUGEN_LOCK (*(volatile uint32_t *)0x4013a154)
#define OTP_DATA_GUARDED_SET_ARCHSEL (*(volatile uint32_t *)0x4013a158)
#define OTP_DATA_GUARDED_SET_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013a15c)
#define OTP_DATA_GUARDED_SET_BOOTDIS (*(volatile uint32_t *)0x4013a160)
#define OTP_DATA_GUARDED_SET_INTR (*(volatile uint32_t *)0x4013a164)
#define OTP_DATA_GUARDED_SET_INTE (*(volatile uint32_t *)0x4013a168)
#define OTP_DATA_GUARDED_SET_INTF (*(volatile uint32_t *)0x4013a16c)
#define OTP_DATA_GUARDED_SET_INTS (*(volatile uint32_t *)0x4013a170)
#define OTP_DATA_GUARDED_CLR_SW_LOCK0 (*(volatile uint32_t *)0x4013b000)
#define OTP_DATA_GUARDED_CLR_SW_LOCK1 (*(volatile uint32_t *)0x4013b004)
#define OTP_DATA_GUARDED_CLR_SW_LOCK2 (*(volatile uint32_t *)0x4013b008)
#define OTP_DATA_GUARDED_CLR_SW_LOCK3 (*(volatile uint32_t *)0x4013b00c)
#define OTP_DATA_GUARDED_CLR_SW_LOCK4 (*(volatile uint32_t *)0x4013b010)
#define OTP_DATA_GUARDED_CLR_SW_LOCK5 (*(volatile uint32_t *)0x4013b014)
#define OTP_DATA_GUARDED_CLR_SW_LOCK6 (*(volatile uint32_t *)0x4013b018)
#define OTP_DATA_GUARDED_CLR_SW_LOCK7 (*(volatile uint32_t *)0x4013b01c)
#define OTP_DATA_GUARDED_CLR_SW_LOCK8 (*(volatile uint32_t *)0x4013b020)
#define OTP_DATA_GUARDED_CLR_SW_LOCK9 (*(volatile uint32_t *)0x4013b024)
#define OTP_DATA_GUARDED_CLR_SW_LOCK10 (*(volatile uint32_t *)0x4013b028)
#define OTP_DATA_GUARDED_CLR_SW_LOCK11 (*(volatile uint32_t *)0x4013b02c)
#define OTP_DATA_GUARDED_CLR_SW_LOCK12 (*(volatile uint32_t *)0x4013b030)
#define OTP_DATA_GUARDED_CLR_SW_LOCK13 (*(volatile uint32_t *)0x4013b034)
#define OTP_DATA_GUARDED_CLR_SW_LOCK14 (*(volatile uint32_t *)0x4013b038)
#define OTP_DATA_GUARDED_CLR_SW_LOCK15 (*(volatile uint32_t *)0x4013b03c)
#define OTP_DATA_GUARDED_CLR_SW_LOCK16 (*(volatile uint32_t *)0x4013b040)
#define OTP_DATA_GUARDED_CLR_SW_LOCK17 (*(volatile uint32_t *)0x4013b044)
#define OTP_DATA_GUARDED_CLR_SW_LOCK18 (*(volatile uint32_t *)0x4013b048)
#define OTP_DATA_GUARDED_CLR_SW_LOCK19 (*(volatile uint32_t *)0x4013b04c)
#define OTP_DATA_GUARDED_CLR_SW_LOCK20 (*(volatile uint32_t *)0x4013b050)
#define OTP_DATA_GUARDED_CLR_SW_LOCK21 (*(volatile uint32_t *)0x4013b054)
#define OTP_DATA_GUARDED_CLR_SW_LOCK22 (*(volatile uint32_t *)0x4013b058)
#define OTP_DATA_GUARDED_CLR_SW_LOCK23 (*(volatile uint32_t *)0x4013b05c)
#define OTP_DATA_GUARDED_CLR_SW_LOCK24 (*(volatile uint32_t *)0x4013b060)
#define OTP_DATA_GUARDED_CLR_SW_LOCK25 (*(volatile uint32_t *)0x4013b064)
#define OTP_DATA_GUARDED_CLR_SW_LOCK26 (*(volatile uint32_t *)0x4013b068)
#define OTP_DATA_GUARDED_CLR_SW_LOCK27 (*(volatile uint32_t *)0x4013b06c)
#define OTP_DATA_GUARDED_CLR_SW_LOCK28 (*(volatile uint32_t *)0x4013b070)
#define OTP_DATA_GUARDED_CLR_SW_LOCK29 (*(volatile uint32_t *)0x4013b074)
#define OTP_DATA_GUARDED_CLR_SW_LOCK30 (*(volatile uint32_t *)0x4013b078)
#define OTP_DATA_GUARDED_CLR_SW_LOCK31 (*(volatile uint32_t *)0x4013b07c)
#define OTP_DATA_GUARDED_CLR_SW_LOCK32 (*(volatile uint32_t *)0x4013b080)
#define OTP_DATA_GUARDED_CLR_SW_LOCK33 (*(volatile uint32_t *)0x4013b084)
#define OTP_DATA_GUARDED_CLR_SW_LOCK34 (*(volatile uint32_t *)0x4013b088)
#define OTP_DATA_GUARDED_CLR_SW_LOCK35 (*(volatile uint32_t *)0x4013b08c)
#define OTP_DATA_GUARDED_CLR_SW_LOCK36 (*(volatile uint32_t *)0x4013b090)
#define OTP_DATA_GUARDED_CLR_SW_LOCK37 (*(volatile uint32_t *)0x4013b094)
#define OTP_DATA_GUARDED_CLR_SW_LOCK38 (*(volatile uint32_t *)0x4013b098)
#define OTP_DATA_GUARDED_CLR_SW_LOCK39 (*(volatile uint32_t *)0x4013b09c)
#define OTP_DATA_GUARDED_CLR_SW_LOCK40 (*(volatile uint32_t *)0x4013b0a0)
#define OTP_DATA_GUARDED_CLR_SW_LOCK41 (*(volatile uint32_t *)0x4013b0a4)
#define OTP_DATA_GUARDED_CLR_SW_LOCK42 (*(volatile uint32_t *)0x4013b0a8)
#define OTP_DATA_GUARDED_CLR_SW_LOCK43 (*(volatile uint32_t *)0x4013b0ac)
#define OTP_DATA_GUARDED_CLR_SW_LOCK44 (*(volatile uint32_t *)0x4013b0b0)
#define OTP_DATA_GUARDED_CLR_SW_LOCK45 (*(volatile uint32_t *)0x4013b0b4)
#define OTP_DATA_GUARDED_CLR_SW_LOCK46 (*(volatile uint32_t *)0x4013b0b8)
#define OTP_DATA_GUARDED_CLR_SW_LOCK47 (*(volatile uint32_t *)0x4013b0bc)
#define OTP_DATA_GUARDED_CLR_SW_LOCK48 (*(volatile uint32_t *)0x4013b0c0)
#define OTP_DATA_GUARDED_CLR_SW_LOCK49 (*(volatile uint32_t *)0x4013b0c4)
#define OTP_DATA_GUARDED_CLR_SW_LOCK50 (*(volatile uint32_t *)0x4013b0c8)
#define OTP_DATA_GUARDED_CLR_SW_LOCK51 (*(volatile uint32_t *)0x4013b0cc)
#define OTP_DATA_GUARDED_CLR_SW_LOCK52 (*(volatile uint32_t *)0x4013b0d0)
#define OTP_DATA_GUARDED_CLR_SW_LOCK53 (*(volatile uint32_t *)0x4013b0d4)
#define OTP_DATA_GUARDED_CLR_SW_LOCK54 (*(volatile uint32_t *)0x4013b0d8)
#define OTP_DATA_GUARDED_CLR_SW_LOCK55 (*(volatile uint32_t *)0x4013b0dc)
#define OTP_DATA_GUARDED_CLR_SW_LOCK56 (*(volatile uint32_t *)0x4013b0e0)
#define OTP_DATA_GUARDED_CLR_SW_LOCK57 (*(volatile uint32_t *)0x4013b0e4)
#define OTP_DATA_GUARDED_CLR_SW_LOCK58 (*(volatile uint32_t *)0x4013b0e8)
#define OTP_DATA_GUARDED_CLR_SW_LOCK59 (*(volatile uint32_t *)0x4013b0ec)
#define OTP_DATA_GUARDED_CLR_SW_LOCK60 (*(volatile uint32_t *)0x4013b0f0)
#define OTP_DATA_GUARDED_CLR_SW_LOCK61 (*(volatile uint32_t *)0x4013b0f4)
#define OTP_DATA_GUARDED_CLR_SW_LOCK62 (*(volatile uint32_t *)0x4013b0f8)
#define OTP_DATA_GUARDED_CLR_SW_LOCK63 (*(volatile uint32_t *)0x4013b0fc)
#define OTP_DATA_GUARDED_CLR_SBPI_INSTR (*(volatile uint32_t *)0x4013b100)
#define OTP_DATA_GUARDED_CLR_SBPI_WDATA_0 (*(volatile uint32_t *)0x4013b104)
#define OTP_DATA_GUARDED_CLR_SBPI_WDATA_1 (*(volatile uint32_t *)0x4013b108)
#define OTP_DATA_GUARDED_CLR_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013b10c)
#define OTP_DATA_GUARDED_CLR_SBPI_WDATA_3 (*(volatile uint32_t *)0x4013b110)
#define OTP_DATA_GUARDED_CLR_SBPI_RDATA_0 (*(volatile uint32_t *)0x4013b114)
#define OTP_DATA_GUARDED_CLR_SBPI_RDATA_1 (*(volatile uint32_t *)0x4013b118)
#define OTP_DATA_GUARDED_CLR_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013b11c)
#define OTP_DATA_GUARDED_CLR_SBPI_RDATA_3 (*(volatile uint32_t *)0x4013b120)
#define OTP_DATA_GUARDED_CLR_SBPI_STATUS (*(volatile uint32_t *)0x4013b124)
#define OTP_DATA_GUARDED_CLR_USR (*(volatile uint32_t *)0x4013b128)
#define OTP_DATA_GUARDED_CLR_DBG (*(volatile uint32_t *)0x4013b12c)
#define OTP_DATA_GUARDED_CLR_BIST (*(volatile uint32_t *)0x4013b134)
#define OTP_DATA_GUARDED_CLR_CRT_KEY_W0 (*(volatile uint32_t *)0x4013b138)
#define OTP_DATA_GUARDED_CLR_CRT_KEY_W1 (*(volatile uint32_t *)0x4013b13c)
#define OTP_DATA_GUARDED_CLR_CRT_KEY_W2 (*(volatile uint32_t *)0x4013b140)
#define OTP_DATA_GUARDED_CLR_CRT_KEY_W3 (*(volatile uint32_t *)0x4013b144)
#define OTP_DATA_GUARDED_CLR_CRITICAL (*(volatile uint32_t *)0x4013b148)
#define OTP_DATA_GUARDED_CLR_KEY_VALID (*(volatile uint32_t *)0x4013b14c)
#define OTP_DATA_GUARDED_CLR_DEBUGEN (*(volatile uint32_t *)0x4013b150)
#define OTP_DATA_GUARDED_CLR_DEBUGEN_LOCK (*(volatile uint32_t *)0x4013b154)
#define OTP_DATA_GUARDED_CLR_ARCHSEL (*(volatile uint32_t *)0x4013b158)
#define OTP_DATA_GUARDED_CLR_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013b15c)
#define OTP_DATA_GUARDED_CLR_BOOTDIS (*(volatile uint32_t *)0x4013b160)
#define OTP_DATA_GUARDED_CLR_INTR (*(volatile uint32_t *)0x4013b164)
#define OTP_DATA_GUARDED_CLR_INTE (*(volatile uint32_t *)0x4013b168)
#define OTP_DATA_GUARDED_CLR_INTF (*(volatile uint32_t *)0x4013b16c)
#define OTP_DATA_GUARDED_CLR_INTS (*(volatile uint32_t *)0x4013b170)
#define OTP_DATA_RAW_GUARDED_SW_LOCK0 (*(volatile uint32_t *)0x4013c000)
#define OTP_DATA_RAW_GUARDED_SW_LOCK1 (*(volatile uint32_t *)0x4013c004)
#define OTP_DATA_RAW_GUARDED_SW_LOCK2 (*(volatile uint32_t *)0x4013c008)
#define OTP_DATA_RAW_GUARDED_SW_LOCK3 (*(volatile uint32_t *)0x4013c00c)
#define OTP_DATA_RAW_GUARDED_SW_LOCK4 (*(volatile uint32_t *)0x4013c010)
#define OTP_DATA_RAW_GUARDED_SW_LOCK5 (*(volatile uint32_t *)0x4013c014)
#define OTP_DATA_RAW_GUARDED_SW_LOCK6 (*(volatile uint32_t *)0x4013c018)
#define OTP_DATA_RAW_GUARDED_SW_LOCK7 (*(volatile uint32_t *)0x4013c01c)
#define OTP_DATA_RAW_GUARDED_SW_LOCK8 (*(volatile uint32_t *)0x4013c020)
#define OTP_DATA_RAW_GUARDED_SW_LOCK9 (*(volatile uint32_t *)0x4013c024)
#define OTP_DATA_RAW_GUARDED_SW_LOCK10 (*(volatile uint32_t *)0x4013c028)
#define OTP_DATA_RAW_GUARDED_SW_LOCK11 (*(volatile uint32_t *)0x4013c02c)
#define OTP_DATA_RAW_GUARDED_SW_LOCK12 (*(volatile uint32_t *)0x4013c030)
#define OTP_DATA_RAW_GUARDED_SW_LOCK13 (*(volatile uint32_t *)0x4013c034)
#define OTP_DATA_RAW_GUARDED_SW_LOCK14 (*(volatile uint32_t *)0x4013c038)
#define OTP_DATA_RAW_GUARDED_SW_LOCK15 (*(volatile uint32_t *)0x4013c03c)
#define OTP_DATA_RAW_GUARDED_SW_LOCK16 (*(volatile uint32_t *)0x4013c040)
#define OTP_DATA_RAW_GUARDED_SW_LOCK17 (*(volatile uint32_t *)0x4013c044)
#define OTP_DATA_RAW_GUARDED_SW_LOCK18 (*(volatile uint32_t *)0x4013c048)
#define OTP_DATA_RAW_GUARDED_SW_LOCK19 (*(volatile uint32_t *)0x4013c04c)
#define OTP_DATA_RAW_GUARDED_SW_LOCK20 (*(volatile uint32_t *)0x4013c050)
#define OTP_DATA_RAW_GUARDED_SW_LOCK21 (*(volatile uint32_t *)0x4013c054)
#define OTP_DATA_RAW_GUARDED_SW_LOCK22 (*(volatile uint32_t *)0x4013c058)
#define OTP_DATA_RAW_GUARDED_SW_LOCK23 (*(volatile uint32_t *)0x4013c05c)
#define OTP_DATA_RAW_GUARDED_SW_LOCK24 (*(volatile uint32_t *)0x4013c060)
#define OTP_DATA_RAW_GUARDED_SW_LOCK25 (*(volatile uint32_t *)0x4013c064)
#define OTP_DATA_RAW_GUARDED_SW_LOCK26 (*(volatile uint32_t *)0x4013c068)
#define OTP_DATA_RAW_GUARDED_SW_LOCK27 (*(volatile uint32_t *)0x4013c06c)
#define OTP_DATA_RAW_GUARDED_SW_LOCK28 (*(volatile uint32_t *)0x4013c070)
#define OTP_DATA_RAW_GUARDED_SW_LOCK29 (*(volatile uint32_t *)0x4013c074)
#define OTP_DATA_RAW_GUARDED_SW_LOCK30 (*(volatile uint32_t *)0x4013c078)
#define OTP_DATA_RAW_GUARDED_SW_LOCK31 (*(volatile uint32_t *)0x4013c07c)
#define OTP_DATA_RAW_GUARDED_SW_LOCK32 (*(volatile uint32_t *)0x4013c080)
#define OTP_DATA_RAW_GUARDED_SW_LOCK33 (*(volatile uint32_t *)0x4013c084)
#define OTP_DATA_RAW_GUARDED_SW_LOCK34 (*(volatile uint32_t *)0x4013c088)
#define OTP_DATA_RAW_GUARDED_SW_LOCK35 (*(volatile uint32_t *)0x4013c08c)
#define OTP_DATA_RAW_GUARDED_SW_LOCK36 (*(volatile uint32_t *)0x4013c090)
#define OTP_DATA_RAW_GUARDED_SW_LOCK37 (*(volatile uint32_t *)0x4013c094)
#define OTP_DATA_RAW_GUARDED_SW_LOCK38 (*(volatile uint32_t *)0x4013c098)
#define OTP_DATA_RAW_GUARDED_SW_LOCK39 (*(volatile uint32_t *)0x4013c09c)
#define OTP_DATA_RAW_GUARDED_SW_LOCK40 (*(volatile uint32_t *)0x4013c0a0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK41 (*(volatile uint32_t *)0x4013c0a4)
#define OTP_DATA_RAW_GUARDED_SW_LOCK42 (*(volatile uint32_t *)0x4013c0a8)
#define OTP_DATA_RAW_GUARDED_SW_LOCK43 (*(volatile uint32_t *)0x4013c0ac)
#define OTP_DATA_RAW_GUARDED_SW_LOCK44 (*(volatile uint32_t *)0x4013c0b0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK45 (*(volatile uint32_t *)0x4013c0b4)
#define OTP_DATA_RAW_GUARDED_SW_LOCK46 (*(volatile uint32_t *)0x4013c0b8)
#define OTP_DATA_RAW_GUARDED_SW_LOCK47 (*(volatile uint32_t *)0x4013c0bc)
#define OTP_DATA_RAW_GUARDED_SW_LOCK48 (*(volatile uint32_t *)0x4013c0c0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK49 (*(volatile uint32_t *)0x4013c0c4)
#define OTP_DATA_RAW_GUARDED_SW_LOCK50 (*(volatile uint32_t *)0x4013c0c8)
#define OTP_DATA_RAW_GUARDED_SW_LOCK51 (*(volatile uint32_t *)0x4013c0cc)
#define OTP_DATA_RAW_GUARDED_SW_LOCK52 (*(volatile uint32_t *)0x4013c0d0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK53 (*(volatile uint32_t *)0x4013c0d4)
#define OTP_DATA_RAW_GUARDED_SW_LOCK54 (*(volatile uint32_t *)0x4013c0d8)
#define OTP_DATA_RAW_GUARDED_SW_LOCK55 (*(volatile uint32_t *)0x4013c0dc)
#define OTP_DATA_RAW_GUARDED_SW_LOCK56 (*(volatile uint32_t *)0x4013c0e0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK57 (*(volatile uint32_t *)0x4013c0e4)
#define OTP_DATA_RAW_GUARDED_SW_LOCK58 (*(volatile uint32_t *)0x4013c0e8)
#define OTP_DATA_RAW_GUARDED_SW_LOCK59 (*(volatile uint32_t *)0x4013c0ec)
#define OTP_DATA_RAW_GUARDED_SW_LOCK60 (*(volatile uint32_t *)0x4013c0f0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK61 (*(volatile uint32_t *)0x4013c0f4)
#define OTP_DATA_RAW_GUARDED_SW_LOCK62 (*(volatile uint32_t *)0x4013c0f8)
#define OTP_DATA_RAW_GUARDED_SW_LOCK63 (*(volatile uint32_t *)0x4013c0fc)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR (*(volatile uint32_t *)0x4013c100)
#define OTP_DATA_RAW_GUARDED_SBPI_WDATA_0 (*(volatile uint32_t *)0x4013c104)
#define OTP_DATA_RAW_GUARDED_SBPI_WDATA_1 (*(volatile uint32_t *)0x4013c108)
#define OTP_DATA_RAW_GUARDED_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013c10c)
#define OTP_DATA_RAW_GUARDED_SBPI_WDATA_3 (*(volatile uint32_t *)0x4013c110)
#define OTP_DATA_RAW_GUARDED_SBPI_RDATA_0 (*(volatile uint32_t *)0x4013c114)
#define OTP_DATA_RAW_GUARDED_SBPI_RDATA_1 (*(volatile uint32_t *)0x4013c118)
#define OTP_DATA_RAW_GUARDED_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013c11c)
#define OTP_DATA_RAW_GUARDED_SBPI_RDATA_3 (*(volatile uint32_t *)0x4013c120)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS (*(volatile uint32_t *)0x4013c124)
#define OTP_DATA_RAW_GUARDED_USR (*(volatile uint32_t *)0x4013c128)
#define OTP_DATA_RAW_GUARDED_DBG (*(volatile uint32_t *)0x4013c12c)
#define OTP_DATA_RAW_GUARDED_BIST (*(volatile uint32_t *)0x4013c134)
#define OTP_DATA_RAW_GUARDED_CRT_KEY_W0 (*(volatile uint32_t *)0x4013c138)
#define OTP_DATA_RAW_GUARDED_CRT_KEY_W1 (*(volatile uint32_t *)0x4013c13c)
#define OTP_DATA_RAW_GUARDED_CRT_KEY_W2 (*(volatile uint32_t *)0x4013c140)
#define OTP_DATA_RAW_GUARDED_CRT_KEY_W3 (*(volatile uint32_t *)0x4013c144)
#define OTP_DATA_RAW_GUARDED_CRITICAL (*(volatile uint32_t *)0x4013c148)
#define OTP_DATA_RAW_GUARDED_KEY_VALID (*(volatile uint32_t *)0x4013c14c)
#define OTP_DATA_RAW_GUARDED_DEBUGEN (*(volatile uint32_t *)0x4013c150)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK (*(volatile uint32_t *)0x4013c154)
#define OTP_DATA_RAW_GUARDED_ARCHSEL (*(volatile uint32_t *)0x4013c158)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013c15c)
#define OTP_DATA_RAW_GUARDED_BOOTDIS (*(volatile uint32_t *)0x4013c160)
#define OTP_DATA_RAW_GUARDED_INTR (*(volatile uint32_t *)0x4013c164)
#define OTP_DATA_RAW_GUARDED_INTE (*(volatile uint32_t *)0x4013c168)
#define OTP_DATA_RAW_GUARDED_INTF (*(volatile uint32_t *)0x4013c16c)
#define OTP_DATA_RAW_GUARDED_INTS (*(volatile uint32_t *)0x4013c170)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK0 (*(volatile uint32_t *)0x4013d000)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK1 (*(volatile uint32_t *)0x4013d004)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK2 (*(volatile uint32_t *)0x4013d008)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK3 (*(volatile uint32_t *)0x4013d00c)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK4 (*(volatile uint32_t *)0x4013d010)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK5 (*(volatile uint32_t *)0x4013d014)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK6 (*(volatile uint32_t *)0x4013d018)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK7 (*(volatile uint32_t *)0x4013d01c)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK8 (*(volatile uint32_t *)0x4013d020)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK9 (*(volatile uint32_t *)0x4013d024)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK10 (*(volatile uint32_t *)0x4013d028)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK11 (*(volatile uint32_t *)0x4013d02c)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK12 (*(volatile uint32_t *)0x4013d030)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK13 (*(volatile uint32_t *)0x4013d034)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK14 (*(volatile uint32_t *)0x4013d038)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK15 (*(volatile uint32_t *)0x4013d03c)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK16 (*(volatile uint32_t *)0x4013d040)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK17 (*(volatile uint32_t *)0x4013d044)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK18 (*(volatile uint32_t *)0x4013d048)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK19 (*(volatile uint32_t *)0x4013d04c)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK20 (*(volatile uint32_t *)0x4013d050)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK21 (*(volatile uint32_t *)0x4013d054)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK22 (*(volatile uint32_t *)0x4013d058)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK23 (*(volatile uint32_t *)0x4013d05c)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK24 (*(volatile uint32_t *)0x4013d060)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK25 (*(volatile uint32_t *)0x4013d064)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK26 (*(volatile uint32_t *)0x4013d068)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK27 (*(volatile uint32_t *)0x4013d06c)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK28 (*(volatile uint32_t *)0x4013d070)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK29 (*(volatile uint32_t *)0x4013d074)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK30 (*(volatile uint32_t *)0x4013d078)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK31 (*(volatile uint32_t *)0x4013d07c)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK32 (*(volatile uint32_t *)0x4013d080)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK33 (*(volatile uint32_t *)0x4013d084)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK34 (*(volatile uint32_t *)0x4013d088)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK35 (*(volatile uint32_t *)0x4013d08c)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK36 (*(volatile uint32_t *)0x4013d090)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK37 (*(volatile uint32_t *)0x4013d094)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK38 (*(volatile uint32_t *)0x4013d098)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK39 (*(volatile uint32_t *)0x4013d09c)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK40 (*(volatile uint32_t *)0x4013d0a0)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK41 (*(volatile uint32_t *)0x4013d0a4)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK42 (*(volatile uint32_t *)0x4013d0a8)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK43 (*(volatile uint32_t *)0x4013d0ac)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK44 (*(volatile uint32_t *)0x4013d0b0)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK45 (*(volatile uint32_t *)0x4013d0b4)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK46 (*(volatile uint32_t *)0x4013d0b8)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK47 (*(volatile uint32_t *)0x4013d0bc)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK48 (*(volatile uint32_t *)0x4013d0c0)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK49 (*(volatile uint32_t *)0x4013d0c4)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK50 (*(volatile uint32_t *)0x4013d0c8)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK51 (*(volatile uint32_t *)0x4013d0cc)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK52 (*(volatile uint32_t *)0x4013d0d0)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK53 (*(volatile uint32_t *)0x4013d0d4)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK54 (*(volatile uint32_t *)0x4013d0d8)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK55 (*(volatile uint32_t *)0x4013d0dc)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK56 (*(volatile uint32_t *)0x4013d0e0)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK57 (*(volatile uint32_t *)0x4013d0e4)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK58 (*(volatile uint32_t *)0x4013d0e8)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK59 (*(volatile uint32_t *)0x4013d0ec)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK60 (*(volatile uint32_t *)0x4013d0f0)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK61 (*(volatile uint32_t *)0x4013d0f4)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK62 (*(volatile uint32_t *)0x4013d0f8)
#define OTP_DATA_RAW_GUARDED_XOR_SW_LOCK63 (*(volatile uint32_t *)0x4013d0fc)
#define OTP_DATA_RAW_GUARDED_XOR_SBPI_INSTR (*(volatile uint32_t *)0x4013d100)
#define OTP_DATA_RAW_GUARDED_XOR_SBPI_WDATA_0 (*(volatile uint32_t *)0x4013d104)
#define OTP_DATA_RAW_GUARDED_XOR_SBPI_WDATA_1 (*(volatile uint32_t *)0x4013d108)
#define OTP_DATA_RAW_GUARDED_XOR_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013d10c)
#define OTP_DATA_RAW_GUARDED_XOR_SBPI_WDATA_3 (*(volatile uint32_t *)0x4013d110)
#define OTP_DATA_RAW_GUARDED_XOR_SBPI_RDATA_0 (*(volatile uint32_t *)0x4013d114)
#define OTP_DATA_RAW_GUARDED_XOR_SBPI_RDATA_1 (*(volatile uint32_t *)0x4013d118)
#define OTP_DATA_RAW_GUARDED_XOR_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013d11c)
#define OTP_DATA_RAW_GUARDED_XOR_SBPI_RDATA_3 (*(volatile uint32_t *)0x4013d120)
#define OTP_DATA_RAW_GUARDED_XOR_SBPI_STATUS (*(volatile uint32_t *)0x4013d124)
#define OTP_DATA_RAW_GUARDED_XOR_USR (*(volatile uint32_t *)0x4013d128)
#define OTP_DATA_RAW_GUARDED_XOR_DBG (*(volatile uint32_t *)0x4013d12c)
#define OTP_DATA_RAW_GUARDED_XOR_BIST (*(volatile uint32_t *)0x4013d134)
#define OTP_DATA_RAW_GUARDED_XOR_CRT_KEY_W0 (*(volatile uint32_t *)0x4013d138)
#define OTP_DATA_RAW_GUARDED_XOR_CRT_KEY_W1 (*(volatile uint32_t *)0x4013d13c)
#define OTP_DATA_RAW_GUARDED_XOR_CRT_KEY_W2 (*(volatile uint32_t *)0x4013d140)
#define OTP_DATA_RAW_GUARDED_XOR_CRT_KEY_W3 (*(volatile uint32_t *)0x4013d144)
#define OTP_DATA_RAW_GUARDED_XOR_CRITICAL (*(volatile uint32_t *)0x4013d148)
#define OTP_DATA_RAW_GUARDED_XOR_KEY_VALID (*(volatile uint32_t *)0x4013d14c)
#define OTP_DATA_RAW_GUARDED_XOR_DEBUGEN (*(volatile uint32_t *)0x4013d150)
#define OTP_DATA_RAW_GUARDED_XOR_DEBUGEN_LOCK (*(volatile uint32_t *)0x4013d154)
#define OTP_DATA_RAW_GUARDED_XOR_ARCHSEL (*(volatile uint32_t *)0x4013d158)
#define OTP_DATA_RAW_GUARDED_XOR_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013d15c)
#define OTP_DATA_RAW_GUARDED_XOR_BOOTDIS (*(volatile uint32_t *)0x4013d160)
#define OTP_DATA_RAW_GUARDED_XOR_INTR (*(volatile uint32_t *)0x4013d164)
#define OTP_DATA_RAW_GUARDED_XOR_INTE (*(volatile uint32_t *)0x4013d168)
#define OTP_DATA_RAW_GUARDED_XOR_INTF (*(volatile uint32_t *)0x4013d16c)
#define OTP_DATA_RAW_GUARDED_XOR_INTS (*(volatile uint32_t *)0x4013d170)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK0 (*(volatile uint32_t *)0x4013e000)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK1 (*(volatile uint32_t *)0x4013e004)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK2 (*(volatile uint32_t *)0x4013e008)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK3 (*(volatile uint32_t *)0x4013e00c)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK4 (*(volatile uint32_t *)0x4013e010)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK5 (*(volatile uint32_t *)0x4013e014)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK6 (*(volatile uint32_t *)0x4013e018)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK7 (*(volatile uint32_t *)0x4013e01c)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK8 (*(volatile uint32_t *)0x4013e020)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK9 (*(volatile uint32_t *)0x4013e024)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK10 (*(volatile uint32_t *)0x4013e028)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK11 (*(volatile uint32_t *)0x4013e02c)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK12 (*(volatile uint32_t *)0x4013e030)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK13 (*(volatile uint32_t *)0x4013e034)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK14 (*(volatile uint32_t *)0x4013e038)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK15 (*(volatile uint32_t *)0x4013e03c)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK16 (*(volatile uint32_t *)0x4013e040)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK17 (*(volatile uint32_t *)0x4013e044)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK18 (*(volatile uint32_t *)0x4013e048)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK19 (*(volatile uint32_t *)0x4013e04c)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK20 (*(volatile uint32_t *)0x4013e050)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK21 (*(volatile uint32_t *)0x4013e054)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK22 (*(volatile uint32_t *)0x4013e058)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK23 (*(volatile uint32_t *)0x4013e05c)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK24 (*(volatile uint32_t *)0x4013e060)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK25 (*(volatile uint32_t *)0x4013e064)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK26 (*(volatile uint32_t *)0x4013e068)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK27 (*(volatile uint32_t *)0x4013e06c)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK28 (*(volatile uint32_t *)0x4013e070)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK29 (*(volatile uint32_t *)0x4013e074)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK30 (*(volatile uint32_t *)0x4013e078)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK31 (*(volatile uint32_t *)0x4013e07c)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK32 (*(volatile uint32_t *)0x4013e080)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK33 (*(volatile uint32_t *)0x4013e084)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK34 (*(volatile uint32_t *)0x4013e088)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK35 (*(volatile uint32_t *)0x4013e08c)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK36 (*(volatile uint32_t *)0x4013e090)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK37 (*(volatile uint32_t *)0x4013e094)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK38 (*(volatile uint32_t *)0x4013e098)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK39 (*(volatile uint32_t *)0x4013e09c)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK40 (*(volatile uint32_t *)0x4013e0a0)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK41 (*(volatile uint32_t *)0x4013e0a4)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK42 (*(volatile uint32_t *)0x4013e0a8)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK43 (*(volatile uint32_t *)0x4013e0ac)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK44 (*(volatile uint32_t *)0x4013e0b0)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK45 (*(volatile uint32_t *)0x4013e0b4)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK46 (*(volatile uint32_t *)0x4013e0b8)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK47 (*(volatile uint32_t *)0x4013e0bc)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK48 (*(volatile uint32_t *)0x4013e0c0)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK49 (*(volatile uint32_t *)0x4013e0c4)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK50 (*(volatile uint32_t *)0x4013e0c8)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK51 (*(volatile uint32_t *)0x4013e0cc)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK52 (*(volatile uint32_t *)0x4013e0d0)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK53 (*(volatile uint32_t *)0x4013e0d4)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK54 (*(volatile uint32_t *)0x4013e0d8)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK55 (*(volatile uint32_t *)0x4013e0dc)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK56 (*(volatile uint32_t *)0x4013e0e0)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK57 (*(volatile uint32_t *)0x4013e0e4)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK58 (*(volatile uint32_t *)0x4013e0e8)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK59 (*(volatile uint32_t *)0x4013e0ec)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK60 (*(volatile uint32_t *)0x4013e0f0)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK61 (*(volatile uint32_t *)0x4013e0f4)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK62 (*(volatile uint32_t *)0x4013e0f8)
#define OTP_DATA_RAW_GUARDED_SET_SW_LOCK63 (*(volatile uint32_t *)0x4013e0fc)
#define OTP_DATA_RAW_GUARDED_SET_SBPI_INSTR (*(volatile uint32_t *)0x4013e100)
#define OTP_DATA_RAW_GUARDED_SET_SBPI_WDATA_0 (*(volatile uint32_t *)0x4013e104)
#define OTP_DATA_RAW_GUARDED_SET_SBPI_WDATA_1 (*(volatile uint32_t *)0x4013e108)
#define OTP_DATA_RAW_GUARDED_SET_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013e10c)
#define OTP_DATA_RAW_GUARDED_SET_SBPI_WDATA_3 (*(volatile uint32_t *)0x4013e110)
#define OTP_DATA_RAW_GUARDED_SET_SBPI_RDATA_0 (*(volatile uint32_t *)0x4013e114)
#define OTP_DATA_RAW_GUARDED_SET_SBPI_RDATA_1 (*(volatile uint32_t *)0x4013e118)
#define OTP_DATA_RAW_GUARDED_SET_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013e11c)
#define OTP_DATA_RAW_GUARDED_SET_SBPI_RDATA_3 (*(volatile uint32_t *)0x4013e120)
#define OTP_DATA_RAW_GUARDED_SET_SBPI_STATUS (*(volatile uint32_t *)0x4013e124)
#define OTP_DATA_RAW_GUARDED_SET_USR (*(volatile uint32_t *)0x4013e128)
#define OTP_DATA_RAW_GUARDED_SET_DBG (*(volatile uint32_t *)0x4013e12c)
#define OTP_DATA_RAW_GUARDED_SET_BIST (*(volatile uint32_t *)0x4013e134)
#define OTP_DATA_RAW_GUARDED_SET_CRT_KEY_W0 (*(volatile uint32_t *)0x4013e138)
#define OTP_DATA_RAW_GUARDED_SET_CRT_KEY_W1 (*(volatile uint32_t *)0x4013e13c)
#define OTP_DATA_RAW_GUARDED_SET_CRT_KEY_W2 (*(volatile uint32_t *)0x4013e140)
#define OTP_DATA_RAW_GUARDED_SET_CRT_KEY_W3 (*(volatile uint32_t *)0x4013e144)
#define OTP_DATA_RAW_GUARDED_SET_CRITICAL (*(volatile uint32_t *)0x4013e148)
#define OTP_DATA_RAW_GUARDED_SET_KEY_VALID (*(volatile uint32_t *)0x4013e14c)
#define OTP_DATA_RAW_GUARDED_SET_DEBUGEN (*(volatile uint32_t *)0x4013e150)
#define OTP_DATA_RAW_GUARDED_SET_DEBUGEN_LOCK (*(volatile uint32_t *)0x4013e154)
#define OTP_DATA_RAW_GUARDED_SET_ARCHSEL (*(volatile uint32_t *)0x4013e158)
#define OTP_DATA_RAW_GUARDED_SET_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013e15c)
#define OTP_DATA_RAW_GUARDED_SET_BOOTDIS (*(volatile uint32_t *)0x4013e160)
#define OTP_DATA_RAW_GUARDED_SET_INTR (*(volatile uint32_t *)0x4013e164)
#define OTP_DATA_RAW_GUARDED_SET_INTE (*(volatile uint32_t *)0x4013e168)
#define OTP_DATA_RAW_GUARDED_SET_INTF (*(volatile uint32_t *)0x4013e16c)
#define OTP_DATA_RAW_GUARDED_SET_INTS (*(volatile uint32_t *)0x4013e170)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK0 (*(volatile uint32_t *)0x4013f000)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK1 (*(volatile uint32_t *)0x4013f004)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK2 (*(volatile uint32_t *)0x4013f008)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK3 (*(volatile uint32_t *)0x4013f00c)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK4 (*(volatile uint32_t *)0x4013f010)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK5 (*(volatile uint32_t *)0x4013f014)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK6 (*(volatile uint32_t *)0x4013f018)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK7 (*(volatile uint32_t *)0x4013f01c)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK8 (*(volatile uint32_t *)0x4013f020)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK9 (*(volatile uint32_t *)0x4013f024)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK10 (*(volatile uint32_t *)0x4013f028)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK11 (*(volatile uint32_t *)0x4013f02c)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK12 (*(volatile uint32_t *)0x4013f030)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK13 (*(volatile uint32_t *)0x4013f034)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK14 (*(volatile uint32_t *)0x4013f038)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK15 (*(volatile uint32_t *)0x4013f03c)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK16 (*(volatile uint32_t *)0x4013f040)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK17 (*(volatile uint32_t *)0x4013f044)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK18 (*(volatile uint32_t *)0x4013f048)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK19 (*(volatile uint32_t *)0x4013f04c)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK20 (*(volatile uint32_t *)0x4013f050)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK21 (*(volatile uint32_t *)0x4013f054)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK22 (*(volatile uint32_t *)0x4013f058)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK23 (*(volatile uint32_t *)0x4013f05c)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK24 (*(volatile uint32_t *)0x4013f060)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK25 (*(volatile uint32_t *)0x4013f064)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK26 (*(volatile uint32_t *)0x4013f068)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK27 (*(volatile uint32_t *)0x4013f06c)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK28 (*(volatile uint32_t *)0x4013f070)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK29 (*(volatile uint32_t *)0x4013f074)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK30 (*(volatile uint32_t *)0x4013f078)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK31 (*(volatile uint32_t *)0x4013f07c)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK32 (*(volatile uint32_t *)0x4013f080)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK33 (*(volatile uint32_t *)0x4013f084)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK34 (*(volatile uint32_t *)0x4013f088)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK35 (*(volatile uint32_t *)0x4013f08c)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK36 (*(volatile uint32_t *)0x4013f090)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK37 (*(volatile uint32_t *)0x4013f094)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK38 (*(volatile uint32_t *)0x4013f098)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK39 (*(volatile uint32_t *)0x4013f09c)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK40 (*(volatile uint32_t *)0x4013f0a0)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK41 (*(volatile uint32_t *)0x4013f0a4)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK42 (*(volatile uint32_t *)0x4013f0a8)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK43 (*(volatile uint32_t *)0x4013f0ac)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK44 (*(volatile uint32_t *)0x4013f0b0)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK45 (*(volatile uint32_t *)0x4013f0b4)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK46 (*(volatile uint32_t *)0x4013f0b8)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK47 (*(volatile uint32_t *)0x4013f0bc)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK48 (*(volatile uint32_t *)0x4013f0c0)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK49 (*(volatile uint32_t *)0x4013f0c4)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK50 (*(volatile uint32_t *)0x4013f0c8)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK51 (*(volatile uint32_t *)0x4013f0cc)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK52 (*(volatile uint32_t *)0x4013f0d0)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK53 (*(volatile uint32_t *)0x4013f0d4)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK54 (*(volatile uint32_t *)0x4013f0d8)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK55 (*(volatile uint32_t *)0x4013f0dc)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK56 (*(volatile uint32_t *)0x4013f0e0)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK57 (*(volatile uint32_t *)0x4013f0e4)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK58 (*(volatile uint32_t *)0x4013f0e8)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK59 (*(volatile uint32_t *)0x4013f0ec)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK60 (*(volatile uint32_t *)0x4013f0f0)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK61 (*(volatile uint32_t *)0x4013f0f4)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK62 (*(volatile uint32_t *)0x4013f0f8)
#define OTP_DATA_RAW_GUARDED_CLR_SW_LOCK63 (*(volatile uint32_t *)0x4013f0fc)
#define OTP_DATA_RAW_GUARDED_CLR_SBPI_INSTR (*(volatile uint32_t *)0x4013f100)
#define OTP_DATA_RAW_GUARDED_CLR_SBPI_WDATA_0 (*(volatile uint32_t *)0x4013f104)
#define OTP_DATA_RAW_GUARDED_CLR_SBPI_WDATA_1 (*(volatile uint32_t *)0x4013f108)
#define OTP_DATA_RAW_GUARDED_CLR_SBPI_WDATA_2 (*(volatile uint32_t *)0x4013f10c)
#define OTP_DATA_RAW_GUARDED_CLR_SBPI_WDATA_3 (*(volatile uint32_t *)0x4013f110)
#define OTP_DATA_RAW_GUARDED_CLR_SBPI_RDATA_0 (*(volatile uint32_t *)0x4013f114)
#define OTP_DATA_RAW_GUARDED_CLR_SBPI_RDATA_1 (*(volatile uint32_t *)0x4013f118)
#define OTP_DATA_RAW_GUARDED_CLR_SBPI_RDATA_2 (*(volatile uint32_t *)0x4013f11c)
#define OTP_DATA_RAW_GUARDED_CLR_SBPI_RDATA_3 (*(volatile uint32_t *)0x4013f120)
#define OTP_DATA_RAW_GUARDED_CLR_SBPI_STATUS (*(volatile uint32_t *)0x4013f124)
#define OTP_DATA_RAW_GUARDED_CLR_USR (*(volatile uint32_t *)0x4013f128)
#define OTP_DATA_RAW_GUARDED_CLR_DBG (*(volatile uint32_t *)0x4013f12c)
#define OTP_DATA_RAW_GUARDED_CLR_BIST (*(volatile uint32_t *)0x4013f134)
#define OTP_DATA_RAW_GUARDED_CLR_CRT_KEY_W0 (*(volatile uint32_t *)0x4013f138)
#define OTP_DATA_RAW_GUARDED_CLR_CRT_KEY_W1 (*(volatile uint32_t *)0x4013f13c)
#define OTP_DATA_RAW_GUARDED_CLR_CRT_KEY_W2 (*(volatile uint32_t *)0x4013f140)
#define OTP_DATA_RAW_GUARDED_CLR_CRT_KEY_W3 (*(volatile uint32_t *)0x4013f144)
#define OTP_DATA_RAW_GUARDED_CLR_CRITICAL (*(volatile uint32_t *)0x4013f148)
#define OTP_DATA_RAW_GUARDED_CLR_KEY_VALID (*(volatile uint32_t *)0x4013f14c)
#define OTP_DATA_RAW_GUARDED_CLR_DEBUGEN (*(volatile uint32_t *)0x4013f150)
#define OTP_DATA_RAW_GUARDED_CLR_DEBUGEN_LOCK (*(volatile uint32_t *)0x4013f154)
#define OTP_DATA_RAW_GUARDED_CLR_ARCHSEL (*(volatile uint32_t *)0x4013f158)
#define OTP_DATA_RAW_GUARDED_CLR_ARCHSEL_STATUS (*(volatile uint32_t *)0x4013f15c)
#define OTP_DATA_RAW_GUARDED_CLR_BOOTDIS (*(volatile uint32_t *)0x4013f160)
#define OTP_DATA_RAW_GUARDED_CLR_INTR (*(volatile uint32_t *)0x4013f164)
#define OTP_DATA_RAW_GUARDED_CLR_INTE (*(volatile uint32_t *)0x4013f168)
#define OTP_DATA_RAW_GUARDED_CLR_INTF (*(volatile uint32_t *)0x4013f16c)
#define OTP_DATA_RAW_GUARDED_CLR_INTS (*(volatile uint32_t *)0x4013f170)

/*SW_LOCK0 Register macros*/

#define OTP_SW_LOCK0_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK0_NSEC_MASK OTP_SW_LOCK0_NSEC(ALL1)
#define OTP_SW_LOCK0_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK0_SEC_MASK OTP_SW_LOCK0_SEC(ALL1)

/*SW_LOCK1 Register macros*/

#define OTP_SW_LOCK1_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK1_NSEC_MASK OTP_SW_LOCK1_NSEC(ALL1)
#define OTP_SW_LOCK1_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK1_SEC_MASK OTP_SW_LOCK1_SEC(ALL1)

/*SW_LOCK2 Register macros*/

#define OTP_SW_LOCK2_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK2_NSEC_MASK OTP_SW_LOCK2_NSEC(ALL1)
#define OTP_SW_LOCK2_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK2_SEC_MASK OTP_SW_LOCK2_SEC(ALL1)

/*SW_LOCK3 Register macros*/

#define OTP_SW_LOCK3_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK3_NSEC_MASK OTP_SW_LOCK3_NSEC(ALL1)
#define OTP_SW_LOCK3_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK3_SEC_MASK OTP_SW_LOCK3_SEC(ALL1)

/*SW_LOCK4 Register macros*/

#define OTP_SW_LOCK4_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK4_NSEC_MASK OTP_SW_LOCK4_NSEC(ALL1)
#define OTP_SW_LOCK4_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK4_SEC_MASK OTP_SW_LOCK4_SEC(ALL1)

/*SW_LOCK5 Register macros*/

#define OTP_SW_LOCK5_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK5_NSEC_MASK OTP_SW_LOCK5_NSEC(ALL1)
#define OTP_SW_LOCK5_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK5_SEC_MASK OTP_SW_LOCK5_SEC(ALL1)

/*SW_LOCK6 Register macros*/

#define OTP_SW_LOCK6_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK6_NSEC_MASK OTP_SW_LOCK6_NSEC(ALL1)
#define OTP_SW_LOCK6_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK6_SEC_MASK OTP_SW_LOCK6_SEC(ALL1)

/*SW_LOCK7 Register macros*/

#define OTP_SW_LOCK7_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK7_NSEC_MASK OTP_SW_LOCK7_NSEC(ALL1)
#define OTP_SW_LOCK7_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK7_SEC_MASK OTP_SW_LOCK7_SEC(ALL1)

/*SW_LOCK8 Register macros*/

#define OTP_SW_LOCK8_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK8_NSEC_MASK OTP_SW_LOCK8_NSEC(ALL1)
#define OTP_SW_LOCK8_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK8_SEC_MASK OTP_SW_LOCK8_SEC(ALL1)

/*SW_LOCK9 Register macros*/

#define OTP_SW_LOCK9_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK9_NSEC_MASK OTP_SW_LOCK9_NSEC(ALL1)
#define OTP_SW_LOCK9_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK9_SEC_MASK OTP_SW_LOCK9_SEC(ALL1)

/*SW_LOCK10 Register macros*/

#define OTP_SW_LOCK10_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK10_NSEC_MASK OTP_SW_LOCK10_NSEC(ALL1)
#define OTP_SW_LOCK10_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK10_SEC_MASK OTP_SW_LOCK10_SEC(ALL1)

/*SW_LOCK11 Register macros*/

#define OTP_SW_LOCK11_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK11_NSEC_MASK OTP_SW_LOCK11_NSEC(ALL1)
#define OTP_SW_LOCK11_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK11_SEC_MASK OTP_SW_LOCK11_SEC(ALL1)

/*SW_LOCK12 Register macros*/

#define OTP_SW_LOCK12_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK12_NSEC_MASK OTP_SW_LOCK12_NSEC(ALL1)
#define OTP_SW_LOCK12_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK12_SEC_MASK OTP_SW_LOCK12_SEC(ALL1)

/*SW_LOCK13 Register macros*/

#define OTP_SW_LOCK13_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK13_NSEC_MASK OTP_SW_LOCK13_NSEC(ALL1)
#define OTP_SW_LOCK13_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK13_SEC_MASK OTP_SW_LOCK13_SEC(ALL1)

/*SW_LOCK14 Register macros*/

#define OTP_SW_LOCK14_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK14_NSEC_MASK OTP_SW_LOCK14_NSEC(ALL1)
#define OTP_SW_LOCK14_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK14_SEC_MASK OTP_SW_LOCK14_SEC(ALL1)

/*SW_LOCK15 Register macros*/

#define OTP_SW_LOCK15_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK15_NSEC_MASK OTP_SW_LOCK15_NSEC(ALL1)
#define OTP_SW_LOCK15_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK15_SEC_MASK OTP_SW_LOCK15_SEC(ALL1)

/*SW_LOCK16 Register macros*/

#define OTP_SW_LOCK16_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK16_NSEC_MASK OTP_SW_LOCK16_NSEC(ALL1)
#define OTP_SW_LOCK16_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK16_SEC_MASK OTP_SW_LOCK16_SEC(ALL1)

/*SW_LOCK17 Register macros*/

#define OTP_SW_LOCK17_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK17_NSEC_MASK OTP_SW_LOCK17_NSEC(ALL1)
#define OTP_SW_LOCK17_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK17_SEC_MASK OTP_SW_LOCK17_SEC(ALL1)

/*SW_LOCK18 Register macros*/

#define OTP_SW_LOCK18_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK18_NSEC_MASK OTP_SW_LOCK18_NSEC(ALL1)
#define OTP_SW_LOCK18_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK18_SEC_MASK OTP_SW_LOCK18_SEC(ALL1)

/*SW_LOCK19 Register macros*/

#define OTP_SW_LOCK19_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK19_NSEC_MASK OTP_SW_LOCK19_NSEC(ALL1)
#define OTP_SW_LOCK19_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK19_SEC_MASK OTP_SW_LOCK19_SEC(ALL1)

/*SW_LOCK20 Register macros*/

#define OTP_SW_LOCK20_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK20_NSEC_MASK OTP_SW_LOCK20_NSEC(ALL1)
#define OTP_SW_LOCK20_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK20_SEC_MASK OTP_SW_LOCK20_SEC(ALL1)

/*SW_LOCK21 Register macros*/

#define OTP_SW_LOCK21_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK21_NSEC_MASK OTP_SW_LOCK21_NSEC(ALL1)
#define OTP_SW_LOCK21_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK21_SEC_MASK OTP_SW_LOCK21_SEC(ALL1)

/*SW_LOCK22 Register macros*/

#define OTP_SW_LOCK22_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK22_NSEC_MASK OTP_SW_LOCK22_NSEC(ALL1)
#define OTP_SW_LOCK22_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK22_SEC_MASK OTP_SW_LOCK22_SEC(ALL1)

/*SW_LOCK23 Register macros*/

#define OTP_SW_LOCK23_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK23_NSEC_MASK OTP_SW_LOCK23_NSEC(ALL1)
#define OTP_SW_LOCK23_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK23_SEC_MASK OTP_SW_LOCK23_SEC(ALL1)

/*SW_LOCK24 Register macros*/

#define OTP_SW_LOCK24_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK24_NSEC_MASK OTP_SW_LOCK24_NSEC(ALL1)
#define OTP_SW_LOCK24_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK24_SEC_MASK OTP_SW_LOCK24_SEC(ALL1)

/*SW_LOCK25 Register macros*/

#define OTP_SW_LOCK25_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK25_NSEC_MASK OTP_SW_LOCK25_NSEC(ALL1)
#define OTP_SW_LOCK25_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK25_SEC_MASK OTP_SW_LOCK25_SEC(ALL1)

/*SW_LOCK26 Register macros*/

#define OTP_SW_LOCK26_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK26_NSEC_MASK OTP_SW_LOCK26_NSEC(ALL1)
#define OTP_SW_LOCK26_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK26_SEC_MASK OTP_SW_LOCK26_SEC(ALL1)

/*SW_LOCK27 Register macros*/

#define OTP_SW_LOCK27_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK27_NSEC_MASK OTP_SW_LOCK27_NSEC(ALL1)
#define OTP_SW_LOCK27_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK27_SEC_MASK OTP_SW_LOCK27_SEC(ALL1)

/*SW_LOCK28 Register macros*/

#define OTP_SW_LOCK28_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK28_NSEC_MASK OTP_SW_LOCK28_NSEC(ALL1)
#define OTP_SW_LOCK28_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK28_SEC_MASK OTP_SW_LOCK28_SEC(ALL1)

/*SW_LOCK29 Register macros*/

#define OTP_SW_LOCK29_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK29_NSEC_MASK OTP_SW_LOCK29_NSEC(ALL1)
#define OTP_SW_LOCK29_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK29_SEC_MASK OTP_SW_LOCK29_SEC(ALL1)

/*SW_LOCK30 Register macros*/

#define OTP_SW_LOCK30_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK30_NSEC_MASK OTP_SW_LOCK30_NSEC(ALL1)
#define OTP_SW_LOCK30_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK30_SEC_MASK OTP_SW_LOCK30_SEC(ALL1)

/*SW_LOCK31 Register macros*/

#define OTP_SW_LOCK31_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK31_NSEC_MASK OTP_SW_LOCK31_NSEC(ALL1)
#define OTP_SW_LOCK31_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK31_SEC_MASK OTP_SW_LOCK31_SEC(ALL1)

/*SW_LOCK32 Register macros*/

#define OTP_SW_LOCK32_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK32_NSEC_MASK OTP_SW_LOCK32_NSEC(ALL1)
#define OTP_SW_LOCK32_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK32_SEC_MASK OTP_SW_LOCK32_SEC(ALL1)

/*SW_LOCK33 Register macros*/

#define OTP_SW_LOCK33_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK33_NSEC_MASK OTP_SW_LOCK33_NSEC(ALL1)
#define OTP_SW_LOCK33_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK33_SEC_MASK OTP_SW_LOCK33_SEC(ALL1)

/*SW_LOCK34 Register macros*/

#define OTP_SW_LOCK34_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK34_NSEC_MASK OTP_SW_LOCK34_NSEC(ALL1)
#define OTP_SW_LOCK34_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK34_SEC_MASK OTP_SW_LOCK34_SEC(ALL1)

/*SW_LOCK35 Register macros*/

#define OTP_SW_LOCK35_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK35_NSEC_MASK OTP_SW_LOCK35_NSEC(ALL1)
#define OTP_SW_LOCK35_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK35_SEC_MASK OTP_SW_LOCK35_SEC(ALL1)

/*SW_LOCK36 Register macros*/

#define OTP_SW_LOCK36_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK36_NSEC_MASK OTP_SW_LOCK36_NSEC(ALL1)
#define OTP_SW_LOCK36_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK36_SEC_MASK OTP_SW_LOCK36_SEC(ALL1)

/*SW_LOCK37 Register macros*/

#define OTP_SW_LOCK37_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK37_NSEC_MASK OTP_SW_LOCK37_NSEC(ALL1)
#define OTP_SW_LOCK37_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK37_SEC_MASK OTP_SW_LOCK37_SEC(ALL1)

/*SW_LOCK38 Register macros*/

#define OTP_SW_LOCK38_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK38_NSEC_MASK OTP_SW_LOCK38_NSEC(ALL1)
#define OTP_SW_LOCK38_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK38_SEC_MASK OTP_SW_LOCK38_SEC(ALL1)

/*SW_LOCK39 Register macros*/

#define OTP_SW_LOCK39_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK39_NSEC_MASK OTP_SW_LOCK39_NSEC(ALL1)
#define OTP_SW_LOCK39_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK39_SEC_MASK OTP_SW_LOCK39_SEC(ALL1)

/*SW_LOCK40 Register macros*/

#define OTP_SW_LOCK40_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK40_NSEC_MASK OTP_SW_LOCK40_NSEC(ALL1)
#define OTP_SW_LOCK40_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK40_SEC_MASK OTP_SW_LOCK40_SEC(ALL1)

/*SW_LOCK41 Register macros*/

#define OTP_SW_LOCK41_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK41_NSEC_MASK OTP_SW_LOCK41_NSEC(ALL1)
#define OTP_SW_LOCK41_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK41_SEC_MASK OTP_SW_LOCK41_SEC(ALL1)

/*SW_LOCK42 Register macros*/

#define OTP_SW_LOCK42_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK42_NSEC_MASK OTP_SW_LOCK42_NSEC(ALL1)
#define OTP_SW_LOCK42_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK42_SEC_MASK OTP_SW_LOCK42_SEC(ALL1)

/*SW_LOCK43 Register macros*/

#define OTP_SW_LOCK43_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK43_NSEC_MASK OTP_SW_LOCK43_NSEC(ALL1)
#define OTP_SW_LOCK43_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK43_SEC_MASK OTP_SW_LOCK43_SEC(ALL1)

/*SW_LOCK44 Register macros*/

#define OTP_SW_LOCK44_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK44_NSEC_MASK OTP_SW_LOCK44_NSEC(ALL1)
#define OTP_SW_LOCK44_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK44_SEC_MASK OTP_SW_LOCK44_SEC(ALL1)

/*SW_LOCK45 Register macros*/

#define OTP_SW_LOCK45_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK45_NSEC_MASK OTP_SW_LOCK45_NSEC(ALL1)
#define OTP_SW_LOCK45_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK45_SEC_MASK OTP_SW_LOCK45_SEC(ALL1)

/*SW_LOCK46 Register macros*/

#define OTP_SW_LOCK46_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK46_NSEC_MASK OTP_SW_LOCK46_NSEC(ALL1)
#define OTP_SW_LOCK46_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK46_SEC_MASK OTP_SW_LOCK46_SEC(ALL1)

/*SW_LOCK47 Register macros*/

#define OTP_SW_LOCK47_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK47_NSEC_MASK OTP_SW_LOCK47_NSEC(ALL1)
#define OTP_SW_LOCK47_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK47_SEC_MASK OTP_SW_LOCK47_SEC(ALL1)

/*SW_LOCK48 Register macros*/

#define OTP_SW_LOCK48_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK48_NSEC_MASK OTP_SW_LOCK48_NSEC(ALL1)
#define OTP_SW_LOCK48_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK48_SEC_MASK OTP_SW_LOCK48_SEC(ALL1)

/*SW_LOCK49 Register macros*/

#define OTP_SW_LOCK49_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK49_NSEC_MASK OTP_SW_LOCK49_NSEC(ALL1)
#define OTP_SW_LOCK49_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK49_SEC_MASK OTP_SW_LOCK49_SEC(ALL1)

/*SW_LOCK50 Register macros*/

#define OTP_SW_LOCK50_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK50_NSEC_MASK OTP_SW_LOCK50_NSEC(ALL1)
#define OTP_SW_LOCK50_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK50_SEC_MASK OTP_SW_LOCK50_SEC(ALL1)

/*SW_LOCK51 Register macros*/

#define OTP_SW_LOCK51_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK51_NSEC_MASK OTP_SW_LOCK51_NSEC(ALL1)
#define OTP_SW_LOCK51_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK51_SEC_MASK OTP_SW_LOCK51_SEC(ALL1)

/*SW_LOCK52 Register macros*/

#define OTP_SW_LOCK52_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK52_NSEC_MASK OTP_SW_LOCK52_NSEC(ALL1)
#define OTP_SW_LOCK52_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK52_SEC_MASK OTP_SW_LOCK52_SEC(ALL1)

/*SW_LOCK53 Register macros*/

#define OTP_SW_LOCK53_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK53_NSEC_MASK OTP_SW_LOCK53_NSEC(ALL1)
#define OTP_SW_LOCK53_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK53_SEC_MASK OTP_SW_LOCK53_SEC(ALL1)

/*SW_LOCK54 Register macros*/

#define OTP_SW_LOCK54_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK54_NSEC_MASK OTP_SW_LOCK54_NSEC(ALL1)
#define OTP_SW_LOCK54_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK54_SEC_MASK OTP_SW_LOCK54_SEC(ALL1)

/*SW_LOCK55 Register macros*/

#define OTP_SW_LOCK55_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK55_NSEC_MASK OTP_SW_LOCK55_NSEC(ALL1)
#define OTP_SW_LOCK55_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK55_SEC_MASK OTP_SW_LOCK55_SEC(ALL1)

/*SW_LOCK56 Register macros*/

#define OTP_SW_LOCK56_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK56_NSEC_MASK OTP_SW_LOCK56_NSEC(ALL1)
#define OTP_SW_LOCK56_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK56_SEC_MASK OTP_SW_LOCK56_SEC(ALL1)

/*SW_LOCK57 Register macros*/

#define OTP_SW_LOCK57_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK57_NSEC_MASK OTP_SW_LOCK57_NSEC(ALL1)
#define OTP_SW_LOCK57_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK57_SEC_MASK OTP_SW_LOCK57_SEC(ALL1)

/*SW_LOCK58 Register macros*/

#define OTP_SW_LOCK58_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK58_NSEC_MASK OTP_SW_LOCK58_NSEC(ALL1)
#define OTP_SW_LOCK58_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK58_SEC_MASK OTP_SW_LOCK58_SEC(ALL1)

/*SW_LOCK59 Register macros*/

#define OTP_SW_LOCK59_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK59_NSEC_MASK OTP_SW_LOCK59_NSEC(ALL1)
#define OTP_SW_LOCK59_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK59_SEC_MASK OTP_SW_LOCK59_SEC(ALL1)

/*SW_LOCK60 Register macros*/

#define OTP_SW_LOCK60_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK60_NSEC_MASK OTP_SW_LOCK60_NSEC(ALL1)
#define OTP_SW_LOCK60_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK60_SEC_MASK OTP_SW_LOCK60_SEC(ALL1)

/*SW_LOCK61 Register macros*/

#define OTP_SW_LOCK61_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK61_NSEC_MASK OTP_SW_LOCK61_NSEC(ALL1)
#define OTP_SW_LOCK61_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK61_SEC_MASK OTP_SW_LOCK61_SEC(ALL1)

/*SW_LOCK62 Register macros*/

#define OTP_SW_LOCK62_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK62_NSEC_MASK OTP_SW_LOCK62_NSEC(ALL1)
#define OTP_SW_LOCK62_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK62_SEC_MASK OTP_SW_LOCK62_SEC(ALL1)

/*SW_LOCK63 Register macros*/

#define OTP_SW_LOCK63_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK63_NSEC_MASK OTP_SW_LOCK63_NSEC(ALL1)
#define OTP_SW_LOCK63_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK63_SEC_MASK OTP_SW_LOCK63_SEC(ALL1)

/*SBPI_INSTR Register macros*/

#define OTP_SBPI_INSTR_EXEC(v) (((v)&0x1)<<30)
#define OTP_SBPI_INSTR_EXEC_MASK OTP_SBPI_INSTR_EXEC(ALL1)
#define OTP_SBPI_INSTR_IS_WR(v) (((v)&0x1)<<29)
#define OTP_SBPI_INSTR_IS_WR_MASK OTP_SBPI_INSTR_IS_WR(ALL1)
#define OTP_SBPI_INSTR_HAS_PAYLOAD(v) (((v)&0x1)<<28)
#define OTP_SBPI_INSTR_HAS_PAYLOAD_MASK OTP_SBPI_INSTR_HAS_PAYLOAD(ALL1)
#define OTP_SBPI_INSTR_PAYLOAD_SIZE_M1(v) (((v)&0xf)<<24)
#define OTP_SBPI_INSTR_PAYLOAD_SIZE_M1_MASK OTP_SBPI_INSTR_PAYLOAD_SIZE_M1(ALL1)
#define OTP_SBPI_INSTR_TARGET(v) (((v)&0xff)<<16)
#define OTP_SBPI_INSTR_TARGET_MASK OTP_SBPI_INSTR_TARGET(ALL1)
#define OTP_SBPI_INSTR_CMD(v) (((v)&0xff)<<8)
#define OTP_SBPI_INSTR_CMD_MASK OTP_SBPI_INSTR_CMD(ALL1)
#define OTP_SBPI_INSTR_SHORT_WDATA(v) (((v)&0xff)<<0)
#define OTP_SBPI_INSTR_SHORT_WDATA_MASK OTP_SBPI_INSTR_SHORT_WDATA(ALL1)

/*SBPI_WDATA_0 Register macros*/


/*SBPI_WDATA_1 Register macros*/


/*SBPI_WDATA_2 Register macros*/


/*SBPI_WDATA_3 Register macros*/


/*SBPI_RDATA_0 Register macros*/


/*SBPI_RDATA_1 Register macros*/


/*SBPI_RDATA_2 Register macros*/


/*SBPI_RDATA_3 Register macros*/


/*SBPI_STATUS Register macros*/

#define OTP_SBPI_STATUS_MISO(v) (((v)&0xff)<<16)
#define OTP_SBPI_STATUS_MISO_MASK OTP_SBPI_STATUS_MISO(ALL1)
#define OTP_SBPI_STATUS_FLAG(v) (((v)&0x1)<<12)
#define OTP_SBPI_STATUS_FLAG_MASK OTP_SBPI_STATUS_FLAG(ALL1)
#define OTP_SBPI_STATUS_INSTR_MISS(v) (((v)&0x1)<<8)
#define OTP_SBPI_STATUS_INSTR_MISS_MASK OTP_SBPI_STATUS_INSTR_MISS(ALL1)
#define OTP_SBPI_STATUS_INSTR_DONE(v) (((v)&0x1)<<4)
#define OTP_SBPI_STATUS_INSTR_DONE_MASK OTP_SBPI_STATUS_INSTR_DONE(ALL1)
#define OTP_SBPI_STATUS_RDATA_VLD(v) (((v)&0x1)<<0)
#define OTP_SBPI_STATUS_RDATA_VLD_MASK OTP_SBPI_STATUS_RDATA_VLD(ALL1)

/*USR Register macros*/

#define OTP_USR_PD(v) (((v)&0x1)<<4)
#define OTP_USR_PD_MASK OTP_USR_PD(ALL1)
#define OTP_USR_DCTRL(v) (((v)&0x1)<<0)
#define OTP_USR_DCTRL_MASK OTP_USR_DCTRL(ALL1)

/*DBG Register macros*/

#define OTP_DBG_CUSTOMER_RMA_FLAG(v) (((v)&0x1)<<12)
#define OTP_DBG_CUSTOMER_RMA_FLAG_MASK OTP_DBG_CUSTOMER_RMA_FLAG(ALL1)
#define OTP_DBG_PSM_STATE(v) (((v)&0xf)<<4)
#define OTP_DBG_PSM_STATE_MASK OTP_DBG_PSM_STATE(ALL1)
#define OTP_DBG_ROSC_UP(v) (((v)&0x1)<<3)
#define OTP_DBG_ROSC_UP_MASK OTP_DBG_ROSC_UP(ALL1)
#define OTP_DBG_ROSC_UP_SEEN(v) (((v)&0x1)<<2)
#define OTP_DBG_ROSC_UP_SEEN_MASK OTP_DBG_ROSC_UP_SEEN(ALL1)
#define OTP_DBG_BOOT_DONE(v) (((v)&0x1)<<1)
#define OTP_DBG_BOOT_DONE_MASK OTP_DBG_BOOT_DONE(ALL1)
#define OTP_DBG_PSM_DONE(v) (((v)&0x1)<<0)
#define OTP_DBG_PSM_DONE_MASK OTP_DBG_PSM_DONE(ALL1)

/*BIST Register macros*/

#define OTP_BIST_CNT_FAIL(v) (((v)&0x1)<<30)
#define OTP_BIST_CNT_FAIL_MASK OTP_BIST_CNT_FAIL(ALL1)
#define OTP_BIST_CNT_CLR(v) (((v)&0x1)<<29)
#define OTP_BIST_CNT_CLR_MASK OTP_BIST_CNT_CLR(ALL1)
#define OTP_BIST_CNT_ENA(v) (((v)&0x1)<<28)
#define OTP_BIST_CNT_ENA_MASK OTP_BIST_CNT_ENA(ALL1)
#define OTP_BIST_CNT_MAX(v) (((v)&0xfff)<<16)
#define OTP_BIST_CNT_MAX_MASK OTP_BIST_CNT_MAX(ALL1)
#define OTP_BIST_CNT(v) (((v)&0x1fff)<<0)
#define OTP_BIST_CNT_MASK OTP_BIST_CNT(ALL1)

/*CRT_KEY_W0 Register macros*/


/*CRT_KEY_W1 Register macros*/


/*CRT_KEY_W2 Register macros*/


/*CRT_KEY_W3 Register macros*/


/*CRITICAL Register macros*/

#define OTP_CRITICAL_RISCV_DISABLE(v) (((v)&0x1)<<17)
#define OTP_CRITICAL_RISCV_DISABLE_MASK OTP_CRITICAL_RISCV_DISABLE(ALL1)
#define OTP_CRITICAL_ARM_DISABLE(v) (((v)&0x1)<<16)
#define OTP_CRITICAL_ARM_DISABLE_MASK OTP_CRITICAL_ARM_DISABLE(ALL1)
#define OTP_CRITICAL_GLITCH_DETECTOR_SENS(v) (((v)&0x3)<<5)
#define OTP_CRITICAL_GLITCH_DETECTOR_SENS_MASK OTP_CRITICAL_GLITCH_DETECTOR_SENS(ALL1)
#define OTP_CRITICAL_GLITCH_DETECTOR_ENABLE(v) (((v)&0x1)<<4)
#define OTP_CRITICAL_GLITCH_DETECTOR_ENABLE_MASK OTP_CRITICAL_GLITCH_DETECTOR_ENABLE(ALL1)
#define OTP_CRITICAL_DEFAULT_ARCHSEL(v) (((v)&0x1)<<3)
#define OTP_CRITICAL_DEFAULT_ARCHSEL_MASK OTP_CRITICAL_DEFAULT_ARCHSEL(ALL1)
#define OTP_CRITICAL_DEBUG_DISABLE(v) (((v)&0x1)<<2)
#define OTP_CRITICAL_DEBUG_DISABLE_MASK OTP_CRITICAL_DEBUG_DISABLE(ALL1)
#define OTP_CRITICAL_SECURE_DEBUG_DISABLE(v) (((v)&0x1)<<1)
#define OTP_CRITICAL_SECURE_DEBUG_DISABLE_MASK OTP_CRITICAL_SECURE_DEBUG_DISABLE(ALL1)
#define OTP_CRITICAL_SECURE_BOOT_ENABLE(v) (((v)&0x1)<<0)
#define OTP_CRITICAL_SECURE_BOOT_ENABLE_MASK OTP_CRITICAL_SECURE_BOOT_ENABLE(ALL1)

/*KEY_VALID Register macros*/


/*DEBUGEN Register macros*/

#define OTP_DEBUGEN_MISC(v) (((v)&0x1)<<8)
#define OTP_DEBUGEN_MISC_MASK OTP_DEBUGEN_MISC(ALL1)
#define OTP_DEBUGEN_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DEBUGEN_PROC1_SECURE_MASK OTP_DEBUGEN_PROC1_SECURE(ALL1)
#define OTP_DEBUGEN_PROC1(v) (((v)&0x1)<<2)
#define OTP_DEBUGEN_PROC1_MASK OTP_DEBUGEN_PROC1(ALL1)
#define OTP_DEBUGEN_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DEBUGEN_PROC0_SECURE_MASK OTP_DEBUGEN_PROC0_SECURE(ALL1)
#define OTP_DEBUGEN_PROC0(v) (((v)&0x1)<<0)
#define OTP_DEBUGEN_PROC0_MASK OTP_DEBUGEN_PROC0(ALL1)
#define OTP_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DEBUGEN_LOCK_MISC_MASK OTP_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DEBUGEN_LOCK_PROC1_MASK OTP_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DEBUGEN_LOCK_PROC0_MASK OTP_DEBUGEN_LOCK_PROC0(ALL1)

/*DEBUGEN_LOCK Register macros*/

#define OTP_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DEBUGEN_LOCK_MISC_MASK OTP_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DEBUGEN_LOCK_PROC1_MASK OTP_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DEBUGEN_LOCK_PROC0_MASK OTP_DEBUGEN_LOCK_PROC0(ALL1)

/*ARCHSEL Register macros*/

#define OTP_ARCHSEL_CORE1(v) (((v)&0x1)<<1)
#define OTP_ARCHSEL_CORE1_MASK OTP_ARCHSEL_CORE1(ALL1)
#define OTP_ARCHSEL_CORE0(v) (((v)&0x1)<<0)
#define OTP_ARCHSEL_CORE0_MASK OTP_ARCHSEL_CORE0(ALL1)
#define OTP_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_ARCHSEL_STATUS_CORE1_MASK OTP_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_ARCHSEL_STATUS_CORE0_MASK OTP_ARCHSEL_STATUS_CORE0(ALL1)

/*ARCHSEL_STATUS Register macros*/

#define OTP_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_ARCHSEL_STATUS_CORE1_MASK OTP_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_ARCHSEL_STATUS_CORE0_MASK OTP_ARCHSEL_STATUS_CORE0(ALL1)

/*BOOTDIS Register macros*/

#define OTP_BOOTDIS_NEXT(v) (((v)&0x1)<<1)
#define OTP_BOOTDIS_NEXT_MASK OTP_BOOTDIS_NEXT(ALL1)
#define OTP_BOOTDIS_NOW(v) (((v)&0x1)<<0)
#define OTP_BOOTDIS_NOW_MASK OTP_BOOTDIS_NOW(ALL1)

/*INTR Register macros*/

#define OTP_INTR_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_INTR_APB_RD_NSEC_FAIL_MASK OTP_INTR_APB_RD_NSEC_FAIL(ALL1)
#define OTP_INTR_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_INTR_APB_RD_SEC_FAIL_MASK OTP_INTR_APB_RD_SEC_FAIL(ALL1)
#define OTP_INTR_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_INTR_APB_DCTRL_FAIL_MASK OTP_INTR_APB_DCTRL_FAIL(ALL1)
#define OTP_INTR_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_INTR_SBPI_WR_FAIL_MASK OTP_INTR_SBPI_WR_FAIL(ALL1)
#define OTP_INTR_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_INTR_SBPI_FLAG_N_MASK OTP_INTR_SBPI_FLAG_N(ALL1)

/*INTE Register macros*/

#define OTP_INTE_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_INTE_APB_RD_NSEC_FAIL_MASK OTP_INTE_APB_RD_NSEC_FAIL(ALL1)
#define OTP_INTE_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_INTE_APB_RD_SEC_FAIL_MASK OTP_INTE_APB_RD_SEC_FAIL(ALL1)
#define OTP_INTE_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_INTE_APB_DCTRL_FAIL_MASK OTP_INTE_APB_DCTRL_FAIL(ALL1)
#define OTP_INTE_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_INTE_SBPI_WR_FAIL_MASK OTP_INTE_SBPI_WR_FAIL(ALL1)
#define OTP_INTE_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_INTE_SBPI_FLAG_N_MASK OTP_INTE_SBPI_FLAG_N(ALL1)

/*INTF Register macros*/

#define OTP_INTF_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_INTF_APB_RD_NSEC_FAIL_MASK OTP_INTF_APB_RD_NSEC_FAIL(ALL1)
#define OTP_INTF_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_INTF_APB_RD_SEC_FAIL_MASK OTP_INTF_APB_RD_SEC_FAIL(ALL1)
#define OTP_INTF_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_INTF_APB_DCTRL_FAIL_MASK OTP_INTF_APB_DCTRL_FAIL(ALL1)
#define OTP_INTF_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_INTF_SBPI_WR_FAIL_MASK OTP_INTF_SBPI_WR_FAIL(ALL1)
#define OTP_INTF_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_INTF_SBPI_FLAG_N_MASK OTP_INTF_SBPI_FLAG_N(ALL1)

/*INTS Register macros*/

#define OTP_INTS_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_INTS_APB_RD_NSEC_FAIL_MASK OTP_INTS_APB_RD_NSEC_FAIL(ALL1)
#define OTP_INTS_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_INTS_APB_RD_SEC_FAIL_MASK OTP_INTS_APB_RD_SEC_FAIL(ALL1)
#define OTP_INTS_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_INTS_APB_DCTRL_FAIL_MASK OTP_INTS_APB_DCTRL_FAIL(ALL1)
#define OTP_INTS_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_INTS_SBPI_WR_FAIL_MASK OTP_INTS_SBPI_WR_FAIL(ALL1)
#define OTP_INTS_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_INTS_SBPI_FLAG_N_MASK OTP_INTS_SBPI_FLAG_N(ALL1)

/*SW_LOCK0 Register macros*/

#define OTP_DATA_SW_LOCK0_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK0_NSEC_MASK OTP_DATA_SW_LOCK0_NSEC(ALL1)
#define OTP_DATA_SW_LOCK0_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK0_SEC_MASK OTP_DATA_SW_LOCK0_SEC(ALL1)

/*SW_LOCK1 Register macros*/

#define OTP_DATA_SW_LOCK1_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK1_NSEC_MASK OTP_DATA_SW_LOCK1_NSEC(ALL1)
#define OTP_DATA_SW_LOCK1_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK1_SEC_MASK OTP_DATA_SW_LOCK1_SEC(ALL1)

/*SW_LOCK2 Register macros*/

#define OTP_DATA_SW_LOCK2_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK2_NSEC_MASK OTP_DATA_SW_LOCK2_NSEC(ALL1)
#define OTP_DATA_SW_LOCK2_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK2_SEC_MASK OTP_DATA_SW_LOCK2_SEC(ALL1)

/*SW_LOCK3 Register macros*/

#define OTP_DATA_SW_LOCK3_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK3_NSEC_MASK OTP_DATA_SW_LOCK3_NSEC(ALL1)
#define OTP_DATA_SW_LOCK3_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK3_SEC_MASK OTP_DATA_SW_LOCK3_SEC(ALL1)

/*SW_LOCK4 Register macros*/

#define OTP_DATA_SW_LOCK4_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK4_NSEC_MASK OTP_DATA_SW_LOCK4_NSEC(ALL1)
#define OTP_DATA_SW_LOCK4_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK4_SEC_MASK OTP_DATA_SW_LOCK4_SEC(ALL1)

/*SW_LOCK5 Register macros*/

#define OTP_DATA_SW_LOCK5_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK5_NSEC_MASK OTP_DATA_SW_LOCK5_NSEC(ALL1)
#define OTP_DATA_SW_LOCK5_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK5_SEC_MASK OTP_DATA_SW_LOCK5_SEC(ALL1)

/*SW_LOCK6 Register macros*/

#define OTP_DATA_SW_LOCK6_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK6_NSEC_MASK OTP_DATA_SW_LOCK6_NSEC(ALL1)
#define OTP_DATA_SW_LOCK6_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK6_SEC_MASK OTP_DATA_SW_LOCK6_SEC(ALL1)

/*SW_LOCK7 Register macros*/

#define OTP_DATA_SW_LOCK7_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK7_NSEC_MASK OTP_DATA_SW_LOCK7_NSEC(ALL1)
#define OTP_DATA_SW_LOCK7_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK7_SEC_MASK OTP_DATA_SW_LOCK7_SEC(ALL1)

/*SW_LOCK8 Register macros*/

#define OTP_DATA_SW_LOCK8_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK8_NSEC_MASK OTP_DATA_SW_LOCK8_NSEC(ALL1)
#define OTP_DATA_SW_LOCK8_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK8_SEC_MASK OTP_DATA_SW_LOCK8_SEC(ALL1)

/*SW_LOCK9 Register macros*/

#define OTP_DATA_SW_LOCK9_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK9_NSEC_MASK OTP_DATA_SW_LOCK9_NSEC(ALL1)
#define OTP_DATA_SW_LOCK9_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK9_SEC_MASK OTP_DATA_SW_LOCK9_SEC(ALL1)

/*SW_LOCK10 Register macros*/

#define OTP_DATA_SW_LOCK10_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK10_NSEC_MASK OTP_DATA_SW_LOCK10_NSEC(ALL1)
#define OTP_DATA_SW_LOCK10_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK10_SEC_MASK OTP_DATA_SW_LOCK10_SEC(ALL1)

/*SW_LOCK11 Register macros*/

#define OTP_DATA_SW_LOCK11_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK11_NSEC_MASK OTP_DATA_SW_LOCK11_NSEC(ALL1)
#define OTP_DATA_SW_LOCK11_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK11_SEC_MASK OTP_DATA_SW_LOCK11_SEC(ALL1)

/*SW_LOCK12 Register macros*/

#define OTP_DATA_SW_LOCK12_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK12_NSEC_MASK OTP_DATA_SW_LOCK12_NSEC(ALL1)
#define OTP_DATA_SW_LOCK12_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK12_SEC_MASK OTP_DATA_SW_LOCK12_SEC(ALL1)

/*SW_LOCK13 Register macros*/

#define OTP_DATA_SW_LOCK13_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK13_NSEC_MASK OTP_DATA_SW_LOCK13_NSEC(ALL1)
#define OTP_DATA_SW_LOCK13_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK13_SEC_MASK OTP_DATA_SW_LOCK13_SEC(ALL1)

/*SW_LOCK14 Register macros*/

#define OTP_DATA_SW_LOCK14_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK14_NSEC_MASK OTP_DATA_SW_LOCK14_NSEC(ALL1)
#define OTP_DATA_SW_LOCK14_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK14_SEC_MASK OTP_DATA_SW_LOCK14_SEC(ALL1)

/*SW_LOCK15 Register macros*/

#define OTP_DATA_SW_LOCK15_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK15_NSEC_MASK OTP_DATA_SW_LOCK15_NSEC(ALL1)
#define OTP_DATA_SW_LOCK15_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK15_SEC_MASK OTP_DATA_SW_LOCK15_SEC(ALL1)

/*SW_LOCK16 Register macros*/

#define OTP_DATA_SW_LOCK16_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK16_NSEC_MASK OTP_DATA_SW_LOCK16_NSEC(ALL1)
#define OTP_DATA_SW_LOCK16_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK16_SEC_MASK OTP_DATA_SW_LOCK16_SEC(ALL1)

/*SW_LOCK17 Register macros*/

#define OTP_DATA_SW_LOCK17_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK17_NSEC_MASK OTP_DATA_SW_LOCK17_NSEC(ALL1)
#define OTP_DATA_SW_LOCK17_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK17_SEC_MASK OTP_DATA_SW_LOCK17_SEC(ALL1)

/*SW_LOCK18 Register macros*/

#define OTP_DATA_SW_LOCK18_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK18_NSEC_MASK OTP_DATA_SW_LOCK18_NSEC(ALL1)
#define OTP_DATA_SW_LOCK18_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK18_SEC_MASK OTP_DATA_SW_LOCK18_SEC(ALL1)

/*SW_LOCK19 Register macros*/

#define OTP_DATA_SW_LOCK19_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK19_NSEC_MASK OTP_DATA_SW_LOCK19_NSEC(ALL1)
#define OTP_DATA_SW_LOCK19_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK19_SEC_MASK OTP_DATA_SW_LOCK19_SEC(ALL1)

/*SW_LOCK20 Register macros*/

#define OTP_DATA_SW_LOCK20_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK20_NSEC_MASK OTP_DATA_SW_LOCK20_NSEC(ALL1)
#define OTP_DATA_SW_LOCK20_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK20_SEC_MASK OTP_DATA_SW_LOCK20_SEC(ALL1)

/*SW_LOCK21 Register macros*/

#define OTP_DATA_SW_LOCK21_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK21_NSEC_MASK OTP_DATA_SW_LOCK21_NSEC(ALL1)
#define OTP_DATA_SW_LOCK21_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK21_SEC_MASK OTP_DATA_SW_LOCK21_SEC(ALL1)

/*SW_LOCK22 Register macros*/

#define OTP_DATA_SW_LOCK22_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK22_NSEC_MASK OTP_DATA_SW_LOCK22_NSEC(ALL1)
#define OTP_DATA_SW_LOCK22_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK22_SEC_MASK OTP_DATA_SW_LOCK22_SEC(ALL1)

/*SW_LOCK23 Register macros*/

#define OTP_DATA_SW_LOCK23_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK23_NSEC_MASK OTP_DATA_SW_LOCK23_NSEC(ALL1)
#define OTP_DATA_SW_LOCK23_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK23_SEC_MASK OTP_DATA_SW_LOCK23_SEC(ALL1)

/*SW_LOCK24 Register macros*/

#define OTP_DATA_SW_LOCK24_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK24_NSEC_MASK OTP_DATA_SW_LOCK24_NSEC(ALL1)
#define OTP_DATA_SW_LOCK24_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK24_SEC_MASK OTP_DATA_SW_LOCK24_SEC(ALL1)

/*SW_LOCK25 Register macros*/

#define OTP_DATA_SW_LOCK25_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK25_NSEC_MASK OTP_DATA_SW_LOCK25_NSEC(ALL1)
#define OTP_DATA_SW_LOCK25_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK25_SEC_MASK OTP_DATA_SW_LOCK25_SEC(ALL1)

/*SW_LOCK26 Register macros*/

#define OTP_DATA_SW_LOCK26_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK26_NSEC_MASK OTP_DATA_SW_LOCK26_NSEC(ALL1)
#define OTP_DATA_SW_LOCK26_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK26_SEC_MASK OTP_DATA_SW_LOCK26_SEC(ALL1)

/*SW_LOCK27 Register macros*/

#define OTP_DATA_SW_LOCK27_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK27_NSEC_MASK OTP_DATA_SW_LOCK27_NSEC(ALL1)
#define OTP_DATA_SW_LOCK27_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK27_SEC_MASK OTP_DATA_SW_LOCK27_SEC(ALL1)

/*SW_LOCK28 Register macros*/

#define OTP_DATA_SW_LOCK28_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK28_NSEC_MASK OTP_DATA_SW_LOCK28_NSEC(ALL1)
#define OTP_DATA_SW_LOCK28_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK28_SEC_MASK OTP_DATA_SW_LOCK28_SEC(ALL1)

/*SW_LOCK29 Register macros*/

#define OTP_DATA_SW_LOCK29_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK29_NSEC_MASK OTP_DATA_SW_LOCK29_NSEC(ALL1)
#define OTP_DATA_SW_LOCK29_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK29_SEC_MASK OTP_DATA_SW_LOCK29_SEC(ALL1)

/*SW_LOCK30 Register macros*/

#define OTP_DATA_SW_LOCK30_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK30_NSEC_MASK OTP_DATA_SW_LOCK30_NSEC(ALL1)
#define OTP_DATA_SW_LOCK30_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK30_SEC_MASK OTP_DATA_SW_LOCK30_SEC(ALL1)

/*SW_LOCK31 Register macros*/

#define OTP_DATA_SW_LOCK31_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK31_NSEC_MASK OTP_DATA_SW_LOCK31_NSEC(ALL1)
#define OTP_DATA_SW_LOCK31_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK31_SEC_MASK OTP_DATA_SW_LOCK31_SEC(ALL1)

/*SW_LOCK32 Register macros*/

#define OTP_DATA_SW_LOCK32_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK32_NSEC_MASK OTP_DATA_SW_LOCK32_NSEC(ALL1)
#define OTP_DATA_SW_LOCK32_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK32_SEC_MASK OTP_DATA_SW_LOCK32_SEC(ALL1)

/*SW_LOCK33 Register macros*/

#define OTP_DATA_SW_LOCK33_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK33_NSEC_MASK OTP_DATA_SW_LOCK33_NSEC(ALL1)
#define OTP_DATA_SW_LOCK33_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK33_SEC_MASK OTP_DATA_SW_LOCK33_SEC(ALL1)

/*SW_LOCK34 Register macros*/

#define OTP_DATA_SW_LOCK34_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK34_NSEC_MASK OTP_DATA_SW_LOCK34_NSEC(ALL1)
#define OTP_DATA_SW_LOCK34_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK34_SEC_MASK OTP_DATA_SW_LOCK34_SEC(ALL1)

/*SW_LOCK35 Register macros*/

#define OTP_DATA_SW_LOCK35_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK35_NSEC_MASK OTP_DATA_SW_LOCK35_NSEC(ALL1)
#define OTP_DATA_SW_LOCK35_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK35_SEC_MASK OTP_DATA_SW_LOCK35_SEC(ALL1)

/*SW_LOCK36 Register macros*/

#define OTP_DATA_SW_LOCK36_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK36_NSEC_MASK OTP_DATA_SW_LOCK36_NSEC(ALL1)
#define OTP_DATA_SW_LOCK36_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK36_SEC_MASK OTP_DATA_SW_LOCK36_SEC(ALL1)

/*SW_LOCK37 Register macros*/

#define OTP_DATA_SW_LOCK37_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK37_NSEC_MASK OTP_DATA_SW_LOCK37_NSEC(ALL1)
#define OTP_DATA_SW_LOCK37_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK37_SEC_MASK OTP_DATA_SW_LOCK37_SEC(ALL1)

/*SW_LOCK38 Register macros*/

#define OTP_DATA_SW_LOCK38_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK38_NSEC_MASK OTP_DATA_SW_LOCK38_NSEC(ALL1)
#define OTP_DATA_SW_LOCK38_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK38_SEC_MASK OTP_DATA_SW_LOCK38_SEC(ALL1)

/*SW_LOCK39 Register macros*/

#define OTP_DATA_SW_LOCK39_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK39_NSEC_MASK OTP_DATA_SW_LOCK39_NSEC(ALL1)
#define OTP_DATA_SW_LOCK39_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK39_SEC_MASK OTP_DATA_SW_LOCK39_SEC(ALL1)

/*SW_LOCK40 Register macros*/

#define OTP_DATA_SW_LOCK40_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK40_NSEC_MASK OTP_DATA_SW_LOCK40_NSEC(ALL1)
#define OTP_DATA_SW_LOCK40_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK40_SEC_MASK OTP_DATA_SW_LOCK40_SEC(ALL1)

/*SW_LOCK41 Register macros*/

#define OTP_DATA_SW_LOCK41_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK41_NSEC_MASK OTP_DATA_SW_LOCK41_NSEC(ALL1)
#define OTP_DATA_SW_LOCK41_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK41_SEC_MASK OTP_DATA_SW_LOCK41_SEC(ALL1)

/*SW_LOCK42 Register macros*/

#define OTP_DATA_SW_LOCK42_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK42_NSEC_MASK OTP_DATA_SW_LOCK42_NSEC(ALL1)
#define OTP_DATA_SW_LOCK42_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK42_SEC_MASK OTP_DATA_SW_LOCK42_SEC(ALL1)

/*SW_LOCK43 Register macros*/

#define OTP_DATA_SW_LOCK43_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK43_NSEC_MASK OTP_DATA_SW_LOCK43_NSEC(ALL1)
#define OTP_DATA_SW_LOCK43_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK43_SEC_MASK OTP_DATA_SW_LOCK43_SEC(ALL1)

/*SW_LOCK44 Register macros*/

#define OTP_DATA_SW_LOCK44_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK44_NSEC_MASK OTP_DATA_SW_LOCK44_NSEC(ALL1)
#define OTP_DATA_SW_LOCK44_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK44_SEC_MASK OTP_DATA_SW_LOCK44_SEC(ALL1)

/*SW_LOCK45 Register macros*/

#define OTP_DATA_SW_LOCK45_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK45_NSEC_MASK OTP_DATA_SW_LOCK45_NSEC(ALL1)
#define OTP_DATA_SW_LOCK45_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK45_SEC_MASK OTP_DATA_SW_LOCK45_SEC(ALL1)

/*SW_LOCK46 Register macros*/

#define OTP_DATA_SW_LOCK46_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK46_NSEC_MASK OTP_DATA_SW_LOCK46_NSEC(ALL1)
#define OTP_DATA_SW_LOCK46_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK46_SEC_MASK OTP_DATA_SW_LOCK46_SEC(ALL1)

/*SW_LOCK47 Register macros*/

#define OTP_DATA_SW_LOCK47_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK47_NSEC_MASK OTP_DATA_SW_LOCK47_NSEC(ALL1)
#define OTP_DATA_SW_LOCK47_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK47_SEC_MASK OTP_DATA_SW_LOCK47_SEC(ALL1)

/*SW_LOCK48 Register macros*/

#define OTP_DATA_SW_LOCK48_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK48_NSEC_MASK OTP_DATA_SW_LOCK48_NSEC(ALL1)
#define OTP_DATA_SW_LOCK48_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK48_SEC_MASK OTP_DATA_SW_LOCK48_SEC(ALL1)

/*SW_LOCK49 Register macros*/

#define OTP_DATA_SW_LOCK49_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK49_NSEC_MASK OTP_DATA_SW_LOCK49_NSEC(ALL1)
#define OTP_DATA_SW_LOCK49_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK49_SEC_MASK OTP_DATA_SW_LOCK49_SEC(ALL1)

/*SW_LOCK50 Register macros*/

#define OTP_DATA_SW_LOCK50_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK50_NSEC_MASK OTP_DATA_SW_LOCK50_NSEC(ALL1)
#define OTP_DATA_SW_LOCK50_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK50_SEC_MASK OTP_DATA_SW_LOCK50_SEC(ALL1)

/*SW_LOCK51 Register macros*/

#define OTP_DATA_SW_LOCK51_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK51_NSEC_MASK OTP_DATA_SW_LOCK51_NSEC(ALL1)
#define OTP_DATA_SW_LOCK51_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK51_SEC_MASK OTP_DATA_SW_LOCK51_SEC(ALL1)

/*SW_LOCK52 Register macros*/

#define OTP_DATA_SW_LOCK52_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK52_NSEC_MASK OTP_DATA_SW_LOCK52_NSEC(ALL1)
#define OTP_DATA_SW_LOCK52_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK52_SEC_MASK OTP_DATA_SW_LOCK52_SEC(ALL1)

/*SW_LOCK53 Register macros*/

#define OTP_DATA_SW_LOCK53_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK53_NSEC_MASK OTP_DATA_SW_LOCK53_NSEC(ALL1)
#define OTP_DATA_SW_LOCK53_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK53_SEC_MASK OTP_DATA_SW_LOCK53_SEC(ALL1)

/*SW_LOCK54 Register macros*/

#define OTP_DATA_SW_LOCK54_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK54_NSEC_MASK OTP_DATA_SW_LOCK54_NSEC(ALL1)
#define OTP_DATA_SW_LOCK54_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK54_SEC_MASK OTP_DATA_SW_LOCK54_SEC(ALL1)

/*SW_LOCK55 Register macros*/

#define OTP_DATA_SW_LOCK55_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK55_NSEC_MASK OTP_DATA_SW_LOCK55_NSEC(ALL1)
#define OTP_DATA_SW_LOCK55_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK55_SEC_MASK OTP_DATA_SW_LOCK55_SEC(ALL1)

/*SW_LOCK56 Register macros*/

#define OTP_DATA_SW_LOCK56_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK56_NSEC_MASK OTP_DATA_SW_LOCK56_NSEC(ALL1)
#define OTP_DATA_SW_LOCK56_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK56_SEC_MASK OTP_DATA_SW_LOCK56_SEC(ALL1)

/*SW_LOCK57 Register macros*/

#define OTP_DATA_SW_LOCK57_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK57_NSEC_MASK OTP_DATA_SW_LOCK57_NSEC(ALL1)
#define OTP_DATA_SW_LOCK57_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK57_SEC_MASK OTP_DATA_SW_LOCK57_SEC(ALL1)

/*SW_LOCK58 Register macros*/

#define OTP_DATA_SW_LOCK58_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK58_NSEC_MASK OTP_DATA_SW_LOCK58_NSEC(ALL1)
#define OTP_DATA_SW_LOCK58_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK58_SEC_MASK OTP_DATA_SW_LOCK58_SEC(ALL1)

/*SW_LOCK59 Register macros*/

#define OTP_DATA_SW_LOCK59_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK59_NSEC_MASK OTP_DATA_SW_LOCK59_NSEC(ALL1)
#define OTP_DATA_SW_LOCK59_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK59_SEC_MASK OTP_DATA_SW_LOCK59_SEC(ALL1)

/*SW_LOCK60 Register macros*/

#define OTP_DATA_SW_LOCK60_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK60_NSEC_MASK OTP_DATA_SW_LOCK60_NSEC(ALL1)
#define OTP_DATA_SW_LOCK60_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK60_SEC_MASK OTP_DATA_SW_LOCK60_SEC(ALL1)

/*SW_LOCK61 Register macros*/

#define OTP_DATA_SW_LOCK61_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK61_NSEC_MASK OTP_DATA_SW_LOCK61_NSEC(ALL1)
#define OTP_DATA_SW_LOCK61_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK61_SEC_MASK OTP_DATA_SW_LOCK61_SEC(ALL1)

/*SW_LOCK62 Register macros*/

#define OTP_DATA_SW_LOCK62_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK62_NSEC_MASK OTP_DATA_SW_LOCK62_NSEC(ALL1)
#define OTP_DATA_SW_LOCK62_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK62_SEC_MASK OTP_DATA_SW_LOCK62_SEC(ALL1)

/*SW_LOCK63 Register macros*/

#define OTP_DATA_SW_LOCK63_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK63_NSEC_MASK OTP_DATA_SW_LOCK63_NSEC(ALL1)
#define OTP_DATA_SW_LOCK63_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK63_SEC_MASK OTP_DATA_SW_LOCK63_SEC(ALL1)

/*SBPI_INSTR Register macros*/

#define OTP_DATA_SBPI_INSTR_EXEC(v) (((v)&0x1)<<30)
#define OTP_DATA_SBPI_INSTR_EXEC_MASK OTP_DATA_SBPI_INSTR_EXEC(ALL1)
#define OTP_DATA_SBPI_INSTR_IS_WR(v) (((v)&0x1)<<29)
#define OTP_DATA_SBPI_INSTR_IS_WR_MASK OTP_DATA_SBPI_INSTR_IS_WR(ALL1)
#define OTP_DATA_SBPI_INSTR_HAS_PAYLOAD(v) (((v)&0x1)<<28)
#define OTP_DATA_SBPI_INSTR_HAS_PAYLOAD_MASK OTP_DATA_SBPI_INSTR_HAS_PAYLOAD(ALL1)
#define OTP_DATA_SBPI_INSTR_PAYLOAD_SIZE_M1(v) (((v)&0xf)<<24)
#define OTP_DATA_SBPI_INSTR_PAYLOAD_SIZE_M1_MASK OTP_DATA_SBPI_INSTR_PAYLOAD_SIZE_M1(ALL1)
#define OTP_DATA_SBPI_INSTR_TARGET(v) (((v)&0xff)<<16)
#define OTP_DATA_SBPI_INSTR_TARGET_MASK OTP_DATA_SBPI_INSTR_TARGET(ALL1)
#define OTP_DATA_SBPI_INSTR_CMD(v) (((v)&0xff)<<8)
#define OTP_DATA_SBPI_INSTR_CMD_MASK OTP_DATA_SBPI_INSTR_CMD(ALL1)
#define OTP_DATA_SBPI_INSTR_SHORT_WDATA(v) (((v)&0xff)<<0)
#define OTP_DATA_SBPI_INSTR_SHORT_WDATA_MASK OTP_DATA_SBPI_INSTR_SHORT_WDATA(ALL1)

/*SBPI_WDATA_0 Register macros*/


/*SBPI_WDATA_1 Register macros*/


/*SBPI_WDATA_2 Register macros*/


/*SBPI_WDATA_3 Register macros*/


/*SBPI_RDATA_0 Register macros*/


/*SBPI_RDATA_1 Register macros*/


/*SBPI_RDATA_2 Register macros*/


/*SBPI_RDATA_3 Register macros*/


/*SBPI_STATUS Register macros*/

#define OTP_DATA_SBPI_STATUS_MISO(v) (((v)&0xff)<<16)
#define OTP_DATA_SBPI_STATUS_MISO_MASK OTP_DATA_SBPI_STATUS_MISO(ALL1)
#define OTP_DATA_SBPI_STATUS_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_SBPI_STATUS_FLAG_MASK OTP_DATA_SBPI_STATUS_FLAG(ALL1)
#define OTP_DATA_SBPI_STATUS_INSTR_MISS(v) (((v)&0x1)<<8)
#define OTP_DATA_SBPI_STATUS_INSTR_MISS_MASK OTP_DATA_SBPI_STATUS_INSTR_MISS(ALL1)
#define OTP_DATA_SBPI_STATUS_INSTR_DONE(v) (((v)&0x1)<<4)
#define OTP_DATA_SBPI_STATUS_INSTR_DONE_MASK OTP_DATA_SBPI_STATUS_INSTR_DONE(ALL1)
#define OTP_DATA_SBPI_STATUS_RDATA_VLD(v) (((v)&0x1)<<0)
#define OTP_DATA_SBPI_STATUS_RDATA_VLD_MASK OTP_DATA_SBPI_STATUS_RDATA_VLD(ALL1)

/*USR Register macros*/

#define OTP_DATA_USR_PD(v) (((v)&0x1)<<4)
#define OTP_DATA_USR_PD_MASK OTP_DATA_USR_PD(ALL1)
#define OTP_DATA_USR_DCTRL(v) (((v)&0x1)<<0)
#define OTP_DATA_USR_DCTRL_MASK OTP_DATA_USR_DCTRL(ALL1)

/*DBG Register macros*/

#define OTP_DATA_DBG_CUSTOMER_RMA_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_DBG_CUSTOMER_RMA_FLAG_MASK OTP_DATA_DBG_CUSTOMER_RMA_FLAG(ALL1)
#define OTP_DATA_DBG_PSM_STATE(v) (((v)&0xf)<<4)
#define OTP_DATA_DBG_PSM_STATE_MASK OTP_DATA_DBG_PSM_STATE(ALL1)
#define OTP_DATA_DBG_ROSC_UP(v) (((v)&0x1)<<3)
#define OTP_DATA_DBG_ROSC_UP_MASK OTP_DATA_DBG_ROSC_UP(ALL1)
#define OTP_DATA_DBG_ROSC_UP_SEEN(v) (((v)&0x1)<<2)
#define OTP_DATA_DBG_ROSC_UP_SEEN_MASK OTP_DATA_DBG_ROSC_UP_SEEN(ALL1)
#define OTP_DATA_DBG_BOOT_DONE(v) (((v)&0x1)<<1)
#define OTP_DATA_DBG_BOOT_DONE_MASK OTP_DATA_DBG_BOOT_DONE(ALL1)
#define OTP_DATA_DBG_PSM_DONE(v) (((v)&0x1)<<0)
#define OTP_DATA_DBG_PSM_DONE_MASK OTP_DATA_DBG_PSM_DONE(ALL1)

/*BIST Register macros*/

#define OTP_DATA_BIST_CNT_FAIL(v) (((v)&0x1)<<30)
#define OTP_DATA_BIST_CNT_FAIL_MASK OTP_DATA_BIST_CNT_FAIL(ALL1)
#define OTP_DATA_BIST_CNT_CLR(v) (((v)&0x1)<<29)
#define OTP_DATA_BIST_CNT_CLR_MASK OTP_DATA_BIST_CNT_CLR(ALL1)
#define OTP_DATA_BIST_CNT_ENA(v) (((v)&0x1)<<28)
#define OTP_DATA_BIST_CNT_ENA_MASK OTP_DATA_BIST_CNT_ENA(ALL1)
#define OTP_DATA_BIST_CNT_MAX(v) (((v)&0xfff)<<16)
#define OTP_DATA_BIST_CNT_MAX_MASK OTP_DATA_BIST_CNT_MAX(ALL1)
#define OTP_DATA_BIST_CNT(v) (((v)&0x1fff)<<0)
#define OTP_DATA_BIST_CNT_MASK OTP_DATA_BIST_CNT(ALL1)

/*CRT_KEY_W0 Register macros*/


/*CRT_KEY_W1 Register macros*/


/*CRT_KEY_W2 Register macros*/


/*CRT_KEY_W3 Register macros*/


/*CRITICAL Register macros*/

#define OTP_DATA_CRITICAL_RISCV_DISABLE(v) (((v)&0x1)<<17)
#define OTP_DATA_CRITICAL_RISCV_DISABLE_MASK OTP_DATA_CRITICAL_RISCV_DISABLE(ALL1)
#define OTP_DATA_CRITICAL_ARM_DISABLE(v) (((v)&0x1)<<16)
#define OTP_DATA_CRITICAL_ARM_DISABLE_MASK OTP_DATA_CRITICAL_ARM_DISABLE(ALL1)
#define OTP_DATA_CRITICAL_GLITCH_DETECTOR_SENS(v) (((v)&0x3)<<5)
#define OTP_DATA_CRITICAL_GLITCH_DETECTOR_SENS_MASK OTP_DATA_CRITICAL_GLITCH_DETECTOR_SENS(ALL1)
#define OTP_DATA_CRITICAL_GLITCH_DETECTOR_ENABLE(v) (((v)&0x1)<<4)
#define OTP_DATA_CRITICAL_GLITCH_DETECTOR_ENABLE_MASK OTP_DATA_CRITICAL_GLITCH_DETECTOR_ENABLE(ALL1)
#define OTP_DATA_CRITICAL_DEFAULT_ARCHSEL(v) (((v)&0x1)<<3)
#define OTP_DATA_CRITICAL_DEFAULT_ARCHSEL_MASK OTP_DATA_CRITICAL_DEFAULT_ARCHSEL(ALL1)
#define OTP_DATA_CRITICAL_DEBUG_DISABLE(v) (((v)&0x1)<<2)
#define OTP_DATA_CRITICAL_DEBUG_DISABLE_MASK OTP_DATA_CRITICAL_DEBUG_DISABLE(ALL1)
#define OTP_DATA_CRITICAL_SECURE_DEBUG_DISABLE(v) (((v)&0x1)<<1)
#define OTP_DATA_CRITICAL_SECURE_DEBUG_DISABLE_MASK OTP_DATA_CRITICAL_SECURE_DEBUG_DISABLE(ALL1)
#define OTP_DATA_CRITICAL_SECURE_BOOT_ENABLE(v) (((v)&0x1)<<0)
#define OTP_DATA_CRITICAL_SECURE_BOOT_ENABLE_MASK OTP_DATA_CRITICAL_SECURE_BOOT_ENABLE(ALL1)

/*KEY_VALID Register macros*/


/*DEBUGEN Register macros*/

#define OTP_DATA_DEBUGEN_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_DEBUGEN_MISC_MASK OTP_DATA_DEBUGEN_MISC(ALL1)
#define OTP_DATA_DEBUGEN_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_DEBUGEN_PROC1_SECURE_MASK OTP_DATA_DEBUGEN_PROC1_SECURE(ALL1)
#define OTP_DATA_DEBUGEN_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_DEBUGEN_PROC1_MASK OTP_DATA_DEBUGEN_PROC1(ALL1)
#define OTP_DATA_DEBUGEN_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_DEBUGEN_PROC0_SECURE_MASK OTP_DATA_DEBUGEN_PROC0_SECURE(ALL1)
#define OTP_DATA_DEBUGEN_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_DEBUGEN_PROC0_MASK OTP_DATA_DEBUGEN_PROC0(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_DEBUGEN_LOCK_MISC_MASK OTP_DATA_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_DEBUGEN_LOCK_PROC0(ALL1)

/*DEBUGEN_LOCK Register macros*/

#define OTP_DATA_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_DEBUGEN_LOCK_MISC_MASK OTP_DATA_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_DEBUGEN_LOCK_PROC0(ALL1)

/*ARCHSEL Register macros*/

#define OTP_DATA_ARCHSEL_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_ARCHSEL_CORE1_MASK OTP_DATA_ARCHSEL_CORE1(ALL1)
#define OTP_DATA_ARCHSEL_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_ARCHSEL_CORE0_MASK OTP_DATA_ARCHSEL_CORE0(ALL1)
#define OTP_DATA_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_ARCHSEL_STATUS_CORE0(ALL1)

/*ARCHSEL_STATUS Register macros*/

#define OTP_DATA_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_ARCHSEL_STATUS_CORE0(ALL1)

/*BOOTDIS Register macros*/

#define OTP_DATA_BOOTDIS_NEXT(v) (((v)&0x1)<<1)
#define OTP_DATA_BOOTDIS_NEXT_MASK OTP_DATA_BOOTDIS_NEXT(ALL1)
#define OTP_DATA_BOOTDIS_NOW(v) (((v)&0x1)<<0)
#define OTP_DATA_BOOTDIS_NOW_MASK OTP_DATA_BOOTDIS_NOW(ALL1)

/*INTR Register macros*/

#define OTP_DATA_INTR_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_INTR_APB_RD_NSEC_FAIL_MASK OTP_DATA_INTR_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_INTR_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_INTR_APB_RD_SEC_FAIL_MASK OTP_DATA_INTR_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_INTR_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_INTR_APB_DCTRL_FAIL_MASK OTP_DATA_INTR_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_INTR_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_INTR_SBPI_WR_FAIL_MASK OTP_DATA_INTR_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_INTR_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_INTR_SBPI_FLAG_N_MASK OTP_DATA_INTR_SBPI_FLAG_N(ALL1)

/*INTE Register macros*/

#define OTP_DATA_INTE_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_INTE_APB_RD_NSEC_FAIL_MASK OTP_DATA_INTE_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_INTE_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_INTE_APB_RD_SEC_FAIL_MASK OTP_DATA_INTE_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_INTE_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_INTE_APB_DCTRL_FAIL_MASK OTP_DATA_INTE_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_INTE_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_INTE_SBPI_WR_FAIL_MASK OTP_DATA_INTE_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_INTE_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_INTE_SBPI_FLAG_N_MASK OTP_DATA_INTE_SBPI_FLAG_N(ALL1)

/*INTF Register macros*/

#define OTP_DATA_INTF_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_INTF_APB_RD_NSEC_FAIL_MASK OTP_DATA_INTF_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_INTF_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_INTF_APB_RD_SEC_FAIL_MASK OTP_DATA_INTF_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_INTF_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_INTF_APB_DCTRL_FAIL_MASK OTP_DATA_INTF_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_INTF_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_INTF_SBPI_WR_FAIL_MASK OTP_DATA_INTF_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_INTF_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_INTF_SBPI_FLAG_N_MASK OTP_DATA_INTF_SBPI_FLAG_N(ALL1)

/*INTS Register macros*/

#define OTP_DATA_INTS_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_INTS_APB_RD_NSEC_FAIL_MASK OTP_DATA_INTS_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_INTS_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_INTS_APB_RD_SEC_FAIL_MASK OTP_DATA_INTS_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_INTS_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_INTS_APB_DCTRL_FAIL_MASK OTP_DATA_INTS_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_INTS_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_INTS_SBPI_WR_FAIL_MASK OTP_DATA_INTS_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_INTS_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_INTS_SBPI_FLAG_N_MASK OTP_DATA_INTS_SBPI_FLAG_N(ALL1)

/*SW_LOCK0 Register macros*/

#define OTP_DATA_RAW_SW_LOCK0_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK0_NSEC_MASK OTP_DATA_RAW_SW_LOCK0_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK0_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK0_SEC_MASK OTP_DATA_RAW_SW_LOCK0_SEC(ALL1)

/*SW_LOCK1 Register macros*/

#define OTP_DATA_RAW_SW_LOCK1_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK1_NSEC_MASK OTP_DATA_RAW_SW_LOCK1_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK1_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK1_SEC_MASK OTP_DATA_RAW_SW_LOCK1_SEC(ALL1)

/*SW_LOCK2 Register macros*/

#define OTP_DATA_RAW_SW_LOCK2_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK2_NSEC_MASK OTP_DATA_RAW_SW_LOCK2_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK2_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK2_SEC_MASK OTP_DATA_RAW_SW_LOCK2_SEC(ALL1)

/*SW_LOCK3 Register macros*/

#define OTP_DATA_RAW_SW_LOCK3_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK3_NSEC_MASK OTP_DATA_RAW_SW_LOCK3_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK3_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK3_SEC_MASK OTP_DATA_RAW_SW_LOCK3_SEC(ALL1)

/*SW_LOCK4 Register macros*/

#define OTP_DATA_RAW_SW_LOCK4_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK4_NSEC_MASK OTP_DATA_RAW_SW_LOCK4_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK4_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK4_SEC_MASK OTP_DATA_RAW_SW_LOCK4_SEC(ALL1)

/*SW_LOCK5 Register macros*/

#define OTP_DATA_RAW_SW_LOCK5_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK5_NSEC_MASK OTP_DATA_RAW_SW_LOCK5_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK5_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK5_SEC_MASK OTP_DATA_RAW_SW_LOCK5_SEC(ALL1)

/*SW_LOCK6 Register macros*/

#define OTP_DATA_RAW_SW_LOCK6_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK6_NSEC_MASK OTP_DATA_RAW_SW_LOCK6_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK6_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK6_SEC_MASK OTP_DATA_RAW_SW_LOCK6_SEC(ALL1)

/*SW_LOCK7 Register macros*/

#define OTP_DATA_RAW_SW_LOCK7_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK7_NSEC_MASK OTP_DATA_RAW_SW_LOCK7_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK7_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK7_SEC_MASK OTP_DATA_RAW_SW_LOCK7_SEC(ALL1)

/*SW_LOCK8 Register macros*/

#define OTP_DATA_RAW_SW_LOCK8_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK8_NSEC_MASK OTP_DATA_RAW_SW_LOCK8_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK8_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK8_SEC_MASK OTP_DATA_RAW_SW_LOCK8_SEC(ALL1)

/*SW_LOCK9 Register macros*/

#define OTP_DATA_RAW_SW_LOCK9_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK9_NSEC_MASK OTP_DATA_RAW_SW_LOCK9_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK9_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK9_SEC_MASK OTP_DATA_RAW_SW_LOCK9_SEC(ALL1)

/*SW_LOCK10 Register macros*/

#define OTP_DATA_RAW_SW_LOCK10_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK10_NSEC_MASK OTP_DATA_RAW_SW_LOCK10_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK10_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK10_SEC_MASK OTP_DATA_RAW_SW_LOCK10_SEC(ALL1)

/*SW_LOCK11 Register macros*/

#define OTP_DATA_RAW_SW_LOCK11_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK11_NSEC_MASK OTP_DATA_RAW_SW_LOCK11_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK11_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK11_SEC_MASK OTP_DATA_RAW_SW_LOCK11_SEC(ALL1)

/*SW_LOCK12 Register macros*/

#define OTP_DATA_RAW_SW_LOCK12_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK12_NSEC_MASK OTP_DATA_RAW_SW_LOCK12_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK12_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK12_SEC_MASK OTP_DATA_RAW_SW_LOCK12_SEC(ALL1)

/*SW_LOCK13 Register macros*/

#define OTP_DATA_RAW_SW_LOCK13_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK13_NSEC_MASK OTP_DATA_RAW_SW_LOCK13_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK13_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK13_SEC_MASK OTP_DATA_RAW_SW_LOCK13_SEC(ALL1)

/*SW_LOCK14 Register macros*/

#define OTP_DATA_RAW_SW_LOCK14_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK14_NSEC_MASK OTP_DATA_RAW_SW_LOCK14_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK14_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK14_SEC_MASK OTP_DATA_RAW_SW_LOCK14_SEC(ALL1)

/*SW_LOCK15 Register macros*/

#define OTP_DATA_RAW_SW_LOCK15_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK15_NSEC_MASK OTP_DATA_RAW_SW_LOCK15_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK15_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK15_SEC_MASK OTP_DATA_RAW_SW_LOCK15_SEC(ALL1)

/*SW_LOCK16 Register macros*/

#define OTP_DATA_RAW_SW_LOCK16_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK16_NSEC_MASK OTP_DATA_RAW_SW_LOCK16_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK16_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK16_SEC_MASK OTP_DATA_RAW_SW_LOCK16_SEC(ALL1)

/*SW_LOCK17 Register macros*/

#define OTP_DATA_RAW_SW_LOCK17_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK17_NSEC_MASK OTP_DATA_RAW_SW_LOCK17_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK17_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK17_SEC_MASK OTP_DATA_RAW_SW_LOCK17_SEC(ALL1)

/*SW_LOCK18 Register macros*/

#define OTP_DATA_RAW_SW_LOCK18_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK18_NSEC_MASK OTP_DATA_RAW_SW_LOCK18_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK18_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK18_SEC_MASK OTP_DATA_RAW_SW_LOCK18_SEC(ALL1)

/*SW_LOCK19 Register macros*/

#define OTP_DATA_RAW_SW_LOCK19_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK19_NSEC_MASK OTP_DATA_RAW_SW_LOCK19_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK19_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK19_SEC_MASK OTP_DATA_RAW_SW_LOCK19_SEC(ALL1)

/*SW_LOCK20 Register macros*/

#define OTP_DATA_RAW_SW_LOCK20_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK20_NSEC_MASK OTP_DATA_RAW_SW_LOCK20_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK20_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK20_SEC_MASK OTP_DATA_RAW_SW_LOCK20_SEC(ALL1)

/*SW_LOCK21 Register macros*/

#define OTP_DATA_RAW_SW_LOCK21_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK21_NSEC_MASK OTP_DATA_RAW_SW_LOCK21_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK21_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK21_SEC_MASK OTP_DATA_RAW_SW_LOCK21_SEC(ALL1)

/*SW_LOCK22 Register macros*/

#define OTP_DATA_RAW_SW_LOCK22_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK22_NSEC_MASK OTP_DATA_RAW_SW_LOCK22_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK22_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK22_SEC_MASK OTP_DATA_RAW_SW_LOCK22_SEC(ALL1)

/*SW_LOCK23 Register macros*/

#define OTP_DATA_RAW_SW_LOCK23_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK23_NSEC_MASK OTP_DATA_RAW_SW_LOCK23_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK23_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK23_SEC_MASK OTP_DATA_RAW_SW_LOCK23_SEC(ALL1)

/*SW_LOCK24 Register macros*/

#define OTP_DATA_RAW_SW_LOCK24_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK24_NSEC_MASK OTP_DATA_RAW_SW_LOCK24_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK24_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK24_SEC_MASK OTP_DATA_RAW_SW_LOCK24_SEC(ALL1)

/*SW_LOCK25 Register macros*/

#define OTP_DATA_RAW_SW_LOCK25_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK25_NSEC_MASK OTP_DATA_RAW_SW_LOCK25_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK25_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK25_SEC_MASK OTP_DATA_RAW_SW_LOCK25_SEC(ALL1)

/*SW_LOCK26 Register macros*/

#define OTP_DATA_RAW_SW_LOCK26_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK26_NSEC_MASK OTP_DATA_RAW_SW_LOCK26_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK26_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK26_SEC_MASK OTP_DATA_RAW_SW_LOCK26_SEC(ALL1)

/*SW_LOCK27 Register macros*/

#define OTP_DATA_RAW_SW_LOCK27_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK27_NSEC_MASK OTP_DATA_RAW_SW_LOCK27_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK27_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK27_SEC_MASK OTP_DATA_RAW_SW_LOCK27_SEC(ALL1)

/*SW_LOCK28 Register macros*/

#define OTP_DATA_RAW_SW_LOCK28_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK28_NSEC_MASK OTP_DATA_RAW_SW_LOCK28_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK28_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK28_SEC_MASK OTP_DATA_RAW_SW_LOCK28_SEC(ALL1)

/*SW_LOCK29 Register macros*/

#define OTP_DATA_RAW_SW_LOCK29_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK29_NSEC_MASK OTP_DATA_RAW_SW_LOCK29_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK29_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK29_SEC_MASK OTP_DATA_RAW_SW_LOCK29_SEC(ALL1)

/*SW_LOCK30 Register macros*/

#define OTP_DATA_RAW_SW_LOCK30_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK30_NSEC_MASK OTP_DATA_RAW_SW_LOCK30_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK30_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK30_SEC_MASK OTP_DATA_RAW_SW_LOCK30_SEC(ALL1)

/*SW_LOCK31 Register macros*/

#define OTP_DATA_RAW_SW_LOCK31_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK31_NSEC_MASK OTP_DATA_RAW_SW_LOCK31_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK31_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK31_SEC_MASK OTP_DATA_RAW_SW_LOCK31_SEC(ALL1)

/*SW_LOCK32 Register macros*/

#define OTP_DATA_RAW_SW_LOCK32_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK32_NSEC_MASK OTP_DATA_RAW_SW_LOCK32_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK32_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK32_SEC_MASK OTP_DATA_RAW_SW_LOCK32_SEC(ALL1)

/*SW_LOCK33 Register macros*/

#define OTP_DATA_RAW_SW_LOCK33_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK33_NSEC_MASK OTP_DATA_RAW_SW_LOCK33_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK33_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK33_SEC_MASK OTP_DATA_RAW_SW_LOCK33_SEC(ALL1)

/*SW_LOCK34 Register macros*/

#define OTP_DATA_RAW_SW_LOCK34_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK34_NSEC_MASK OTP_DATA_RAW_SW_LOCK34_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK34_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK34_SEC_MASK OTP_DATA_RAW_SW_LOCK34_SEC(ALL1)

/*SW_LOCK35 Register macros*/

#define OTP_DATA_RAW_SW_LOCK35_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK35_NSEC_MASK OTP_DATA_RAW_SW_LOCK35_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK35_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK35_SEC_MASK OTP_DATA_RAW_SW_LOCK35_SEC(ALL1)

/*SW_LOCK36 Register macros*/

#define OTP_DATA_RAW_SW_LOCK36_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK36_NSEC_MASK OTP_DATA_RAW_SW_LOCK36_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK36_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK36_SEC_MASK OTP_DATA_RAW_SW_LOCK36_SEC(ALL1)

/*SW_LOCK37 Register macros*/

#define OTP_DATA_RAW_SW_LOCK37_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK37_NSEC_MASK OTP_DATA_RAW_SW_LOCK37_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK37_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK37_SEC_MASK OTP_DATA_RAW_SW_LOCK37_SEC(ALL1)

/*SW_LOCK38 Register macros*/

#define OTP_DATA_RAW_SW_LOCK38_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK38_NSEC_MASK OTP_DATA_RAW_SW_LOCK38_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK38_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK38_SEC_MASK OTP_DATA_RAW_SW_LOCK38_SEC(ALL1)

/*SW_LOCK39 Register macros*/

#define OTP_DATA_RAW_SW_LOCK39_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK39_NSEC_MASK OTP_DATA_RAW_SW_LOCK39_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK39_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK39_SEC_MASK OTP_DATA_RAW_SW_LOCK39_SEC(ALL1)

/*SW_LOCK40 Register macros*/

#define OTP_DATA_RAW_SW_LOCK40_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK40_NSEC_MASK OTP_DATA_RAW_SW_LOCK40_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK40_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK40_SEC_MASK OTP_DATA_RAW_SW_LOCK40_SEC(ALL1)

/*SW_LOCK41 Register macros*/

#define OTP_DATA_RAW_SW_LOCK41_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK41_NSEC_MASK OTP_DATA_RAW_SW_LOCK41_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK41_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK41_SEC_MASK OTP_DATA_RAW_SW_LOCK41_SEC(ALL1)

/*SW_LOCK42 Register macros*/

#define OTP_DATA_RAW_SW_LOCK42_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK42_NSEC_MASK OTP_DATA_RAW_SW_LOCK42_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK42_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK42_SEC_MASK OTP_DATA_RAW_SW_LOCK42_SEC(ALL1)

/*SW_LOCK43 Register macros*/

#define OTP_DATA_RAW_SW_LOCK43_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK43_NSEC_MASK OTP_DATA_RAW_SW_LOCK43_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK43_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK43_SEC_MASK OTP_DATA_RAW_SW_LOCK43_SEC(ALL1)

/*SW_LOCK44 Register macros*/

#define OTP_DATA_RAW_SW_LOCK44_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK44_NSEC_MASK OTP_DATA_RAW_SW_LOCK44_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK44_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK44_SEC_MASK OTP_DATA_RAW_SW_LOCK44_SEC(ALL1)

/*SW_LOCK45 Register macros*/

#define OTP_DATA_RAW_SW_LOCK45_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK45_NSEC_MASK OTP_DATA_RAW_SW_LOCK45_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK45_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK45_SEC_MASK OTP_DATA_RAW_SW_LOCK45_SEC(ALL1)

/*SW_LOCK46 Register macros*/

#define OTP_DATA_RAW_SW_LOCK46_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK46_NSEC_MASK OTP_DATA_RAW_SW_LOCK46_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK46_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK46_SEC_MASK OTP_DATA_RAW_SW_LOCK46_SEC(ALL1)

/*SW_LOCK47 Register macros*/

#define OTP_DATA_RAW_SW_LOCK47_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK47_NSEC_MASK OTP_DATA_RAW_SW_LOCK47_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK47_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK47_SEC_MASK OTP_DATA_RAW_SW_LOCK47_SEC(ALL1)

/*SW_LOCK48 Register macros*/

#define OTP_DATA_RAW_SW_LOCK48_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK48_NSEC_MASK OTP_DATA_RAW_SW_LOCK48_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK48_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK48_SEC_MASK OTP_DATA_RAW_SW_LOCK48_SEC(ALL1)

/*SW_LOCK49 Register macros*/

#define OTP_DATA_RAW_SW_LOCK49_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK49_NSEC_MASK OTP_DATA_RAW_SW_LOCK49_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK49_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK49_SEC_MASK OTP_DATA_RAW_SW_LOCK49_SEC(ALL1)

/*SW_LOCK50 Register macros*/

#define OTP_DATA_RAW_SW_LOCK50_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK50_NSEC_MASK OTP_DATA_RAW_SW_LOCK50_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK50_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK50_SEC_MASK OTP_DATA_RAW_SW_LOCK50_SEC(ALL1)

/*SW_LOCK51 Register macros*/

#define OTP_DATA_RAW_SW_LOCK51_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK51_NSEC_MASK OTP_DATA_RAW_SW_LOCK51_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK51_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK51_SEC_MASK OTP_DATA_RAW_SW_LOCK51_SEC(ALL1)

/*SW_LOCK52 Register macros*/

#define OTP_DATA_RAW_SW_LOCK52_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK52_NSEC_MASK OTP_DATA_RAW_SW_LOCK52_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK52_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK52_SEC_MASK OTP_DATA_RAW_SW_LOCK52_SEC(ALL1)

/*SW_LOCK53 Register macros*/

#define OTP_DATA_RAW_SW_LOCK53_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK53_NSEC_MASK OTP_DATA_RAW_SW_LOCK53_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK53_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK53_SEC_MASK OTP_DATA_RAW_SW_LOCK53_SEC(ALL1)

/*SW_LOCK54 Register macros*/

#define OTP_DATA_RAW_SW_LOCK54_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK54_NSEC_MASK OTP_DATA_RAW_SW_LOCK54_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK54_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK54_SEC_MASK OTP_DATA_RAW_SW_LOCK54_SEC(ALL1)

/*SW_LOCK55 Register macros*/

#define OTP_DATA_RAW_SW_LOCK55_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK55_NSEC_MASK OTP_DATA_RAW_SW_LOCK55_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK55_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK55_SEC_MASK OTP_DATA_RAW_SW_LOCK55_SEC(ALL1)

/*SW_LOCK56 Register macros*/

#define OTP_DATA_RAW_SW_LOCK56_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK56_NSEC_MASK OTP_DATA_RAW_SW_LOCK56_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK56_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK56_SEC_MASK OTP_DATA_RAW_SW_LOCK56_SEC(ALL1)

/*SW_LOCK57 Register macros*/

#define OTP_DATA_RAW_SW_LOCK57_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK57_NSEC_MASK OTP_DATA_RAW_SW_LOCK57_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK57_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK57_SEC_MASK OTP_DATA_RAW_SW_LOCK57_SEC(ALL1)

/*SW_LOCK58 Register macros*/

#define OTP_DATA_RAW_SW_LOCK58_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK58_NSEC_MASK OTP_DATA_RAW_SW_LOCK58_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK58_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK58_SEC_MASK OTP_DATA_RAW_SW_LOCK58_SEC(ALL1)

/*SW_LOCK59 Register macros*/

#define OTP_DATA_RAW_SW_LOCK59_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK59_NSEC_MASK OTP_DATA_RAW_SW_LOCK59_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK59_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK59_SEC_MASK OTP_DATA_RAW_SW_LOCK59_SEC(ALL1)

/*SW_LOCK60 Register macros*/

#define OTP_DATA_RAW_SW_LOCK60_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK60_NSEC_MASK OTP_DATA_RAW_SW_LOCK60_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK60_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK60_SEC_MASK OTP_DATA_RAW_SW_LOCK60_SEC(ALL1)

/*SW_LOCK61 Register macros*/

#define OTP_DATA_RAW_SW_LOCK61_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK61_NSEC_MASK OTP_DATA_RAW_SW_LOCK61_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK61_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK61_SEC_MASK OTP_DATA_RAW_SW_LOCK61_SEC(ALL1)

/*SW_LOCK62 Register macros*/

#define OTP_DATA_RAW_SW_LOCK62_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK62_NSEC_MASK OTP_DATA_RAW_SW_LOCK62_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK62_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK62_SEC_MASK OTP_DATA_RAW_SW_LOCK62_SEC(ALL1)

/*SW_LOCK63 Register macros*/

#define OTP_DATA_RAW_SW_LOCK63_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK63_NSEC_MASK OTP_DATA_RAW_SW_LOCK63_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK63_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK63_SEC_MASK OTP_DATA_RAW_SW_LOCK63_SEC(ALL1)

/*SBPI_INSTR Register macros*/

#define OTP_DATA_RAW_SBPI_INSTR_EXEC(v) (((v)&0x1)<<30)
#define OTP_DATA_RAW_SBPI_INSTR_EXEC_MASK OTP_DATA_RAW_SBPI_INSTR_EXEC(ALL1)
#define OTP_DATA_RAW_SBPI_INSTR_IS_WR(v) (((v)&0x1)<<29)
#define OTP_DATA_RAW_SBPI_INSTR_IS_WR_MASK OTP_DATA_RAW_SBPI_INSTR_IS_WR(ALL1)
#define OTP_DATA_RAW_SBPI_INSTR_HAS_PAYLOAD(v) (((v)&0x1)<<28)
#define OTP_DATA_RAW_SBPI_INSTR_HAS_PAYLOAD_MASK OTP_DATA_RAW_SBPI_INSTR_HAS_PAYLOAD(ALL1)
#define OTP_DATA_RAW_SBPI_INSTR_PAYLOAD_SIZE_M1(v) (((v)&0xf)<<24)
#define OTP_DATA_RAW_SBPI_INSTR_PAYLOAD_SIZE_M1_MASK OTP_DATA_RAW_SBPI_INSTR_PAYLOAD_SIZE_M1(ALL1)
#define OTP_DATA_RAW_SBPI_INSTR_TARGET(v) (((v)&0xff)<<16)
#define OTP_DATA_RAW_SBPI_INSTR_TARGET_MASK OTP_DATA_RAW_SBPI_INSTR_TARGET(ALL1)
#define OTP_DATA_RAW_SBPI_INSTR_CMD(v) (((v)&0xff)<<8)
#define OTP_DATA_RAW_SBPI_INSTR_CMD_MASK OTP_DATA_RAW_SBPI_INSTR_CMD(ALL1)
#define OTP_DATA_RAW_SBPI_INSTR_SHORT_WDATA(v) (((v)&0xff)<<0)
#define OTP_DATA_RAW_SBPI_INSTR_SHORT_WDATA_MASK OTP_DATA_RAW_SBPI_INSTR_SHORT_WDATA(ALL1)

/*SBPI_WDATA_0 Register macros*/


/*SBPI_WDATA_1 Register macros*/


/*SBPI_WDATA_2 Register macros*/


/*SBPI_WDATA_3 Register macros*/


/*SBPI_RDATA_0 Register macros*/


/*SBPI_RDATA_1 Register macros*/


/*SBPI_RDATA_2 Register macros*/


/*SBPI_RDATA_3 Register macros*/


/*SBPI_STATUS Register macros*/

#define OTP_DATA_RAW_SBPI_STATUS_MISO(v) (((v)&0xff)<<16)
#define OTP_DATA_RAW_SBPI_STATUS_MISO_MASK OTP_DATA_RAW_SBPI_STATUS_MISO(ALL1)
#define OTP_DATA_RAW_SBPI_STATUS_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_RAW_SBPI_STATUS_FLAG_MASK OTP_DATA_RAW_SBPI_STATUS_FLAG(ALL1)
#define OTP_DATA_RAW_SBPI_STATUS_INSTR_MISS(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_SBPI_STATUS_INSTR_MISS_MASK OTP_DATA_RAW_SBPI_STATUS_INSTR_MISS(ALL1)
#define OTP_DATA_RAW_SBPI_STATUS_INSTR_DONE(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_SBPI_STATUS_INSTR_DONE_MASK OTP_DATA_RAW_SBPI_STATUS_INSTR_DONE(ALL1)
#define OTP_DATA_RAW_SBPI_STATUS_RDATA_VLD(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_SBPI_STATUS_RDATA_VLD_MASK OTP_DATA_RAW_SBPI_STATUS_RDATA_VLD(ALL1)

/*USR Register macros*/

#define OTP_DATA_RAW_USR_PD(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_USR_PD_MASK OTP_DATA_RAW_USR_PD(ALL1)
#define OTP_DATA_RAW_USR_DCTRL(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_USR_DCTRL_MASK OTP_DATA_RAW_USR_DCTRL(ALL1)

/*DBG Register macros*/

#define OTP_DATA_RAW_DBG_CUSTOMER_RMA_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_RAW_DBG_CUSTOMER_RMA_FLAG_MASK OTP_DATA_RAW_DBG_CUSTOMER_RMA_FLAG(ALL1)
#define OTP_DATA_RAW_DBG_PSM_STATE(v) (((v)&0xf)<<4)
#define OTP_DATA_RAW_DBG_PSM_STATE_MASK OTP_DATA_RAW_DBG_PSM_STATE(ALL1)
#define OTP_DATA_RAW_DBG_ROSC_UP(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_DBG_ROSC_UP_MASK OTP_DATA_RAW_DBG_ROSC_UP(ALL1)
#define OTP_DATA_RAW_DBG_ROSC_UP_SEEN(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_DBG_ROSC_UP_SEEN_MASK OTP_DATA_RAW_DBG_ROSC_UP_SEEN(ALL1)
#define OTP_DATA_RAW_DBG_BOOT_DONE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_DBG_BOOT_DONE_MASK OTP_DATA_RAW_DBG_BOOT_DONE(ALL1)
#define OTP_DATA_RAW_DBG_PSM_DONE(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_DBG_PSM_DONE_MASK OTP_DATA_RAW_DBG_PSM_DONE(ALL1)

/*BIST Register macros*/

#define OTP_DATA_RAW_BIST_CNT_FAIL(v) (((v)&0x1)<<30)
#define OTP_DATA_RAW_BIST_CNT_FAIL_MASK OTP_DATA_RAW_BIST_CNT_FAIL(ALL1)
#define OTP_DATA_RAW_BIST_CNT_CLR(v) (((v)&0x1)<<29)
#define OTP_DATA_RAW_BIST_CNT_CLR_MASK OTP_DATA_RAW_BIST_CNT_CLR(ALL1)
#define OTP_DATA_RAW_BIST_CNT_ENA(v) (((v)&0x1)<<28)
#define OTP_DATA_RAW_BIST_CNT_ENA_MASK OTP_DATA_RAW_BIST_CNT_ENA(ALL1)
#define OTP_DATA_RAW_BIST_CNT_MAX(v) (((v)&0xfff)<<16)
#define OTP_DATA_RAW_BIST_CNT_MAX_MASK OTP_DATA_RAW_BIST_CNT_MAX(ALL1)
#define OTP_DATA_RAW_BIST_CNT(v) (((v)&0x1fff)<<0)
#define OTP_DATA_RAW_BIST_CNT_MASK OTP_DATA_RAW_BIST_CNT(ALL1)

/*CRT_KEY_W0 Register macros*/


/*CRT_KEY_W1 Register macros*/


/*CRT_KEY_W2 Register macros*/


/*CRT_KEY_W3 Register macros*/


/*CRITICAL Register macros*/

#define OTP_DATA_RAW_CRITICAL_RISCV_DISABLE(v) (((v)&0x1)<<17)
#define OTP_DATA_RAW_CRITICAL_RISCV_DISABLE_MASK OTP_DATA_RAW_CRITICAL_RISCV_DISABLE(ALL1)
#define OTP_DATA_RAW_CRITICAL_ARM_DISABLE(v) (((v)&0x1)<<16)
#define OTP_DATA_RAW_CRITICAL_ARM_DISABLE_MASK OTP_DATA_RAW_CRITICAL_ARM_DISABLE(ALL1)
#define OTP_DATA_RAW_CRITICAL_GLITCH_DETECTOR_SENS(v) (((v)&0x3)<<5)
#define OTP_DATA_RAW_CRITICAL_GLITCH_DETECTOR_SENS_MASK OTP_DATA_RAW_CRITICAL_GLITCH_DETECTOR_SENS(ALL1)
#define OTP_DATA_RAW_CRITICAL_GLITCH_DETECTOR_ENABLE(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_CRITICAL_GLITCH_DETECTOR_ENABLE_MASK OTP_DATA_RAW_CRITICAL_GLITCH_DETECTOR_ENABLE(ALL1)
#define OTP_DATA_RAW_CRITICAL_DEFAULT_ARCHSEL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_CRITICAL_DEFAULT_ARCHSEL_MASK OTP_DATA_RAW_CRITICAL_DEFAULT_ARCHSEL(ALL1)
#define OTP_DATA_RAW_CRITICAL_DEBUG_DISABLE(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_CRITICAL_DEBUG_DISABLE_MASK OTP_DATA_RAW_CRITICAL_DEBUG_DISABLE(ALL1)
#define OTP_DATA_RAW_CRITICAL_SECURE_DEBUG_DISABLE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_CRITICAL_SECURE_DEBUG_DISABLE_MASK OTP_DATA_RAW_CRITICAL_SECURE_DEBUG_DISABLE(ALL1)
#define OTP_DATA_RAW_CRITICAL_SECURE_BOOT_ENABLE(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_CRITICAL_SECURE_BOOT_ENABLE_MASK OTP_DATA_RAW_CRITICAL_SECURE_BOOT_ENABLE(ALL1)

/*KEY_VALID Register macros*/


/*DEBUGEN Register macros*/

#define OTP_DATA_RAW_DEBUGEN_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_DEBUGEN_MISC_MASK OTP_DATA_RAW_DEBUGEN_MISC(ALL1)
#define OTP_DATA_RAW_DEBUGEN_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_DEBUGEN_PROC1_SECURE_MASK OTP_DATA_RAW_DEBUGEN_PROC1_SECURE(ALL1)
#define OTP_DATA_RAW_DEBUGEN_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_DEBUGEN_PROC1_MASK OTP_DATA_RAW_DEBUGEN_PROC1(ALL1)
#define OTP_DATA_RAW_DEBUGEN_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_DEBUGEN_PROC0_SECURE_MASK OTP_DATA_RAW_DEBUGEN_PROC0_SECURE(ALL1)
#define OTP_DATA_RAW_DEBUGEN_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_DEBUGEN_PROC0_MASK OTP_DATA_RAW_DEBUGEN_PROC0(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_DEBUGEN_LOCK_MISC_MASK OTP_DATA_RAW_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC0(ALL1)

/*DEBUGEN_LOCK Register macros*/

#define OTP_DATA_RAW_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_DEBUGEN_LOCK_MISC_MASK OTP_DATA_RAW_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC0(ALL1)

/*ARCHSEL Register macros*/

#define OTP_DATA_RAW_ARCHSEL_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_ARCHSEL_CORE1_MASK OTP_DATA_RAW_ARCHSEL_CORE1(ALL1)
#define OTP_DATA_RAW_ARCHSEL_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_ARCHSEL_CORE0_MASK OTP_DATA_RAW_ARCHSEL_CORE0(ALL1)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_RAW_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_RAW_ARCHSEL_STATUS_CORE0(ALL1)

/*ARCHSEL_STATUS Register macros*/

#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_RAW_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_RAW_ARCHSEL_STATUS_CORE0(ALL1)

/*BOOTDIS Register macros*/

#define OTP_DATA_RAW_BOOTDIS_NEXT(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_BOOTDIS_NEXT_MASK OTP_DATA_RAW_BOOTDIS_NEXT(ALL1)
#define OTP_DATA_RAW_BOOTDIS_NOW(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_BOOTDIS_NOW_MASK OTP_DATA_RAW_BOOTDIS_NOW(ALL1)

/*INTR Register macros*/

#define OTP_DATA_RAW_INTR_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_INTR_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_INTR_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTR_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_INTR_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_INTR_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTR_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_INTR_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_INTR_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_INTR_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_INTR_SBPI_WR_FAIL_MASK OTP_DATA_RAW_INTR_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_INTR_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_INTR_SBPI_FLAG_N_MASK OTP_DATA_RAW_INTR_SBPI_FLAG_N(ALL1)

/*INTE Register macros*/

#define OTP_DATA_RAW_INTE_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_INTE_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_INTE_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTE_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_INTE_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_INTE_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTE_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_INTE_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_INTE_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_INTE_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_INTE_SBPI_WR_FAIL_MASK OTP_DATA_RAW_INTE_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_INTE_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_INTE_SBPI_FLAG_N_MASK OTP_DATA_RAW_INTE_SBPI_FLAG_N(ALL1)

/*INTF Register macros*/

#define OTP_DATA_RAW_INTF_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_INTF_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_INTF_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTF_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_INTF_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_INTF_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTF_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_INTF_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_INTF_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_INTF_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_INTF_SBPI_WR_FAIL_MASK OTP_DATA_RAW_INTF_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_INTF_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_INTF_SBPI_FLAG_N_MASK OTP_DATA_RAW_INTF_SBPI_FLAG_N(ALL1)

/*INTS Register macros*/

#define OTP_DATA_RAW_INTS_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_INTS_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_INTS_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTS_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_INTS_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_INTS_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTS_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_INTS_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_INTS_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_INTS_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_INTS_SBPI_WR_FAIL_MASK OTP_DATA_RAW_INTS_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_INTS_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_INTS_SBPI_FLAG_N_MASK OTP_DATA_RAW_INTS_SBPI_FLAG_N(ALL1)

/*SW_LOCK0 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK0_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK0_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK0_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK0_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK0_SEC_MASK OTP_DATA_GUARDED_SW_LOCK0_SEC(ALL1)

/*SW_LOCK1 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK1_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK1_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK1_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK1_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK1_SEC_MASK OTP_DATA_GUARDED_SW_LOCK1_SEC(ALL1)

/*SW_LOCK2 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK2_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK2_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK2_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK2_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK2_SEC_MASK OTP_DATA_GUARDED_SW_LOCK2_SEC(ALL1)

/*SW_LOCK3 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK3_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK3_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK3_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK3_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK3_SEC_MASK OTP_DATA_GUARDED_SW_LOCK3_SEC(ALL1)

/*SW_LOCK4 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK4_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK4_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK4_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK4_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK4_SEC_MASK OTP_DATA_GUARDED_SW_LOCK4_SEC(ALL1)

/*SW_LOCK5 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK5_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK5_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK5_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK5_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK5_SEC_MASK OTP_DATA_GUARDED_SW_LOCK5_SEC(ALL1)

/*SW_LOCK6 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK6_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK6_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK6_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK6_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK6_SEC_MASK OTP_DATA_GUARDED_SW_LOCK6_SEC(ALL1)

/*SW_LOCK7 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK7_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK7_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK7_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK7_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK7_SEC_MASK OTP_DATA_GUARDED_SW_LOCK7_SEC(ALL1)

/*SW_LOCK8 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK8_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK8_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK8_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK8_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK8_SEC_MASK OTP_DATA_GUARDED_SW_LOCK8_SEC(ALL1)

/*SW_LOCK9 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK9_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK9_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK9_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK9_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK9_SEC_MASK OTP_DATA_GUARDED_SW_LOCK9_SEC(ALL1)

/*SW_LOCK10 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK10_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK10_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK10_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK10_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK10_SEC_MASK OTP_DATA_GUARDED_SW_LOCK10_SEC(ALL1)

/*SW_LOCK11 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK11_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK11_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK11_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK11_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK11_SEC_MASK OTP_DATA_GUARDED_SW_LOCK11_SEC(ALL1)

/*SW_LOCK12 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK12_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK12_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK12_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK12_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK12_SEC_MASK OTP_DATA_GUARDED_SW_LOCK12_SEC(ALL1)

/*SW_LOCK13 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK13_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK13_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK13_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK13_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK13_SEC_MASK OTP_DATA_GUARDED_SW_LOCK13_SEC(ALL1)

/*SW_LOCK14 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK14_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK14_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK14_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK14_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK14_SEC_MASK OTP_DATA_GUARDED_SW_LOCK14_SEC(ALL1)

/*SW_LOCK15 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK15_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK15_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK15_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK15_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK15_SEC_MASK OTP_DATA_GUARDED_SW_LOCK15_SEC(ALL1)

/*SW_LOCK16 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK16_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK16_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK16_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK16_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK16_SEC_MASK OTP_DATA_GUARDED_SW_LOCK16_SEC(ALL1)

/*SW_LOCK17 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK17_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK17_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK17_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK17_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK17_SEC_MASK OTP_DATA_GUARDED_SW_LOCK17_SEC(ALL1)

/*SW_LOCK18 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK18_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK18_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK18_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK18_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK18_SEC_MASK OTP_DATA_GUARDED_SW_LOCK18_SEC(ALL1)

/*SW_LOCK19 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK19_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK19_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK19_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK19_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK19_SEC_MASK OTP_DATA_GUARDED_SW_LOCK19_SEC(ALL1)

/*SW_LOCK20 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK20_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK20_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK20_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK20_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK20_SEC_MASK OTP_DATA_GUARDED_SW_LOCK20_SEC(ALL1)

/*SW_LOCK21 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK21_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK21_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK21_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK21_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK21_SEC_MASK OTP_DATA_GUARDED_SW_LOCK21_SEC(ALL1)

/*SW_LOCK22 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK22_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK22_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK22_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK22_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK22_SEC_MASK OTP_DATA_GUARDED_SW_LOCK22_SEC(ALL1)

/*SW_LOCK23 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK23_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK23_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK23_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK23_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK23_SEC_MASK OTP_DATA_GUARDED_SW_LOCK23_SEC(ALL1)

/*SW_LOCK24 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK24_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK24_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK24_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK24_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK24_SEC_MASK OTP_DATA_GUARDED_SW_LOCK24_SEC(ALL1)

/*SW_LOCK25 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK25_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK25_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK25_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK25_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK25_SEC_MASK OTP_DATA_GUARDED_SW_LOCK25_SEC(ALL1)

/*SW_LOCK26 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK26_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK26_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK26_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK26_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK26_SEC_MASK OTP_DATA_GUARDED_SW_LOCK26_SEC(ALL1)

/*SW_LOCK27 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK27_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK27_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK27_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK27_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK27_SEC_MASK OTP_DATA_GUARDED_SW_LOCK27_SEC(ALL1)

/*SW_LOCK28 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK28_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK28_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK28_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK28_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK28_SEC_MASK OTP_DATA_GUARDED_SW_LOCK28_SEC(ALL1)

/*SW_LOCK29 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK29_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK29_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK29_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK29_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK29_SEC_MASK OTP_DATA_GUARDED_SW_LOCK29_SEC(ALL1)

/*SW_LOCK30 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK30_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK30_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK30_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK30_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK30_SEC_MASK OTP_DATA_GUARDED_SW_LOCK30_SEC(ALL1)

/*SW_LOCK31 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK31_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK31_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK31_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK31_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK31_SEC_MASK OTP_DATA_GUARDED_SW_LOCK31_SEC(ALL1)

/*SW_LOCK32 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK32_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK32_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK32_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK32_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK32_SEC_MASK OTP_DATA_GUARDED_SW_LOCK32_SEC(ALL1)

/*SW_LOCK33 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK33_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK33_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK33_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK33_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK33_SEC_MASK OTP_DATA_GUARDED_SW_LOCK33_SEC(ALL1)

/*SW_LOCK34 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK34_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK34_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK34_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK34_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK34_SEC_MASK OTP_DATA_GUARDED_SW_LOCK34_SEC(ALL1)

/*SW_LOCK35 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK35_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK35_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK35_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK35_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK35_SEC_MASK OTP_DATA_GUARDED_SW_LOCK35_SEC(ALL1)

/*SW_LOCK36 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK36_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK36_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK36_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK36_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK36_SEC_MASK OTP_DATA_GUARDED_SW_LOCK36_SEC(ALL1)

/*SW_LOCK37 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK37_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK37_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK37_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK37_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK37_SEC_MASK OTP_DATA_GUARDED_SW_LOCK37_SEC(ALL1)

/*SW_LOCK38 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK38_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK38_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK38_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK38_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK38_SEC_MASK OTP_DATA_GUARDED_SW_LOCK38_SEC(ALL1)

/*SW_LOCK39 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK39_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK39_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK39_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK39_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK39_SEC_MASK OTP_DATA_GUARDED_SW_LOCK39_SEC(ALL1)

/*SW_LOCK40 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK40_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK40_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK40_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK40_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK40_SEC_MASK OTP_DATA_GUARDED_SW_LOCK40_SEC(ALL1)

/*SW_LOCK41 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK41_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK41_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK41_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK41_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK41_SEC_MASK OTP_DATA_GUARDED_SW_LOCK41_SEC(ALL1)

/*SW_LOCK42 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK42_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK42_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK42_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK42_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK42_SEC_MASK OTP_DATA_GUARDED_SW_LOCK42_SEC(ALL1)

/*SW_LOCK43 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK43_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK43_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK43_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK43_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK43_SEC_MASK OTP_DATA_GUARDED_SW_LOCK43_SEC(ALL1)

/*SW_LOCK44 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK44_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK44_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK44_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK44_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK44_SEC_MASK OTP_DATA_GUARDED_SW_LOCK44_SEC(ALL1)

/*SW_LOCK45 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK45_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK45_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK45_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK45_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK45_SEC_MASK OTP_DATA_GUARDED_SW_LOCK45_SEC(ALL1)

/*SW_LOCK46 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK46_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK46_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK46_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK46_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK46_SEC_MASK OTP_DATA_GUARDED_SW_LOCK46_SEC(ALL1)

/*SW_LOCK47 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK47_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK47_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK47_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK47_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK47_SEC_MASK OTP_DATA_GUARDED_SW_LOCK47_SEC(ALL1)

/*SW_LOCK48 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK48_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK48_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK48_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK48_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK48_SEC_MASK OTP_DATA_GUARDED_SW_LOCK48_SEC(ALL1)

/*SW_LOCK49 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK49_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK49_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK49_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK49_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK49_SEC_MASK OTP_DATA_GUARDED_SW_LOCK49_SEC(ALL1)

/*SW_LOCK50 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK50_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK50_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK50_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK50_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK50_SEC_MASK OTP_DATA_GUARDED_SW_LOCK50_SEC(ALL1)

/*SW_LOCK51 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK51_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK51_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK51_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK51_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK51_SEC_MASK OTP_DATA_GUARDED_SW_LOCK51_SEC(ALL1)

/*SW_LOCK52 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK52_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK52_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK52_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK52_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK52_SEC_MASK OTP_DATA_GUARDED_SW_LOCK52_SEC(ALL1)

/*SW_LOCK53 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK53_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK53_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK53_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK53_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK53_SEC_MASK OTP_DATA_GUARDED_SW_LOCK53_SEC(ALL1)

/*SW_LOCK54 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK54_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK54_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK54_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK54_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK54_SEC_MASK OTP_DATA_GUARDED_SW_LOCK54_SEC(ALL1)

/*SW_LOCK55 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK55_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK55_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK55_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK55_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK55_SEC_MASK OTP_DATA_GUARDED_SW_LOCK55_SEC(ALL1)

/*SW_LOCK56 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK56_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK56_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK56_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK56_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK56_SEC_MASK OTP_DATA_GUARDED_SW_LOCK56_SEC(ALL1)

/*SW_LOCK57 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK57_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK57_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK57_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK57_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK57_SEC_MASK OTP_DATA_GUARDED_SW_LOCK57_SEC(ALL1)

/*SW_LOCK58 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK58_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK58_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK58_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK58_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK58_SEC_MASK OTP_DATA_GUARDED_SW_LOCK58_SEC(ALL1)

/*SW_LOCK59 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK59_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK59_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK59_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK59_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK59_SEC_MASK OTP_DATA_GUARDED_SW_LOCK59_SEC(ALL1)

/*SW_LOCK60 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK60_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK60_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK60_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK60_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK60_SEC_MASK OTP_DATA_GUARDED_SW_LOCK60_SEC(ALL1)

/*SW_LOCK61 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK61_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK61_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK61_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK61_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK61_SEC_MASK OTP_DATA_GUARDED_SW_LOCK61_SEC(ALL1)

/*SW_LOCK62 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK62_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK62_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK62_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK62_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK62_SEC_MASK OTP_DATA_GUARDED_SW_LOCK62_SEC(ALL1)

/*SW_LOCK63 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK63_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK63_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK63_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK63_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK63_SEC_MASK OTP_DATA_GUARDED_SW_LOCK63_SEC(ALL1)

/*SBPI_INSTR Register macros*/

#define OTP_DATA_GUARDED_SBPI_INSTR_EXEC(v) (((v)&0x1)<<30)
#define OTP_DATA_GUARDED_SBPI_INSTR_EXEC_MASK OTP_DATA_GUARDED_SBPI_INSTR_EXEC(ALL1)
#define OTP_DATA_GUARDED_SBPI_INSTR_IS_WR(v) (((v)&0x1)<<29)
#define OTP_DATA_GUARDED_SBPI_INSTR_IS_WR_MASK OTP_DATA_GUARDED_SBPI_INSTR_IS_WR(ALL1)
#define OTP_DATA_GUARDED_SBPI_INSTR_HAS_PAYLOAD(v) (((v)&0x1)<<28)
#define OTP_DATA_GUARDED_SBPI_INSTR_HAS_PAYLOAD_MASK OTP_DATA_GUARDED_SBPI_INSTR_HAS_PAYLOAD(ALL1)
#define OTP_DATA_GUARDED_SBPI_INSTR_PAYLOAD_SIZE_M1(v) (((v)&0xf)<<24)
#define OTP_DATA_GUARDED_SBPI_INSTR_PAYLOAD_SIZE_M1_MASK OTP_DATA_GUARDED_SBPI_INSTR_PAYLOAD_SIZE_M1(ALL1)
#define OTP_DATA_GUARDED_SBPI_INSTR_TARGET(v) (((v)&0xff)<<16)
#define OTP_DATA_GUARDED_SBPI_INSTR_TARGET_MASK OTP_DATA_GUARDED_SBPI_INSTR_TARGET(ALL1)
#define OTP_DATA_GUARDED_SBPI_INSTR_CMD(v) (((v)&0xff)<<8)
#define OTP_DATA_GUARDED_SBPI_INSTR_CMD_MASK OTP_DATA_GUARDED_SBPI_INSTR_CMD(ALL1)
#define OTP_DATA_GUARDED_SBPI_INSTR_SHORT_WDATA(v) (((v)&0xff)<<0)
#define OTP_DATA_GUARDED_SBPI_INSTR_SHORT_WDATA_MASK OTP_DATA_GUARDED_SBPI_INSTR_SHORT_WDATA(ALL1)

/*SBPI_WDATA_0 Register macros*/


/*SBPI_WDATA_1 Register macros*/


/*SBPI_WDATA_2 Register macros*/


/*SBPI_WDATA_3 Register macros*/


/*SBPI_RDATA_0 Register macros*/


/*SBPI_RDATA_1 Register macros*/


/*SBPI_RDATA_2 Register macros*/


/*SBPI_RDATA_3 Register macros*/


/*SBPI_STATUS Register macros*/

#define OTP_DATA_GUARDED_SBPI_STATUS_MISO(v) (((v)&0xff)<<16)
#define OTP_DATA_GUARDED_SBPI_STATUS_MISO_MASK OTP_DATA_GUARDED_SBPI_STATUS_MISO(ALL1)
#define OTP_DATA_GUARDED_SBPI_STATUS_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_GUARDED_SBPI_STATUS_FLAG_MASK OTP_DATA_GUARDED_SBPI_STATUS_FLAG(ALL1)
#define OTP_DATA_GUARDED_SBPI_STATUS_INSTR_MISS(v) (((v)&0x1)<<8)
#define OTP_DATA_GUARDED_SBPI_STATUS_INSTR_MISS_MASK OTP_DATA_GUARDED_SBPI_STATUS_INSTR_MISS(ALL1)
#define OTP_DATA_GUARDED_SBPI_STATUS_INSTR_DONE(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_SBPI_STATUS_INSTR_DONE_MASK OTP_DATA_GUARDED_SBPI_STATUS_INSTR_DONE(ALL1)
#define OTP_DATA_GUARDED_SBPI_STATUS_RDATA_VLD(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_SBPI_STATUS_RDATA_VLD_MASK OTP_DATA_GUARDED_SBPI_STATUS_RDATA_VLD(ALL1)

/*USR Register macros*/

#define OTP_DATA_GUARDED_USR_PD(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_USR_PD_MASK OTP_DATA_GUARDED_USR_PD(ALL1)
#define OTP_DATA_GUARDED_USR_DCTRL(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_USR_DCTRL_MASK OTP_DATA_GUARDED_USR_DCTRL(ALL1)

/*DBG Register macros*/

#define OTP_DATA_GUARDED_DBG_CUSTOMER_RMA_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_GUARDED_DBG_CUSTOMER_RMA_FLAG_MASK OTP_DATA_GUARDED_DBG_CUSTOMER_RMA_FLAG(ALL1)
#define OTP_DATA_GUARDED_DBG_PSM_STATE(v) (((v)&0xf)<<4)
#define OTP_DATA_GUARDED_DBG_PSM_STATE_MASK OTP_DATA_GUARDED_DBG_PSM_STATE(ALL1)
#define OTP_DATA_GUARDED_DBG_ROSC_UP(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_DBG_ROSC_UP_MASK OTP_DATA_GUARDED_DBG_ROSC_UP(ALL1)
#define OTP_DATA_GUARDED_DBG_ROSC_UP_SEEN(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_DBG_ROSC_UP_SEEN_MASK OTP_DATA_GUARDED_DBG_ROSC_UP_SEEN(ALL1)
#define OTP_DATA_GUARDED_DBG_BOOT_DONE(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_DBG_BOOT_DONE_MASK OTP_DATA_GUARDED_DBG_BOOT_DONE(ALL1)
#define OTP_DATA_GUARDED_DBG_PSM_DONE(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_DBG_PSM_DONE_MASK OTP_DATA_GUARDED_DBG_PSM_DONE(ALL1)

/*BIST Register macros*/

#define OTP_DATA_GUARDED_BIST_CNT_FAIL(v) (((v)&0x1)<<30)
#define OTP_DATA_GUARDED_BIST_CNT_FAIL_MASK OTP_DATA_GUARDED_BIST_CNT_FAIL(ALL1)
#define OTP_DATA_GUARDED_BIST_CNT_CLR(v) (((v)&0x1)<<29)
#define OTP_DATA_GUARDED_BIST_CNT_CLR_MASK OTP_DATA_GUARDED_BIST_CNT_CLR(ALL1)
#define OTP_DATA_GUARDED_BIST_CNT_ENA(v) (((v)&0x1)<<28)
#define OTP_DATA_GUARDED_BIST_CNT_ENA_MASK OTP_DATA_GUARDED_BIST_CNT_ENA(ALL1)
#define OTP_DATA_GUARDED_BIST_CNT_MAX(v) (((v)&0xfff)<<16)
#define OTP_DATA_GUARDED_BIST_CNT_MAX_MASK OTP_DATA_GUARDED_BIST_CNT_MAX(ALL1)
#define OTP_DATA_GUARDED_BIST_CNT(v) (((v)&0x1fff)<<0)
#define OTP_DATA_GUARDED_BIST_CNT_MASK OTP_DATA_GUARDED_BIST_CNT(ALL1)

/*CRT_KEY_W0 Register macros*/


/*CRT_KEY_W1 Register macros*/


/*CRT_KEY_W2 Register macros*/


/*CRT_KEY_W3 Register macros*/


/*CRITICAL Register macros*/

#define OTP_DATA_GUARDED_CRITICAL_RISCV_DISABLE(v) (((v)&0x1)<<17)
#define OTP_DATA_GUARDED_CRITICAL_RISCV_DISABLE_MASK OTP_DATA_GUARDED_CRITICAL_RISCV_DISABLE(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_ARM_DISABLE(v) (((v)&0x1)<<16)
#define OTP_DATA_GUARDED_CRITICAL_ARM_DISABLE_MASK OTP_DATA_GUARDED_CRITICAL_ARM_DISABLE(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_GLITCH_DETECTOR_SENS(v) (((v)&0x3)<<5)
#define OTP_DATA_GUARDED_CRITICAL_GLITCH_DETECTOR_SENS_MASK OTP_DATA_GUARDED_CRITICAL_GLITCH_DETECTOR_SENS(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_GLITCH_DETECTOR_ENABLE(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_CRITICAL_GLITCH_DETECTOR_ENABLE_MASK OTP_DATA_GUARDED_CRITICAL_GLITCH_DETECTOR_ENABLE(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_DEFAULT_ARCHSEL(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_CRITICAL_DEFAULT_ARCHSEL_MASK OTP_DATA_GUARDED_CRITICAL_DEFAULT_ARCHSEL(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_DEBUG_DISABLE(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_CRITICAL_DEBUG_DISABLE_MASK OTP_DATA_GUARDED_CRITICAL_DEBUG_DISABLE(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_SECURE_DEBUG_DISABLE(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_CRITICAL_SECURE_DEBUG_DISABLE_MASK OTP_DATA_GUARDED_CRITICAL_SECURE_DEBUG_DISABLE(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_SECURE_BOOT_ENABLE(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_CRITICAL_SECURE_BOOT_ENABLE_MASK OTP_DATA_GUARDED_CRITICAL_SECURE_BOOT_ENABLE(ALL1)

/*KEY_VALID Register macros*/


/*DEBUGEN Register macros*/

#define OTP_DATA_GUARDED_DEBUGEN_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_GUARDED_DEBUGEN_MISC_MASK OTP_DATA_GUARDED_DEBUGEN_MISC(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_DEBUGEN_PROC1_SECURE_MASK OTP_DATA_GUARDED_DEBUGEN_PROC1_SECURE(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_DEBUGEN_PROC1_MASK OTP_DATA_GUARDED_DEBUGEN_PROC1(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_DEBUGEN_PROC0_SECURE_MASK OTP_DATA_GUARDED_DEBUGEN_PROC0_SECURE(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_DEBUGEN_PROC0_MASK OTP_DATA_GUARDED_DEBUGEN_PROC0(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_MISC_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0(ALL1)

/*DEBUGEN_LOCK Register macros*/

#define OTP_DATA_GUARDED_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_MISC_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0(ALL1)

/*ARCHSEL Register macros*/

#define OTP_DATA_GUARDED_ARCHSEL_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_ARCHSEL_CORE1_MASK OTP_DATA_GUARDED_ARCHSEL_CORE1(ALL1)
#define OTP_DATA_GUARDED_ARCHSEL_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_ARCHSEL_CORE0_MASK OTP_DATA_GUARDED_ARCHSEL_CORE0(ALL1)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE0(ALL1)

/*ARCHSEL_STATUS Register macros*/

#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE0(ALL1)

/*BOOTDIS Register macros*/

#define OTP_DATA_GUARDED_BOOTDIS_NEXT(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_BOOTDIS_NEXT_MASK OTP_DATA_GUARDED_BOOTDIS_NEXT(ALL1)
#define OTP_DATA_GUARDED_BOOTDIS_NOW(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_BOOTDIS_NOW_MASK OTP_DATA_GUARDED_BOOTDIS_NOW(ALL1)

/*INTR Register macros*/

#define OTP_DATA_GUARDED_INTR_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_INTR_APB_RD_NSEC_FAIL_MASK OTP_DATA_GUARDED_INTR_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTR_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_INTR_APB_RD_SEC_FAIL_MASK OTP_DATA_GUARDED_INTR_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTR_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_INTR_APB_DCTRL_FAIL_MASK OTP_DATA_GUARDED_INTR_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTR_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_INTR_SBPI_WR_FAIL_MASK OTP_DATA_GUARDED_INTR_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTR_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_INTR_SBPI_FLAG_N_MASK OTP_DATA_GUARDED_INTR_SBPI_FLAG_N(ALL1)

/*INTE Register macros*/

#define OTP_DATA_GUARDED_INTE_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_INTE_APB_RD_NSEC_FAIL_MASK OTP_DATA_GUARDED_INTE_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTE_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_INTE_APB_RD_SEC_FAIL_MASK OTP_DATA_GUARDED_INTE_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTE_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_INTE_APB_DCTRL_FAIL_MASK OTP_DATA_GUARDED_INTE_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTE_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_INTE_SBPI_WR_FAIL_MASK OTP_DATA_GUARDED_INTE_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTE_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_INTE_SBPI_FLAG_N_MASK OTP_DATA_GUARDED_INTE_SBPI_FLAG_N(ALL1)

/*INTF Register macros*/

#define OTP_DATA_GUARDED_INTF_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_INTF_APB_RD_NSEC_FAIL_MASK OTP_DATA_GUARDED_INTF_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTF_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_INTF_APB_RD_SEC_FAIL_MASK OTP_DATA_GUARDED_INTF_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTF_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_INTF_APB_DCTRL_FAIL_MASK OTP_DATA_GUARDED_INTF_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTF_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_INTF_SBPI_WR_FAIL_MASK OTP_DATA_GUARDED_INTF_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTF_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_INTF_SBPI_FLAG_N_MASK OTP_DATA_GUARDED_INTF_SBPI_FLAG_N(ALL1)

/*INTS Register macros*/

#define OTP_DATA_GUARDED_INTS_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_INTS_APB_RD_NSEC_FAIL_MASK OTP_DATA_GUARDED_INTS_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTS_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_INTS_APB_RD_SEC_FAIL_MASK OTP_DATA_GUARDED_INTS_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTS_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_INTS_APB_DCTRL_FAIL_MASK OTP_DATA_GUARDED_INTS_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTS_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_INTS_SBPI_WR_FAIL_MASK OTP_DATA_GUARDED_INTS_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTS_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_INTS_SBPI_FLAG_N_MASK OTP_DATA_GUARDED_INTS_SBPI_FLAG_N(ALL1)

/*SW_LOCK0 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK0_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK0_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK0_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK0_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK0_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK0_SEC(ALL1)

/*SW_LOCK1 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK1_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK1_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK1_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK1_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK1_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK1_SEC(ALL1)

/*SW_LOCK2 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK2_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK2_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK2_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK2_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK2_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK2_SEC(ALL1)

/*SW_LOCK3 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK3_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK3_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK3_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK3_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK3_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK3_SEC(ALL1)

/*SW_LOCK4 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK4_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK4_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK4_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK4_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK4_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK4_SEC(ALL1)

/*SW_LOCK5 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK5_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK5_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK5_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK5_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK5_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK5_SEC(ALL1)

/*SW_LOCK6 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK6_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK6_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK6_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK6_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK6_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK6_SEC(ALL1)

/*SW_LOCK7 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK7_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK7_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK7_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK7_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK7_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK7_SEC(ALL1)

/*SW_LOCK8 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK8_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK8_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK8_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK8_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK8_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK8_SEC(ALL1)

/*SW_LOCK9 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK9_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK9_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK9_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK9_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK9_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK9_SEC(ALL1)

/*SW_LOCK10 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK10_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK10_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK10_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK10_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK10_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK10_SEC(ALL1)

/*SW_LOCK11 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK11_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK11_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK11_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK11_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK11_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK11_SEC(ALL1)

/*SW_LOCK12 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK12_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK12_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK12_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK12_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK12_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK12_SEC(ALL1)

/*SW_LOCK13 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK13_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK13_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK13_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK13_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK13_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK13_SEC(ALL1)

/*SW_LOCK14 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK14_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK14_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK14_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK14_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK14_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK14_SEC(ALL1)

/*SW_LOCK15 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK15_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK15_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK15_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK15_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK15_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK15_SEC(ALL1)

/*SW_LOCK16 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK16_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK16_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK16_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK16_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK16_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK16_SEC(ALL1)

/*SW_LOCK17 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK17_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK17_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK17_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK17_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK17_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK17_SEC(ALL1)

/*SW_LOCK18 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK18_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK18_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK18_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK18_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK18_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK18_SEC(ALL1)

/*SW_LOCK19 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK19_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK19_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK19_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK19_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK19_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK19_SEC(ALL1)

/*SW_LOCK20 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK20_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK20_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK20_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK20_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK20_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK20_SEC(ALL1)

/*SW_LOCK21 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK21_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK21_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK21_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK21_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK21_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK21_SEC(ALL1)

/*SW_LOCK22 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK22_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK22_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK22_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK22_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK22_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK22_SEC(ALL1)

/*SW_LOCK23 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK23_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK23_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK23_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK23_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK23_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK23_SEC(ALL1)

/*SW_LOCK24 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK24_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK24_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK24_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK24_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK24_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK24_SEC(ALL1)

/*SW_LOCK25 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK25_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK25_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK25_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK25_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK25_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK25_SEC(ALL1)

/*SW_LOCK26 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK26_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK26_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK26_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK26_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK26_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK26_SEC(ALL1)

/*SW_LOCK27 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK27_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK27_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK27_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK27_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK27_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK27_SEC(ALL1)

/*SW_LOCK28 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK28_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK28_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK28_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK28_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK28_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK28_SEC(ALL1)

/*SW_LOCK29 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK29_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK29_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK29_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK29_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK29_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK29_SEC(ALL1)

/*SW_LOCK30 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK30_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK30_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK30_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK30_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK30_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK30_SEC(ALL1)

/*SW_LOCK31 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK31_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK31_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK31_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK31_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK31_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK31_SEC(ALL1)

/*SW_LOCK32 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK32_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK32_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK32_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK32_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK32_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK32_SEC(ALL1)

/*SW_LOCK33 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK33_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK33_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK33_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK33_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK33_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK33_SEC(ALL1)

/*SW_LOCK34 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK34_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK34_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK34_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK34_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK34_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK34_SEC(ALL1)

/*SW_LOCK35 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK35_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK35_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK35_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK35_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK35_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK35_SEC(ALL1)

/*SW_LOCK36 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK36_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK36_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK36_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK36_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK36_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK36_SEC(ALL1)

/*SW_LOCK37 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK37_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK37_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK37_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK37_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK37_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK37_SEC(ALL1)

/*SW_LOCK38 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK38_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK38_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK38_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK38_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK38_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK38_SEC(ALL1)

/*SW_LOCK39 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK39_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK39_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK39_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK39_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK39_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK39_SEC(ALL1)

/*SW_LOCK40 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK40_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK40_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK40_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK40_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK40_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK40_SEC(ALL1)

/*SW_LOCK41 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK41_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK41_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK41_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK41_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK41_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK41_SEC(ALL1)

/*SW_LOCK42 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK42_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK42_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK42_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK42_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK42_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK42_SEC(ALL1)

/*SW_LOCK43 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK43_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK43_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK43_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK43_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK43_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK43_SEC(ALL1)

/*SW_LOCK44 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK44_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK44_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK44_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK44_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK44_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK44_SEC(ALL1)

/*SW_LOCK45 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK45_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK45_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK45_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK45_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK45_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK45_SEC(ALL1)

/*SW_LOCK46 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK46_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK46_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK46_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK46_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK46_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK46_SEC(ALL1)

/*SW_LOCK47 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK47_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK47_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK47_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK47_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK47_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK47_SEC(ALL1)

/*SW_LOCK48 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK48_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK48_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK48_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK48_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK48_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK48_SEC(ALL1)

/*SW_LOCK49 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK49_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK49_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK49_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK49_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK49_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK49_SEC(ALL1)

/*SW_LOCK50 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK50_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK50_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK50_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK50_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK50_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK50_SEC(ALL1)

/*SW_LOCK51 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK51_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK51_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK51_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK51_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK51_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK51_SEC(ALL1)

/*SW_LOCK52 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK52_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK52_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK52_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK52_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK52_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK52_SEC(ALL1)

/*SW_LOCK53 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK53_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK53_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK53_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK53_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK53_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK53_SEC(ALL1)

/*SW_LOCK54 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK54_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK54_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK54_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK54_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK54_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK54_SEC(ALL1)

/*SW_LOCK55 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK55_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK55_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK55_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK55_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK55_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK55_SEC(ALL1)

/*SW_LOCK56 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK56_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK56_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK56_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK56_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK56_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK56_SEC(ALL1)

/*SW_LOCK57 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK57_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK57_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK57_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK57_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK57_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK57_SEC(ALL1)

/*SW_LOCK58 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK58_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK58_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK58_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK58_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK58_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK58_SEC(ALL1)

/*SW_LOCK59 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK59_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK59_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK59_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK59_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK59_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK59_SEC(ALL1)

/*SW_LOCK60 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK60_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK60_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK60_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK60_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK60_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK60_SEC(ALL1)

/*SW_LOCK61 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK61_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK61_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK61_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK61_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK61_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK61_SEC(ALL1)

/*SW_LOCK62 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK62_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK62_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK62_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK62_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK62_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK62_SEC(ALL1)

/*SW_LOCK63 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK63_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK63_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK63_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK63_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK63_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK63_SEC(ALL1)

/*SBPI_INSTR Register macros*/

#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_EXEC(v) (((v)&0x1)<<30)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_EXEC_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_EXEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_IS_WR(v) (((v)&0x1)<<29)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_IS_WR_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_IS_WR(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_HAS_PAYLOAD(v) (((v)&0x1)<<28)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_HAS_PAYLOAD_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_HAS_PAYLOAD(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_PAYLOAD_SIZE_M1(v) (((v)&0xf)<<24)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_PAYLOAD_SIZE_M1_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_PAYLOAD_SIZE_M1(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_TARGET(v) (((v)&0xff)<<16)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_TARGET_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_TARGET(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_CMD(v) (((v)&0xff)<<8)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_CMD_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_CMD(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_SHORT_WDATA(v) (((v)&0xff)<<0)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_SHORT_WDATA_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_SHORT_WDATA(ALL1)

/*SBPI_WDATA_0 Register macros*/


/*SBPI_WDATA_1 Register macros*/


/*SBPI_WDATA_2 Register macros*/


/*SBPI_WDATA_3 Register macros*/


/*SBPI_RDATA_0 Register macros*/


/*SBPI_RDATA_1 Register macros*/


/*SBPI_RDATA_2 Register macros*/


/*SBPI_RDATA_3 Register macros*/


/*SBPI_STATUS Register macros*/

#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_MISO(v) (((v)&0xff)<<16)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_MISO_MASK OTP_DATA_RAW_GUARDED_SBPI_STATUS_MISO(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_FLAG_MASK OTP_DATA_RAW_GUARDED_SBPI_STATUS_FLAG(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_INSTR_MISS(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_INSTR_MISS_MASK OTP_DATA_RAW_GUARDED_SBPI_STATUS_INSTR_MISS(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_INSTR_DONE(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_INSTR_DONE_MASK OTP_DATA_RAW_GUARDED_SBPI_STATUS_INSTR_DONE(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_RDATA_VLD(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_RDATA_VLD_MASK OTP_DATA_RAW_GUARDED_SBPI_STATUS_RDATA_VLD(ALL1)

/*USR Register macros*/

#define OTP_DATA_RAW_GUARDED_USR_PD(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_USR_PD_MASK OTP_DATA_RAW_GUARDED_USR_PD(ALL1)
#define OTP_DATA_RAW_GUARDED_USR_DCTRL(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_USR_DCTRL_MASK OTP_DATA_RAW_GUARDED_USR_DCTRL(ALL1)

/*DBG Register macros*/

#define OTP_DATA_RAW_GUARDED_DBG_CUSTOMER_RMA_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_RAW_GUARDED_DBG_CUSTOMER_RMA_FLAG_MASK OTP_DATA_RAW_GUARDED_DBG_CUSTOMER_RMA_FLAG(ALL1)
#define OTP_DATA_RAW_GUARDED_DBG_PSM_STATE(v) (((v)&0xf)<<4)
#define OTP_DATA_RAW_GUARDED_DBG_PSM_STATE_MASK OTP_DATA_RAW_GUARDED_DBG_PSM_STATE(ALL1)
#define OTP_DATA_RAW_GUARDED_DBG_ROSC_UP(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_DBG_ROSC_UP_MASK OTP_DATA_RAW_GUARDED_DBG_ROSC_UP(ALL1)
#define OTP_DATA_RAW_GUARDED_DBG_ROSC_UP_SEEN(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_DBG_ROSC_UP_SEEN_MASK OTP_DATA_RAW_GUARDED_DBG_ROSC_UP_SEEN(ALL1)
#define OTP_DATA_RAW_GUARDED_DBG_BOOT_DONE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_DBG_BOOT_DONE_MASK OTP_DATA_RAW_GUARDED_DBG_BOOT_DONE(ALL1)
#define OTP_DATA_RAW_GUARDED_DBG_PSM_DONE(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_DBG_PSM_DONE_MASK OTP_DATA_RAW_GUARDED_DBG_PSM_DONE(ALL1)

/*BIST Register macros*/

#define OTP_DATA_RAW_GUARDED_BIST_CNT_FAIL(v) (((v)&0x1)<<30)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_FAIL_MASK OTP_DATA_RAW_GUARDED_BIST_CNT_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_CLR(v) (((v)&0x1)<<29)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_CLR_MASK OTP_DATA_RAW_GUARDED_BIST_CNT_CLR(ALL1)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_ENA(v) (((v)&0x1)<<28)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_ENA_MASK OTP_DATA_RAW_GUARDED_BIST_CNT_ENA(ALL1)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_MAX(v) (((v)&0xfff)<<16)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_MAX_MASK OTP_DATA_RAW_GUARDED_BIST_CNT_MAX(ALL1)
#define OTP_DATA_RAW_GUARDED_BIST_CNT(v) (((v)&0x1fff)<<0)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_MASK OTP_DATA_RAW_GUARDED_BIST_CNT(ALL1)

/*CRT_KEY_W0 Register macros*/


/*CRT_KEY_W1 Register macros*/


/*CRT_KEY_W2 Register macros*/


/*CRT_KEY_W3 Register macros*/


/*CRITICAL Register macros*/

#define OTP_DATA_RAW_GUARDED_CRITICAL_RISCV_DISABLE(v) (((v)&0x1)<<17)
#define OTP_DATA_RAW_GUARDED_CRITICAL_RISCV_DISABLE_MASK OTP_DATA_RAW_GUARDED_CRITICAL_RISCV_DISABLE(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_ARM_DISABLE(v) (((v)&0x1)<<16)
#define OTP_DATA_RAW_GUARDED_CRITICAL_ARM_DISABLE_MASK OTP_DATA_RAW_GUARDED_CRITICAL_ARM_DISABLE(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_GLITCH_DETECTOR_SENS(v) (((v)&0x3)<<5)
#define OTP_DATA_RAW_GUARDED_CRITICAL_GLITCH_DETECTOR_SENS_MASK OTP_DATA_RAW_GUARDED_CRITICAL_GLITCH_DETECTOR_SENS(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_GLITCH_DETECTOR_ENABLE(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_CRITICAL_GLITCH_DETECTOR_ENABLE_MASK OTP_DATA_RAW_GUARDED_CRITICAL_GLITCH_DETECTOR_ENABLE(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_DEFAULT_ARCHSEL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_CRITICAL_DEFAULT_ARCHSEL_MASK OTP_DATA_RAW_GUARDED_CRITICAL_DEFAULT_ARCHSEL(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_DEBUG_DISABLE(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_CRITICAL_DEBUG_DISABLE_MASK OTP_DATA_RAW_GUARDED_CRITICAL_DEBUG_DISABLE(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_SECURE_DEBUG_DISABLE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_SECURE_DEBUG_DISABLE_MASK OTP_DATA_RAW_GUARDED_CRITICAL_SECURE_DEBUG_DISABLE(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_SECURE_BOOT_ENABLE(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_CRITICAL_SECURE_BOOT_ENABLE_MASK OTP_DATA_RAW_GUARDED_CRITICAL_SECURE_BOOT_ENABLE(ALL1)

/*KEY_VALID Register macros*/


/*DEBUGEN Register macros*/

#define OTP_DATA_RAW_GUARDED_DEBUGEN_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_MISC_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_MISC(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC1_SECURE_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_PROC1_SECURE(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC1_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_PROC1(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC0_SECURE_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_PROC0_SECURE(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC0_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_PROC0(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_MISC_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0(ALL1)

/*DEBUGEN_LOCK Register macros*/

#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_MISC_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0(ALL1)

/*ARCHSEL Register macros*/

#define OTP_DATA_RAW_GUARDED_ARCHSEL_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_CORE1_MASK OTP_DATA_RAW_GUARDED_ARCHSEL_CORE1(ALL1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_CORE0_MASK OTP_DATA_RAW_GUARDED_ARCHSEL_CORE0(ALL1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE0(ALL1)

/*ARCHSEL_STATUS Register macros*/

#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE0(ALL1)

/*BOOTDIS Register macros*/

#define OTP_DATA_RAW_GUARDED_BOOTDIS_NEXT(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_BOOTDIS_NEXT_MASK OTP_DATA_RAW_GUARDED_BOOTDIS_NEXT(ALL1)
#define OTP_DATA_RAW_GUARDED_BOOTDIS_NOW(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_BOOTDIS_NOW_MASK OTP_DATA_RAW_GUARDED_BOOTDIS_NOW(ALL1)

/*INTR Register macros*/

#define OTP_DATA_RAW_GUARDED_INTR_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_INTR_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTR_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTR_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_INTR_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTR_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTR_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_INTR_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_GUARDED_INTR_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTR_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_INTR_SBPI_WR_FAIL_MASK OTP_DATA_RAW_GUARDED_INTR_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTR_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_INTR_SBPI_FLAG_N_MASK OTP_DATA_RAW_GUARDED_INTR_SBPI_FLAG_N(ALL1)

/*INTE Register macros*/

#define OTP_DATA_RAW_GUARDED_INTE_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_INTE_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTE_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTE_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_INTE_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTE_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTE_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_INTE_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_GUARDED_INTE_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTE_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_INTE_SBPI_WR_FAIL_MASK OTP_DATA_RAW_GUARDED_INTE_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTE_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_INTE_SBPI_FLAG_N_MASK OTP_DATA_RAW_GUARDED_INTE_SBPI_FLAG_N(ALL1)

/*INTF Register macros*/

#define OTP_DATA_RAW_GUARDED_INTF_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_INTF_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTF_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTF_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_INTF_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTF_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTF_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_INTF_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_GUARDED_INTF_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTF_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_INTF_SBPI_WR_FAIL_MASK OTP_DATA_RAW_GUARDED_INTF_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTF_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_INTF_SBPI_FLAG_N_MASK OTP_DATA_RAW_GUARDED_INTF_SBPI_FLAG_N(ALL1)

/*INTS Register macros*/

#define OTP_DATA_RAW_GUARDED_INTS_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_INTS_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTS_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTS_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_INTS_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTS_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTS_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_INTS_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_GUARDED_INTS_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTS_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_INTS_SBPI_WR_FAIL_MASK OTP_DATA_RAW_GUARDED_INTS_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTS_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_INTS_SBPI_FLAG_N_MASK OTP_DATA_RAW_GUARDED_INTS_SBPI_FLAG_N(ALL1)

#endif

