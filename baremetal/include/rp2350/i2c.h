
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

#ifndef RP2350_I2C_H
#define RP2350_I2C_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ic_con;
		uint32_t ic_tar;
		uint32_t ic_sar;
		uint32_t RSVD0;
		uint32_t ic_data_cmd;
		uint32_t ic_ss_scl_hcnt;
		uint32_t ic_ss_scl_lcnt;
		uint32_t ic_fs_scl_hcnt;
		uint32_t ic_fs_scl_lcnt;
		uint32_t RSVD1[2];
		uint32_t ic_intr_stat;
		uint32_t ic_intr_mask;
		uint32_t ic_raw_intr_stat;
		uint32_t ic_rx_tl;
		uint32_t ic_tx_tl;
		uint32_t ic_clr_intr;
		uint32_t ic_clr_rx_under;
		uint32_t ic_clr_rx_over;
		uint32_t ic_clr_tx_over;
		uint32_t ic_clr_rd_req;
		uint32_t ic_clr_tx_abrt;
		uint32_t ic_clr_rx_done;
		uint32_t ic_clr_activity;
		uint32_t ic_clr_stop_det;
		uint32_t ic_clr_start_det;
		uint32_t ic_clr_gen_call;
		uint32_t ic_enable;
		uint32_t ic_status;
		uint32_t ic_txflr;
		uint32_t ic_rxflr;
		uint32_t ic_sda_hold;
		uint32_t ic_tx_abrt_source;
		uint32_t ic_slv_data_nack_only;
		uint32_t ic_dma_cr;
		uint32_t ic_dma_tdlr;
		uint32_t ic_dma_rdlr;
		uint32_t ic_sda_setup;
		uint32_t ic_ack_general_call;
		uint32_t ic_enable_status;
		uint32_t ic_fs_spklen;
		uint32_t RSVD2;
		uint32_t ic_clr_restart_det;
		uint32_t RSVD3[18];
		uint32_t ic_comp_param_1;
		uint32_t ic_comp_version;
		uint32_t ic_comp_type;
		uint32_t RSVD4[960];
		uint32_t ic_con_xor;
		uint32_t ic_tar_xor;
		uint32_t ic_sar_xor;
		uint32_t RSVDxor_0;
		uint32_t ic_data_cmd_xor;
		uint32_t ic_ss_scl_hcnt_xor;
		uint32_t ic_ss_scl_lcnt_xor;
		uint32_t ic_fs_scl_hcnt_xor;
		uint32_t ic_fs_scl_lcnt_xor;
		uint32_t RSVDxor_1[2];
		uint32_t ic_intr_stat_xor;
		uint32_t ic_intr_mask_xor;
		uint32_t ic_raw_intr_stat_xor;
		uint32_t ic_rx_tl_xor;
		uint32_t ic_tx_tl_xor;
		uint32_t ic_clr_intr_xor;
		uint32_t ic_clr_rx_under_xor;
		uint32_t ic_clr_rx_over_xor;
		uint32_t ic_clr_tx_over_xor;
		uint32_t ic_clr_rd_req_xor;
		uint32_t ic_clr_tx_abrt_xor;
		uint32_t ic_clr_rx_done_xor;
		uint32_t ic_clr_activity_xor;
		uint32_t ic_clr_stop_det_xor;
		uint32_t ic_clr_start_det_xor;
		uint32_t ic_clr_gen_call_xor;
		uint32_t ic_enable_xor;
		uint32_t ic_status_xor;
		uint32_t ic_txflr_xor;
		uint32_t ic_rxflr_xor;
		uint32_t ic_sda_hold_xor;
		uint32_t ic_tx_abrt_source_xor;
		uint32_t ic_slv_data_nack_only_xor;
		uint32_t ic_dma_cr_xor;
		uint32_t ic_dma_tdlr_xor;
		uint32_t ic_dma_rdlr_xor;
		uint32_t ic_sda_setup_xor;
		uint32_t ic_ack_general_call_xor;
		uint32_t ic_enable_status_xor;
		uint32_t ic_fs_spklen_xor;
		uint32_t RSVDxor_2;
		uint32_t ic_clr_restart_det_xor;
		uint32_t RSVDxor_3[18];
		uint32_t ic_comp_param_1_xor;
		uint32_t ic_comp_version_xor;
		uint32_t ic_comp_type_xor;
		uint32_t RSVDxor_4[960];
		uint32_t ic_con_set;
		uint32_t ic_tar_set;
		uint32_t ic_sar_set;
		uint32_t RSVDset_0;
		uint32_t ic_data_cmd_set;
		uint32_t ic_ss_scl_hcnt_set;
		uint32_t ic_ss_scl_lcnt_set;
		uint32_t ic_fs_scl_hcnt_set;
		uint32_t ic_fs_scl_lcnt_set;
		uint32_t RSVDset_1[2];
		uint32_t ic_intr_stat_set;
		uint32_t ic_intr_mask_set;
		uint32_t ic_raw_intr_stat_set;
		uint32_t ic_rx_tl_set;
		uint32_t ic_tx_tl_set;
		uint32_t ic_clr_intr_set;
		uint32_t ic_clr_rx_under_set;
		uint32_t ic_clr_rx_over_set;
		uint32_t ic_clr_tx_over_set;
		uint32_t ic_clr_rd_req_set;
		uint32_t ic_clr_tx_abrt_set;
		uint32_t ic_clr_rx_done_set;
		uint32_t ic_clr_activity_set;
		uint32_t ic_clr_stop_det_set;
		uint32_t ic_clr_start_det_set;
		uint32_t ic_clr_gen_call_set;
		uint32_t ic_enable_set;
		uint32_t ic_status_set;
		uint32_t ic_txflr_set;
		uint32_t ic_rxflr_set;
		uint32_t ic_sda_hold_set;
		uint32_t ic_tx_abrt_source_set;
		uint32_t ic_slv_data_nack_only_set;
		uint32_t ic_dma_cr_set;
		uint32_t ic_dma_tdlr_set;
		uint32_t ic_dma_rdlr_set;
		uint32_t ic_sda_setup_set;
		uint32_t ic_ack_general_call_set;
		uint32_t ic_enable_status_set;
		uint32_t ic_fs_spklen_set;
		uint32_t RSVDset_2;
		uint32_t ic_clr_restart_det_set;
		uint32_t RSVDset_3[18];
		uint32_t ic_comp_param_1_set;
		uint32_t ic_comp_version_set;
		uint32_t ic_comp_type_set;
		uint32_t RSVDset_4[960];
		uint32_t ic_con_clr;
		uint32_t ic_tar_clr;
		uint32_t ic_sar_clr;
		uint32_t RSVDclr_0;
		uint32_t ic_data_cmd_clr;
		uint32_t ic_ss_scl_hcnt_clr;
		uint32_t ic_ss_scl_lcnt_clr;
		uint32_t ic_fs_scl_hcnt_clr;
		uint32_t ic_fs_scl_lcnt_clr;
		uint32_t RSVDclr_1[2];
		uint32_t ic_intr_stat_clr;
		uint32_t ic_intr_mask_clr;
		uint32_t ic_raw_intr_stat_clr;
		uint32_t ic_rx_tl_clr;
		uint32_t ic_tx_tl_clr;
		uint32_t ic_clr_intr_clr;
		uint32_t ic_clr_rx_under_clr;
		uint32_t ic_clr_rx_over_clr;
		uint32_t ic_clr_tx_over_clr;
		uint32_t ic_clr_rd_req_clr;
		uint32_t ic_clr_tx_abrt_clr;
		uint32_t ic_clr_rx_done_clr;
		uint32_t ic_clr_activity_clr;
		uint32_t ic_clr_stop_det_clr;
		uint32_t ic_clr_start_det_clr;
		uint32_t ic_clr_gen_call_clr;
		uint32_t ic_enable_clr;
		uint32_t ic_status_clr;
		uint32_t ic_txflr_clr;
		uint32_t ic_rxflr_clr;
		uint32_t ic_sda_hold_clr;
		uint32_t ic_tx_abrt_source_clr;
		uint32_t ic_slv_data_nack_only_clr;
		uint32_t ic_dma_cr_clr;
		uint32_t ic_dma_tdlr_clr;
		uint32_t ic_dma_rdlr_clr;
		uint32_t ic_sda_setup_clr;
		uint32_t ic_ack_general_call_clr;
		uint32_t ic_enable_status_clr;
		uint32_t ic_fs_spklen_clr;
		uint32_t RSVDclr_2;
		uint32_t ic_clr_restart_det_clr;
		uint32_t RSVDclr_3[18];
		uint32_t ic_comp_param_1_clr;
		uint32_t ic_comp_version_clr;
		uint32_t ic_comp_type_clr;
		uint32_t RSVDclr_4[960];
} I2C0_REG_BLOCKS;
typedef struct{
		uint32_t ic_con;
		uint32_t ic_tar;
		uint32_t ic_sar;
		uint32_t RSVD0;
		uint32_t ic_data_cmd;
		uint32_t ic_ss_scl_hcnt;
		uint32_t ic_ss_scl_lcnt;
		uint32_t ic_fs_scl_hcnt;
		uint32_t ic_fs_scl_lcnt;
		uint32_t RSVD1[2];
		uint32_t ic_intr_stat;
		uint32_t ic_intr_mask;
		uint32_t ic_raw_intr_stat;
		uint32_t ic_rx_tl;
		uint32_t ic_tx_tl;
		uint32_t ic_clr_intr;
		uint32_t ic_clr_rx_under;
		uint32_t ic_clr_rx_over;
		uint32_t ic_clr_tx_over;
		uint32_t ic_clr_rd_req;
		uint32_t ic_clr_tx_abrt;
		uint32_t ic_clr_rx_done;
		uint32_t ic_clr_activity;
		uint32_t ic_clr_stop_det;
		uint32_t ic_clr_start_det;
		uint32_t ic_clr_gen_call;
		uint32_t ic_enable;
		uint32_t ic_status;
		uint32_t ic_txflr;
		uint32_t ic_rxflr;
		uint32_t ic_sda_hold;
		uint32_t ic_tx_abrt_source;
		uint32_t ic_slv_data_nack_only;
		uint32_t ic_dma_cr;
		uint32_t ic_dma_tdlr;
		uint32_t ic_dma_rdlr;
		uint32_t ic_sda_setup;
		uint32_t ic_ack_general_call;
		uint32_t ic_enable_status;
		uint32_t ic_fs_spklen;
		uint32_t RSVD2;
		uint32_t ic_clr_restart_det;
		uint32_t RSVD3[18];
		uint32_t ic_comp_param_1;
		uint32_t ic_comp_version;
		uint32_t ic_comp_type;
		uint32_t RSVD4[960];
		uint32_t ic_con_xor;
		uint32_t ic_tar_xor;
		uint32_t ic_sar_xor;
		uint32_t RSVDxor_0;
		uint32_t ic_data_cmd_xor;
		uint32_t ic_ss_scl_hcnt_xor;
		uint32_t ic_ss_scl_lcnt_xor;
		uint32_t ic_fs_scl_hcnt_xor;
		uint32_t ic_fs_scl_lcnt_xor;
		uint32_t RSVDxor_1[2];
		uint32_t ic_intr_stat_xor;
		uint32_t ic_intr_mask_xor;
		uint32_t ic_raw_intr_stat_xor;
		uint32_t ic_rx_tl_xor;
		uint32_t ic_tx_tl_xor;
		uint32_t ic_clr_intr_xor;
		uint32_t ic_clr_rx_under_xor;
		uint32_t ic_clr_rx_over_xor;
		uint32_t ic_clr_tx_over_xor;
		uint32_t ic_clr_rd_req_xor;
		uint32_t ic_clr_tx_abrt_xor;
		uint32_t ic_clr_rx_done_xor;
		uint32_t ic_clr_activity_xor;
		uint32_t ic_clr_stop_det_xor;
		uint32_t ic_clr_start_det_xor;
		uint32_t ic_clr_gen_call_xor;
		uint32_t ic_enable_xor;
		uint32_t ic_status_xor;
		uint32_t ic_txflr_xor;
		uint32_t ic_rxflr_xor;
		uint32_t ic_sda_hold_xor;
		uint32_t ic_tx_abrt_source_xor;
		uint32_t ic_slv_data_nack_only_xor;
		uint32_t ic_dma_cr_xor;
		uint32_t ic_dma_tdlr_xor;
		uint32_t ic_dma_rdlr_xor;
		uint32_t ic_sda_setup_xor;
		uint32_t ic_ack_general_call_xor;
		uint32_t ic_enable_status_xor;
		uint32_t ic_fs_spklen_xor;
		uint32_t RSVDxor_2;
		uint32_t ic_clr_restart_det_xor;
		uint32_t RSVDxor_3[18];
		uint32_t ic_comp_param_1_xor;
		uint32_t ic_comp_version_xor;
		uint32_t ic_comp_type_xor;
		uint32_t RSVDxor_4[960];
		uint32_t ic_con_set;
		uint32_t ic_tar_set;
		uint32_t ic_sar_set;
		uint32_t RSVDset_0;
		uint32_t ic_data_cmd_set;
		uint32_t ic_ss_scl_hcnt_set;
		uint32_t ic_ss_scl_lcnt_set;
		uint32_t ic_fs_scl_hcnt_set;
		uint32_t ic_fs_scl_lcnt_set;
		uint32_t RSVDset_1[2];
		uint32_t ic_intr_stat_set;
		uint32_t ic_intr_mask_set;
		uint32_t ic_raw_intr_stat_set;
		uint32_t ic_rx_tl_set;
		uint32_t ic_tx_tl_set;
		uint32_t ic_clr_intr_set;
		uint32_t ic_clr_rx_under_set;
		uint32_t ic_clr_rx_over_set;
		uint32_t ic_clr_tx_over_set;
		uint32_t ic_clr_rd_req_set;
		uint32_t ic_clr_tx_abrt_set;
		uint32_t ic_clr_rx_done_set;
		uint32_t ic_clr_activity_set;
		uint32_t ic_clr_stop_det_set;
		uint32_t ic_clr_start_det_set;
		uint32_t ic_clr_gen_call_set;
		uint32_t ic_enable_set;
		uint32_t ic_status_set;
		uint32_t ic_txflr_set;
		uint32_t ic_rxflr_set;
		uint32_t ic_sda_hold_set;
		uint32_t ic_tx_abrt_source_set;
		uint32_t ic_slv_data_nack_only_set;
		uint32_t ic_dma_cr_set;
		uint32_t ic_dma_tdlr_set;
		uint32_t ic_dma_rdlr_set;
		uint32_t ic_sda_setup_set;
		uint32_t ic_ack_general_call_set;
		uint32_t ic_enable_status_set;
		uint32_t ic_fs_spklen_set;
		uint32_t RSVDset_2;
		uint32_t ic_clr_restart_det_set;
		uint32_t RSVDset_3[18];
		uint32_t ic_comp_param_1_set;
		uint32_t ic_comp_version_set;
		uint32_t ic_comp_type_set;
		uint32_t RSVDset_4[960];
		uint32_t ic_con_clr;
		uint32_t ic_tar_clr;
		uint32_t ic_sar_clr;
		uint32_t RSVDclr_0;
		uint32_t ic_data_cmd_clr;
		uint32_t ic_ss_scl_hcnt_clr;
		uint32_t ic_ss_scl_lcnt_clr;
		uint32_t ic_fs_scl_hcnt_clr;
		uint32_t ic_fs_scl_lcnt_clr;
		uint32_t RSVDclr_1[2];
		uint32_t ic_intr_stat_clr;
		uint32_t ic_intr_mask_clr;
		uint32_t ic_raw_intr_stat_clr;
		uint32_t ic_rx_tl_clr;
		uint32_t ic_tx_tl_clr;
		uint32_t ic_clr_intr_clr;
		uint32_t ic_clr_rx_under_clr;
		uint32_t ic_clr_rx_over_clr;
		uint32_t ic_clr_tx_over_clr;
		uint32_t ic_clr_rd_req_clr;
		uint32_t ic_clr_tx_abrt_clr;
		uint32_t ic_clr_rx_done_clr;
		uint32_t ic_clr_activity_clr;
		uint32_t ic_clr_stop_det_clr;
		uint32_t ic_clr_start_det_clr;
		uint32_t ic_clr_gen_call_clr;
		uint32_t ic_enable_clr;
		uint32_t ic_status_clr;
		uint32_t ic_txflr_clr;
		uint32_t ic_rxflr_clr;
		uint32_t ic_sda_hold_clr;
		uint32_t ic_tx_abrt_source_clr;
		uint32_t ic_slv_data_nack_only_clr;
		uint32_t ic_dma_cr_clr;
		uint32_t ic_dma_tdlr_clr;
		uint32_t ic_dma_rdlr_clr;
		uint32_t ic_sda_setup_clr;
		uint32_t ic_ack_general_call_clr;
		uint32_t ic_enable_status_clr;
		uint32_t ic_fs_spklen_clr;
		uint32_t RSVDclr_2;
		uint32_t ic_clr_restart_det_clr;
		uint32_t RSVDclr_3[18];
		uint32_t ic_comp_param_1_clr;
		uint32_t ic_comp_version_clr;
		uint32_t ic_comp_type_clr;
		uint32_t RSVDclr_4[960];
} I2C1_REG_BLOCKS;


/*IO Registers as struct*/

#define i2c0 (*(I2C0_REG_BLOCKS volatile *)0x40090000)



#define i2c1 (*(I2C1_REG_BLOCKS volatile *)0x40098000)


/*IO Registers AS MACROS*/

#define I2C0_IC_CON (*(volatile uint32_t *)0x40090000)
#define I2C0_IC_TAR (*(volatile uint32_t *)0x40090004)
#define I2C0_IC_SAR (*(volatile uint32_t *)0x40090008)
#define I2C0_IC_DATA_CMD (*(volatile uint32_t *)0x40090010)
#define I2C0_IC_SS_SCL_HCNT (*(volatile uint32_t *)0x40090014)
#define I2C0_IC_SS_SCL_LCNT (*(volatile uint32_t *)0x40090018)
#define I2C0_IC_FS_SCL_HCNT (*(volatile uint32_t *)0x4009001c)
#define I2C0_IC_FS_SCL_LCNT (*(volatile uint32_t *)0x40090020)
#define I2C0_IC_INTR_STAT (*(volatile uint32_t *)0x4009002c)
#define I2C0_IC_INTR_MASK (*(volatile uint32_t *)0x40090030)
#define I2C0_IC_RAW_INTR_STAT (*(volatile uint32_t *)0x40090034)
#define I2C0_IC_RX_TL (*(volatile uint32_t *)0x40090038)
#define I2C0_IC_TX_TL (*(volatile uint32_t *)0x4009003c)
#define I2C0_IC_CLR_INTR (*(volatile uint32_t *)0x40090040)
#define I2C0_IC_CLR_RX_UNDER (*(volatile uint32_t *)0x40090044)
#define I2C0_IC_CLR_RX_OVER (*(volatile uint32_t *)0x40090048)
#define I2C0_IC_CLR_TX_OVER (*(volatile uint32_t *)0x4009004c)
#define I2C0_IC_CLR_RD_REQ (*(volatile uint32_t *)0x40090050)
#define I2C0_IC_CLR_TX_ABRT (*(volatile uint32_t *)0x40090054)
#define I2C0_IC_CLR_RX_DONE (*(volatile uint32_t *)0x40090058)
#define I2C0_IC_CLR_ACTIVITY (*(volatile uint32_t *)0x4009005c)
#define I2C0_IC_CLR_STOP_DET (*(volatile uint32_t *)0x40090060)
#define I2C0_IC_CLR_START_DET (*(volatile uint32_t *)0x40090064)
#define I2C0_IC_CLR_GEN_CALL (*(volatile uint32_t *)0x40090068)
#define I2C0_IC_ENABLE (*(volatile uint32_t *)0x4009006c)
#define I2C0_IC_STATUS (*(volatile uint32_t *)0x40090070)
#define I2C0_IC_TXFLR (*(volatile uint32_t *)0x40090074)
#define I2C0_IC_RXFLR (*(volatile uint32_t *)0x40090078)
#define I2C0_IC_SDA_HOLD (*(volatile uint32_t *)0x4009007c)
#define I2C0_IC_TX_ABRT_SOURCE (*(volatile uint32_t *)0x40090080)
#define I2C0_IC_SLV_DATA_NACK_ONLY (*(volatile uint32_t *)0x40090084)
#define I2C0_IC_DMA_CR (*(volatile uint32_t *)0x40090088)
#define I2C0_IC_DMA_TDLR (*(volatile uint32_t *)0x4009008c)
#define I2C0_IC_DMA_RDLR (*(volatile uint32_t *)0x40090090)
#define I2C0_IC_SDA_SETUP (*(volatile uint32_t *)0x40090094)
#define I2C0_IC_ACK_GENERAL_CALL (*(volatile uint32_t *)0x40090098)
#define I2C0_IC_ENABLE_STATUS (*(volatile uint32_t *)0x4009009c)
#define I2C0_IC_FS_SPKLEN (*(volatile uint32_t *)0x400900a0)
#define I2C0_IC_CLR_RESTART_DET (*(volatile uint32_t *)0x400900a8)
#define I2C0_IC_COMP_PARAM_1 (*(volatile uint32_t *)0x400900f4)
#define I2C0_IC_COMP_VERSION (*(volatile uint32_t *)0x400900f8)
#define I2C0_IC_COMP_TYPE (*(volatile uint32_t *)0x400900fc)
#define I2C0_IC_CON_XOR (*(volatile uint32_t *)0x40091000)
#define I2C0_IC_TAR_XOR (*(volatile uint32_t *)0x40091004)
#define I2C0_IC_SAR_XOR (*(volatile uint32_t *)0x40091008)
#define I2C0_IC_DATA_CMD_XOR (*(volatile uint32_t *)0x40091010)
#define I2C0_IC_SS_SCL_HCNT_XOR (*(volatile uint32_t *)0x40091014)
#define I2C0_IC_SS_SCL_LCNT_XOR (*(volatile uint32_t *)0x40091018)
#define I2C0_IC_FS_SCL_HCNT_XOR (*(volatile uint32_t *)0x4009101c)
#define I2C0_IC_FS_SCL_LCNT_XOR (*(volatile uint32_t *)0x40091020)
#define I2C0_IC_INTR_STAT_XOR (*(volatile uint32_t *)0x4009102c)
#define I2C0_IC_INTR_MASK_XOR (*(volatile uint32_t *)0x40091030)
#define I2C0_IC_RAW_INTR_STAT_XOR (*(volatile uint32_t *)0x40091034)
#define I2C0_IC_RX_TL_XOR (*(volatile uint32_t *)0x40091038)
#define I2C0_IC_TX_TL_XOR (*(volatile uint32_t *)0x4009103c)
#define I2C0_IC_CLR_INTR_XOR (*(volatile uint32_t *)0x40091040)
#define I2C0_IC_CLR_RX_UNDER_XOR (*(volatile uint32_t *)0x40091044)
#define I2C0_IC_CLR_RX_OVER_XOR (*(volatile uint32_t *)0x40091048)
#define I2C0_IC_CLR_TX_OVER_XOR (*(volatile uint32_t *)0x4009104c)
#define I2C0_IC_CLR_RD_REQ_XOR (*(volatile uint32_t *)0x40091050)
#define I2C0_IC_CLR_TX_ABRT_XOR (*(volatile uint32_t *)0x40091054)
#define I2C0_IC_CLR_RX_DONE_XOR (*(volatile uint32_t *)0x40091058)
#define I2C0_IC_CLR_ACTIVITY_XOR (*(volatile uint32_t *)0x4009105c)
#define I2C0_IC_CLR_STOP_DET_XOR (*(volatile uint32_t *)0x40091060)
#define I2C0_IC_CLR_START_DET_XOR (*(volatile uint32_t *)0x40091064)
#define I2C0_IC_CLR_GEN_CALL_XOR (*(volatile uint32_t *)0x40091068)
#define I2C0_IC_ENABLE_XOR (*(volatile uint32_t *)0x4009106c)
#define I2C0_IC_STATUS_XOR (*(volatile uint32_t *)0x40091070)
#define I2C0_IC_TXFLR_XOR (*(volatile uint32_t *)0x40091074)
#define I2C0_IC_RXFLR_XOR (*(volatile uint32_t *)0x40091078)
#define I2C0_IC_SDA_HOLD_XOR (*(volatile uint32_t *)0x4009107c)
#define I2C0_IC_TX_ABRT_SOURCE_XOR (*(volatile uint32_t *)0x40091080)
#define I2C0_IC_SLV_DATA_NACK_ONLY_XOR (*(volatile uint32_t *)0x40091084)
#define I2C0_IC_DMA_CR_XOR (*(volatile uint32_t *)0x40091088)
#define I2C0_IC_DMA_TDLR_XOR (*(volatile uint32_t *)0x4009108c)
#define I2C0_IC_DMA_RDLR_XOR (*(volatile uint32_t *)0x40091090)
#define I2C0_IC_SDA_SETUP_XOR (*(volatile uint32_t *)0x40091094)
#define I2C0_IC_ACK_GENERAL_CALL_XOR (*(volatile uint32_t *)0x40091098)
#define I2C0_IC_ENABLE_STATUS_XOR (*(volatile uint32_t *)0x4009109c)
#define I2C0_IC_FS_SPKLEN_XOR (*(volatile uint32_t *)0x400910a0)
#define I2C0_IC_CLR_RESTART_DET_XOR (*(volatile uint32_t *)0x400910a8)
#define I2C0_IC_COMP_PARAM_1_XOR (*(volatile uint32_t *)0x400910f4)
#define I2C0_IC_COMP_VERSION_XOR (*(volatile uint32_t *)0x400910f8)
#define I2C0_IC_COMP_TYPE_XOR (*(volatile uint32_t *)0x400910fc)
#define I2C0_IC_CON_SET (*(volatile uint32_t *)0x40092000)
#define I2C0_IC_TAR_SET (*(volatile uint32_t *)0x40092004)
#define I2C0_IC_SAR_SET (*(volatile uint32_t *)0x40092008)
#define I2C0_IC_DATA_CMD_SET (*(volatile uint32_t *)0x40092010)
#define I2C0_IC_SS_SCL_HCNT_SET (*(volatile uint32_t *)0x40092014)
#define I2C0_IC_SS_SCL_LCNT_SET (*(volatile uint32_t *)0x40092018)
#define I2C0_IC_FS_SCL_HCNT_SET (*(volatile uint32_t *)0x4009201c)
#define I2C0_IC_FS_SCL_LCNT_SET (*(volatile uint32_t *)0x40092020)
#define I2C0_IC_INTR_STAT_SET (*(volatile uint32_t *)0x4009202c)
#define I2C0_IC_INTR_MASK_SET (*(volatile uint32_t *)0x40092030)
#define I2C0_IC_RAW_INTR_STAT_SET (*(volatile uint32_t *)0x40092034)
#define I2C0_IC_RX_TL_SET (*(volatile uint32_t *)0x40092038)
#define I2C0_IC_TX_TL_SET (*(volatile uint32_t *)0x4009203c)
#define I2C0_IC_CLR_INTR_SET (*(volatile uint32_t *)0x40092040)
#define I2C0_IC_CLR_RX_UNDER_SET (*(volatile uint32_t *)0x40092044)
#define I2C0_IC_CLR_RX_OVER_SET (*(volatile uint32_t *)0x40092048)
#define I2C0_IC_CLR_TX_OVER_SET (*(volatile uint32_t *)0x4009204c)
#define I2C0_IC_CLR_RD_REQ_SET (*(volatile uint32_t *)0x40092050)
#define I2C0_IC_CLR_TX_ABRT_SET (*(volatile uint32_t *)0x40092054)
#define I2C0_IC_CLR_RX_DONE_SET (*(volatile uint32_t *)0x40092058)
#define I2C0_IC_CLR_ACTIVITY_SET (*(volatile uint32_t *)0x4009205c)
#define I2C0_IC_CLR_STOP_DET_SET (*(volatile uint32_t *)0x40092060)
#define I2C0_IC_CLR_START_DET_SET (*(volatile uint32_t *)0x40092064)
#define I2C0_IC_CLR_GEN_CALL_SET (*(volatile uint32_t *)0x40092068)
#define I2C0_IC_ENABLE_SET (*(volatile uint32_t *)0x4009206c)
#define I2C0_IC_STATUS_SET (*(volatile uint32_t *)0x40092070)
#define I2C0_IC_TXFLR_SET (*(volatile uint32_t *)0x40092074)
#define I2C0_IC_RXFLR_SET (*(volatile uint32_t *)0x40092078)
#define I2C0_IC_SDA_HOLD_SET (*(volatile uint32_t *)0x4009207c)
#define I2C0_IC_TX_ABRT_SOURCE_SET (*(volatile uint32_t *)0x40092080)
#define I2C0_IC_SLV_DATA_NACK_ONLY_SET (*(volatile uint32_t *)0x40092084)
#define I2C0_IC_DMA_CR_SET (*(volatile uint32_t *)0x40092088)
#define I2C0_IC_DMA_TDLR_SET (*(volatile uint32_t *)0x4009208c)
#define I2C0_IC_DMA_RDLR_SET (*(volatile uint32_t *)0x40092090)
#define I2C0_IC_SDA_SETUP_SET (*(volatile uint32_t *)0x40092094)
#define I2C0_IC_ACK_GENERAL_CALL_SET (*(volatile uint32_t *)0x40092098)
#define I2C0_IC_ENABLE_STATUS_SET (*(volatile uint32_t *)0x4009209c)
#define I2C0_IC_FS_SPKLEN_SET (*(volatile uint32_t *)0x400920a0)
#define I2C0_IC_CLR_RESTART_DET_SET (*(volatile uint32_t *)0x400920a8)
#define I2C0_IC_COMP_PARAM_1_SET (*(volatile uint32_t *)0x400920f4)
#define I2C0_IC_COMP_VERSION_SET (*(volatile uint32_t *)0x400920f8)
#define I2C0_IC_COMP_TYPE_SET (*(volatile uint32_t *)0x400920fc)
#define I2C0_IC_CON_CLR (*(volatile uint32_t *)0x40093000)
#define I2C0_IC_TAR_CLR (*(volatile uint32_t *)0x40093004)
#define I2C0_IC_SAR_CLR (*(volatile uint32_t *)0x40093008)
#define I2C0_IC_DATA_CMD_CLR (*(volatile uint32_t *)0x40093010)
#define I2C0_IC_SS_SCL_HCNT_CLR (*(volatile uint32_t *)0x40093014)
#define I2C0_IC_SS_SCL_LCNT_CLR (*(volatile uint32_t *)0x40093018)
#define I2C0_IC_FS_SCL_HCNT_CLR (*(volatile uint32_t *)0x4009301c)
#define I2C0_IC_FS_SCL_LCNT_CLR (*(volatile uint32_t *)0x40093020)
#define I2C0_IC_INTR_STAT_CLR (*(volatile uint32_t *)0x4009302c)
#define I2C0_IC_INTR_MASK_CLR (*(volatile uint32_t *)0x40093030)
#define I2C0_IC_RAW_INTR_STAT_CLR (*(volatile uint32_t *)0x40093034)
#define I2C0_IC_RX_TL_CLR (*(volatile uint32_t *)0x40093038)
#define I2C0_IC_TX_TL_CLR (*(volatile uint32_t *)0x4009303c)
#define I2C0_IC_CLR_INTR_CLR (*(volatile uint32_t *)0x40093040)
#define I2C0_IC_CLR_RX_UNDER_CLR (*(volatile uint32_t *)0x40093044)
#define I2C0_IC_CLR_RX_OVER_CLR (*(volatile uint32_t *)0x40093048)
#define I2C0_IC_CLR_TX_OVER_CLR (*(volatile uint32_t *)0x4009304c)
#define I2C0_IC_CLR_RD_REQ_CLR (*(volatile uint32_t *)0x40093050)
#define I2C0_IC_CLR_TX_ABRT_CLR (*(volatile uint32_t *)0x40093054)
#define I2C0_IC_CLR_RX_DONE_CLR (*(volatile uint32_t *)0x40093058)
#define I2C0_IC_CLR_ACTIVITY_CLR (*(volatile uint32_t *)0x4009305c)
#define I2C0_IC_CLR_STOP_DET_CLR (*(volatile uint32_t *)0x40093060)
#define I2C0_IC_CLR_START_DET_CLR (*(volatile uint32_t *)0x40093064)
#define I2C0_IC_CLR_GEN_CALL_CLR (*(volatile uint32_t *)0x40093068)
#define I2C0_IC_ENABLE_CLR (*(volatile uint32_t *)0x4009306c)
#define I2C0_IC_STATUS_CLR (*(volatile uint32_t *)0x40093070)
#define I2C0_IC_TXFLR_CLR (*(volatile uint32_t *)0x40093074)
#define I2C0_IC_RXFLR_CLR (*(volatile uint32_t *)0x40093078)
#define I2C0_IC_SDA_HOLD_CLR (*(volatile uint32_t *)0x4009307c)
#define I2C0_IC_TX_ABRT_SOURCE_CLR (*(volatile uint32_t *)0x40093080)
#define I2C0_IC_SLV_DATA_NACK_ONLY_CLR (*(volatile uint32_t *)0x40093084)
#define I2C0_IC_DMA_CR_CLR (*(volatile uint32_t *)0x40093088)
#define I2C0_IC_DMA_TDLR_CLR (*(volatile uint32_t *)0x4009308c)
#define I2C0_IC_DMA_RDLR_CLR (*(volatile uint32_t *)0x40093090)
#define I2C0_IC_SDA_SETUP_CLR (*(volatile uint32_t *)0x40093094)
#define I2C0_IC_ACK_GENERAL_CALL_CLR (*(volatile uint32_t *)0x40093098)
#define I2C0_IC_ENABLE_STATUS_CLR (*(volatile uint32_t *)0x4009309c)
#define I2C0_IC_FS_SPKLEN_CLR (*(volatile uint32_t *)0x400930a0)
#define I2C0_IC_CLR_RESTART_DET_CLR (*(volatile uint32_t *)0x400930a8)
#define I2C0_IC_COMP_PARAM_1_CLR (*(volatile uint32_t *)0x400930f4)
#define I2C0_IC_COMP_VERSION_CLR (*(volatile uint32_t *)0x400930f8)
#define I2C0_IC_COMP_TYPE_CLR (*(volatile uint32_t *)0x400930fc)
#define I2C1_IC_CON (*(volatile uint32_t *)0x40098000)
#define I2C1_IC_TAR (*(volatile uint32_t *)0x40098004)
#define I2C1_IC_SAR (*(volatile uint32_t *)0x40098008)
#define I2C1_IC_DATA_CMD (*(volatile uint32_t *)0x40098010)
#define I2C1_IC_SS_SCL_HCNT (*(volatile uint32_t *)0x40098014)
#define I2C1_IC_SS_SCL_LCNT (*(volatile uint32_t *)0x40098018)
#define I2C1_IC_FS_SCL_HCNT (*(volatile uint32_t *)0x4009801c)
#define I2C1_IC_FS_SCL_LCNT (*(volatile uint32_t *)0x40098020)
#define I2C1_IC_INTR_STAT (*(volatile uint32_t *)0x4009802c)
#define I2C1_IC_INTR_MASK (*(volatile uint32_t *)0x40098030)
#define I2C1_IC_RAW_INTR_STAT (*(volatile uint32_t *)0x40098034)
#define I2C1_IC_RX_TL (*(volatile uint32_t *)0x40098038)
#define I2C1_IC_TX_TL (*(volatile uint32_t *)0x4009803c)
#define I2C1_IC_CLR_INTR (*(volatile uint32_t *)0x40098040)
#define I2C1_IC_CLR_RX_UNDER (*(volatile uint32_t *)0x40098044)
#define I2C1_IC_CLR_RX_OVER (*(volatile uint32_t *)0x40098048)
#define I2C1_IC_CLR_TX_OVER (*(volatile uint32_t *)0x4009804c)
#define I2C1_IC_CLR_RD_REQ (*(volatile uint32_t *)0x40098050)
#define I2C1_IC_CLR_TX_ABRT (*(volatile uint32_t *)0x40098054)
#define I2C1_IC_CLR_RX_DONE (*(volatile uint32_t *)0x40098058)
#define I2C1_IC_CLR_ACTIVITY (*(volatile uint32_t *)0x4009805c)
#define I2C1_IC_CLR_STOP_DET (*(volatile uint32_t *)0x40098060)
#define I2C1_IC_CLR_START_DET (*(volatile uint32_t *)0x40098064)
#define I2C1_IC_CLR_GEN_CALL (*(volatile uint32_t *)0x40098068)
#define I2C1_IC_ENABLE (*(volatile uint32_t *)0x4009806c)
#define I2C1_IC_STATUS (*(volatile uint32_t *)0x40098070)
#define I2C1_IC_TXFLR (*(volatile uint32_t *)0x40098074)
#define I2C1_IC_RXFLR (*(volatile uint32_t *)0x40098078)
#define I2C1_IC_SDA_HOLD (*(volatile uint32_t *)0x4009807c)
#define I2C1_IC_TX_ABRT_SOURCE (*(volatile uint32_t *)0x40098080)
#define I2C1_IC_SLV_DATA_NACK_ONLY (*(volatile uint32_t *)0x40098084)
#define I2C1_IC_DMA_CR (*(volatile uint32_t *)0x40098088)
#define I2C1_IC_DMA_TDLR (*(volatile uint32_t *)0x4009808c)
#define I2C1_IC_DMA_RDLR (*(volatile uint32_t *)0x40098090)
#define I2C1_IC_SDA_SETUP (*(volatile uint32_t *)0x40098094)
#define I2C1_IC_ACK_GENERAL_CALL (*(volatile uint32_t *)0x40098098)
#define I2C1_IC_ENABLE_STATUS (*(volatile uint32_t *)0x4009809c)
#define I2C1_IC_FS_SPKLEN (*(volatile uint32_t *)0x400980a0)
#define I2C1_IC_CLR_RESTART_DET (*(volatile uint32_t *)0x400980a8)
#define I2C1_IC_COMP_PARAM_1 (*(volatile uint32_t *)0x400980f4)
#define I2C1_IC_COMP_VERSION (*(volatile uint32_t *)0x400980f8)
#define I2C1_IC_COMP_TYPE (*(volatile uint32_t *)0x400980fc)
#define I2C1_IC_CON_XOR (*(volatile uint32_t *)0x40099000)
#define I2C1_IC_TAR_XOR (*(volatile uint32_t *)0x40099004)
#define I2C1_IC_SAR_XOR (*(volatile uint32_t *)0x40099008)
#define I2C1_IC_DATA_CMD_XOR (*(volatile uint32_t *)0x40099010)
#define I2C1_IC_SS_SCL_HCNT_XOR (*(volatile uint32_t *)0x40099014)
#define I2C1_IC_SS_SCL_LCNT_XOR (*(volatile uint32_t *)0x40099018)
#define I2C1_IC_FS_SCL_HCNT_XOR (*(volatile uint32_t *)0x4009901c)
#define I2C1_IC_FS_SCL_LCNT_XOR (*(volatile uint32_t *)0x40099020)
#define I2C1_IC_INTR_STAT_XOR (*(volatile uint32_t *)0x4009902c)
#define I2C1_IC_INTR_MASK_XOR (*(volatile uint32_t *)0x40099030)
#define I2C1_IC_RAW_INTR_STAT_XOR (*(volatile uint32_t *)0x40099034)
#define I2C1_IC_RX_TL_XOR (*(volatile uint32_t *)0x40099038)
#define I2C1_IC_TX_TL_XOR (*(volatile uint32_t *)0x4009903c)
#define I2C1_IC_CLR_INTR_XOR (*(volatile uint32_t *)0x40099040)
#define I2C1_IC_CLR_RX_UNDER_XOR (*(volatile uint32_t *)0x40099044)
#define I2C1_IC_CLR_RX_OVER_XOR (*(volatile uint32_t *)0x40099048)
#define I2C1_IC_CLR_TX_OVER_XOR (*(volatile uint32_t *)0x4009904c)
#define I2C1_IC_CLR_RD_REQ_XOR (*(volatile uint32_t *)0x40099050)
#define I2C1_IC_CLR_TX_ABRT_XOR (*(volatile uint32_t *)0x40099054)
#define I2C1_IC_CLR_RX_DONE_XOR (*(volatile uint32_t *)0x40099058)
#define I2C1_IC_CLR_ACTIVITY_XOR (*(volatile uint32_t *)0x4009905c)
#define I2C1_IC_CLR_STOP_DET_XOR (*(volatile uint32_t *)0x40099060)
#define I2C1_IC_CLR_START_DET_XOR (*(volatile uint32_t *)0x40099064)
#define I2C1_IC_CLR_GEN_CALL_XOR (*(volatile uint32_t *)0x40099068)
#define I2C1_IC_ENABLE_XOR (*(volatile uint32_t *)0x4009906c)
#define I2C1_IC_STATUS_XOR (*(volatile uint32_t *)0x40099070)
#define I2C1_IC_TXFLR_XOR (*(volatile uint32_t *)0x40099074)
#define I2C1_IC_RXFLR_XOR (*(volatile uint32_t *)0x40099078)
#define I2C1_IC_SDA_HOLD_XOR (*(volatile uint32_t *)0x4009907c)
#define I2C1_IC_TX_ABRT_SOURCE_XOR (*(volatile uint32_t *)0x40099080)
#define I2C1_IC_SLV_DATA_NACK_ONLY_XOR (*(volatile uint32_t *)0x40099084)
#define I2C1_IC_DMA_CR_XOR (*(volatile uint32_t *)0x40099088)
#define I2C1_IC_DMA_TDLR_XOR (*(volatile uint32_t *)0x4009908c)
#define I2C1_IC_DMA_RDLR_XOR (*(volatile uint32_t *)0x40099090)
#define I2C1_IC_SDA_SETUP_XOR (*(volatile uint32_t *)0x40099094)
#define I2C1_IC_ACK_GENERAL_CALL_XOR (*(volatile uint32_t *)0x40099098)
#define I2C1_IC_ENABLE_STATUS_XOR (*(volatile uint32_t *)0x4009909c)
#define I2C1_IC_FS_SPKLEN_XOR (*(volatile uint32_t *)0x400990a0)
#define I2C1_IC_CLR_RESTART_DET_XOR (*(volatile uint32_t *)0x400990a8)
#define I2C1_IC_COMP_PARAM_1_XOR (*(volatile uint32_t *)0x400990f4)
#define I2C1_IC_COMP_VERSION_XOR (*(volatile uint32_t *)0x400990f8)
#define I2C1_IC_COMP_TYPE_XOR (*(volatile uint32_t *)0x400990fc)
#define I2C1_IC_CON_SET (*(volatile uint32_t *)0x4009a000)
#define I2C1_IC_TAR_SET (*(volatile uint32_t *)0x4009a004)
#define I2C1_IC_SAR_SET (*(volatile uint32_t *)0x4009a008)
#define I2C1_IC_DATA_CMD_SET (*(volatile uint32_t *)0x4009a010)
#define I2C1_IC_SS_SCL_HCNT_SET (*(volatile uint32_t *)0x4009a014)
#define I2C1_IC_SS_SCL_LCNT_SET (*(volatile uint32_t *)0x4009a018)
#define I2C1_IC_FS_SCL_HCNT_SET (*(volatile uint32_t *)0x4009a01c)
#define I2C1_IC_FS_SCL_LCNT_SET (*(volatile uint32_t *)0x4009a020)
#define I2C1_IC_INTR_STAT_SET (*(volatile uint32_t *)0x4009a02c)
#define I2C1_IC_INTR_MASK_SET (*(volatile uint32_t *)0x4009a030)
#define I2C1_IC_RAW_INTR_STAT_SET (*(volatile uint32_t *)0x4009a034)
#define I2C1_IC_RX_TL_SET (*(volatile uint32_t *)0x4009a038)
#define I2C1_IC_TX_TL_SET (*(volatile uint32_t *)0x4009a03c)
#define I2C1_IC_CLR_INTR_SET (*(volatile uint32_t *)0x4009a040)
#define I2C1_IC_CLR_RX_UNDER_SET (*(volatile uint32_t *)0x4009a044)
#define I2C1_IC_CLR_RX_OVER_SET (*(volatile uint32_t *)0x4009a048)
#define I2C1_IC_CLR_TX_OVER_SET (*(volatile uint32_t *)0x4009a04c)
#define I2C1_IC_CLR_RD_REQ_SET (*(volatile uint32_t *)0x4009a050)
#define I2C1_IC_CLR_TX_ABRT_SET (*(volatile uint32_t *)0x4009a054)
#define I2C1_IC_CLR_RX_DONE_SET (*(volatile uint32_t *)0x4009a058)
#define I2C1_IC_CLR_ACTIVITY_SET (*(volatile uint32_t *)0x4009a05c)
#define I2C1_IC_CLR_STOP_DET_SET (*(volatile uint32_t *)0x4009a060)
#define I2C1_IC_CLR_START_DET_SET (*(volatile uint32_t *)0x4009a064)
#define I2C1_IC_CLR_GEN_CALL_SET (*(volatile uint32_t *)0x4009a068)
#define I2C1_IC_ENABLE_SET (*(volatile uint32_t *)0x4009a06c)
#define I2C1_IC_STATUS_SET (*(volatile uint32_t *)0x4009a070)
#define I2C1_IC_TXFLR_SET (*(volatile uint32_t *)0x4009a074)
#define I2C1_IC_RXFLR_SET (*(volatile uint32_t *)0x4009a078)
#define I2C1_IC_SDA_HOLD_SET (*(volatile uint32_t *)0x4009a07c)
#define I2C1_IC_TX_ABRT_SOURCE_SET (*(volatile uint32_t *)0x4009a080)
#define I2C1_IC_SLV_DATA_NACK_ONLY_SET (*(volatile uint32_t *)0x4009a084)
#define I2C1_IC_DMA_CR_SET (*(volatile uint32_t *)0x4009a088)
#define I2C1_IC_DMA_TDLR_SET (*(volatile uint32_t *)0x4009a08c)
#define I2C1_IC_DMA_RDLR_SET (*(volatile uint32_t *)0x4009a090)
#define I2C1_IC_SDA_SETUP_SET (*(volatile uint32_t *)0x4009a094)
#define I2C1_IC_ACK_GENERAL_CALL_SET (*(volatile uint32_t *)0x4009a098)
#define I2C1_IC_ENABLE_STATUS_SET (*(volatile uint32_t *)0x4009a09c)
#define I2C1_IC_FS_SPKLEN_SET (*(volatile uint32_t *)0x4009a0a0)
#define I2C1_IC_CLR_RESTART_DET_SET (*(volatile uint32_t *)0x4009a0a8)
#define I2C1_IC_COMP_PARAM_1_SET (*(volatile uint32_t *)0x4009a0f4)
#define I2C1_IC_COMP_VERSION_SET (*(volatile uint32_t *)0x4009a0f8)
#define I2C1_IC_COMP_TYPE_SET (*(volatile uint32_t *)0x4009a0fc)
#define I2C1_IC_CON_CLR (*(volatile uint32_t *)0x4009b000)
#define I2C1_IC_TAR_CLR (*(volatile uint32_t *)0x4009b004)
#define I2C1_IC_SAR_CLR (*(volatile uint32_t *)0x4009b008)
#define I2C1_IC_DATA_CMD_CLR (*(volatile uint32_t *)0x4009b010)
#define I2C1_IC_SS_SCL_HCNT_CLR (*(volatile uint32_t *)0x4009b014)
#define I2C1_IC_SS_SCL_LCNT_CLR (*(volatile uint32_t *)0x4009b018)
#define I2C1_IC_FS_SCL_HCNT_CLR (*(volatile uint32_t *)0x4009b01c)
#define I2C1_IC_FS_SCL_LCNT_CLR (*(volatile uint32_t *)0x4009b020)
#define I2C1_IC_INTR_STAT_CLR (*(volatile uint32_t *)0x4009b02c)
#define I2C1_IC_INTR_MASK_CLR (*(volatile uint32_t *)0x4009b030)
#define I2C1_IC_RAW_INTR_STAT_CLR (*(volatile uint32_t *)0x4009b034)
#define I2C1_IC_RX_TL_CLR (*(volatile uint32_t *)0x4009b038)
#define I2C1_IC_TX_TL_CLR (*(volatile uint32_t *)0x4009b03c)
#define I2C1_IC_CLR_INTR_CLR (*(volatile uint32_t *)0x4009b040)
#define I2C1_IC_CLR_RX_UNDER_CLR (*(volatile uint32_t *)0x4009b044)
#define I2C1_IC_CLR_RX_OVER_CLR (*(volatile uint32_t *)0x4009b048)
#define I2C1_IC_CLR_TX_OVER_CLR (*(volatile uint32_t *)0x4009b04c)
#define I2C1_IC_CLR_RD_REQ_CLR (*(volatile uint32_t *)0x4009b050)
#define I2C1_IC_CLR_TX_ABRT_CLR (*(volatile uint32_t *)0x4009b054)
#define I2C1_IC_CLR_RX_DONE_CLR (*(volatile uint32_t *)0x4009b058)
#define I2C1_IC_CLR_ACTIVITY_CLR (*(volatile uint32_t *)0x4009b05c)
#define I2C1_IC_CLR_STOP_DET_CLR (*(volatile uint32_t *)0x4009b060)
#define I2C1_IC_CLR_START_DET_CLR (*(volatile uint32_t *)0x4009b064)
#define I2C1_IC_CLR_GEN_CALL_CLR (*(volatile uint32_t *)0x4009b068)
#define I2C1_IC_ENABLE_CLR (*(volatile uint32_t *)0x4009b06c)
#define I2C1_IC_STATUS_CLR (*(volatile uint32_t *)0x4009b070)
#define I2C1_IC_TXFLR_CLR (*(volatile uint32_t *)0x4009b074)
#define I2C1_IC_RXFLR_CLR (*(volatile uint32_t *)0x4009b078)
#define I2C1_IC_SDA_HOLD_CLR (*(volatile uint32_t *)0x4009b07c)
#define I2C1_IC_TX_ABRT_SOURCE_CLR (*(volatile uint32_t *)0x4009b080)
#define I2C1_IC_SLV_DATA_NACK_ONLY_CLR (*(volatile uint32_t *)0x4009b084)
#define I2C1_IC_DMA_CR_CLR (*(volatile uint32_t *)0x4009b088)
#define I2C1_IC_DMA_TDLR_CLR (*(volatile uint32_t *)0x4009b08c)
#define I2C1_IC_DMA_RDLR_CLR (*(volatile uint32_t *)0x4009b090)
#define I2C1_IC_SDA_SETUP_CLR (*(volatile uint32_t *)0x4009b094)
#define I2C1_IC_ACK_GENERAL_CALL_CLR (*(volatile uint32_t *)0x4009b098)
#define I2C1_IC_ENABLE_STATUS_CLR (*(volatile uint32_t *)0x4009b09c)
#define I2C1_IC_FS_SPKLEN_CLR (*(volatile uint32_t *)0x4009b0a0)
#define I2C1_IC_CLR_RESTART_DET_CLR (*(volatile uint32_t *)0x4009b0a8)
#define I2C1_IC_COMP_PARAM_1_CLR (*(volatile uint32_t *)0x4009b0f4)
#define I2C1_IC_COMP_VERSION_CLR (*(volatile uint32_t *)0x4009b0f8)
#define I2C1_IC_COMP_TYPE_CLR (*(volatile uint32_t *)0x4009b0fc)

/*IC_CON Register macros*/

#define I2C0_IC_CON_STOP_DET_IF_MASTER_ACTIVE(v) (((v)&0x1)<<10)
#define I2C0_IC_CON_STOP_DET_IF_MASTER_ACTIVE_MASK I2C0_IC_CON_STOP_DET_IF_MASTER_ACTIVE(ALL1)
#define I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL(v) (((v)&0x1)<<9)
#define I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL_MASK I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL(ALL1)
#define I2C0_IC_CON_TX_EMPTY_CTRL(v) (((v)&0x1)<<8)
#define I2C0_IC_CON_TX_EMPTY_CTRL_MASK I2C0_IC_CON_TX_EMPTY_CTRL(ALL1)
#define I2C0_IC_CON_STOP_DET_IFADDRESSED(v) (((v)&0x1)<<7)
#define I2C0_IC_CON_STOP_DET_IFADDRESSED_MASK I2C0_IC_CON_STOP_DET_IFADDRESSED(ALL1)
#define I2C0_IC_CON_IC_SLAVE_DISABLE(v) (((v)&0x1)<<6)
#define I2C0_IC_CON_IC_SLAVE_DISABLE_MASK I2C0_IC_CON_IC_SLAVE_DISABLE(ALL1)
#define I2C0_IC_CON_IC_RESTART_EN(v) (((v)&0x1)<<5)
#define I2C0_IC_CON_IC_RESTART_EN_MASK I2C0_IC_CON_IC_RESTART_EN(ALL1)
#define I2C0_IC_CON_IC_10BITADDR_MASTER(v) (((v)&0x1)<<4)
#define I2C0_IC_CON_IC_10BITADDR_MASTER_MASK I2C0_IC_CON_IC_10BITADDR_MASTER(ALL1)
#define I2C0_IC_CON_IC_10BITADDR_SLAVE(v) (((v)&0x1)<<3)
#define I2C0_IC_CON_IC_10BITADDR_SLAVE_MASK I2C0_IC_CON_IC_10BITADDR_SLAVE(ALL1)
#define I2C0_IC_CON_SPEED(v) (((v)&0x3)<<1)
#define I2C0_IC_CON_SPEED_MASK I2C0_IC_CON_SPEED(ALL1)
#define I2C0_IC_CON_MASTER_MODE(v) (((v)&0x1)<<0)
#define I2C0_IC_CON_MASTER_MODE_MASK I2C0_IC_CON_MASTER_MODE(ALL1)

/*IC_TAR Register macros*/

#define I2C0_IC_TAR_SPECIAL(v) (((v)&0x1)<<11)
#define I2C0_IC_TAR_SPECIAL_MASK I2C0_IC_TAR_SPECIAL(ALL1)
#define I2C0_IC_TAR_GC_OR_START(v) (((v)&0x1)<<10)
#define I2C0_IC_TAR_GC_OR_START_MASK I2C0_IC_TAR_GC_OR_START(ALL1)
#define I2C0_IC_TAR_IC_TAR(v) (((v)&0x3ff)<<0)
#define I2C0_IC_TAR_IC_TAR_MASK I2C0_IC_TAR_IC_TAR(ALL1)

/*IC_SAR Register macros*/

#define I2C0_IC_SAR_IC_SAR(v) (((v)&0x3ff)<<0)
#define I2C0_IC_SAR_IC_SAR_MASK I2C0_IC_SAR_IC_SAR(ALL1)

/*IC_DATA_CMD Register macros*/

#define I2C0_IC_DATA_CMD_FIRST_DATA_BYTE(v) (((v)&0x1)<<11)
#define I2C0_IC_DATA_CMD_FIRST_DATA_BYTE_MASK I2C0_IC_DATA_CMD_FIRST_DATA_BYTE(ALL1)
#define I2C0_IC_DATA_CMD_RESTART(v) (((v)&0x1)<<10)
#define I2C0_IC_DATA_CMD_RESTART_MASK I2C0_IC_DATA_CMD_RESTART(ALL1)
#define I2C0_IC_DATA_CMD_STOP(v) (((v)&0x1)<<9)
#define I2C0_IC_DATA_CMD_STOP_MASK I2C0_IC_DATA_CMD_STOP(ALL1)
#define I2C0_IC_DATA_CMD_CMD(v) (((v)&0x1)<<8)
#define I2C0_IC_DATA_CMD_CMD_MASK I2C0_IC_DATA_CMD_CMD(ALL1)
#define I2C0_IC_DATA_CMD_DAT(v) (((v)&0xff)<<0)
#define I2C0_IC_DATA_CMD_DAT_MASK I2C0_IC_DATA_CMD_DAT(ALL1)

/*IC_SS_SCL_HCNT Register macros*/

#define I2C0_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT(v) (((v)&0xffff)<<0)
#define I2C0_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT_MASK I2C0_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT(ALL1)

/*IC_SS_SCL_LCNT Register macros*/

#define I2C0_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT(v) (((v)&0xffff)<<0)
#define I2C0_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT_MASK I2C0_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT(ALL1)

/*IC_FS_SCL_HCNT Register macros*/

#define I2C0_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT(v) (((v)&0xffff)<<0)
#define I2C0_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT_MASK I2C0_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT(ALL1)

/*IC_FS_SCL_LCNT Register macros*/

#define I2C0_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT(v) (((v)&0xffff)<<0)
#define I2C0_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT_MASK I2C0_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT(ALL1)

/*IC_INTR_STAT Register macros*/

#define I2C0_IC_INTR_STAT_R_RESTART_DET(v) (((v)&0x1)<<12)
#define I2C0_IC_INTR_STAT_R_RESTART_DET_MASK I2C0_IC_INTR_STAT_R_RESTART_DET(ALL1)
#define I2C0_IC_INTR_STAT_R_GEN_CALL(v) (((v)&0x1)<<11)
#define I2C0_IC_INTR_STAT_R_GEN_CALL_MASK I2C0_IC_INTR_STAT_R_GEN_CALL(ALL1)
#define I2C0_IC_INTR_STAT_R_START_DET(v) (((v)&0x1)<<10)
#define I2C0_IC_INTR_STAT_R_START_DET_MASK I2C0_IC_INTR_STAT_R_START_DET(ALL1)
#define I2C0_IC_INTR_STAT_R_STOP_DET(v) (((v)&0x1)<<9)
#define I2C0_IC_INTR_STAT_R_STOP_DET_MASK I2C0_IC_INTR_STAT_R_STOP_DET(ALL1)
#define I2C0_IC_INTR_STAT_R_ACTIVITY(v) (((v)&0x1)<<8)
#define I2C0_IC_INTR_STAT_R_ACTIVITY_MASK I2C0_IC_INTR_STAT_R_ACTIVITY(ALL1)
#define I2C0_IC_INTR_STAT_R_RX_DONE(v) (((v)&0x1)<<7)
#define I2C0_IC_INTR_STAT_R_RX_DONE_MASK I2C0_IC_INTR_STAT_R_RX_DONE(ALL1)
#define I2C0_IC_INTR_STAT_R_TX_ABRT(v) (((v)&0x1)<<6)
#define I2C0_IC_INTR_STAT_R_TX_ABRT_MASK I2C0_IC_INTR_STAT_R_TX_ABRT(ALL1)
#define I2C0_IC_INTR_STAT_R_RD_REQ(v) (((v)&0x1)<<5)
#define I2C0_IC_INTR_STAT_R_RD_REQ_MASK I2C0_IC_INTR_STAT_R_RD_REQ(ALL1)
#define I2C0_IC_INTR_STAT_R_TX_EMPTY(v) (((v)&0x1)<<4)
#define I2C0_IC_INTR_STAT_R_TX_EMPTY_MASK I2C0_IC_INTR_STAT_R_TX_EMPTY(ALL1)
#define I2C0_IC_INTR_STAT_R_TX_OVER(v) (((v)&0x1)<<3)
#define I2C0_IC_INTR_STAT_R_TX_OVER_MASK I2C0_IC_INTR_STAT_R_TX_OVER(ALL1)
#define I2C0_IC_INTR_STAT_R_RX_FULL(v) (((v)&0x1)<<2)
#define I2C0_IC_INTR_STAT_R_RX_FULL_MASK I2C0_IC_INTR_STAT_R_RX_FULL(ALL1)
#define I2C0_IC_INTR_STAT_R_RX_OVER(v) (((v)&0x1)<<1)
#define I2C0_IC_INTR_STAT_R_RX_OVER_MASK I2C0_IC_INTR_STAT_R_RX_OVER(ALL1)
#define I2C0_IC_INTR_STAT_R_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C0_IC_INTR_STAT_R_RX_UNDER_MASK I2C0_IC_INTR_STAT_R_RX_UNDER(ALL1)

/*IC_INTR_MASK Register macros*/

#define I2C0_IC_INTR_MASK_M_RESTART_DET(v) (((v)&0x1)<<12)
#define I2C0_IC_INTR_MASK_M_RESTART_DET_MASK I2C0_IC_INTR_MASK_M_RESTART_DET(ALL1)
#define I2C0_IC_INTR_MASK_M_GEN_CALL(v) (((v)&0x1)<<11)
#define I2C0_IC_INTR_MASK_M_GEN_CALL_MASK I2C0_IC_INTR_MASK_M_GEN_CALL(ALL1)
#define I2C0_IC_INTR_MASK_M_START_DET(v) (((v)&0x1)<<10)
#define I2C0_IC_INTR_MASK_M_START_DET_MASK I2C0_IC_INTR_MASK_M_START_DET(ALL1)
#define I2C0_IC_INTR_MASK_M_STOP_DET(v) (((v)&0x1)<<9)
#define I2C0_IC_INTR_MASK_M_STOP_DET_MASK I2C0_IC_INTR_MASK_M_STOP_DET(ALL1)
#define I2C0_IC_INTR_MASK_M_ACTIVITY(v) (((v)&0x1)<<8)
#define I2C0_IC_INTR_MASK_M_ACTIVITY_MASK I2C0_IC_INTR_MASK_M_ACTIVITY(ALL1)
#define I2C0_IC_INTR_MASK_M_RX_DONE(v) (((v)&0x1)<<7)
#define I2C0_IC_INTR_MASK_M_RX_DONE_MASK I2C0_IC_INTR_MASK_M_RX_DONE(ALL1)
#define I2C0_IC_INTR_MASK_M_TX_ABRT(v) (((v)&0x1)<<6)
#define I2C0_IC_INTR_MASK_M_TX_ABRT_MASK I2C0_IC_INTR_MASK_M_TX_ABRT(ALL1)
#define I2C0_IC_INTR_MASK_M_RD_REQ(v) (((v)&0x1)<<5)
#define I2C0_IC_INTR_MASK_M_RD_REQ_MASK I2C0_IC_INTR_MASK_M_RD_REQ(ALL1)
#define I2C0_IC_INTR_MASK_M_TX_EMPTY(v) (((v)&0x1)<<4)
#define I2C0_IC_INTR_MASK_M_TX_EMPTY_MASK I2C0_IC_INTR_MASK_M_TX_EMPTY(ALL1)
#define I2C0_IC_INTR_MASK_M_TX_OVER(v) (((v)&0x1)<<3)
#define I2C0_IC_INTR_MASK_M_TX_OVER_MASK I2C0_IC_INTR_MASK_M_TX_OVER(ALL1)
#define I2C0_IC_INTR_MASK_M_RX_FULL(v) (((v)&0x1)<<2)
#define I2C0_IC_INTR_MASK_M_RX_FULL_MASK I2C0_IC_INTR_MASK_M_RX_FULL(ALL1)
#define I2C0_IC_INTR_MASK_M_RX_OVER(v) (((v)&0x1)<<1)
#define I2C0_IC_INTR_MASK_M_RX_OVER_MASK I2C0_IC_INTR_MASK_M_RX_OVER(ALL1)
#define I2C0_IC_INTR_MASK_M_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C0_IC_INTR_MASK_M_RX_UNDER_MASK I2C0_IC_INTR_MASK_M_RX_UNDER(ALL1)

/*IC_RAW_INTR_STAT Register macros*/

#define I2C0_IC_RAW_INTR_STAT_RESTART_DET(v) (((v)&0x1)<<12)
#define I2C0_IC_RAW_INTR_STAT_RESTART_DET_MASK I2C0_IC_RAW_INTR_STAT_RESTART_DET(ALL1)
#define I2C0_IC_RAW_INTR_STAT_GEN_CALL(v) (((v)&0x1)<<11)
#define I2C0_IC_RAW_INTR_STAT_GEN_CALL_MASK I2C0_IC_RAW_INTR_STAT_GEN_CALL(ALL1)
#define I2C0_IC_RAW_INTR_STAT_START_DET(v) (((v)&0x1)<<10)
#define I2C0_IC_RAW_INTR_STAT_START_DET_MASK I2C0_IC_RAW_INTR_STAT_START_DET(ALL1)
#define I2C0_IC_RAW_INTR_STAT_STOP_DET(v) (((v)&0x1)<<9)
#define I2C0_IC_RAW_INTR_STAT_STOP_DET_MASK I2C0_IC_RAW_INTR_STAT_STOP_DET(ALL1)
#define I2C0_IC_RAW_INTR_STAT_ACTIVITY(v) (((v)&0x1)<<8)
#define I2C0_IC_RAW_INTR_STAT_ACTIVITY_MASK I2C0_IC_RAW_INTR_STAT_ACTIVITY(ALL1)
#define I2C0_IC_RAW_INTR_STAT_RX_DONE(v) (((v)&0x1)<<7)
#define I2C0_IC_RAW_INTR_STAT_RX_DONE_MASK I2C0_IC_RAW_INTR_STAT_RX_DONE(ALL1)
#define I2C0_IC_RAW_INTR_STAT_TX_ABRT(v) (((v)&0x1)<<6)
#define I2C0_IC_RAW_INTR_STAT_TX_ABRT_MASK I2C0_IC_RAW_INTR_STAT_TX_ABRT(ALL1)
#define I2C0_IC_RAW_INTR_STAT_RD_REQ(v) (((v)&0x1)<<5)
#define I2C0_IC_RAW_INTR_STAT_RD_REQ_MASK I2C0_IC_RAW_INTR_STAT_RD_REQ(ALL1)
#define I2C0_IC_RAW_INTR_STAT_TX_EMPTY(v) (((v)&0x1)<<4)
#define I2C0_IC_RAW_INTR_STAT_TX_EMPTY_MASK I2C0_IC_RAW_INTR_STAT_TX_EMPTY(ALL1)
#define I2C0_IC_RAW_INTR_STAT_TX_OVER(v) (((v)&0x1)<<3)
#define I2C0_IC_RAW_INTR_STAT_TX_OVER_MASK I2C0_IC_RAW_INTR_STAT_TX_OVER(ALL1)
#define I2C0_IC_RAW_INTR_STAT_RX_FULL(v) (((v)&0x1)<<2)
#define I2C0_IC_RAW_INTR_STAT_RX_FULL_MASK I2C0_IC_RAW_INTR_STAT_RX_FULL(ALL1)
#define I2C0_IC_RAW_INTR_STAT_RX_OVER(v) (((v)&0x1)<<1)
#define I2C0_IC_RAW_INTR_STAT_RX_OVER_MASK I2C0_IC_RAW_INTR_STAT_RX_OVER(ALL1)
#define I2C0_IC_RAW_INTR_STAT_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C0_IC_RAW_INTR_STAT_RX_UNDER_MASK I2C0_IC_RAW_INTR_STAT_RX_UNDER(ALL1)

/*IC_RX_TL Register macros*/

#define I2C0_IC_RX_TL_RX_TL(v) (((v)&0xff)<<0)
#define I2C0_IC_RX_TL_RX_TL_MASK I2C0_IC_RX_TL_RX_TL(ALL1)

/*IC_TX_TL Register macros*/

#define I2C0_IC_TX_TL_TX_TL(v) (((v)&0xff)<<0)
#define I2C0_IC_TX_TL_TX_TL_MASK I2C0_IC_TX_TL_TX_TL(ALL1)

/*IC_CLR_INTR Register macros*/

#define I2C0_IC_CLR_INTR_CLR_INTR(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_INTR_CLR_INTR_MASK I2C0_IC_CLR_INTR_CLR_INTR(ALL1)

/*IC_CLR_RX_UNDER Register macros*/

#define I2C0_IC_CLR_RX_UNDER_CLR_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_RX_UNDER_CLR_RX_UNDER_MASK I2C0_IC_CLR_RX_UNDER_CLR_RX_UNDER(ALL1)

/*IC_CLR_RX_OVER Register macros*/

#define I2C0_IC_CLR_RX_OVER_CLR_RX_OVER(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_RX_OVER_CLR_RX_OVER_MASK I2C0_IC_CLR_RX_OVER_CLR_RX_OVER(ALL1)

/*IC_CLR_TX_OVER Register macros*/

#define I2C0_IC_CLR_TX_OVER_CLR_TX_OVER(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_TX_OVER_CLR_TX_OVER_MASK I2C0_IC_CLR_TX_OVER_CLR_TX_OVER(ALL1)

/*IC_CLR_RD_REQ Register macros*/

#define I2C0_IC_CLR_RD_REQ_CLR_RD_REQ(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_RD_REQ_CLR_RD_REQ_MASK I2C0_IC_CLR_RD_REQ_CLR_RD_REQ(ALL1)

/*IC_CLR_TX_ABRT Register macros*/

#define I2C0_IC_CLR_TX_ABRT_CLR_TX_ABRT(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_TX_ABRT_CLR_TX_ABRT_MASK I2C0_IC_CLR_TX_ABRT_CLR_TX_ABRT(ALL1)

/*IC_CLR_RX_DONE Register macros*/

#define I2C0_IC_CLR_RX_DONE_CLR_RX_DONE(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_RX_DONE_CLR_RX_DONE_MASK I2C0_IC_CLR_RX_DONE_CLR_RX_DONE(ALL1)

/*IC_CLR_ACTIVITY Register macros*/

#define I2C0_IC_CLR_ACTIVITY_CLR_ACTIVITY(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_ACTIVITY_CLR_ACTIVITY_MASK I2C0_IC_CLR_ACTIVITY_CLR_ACTIVITY(ALL1)

/*IC_CLR_STOP_DET Register macros*/

#define I2C0_IC_CLR_STOP_DET_CLR_STOP_DET(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_STOP_DET_CLR_STOP_DET_MASK I2C0_IC_CLR_STOP_DET_CLR_STOP_DET(ALL1)

/*IC_CLR_START_DET Register macros*/

#define I2C0_IC_CLR_START_DET_CLR_START_DET(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_START_DET_CLR_START_DET_MASK I2C0_IC_CLR_START_DET_CLR_START_DET(ALL1)

/*IC_CLR_GEN_CALL Register macros*/

#define I2C0_IC_CLR_GEN_CALL_CLR_GEN_CALL(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_GEN_CALL_CLR_GEN_CALL_MASK I2C0_IC_CLR_GEN_CALL_CLR_GEN_CALL(ALL1)

/*IC_ENABLE Register macros*/

#define I2C0_IC_ENABLE_TX_CMD_BLOCK(v) (((v)&0x1)<<2)
#define I2C0_IC_ENABLE_TX_CMD_BLOCK_MASK I2C0_IC_ENABLE_TX_CMD_BLOCK(ALL1)
#define I2C0_IC_ENABLE_ABORT(v) (((v)&0x1)<<1)
#define I2C0_IC_ENABLE_ABORT_MASK I2C0_IC_ENABLE_ABORT(ALL1)
#define I2C0_IC_ENABLE_ENABLE(v) (((v)&0x1)<<0)
#define I2C0_IC_ENABLE_ENABLE_MASK I2C0_IC_ENABLE_ENABLE(ALL1)
#define I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(v) (((v)&0x1)<<2)
#define I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_MASK I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(ALL1)
#define I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(v) (((v)&0x1)<<1)
#define I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_MASK I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(ALL1)
#define I2C0_IC_ENABLE_STATUS_IC_EN(v) (((v)&0x1)<<0)
#define I2C0_IC_ENABLE_STATUS_IC_EN_MASK I2C0_IC_ENABLE_STATUS_IC_EN(ALL1)

/*IC_STATUS Register macros*/

#define I2C0_IC_STATUS_SLV_ACTIVITY(v) (((v)&0x1)<<6)
#define I2C0_IC_STATUS_SLV_ACTIVITY_MASK I2C0_IC_STATUS_SLV_ACTIVITY(ALL1)
#define I2C0_IC_STATUS_MST_ACTIVITY(v) (((v)&0x1)<<5)
#define I2C0_IC_STATUS_MST_ACTIVITY_MASK I2C0_IC_STATUS_MST_ACTIVITY(ALL1)
#define I2C0_IC_STATUS_RFF(v) (((v)&0x1)<<4)
#define I2C0_IC_STATUS_RFF_MASK I2C0_IC_STATUS_RFF(ALL1)
#define I2C0_IC_STATUS_RFNE(v) (((v)&0x1)<<3)
#define I2C0_IC_STATUS_RFNE_MASK I2C0_IC_STATUS_RFNE(ALL1)
#define I2C0_IC_STATUS_TFE(v) (((v)&0x1)<<2)
#define I2C0_IC_STATUS_TFE_MASK I2C0_IC_STATUS_TFE(ALL1)
#define I2C0_IC_STATUS_TFNF(v) (((v)&0x1)<<1)
#define I2C0_IC_STATUS_TFNF_MASK I2C0_IC_STATUS_TFNF(ALL1)
#define I2C0_IC_STATUS_ACTIVITY(v) (((v)&0x1)<<0)
#define I2C0_IC_STATUS_ACTIVITY_MASK I2C0_IC_STATUS_ACTIVITY(ALL1)

/*IC_TXFLR Register macros*/

#define I2C0_IC_TXFLR_TXFLR(v) (((v)&0x1f)<<0)
#define I2C0_IC_TXFLR_TXFLR_MASK I2C0_IC_TXFLR_TXFLR(ALL1)

/*IC_RXFLR Register macros*/

#define I2C0_IC_RXFLR_RXFLR(v) (((v)&0x1f)<<0)
#define I2C0_IC_RXFLR_RXFLR_MASK I2C0_IC_RXFLR_RXFLR(ALL1)

/*IC_SDA_HOLD Register macros*/

#define I2C0_IC_SDA_HOLD_IC_SDA_RX_HOLD(v) (((v)&0xff)<<16)
#define I2C0_IC_SDA_HOLD_IC_SDA_RX_HOLD_MASK I2C0_IC_SDA_HOLD_IC_SDA_RX_HOLD(ALL1)
#define I2C0_IC_SDA_HOLD_IC_SDA_TX_HOLD(v) (((v)&0xffff)<<0)
#define I2C0_IC_SDA_HOLD_IC_SDA_TX_HOLD_MASK I2C0_IC_SDA_HOLD_IC_SDA_TX_HOLD(ALL1)

/*IC_TX_ABRT_SOURCE Register macros*/

#define I2C0_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT(v) (((v)&0x1ff)<<23)
#define I2C0_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_MASK I2C0_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT(v) (((v)&0x1)<<16)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX(v) (((v)&0x1)<<15)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST(v) (((v)&0x1)<<14)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO(v) (((v)&0x1)<<13)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ARB_LOST(v) (((v)&0x1)<<12)
#define I2C0_IC_TX_ABRT_SOURCE_ARB_LOST_MASK I2C0_IC_TX_ABRT_SOURCE_ARB_LOST(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS(v) (((v)&0x1)<<11)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT(v) (((v)&0x1)<<10)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT(v) (((v)&0x1)<<9)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT(v) (((v)&0x1)<<8)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET(v) (((v)&0x1)<<7)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET(v) (((v)&0x1)<<6)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ(v) (((v)&0x1)<<5)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK(v) (((v)&0x1)<<4)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK(v) (((v)&0x1)<<3)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK(v) (((v)&0x1)<<2)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK(v) (((v)&0x1)<<1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK(v) (((v)&0x1)<<0)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK(ALL1)

/*IC_SLV_DATA_NACK_ONLY Register macros*/

#define I2C0_IC_SLV_DATA_NACK_ONLY_NACK(v) (((v)&0x1)<<0)
#define I2C0_IC_SLV_DATA_NACK_ONLY_NACK_MASK I2C0_IC_SLV_DATA_NACK_ONLY_NACK(ALL1)

/*IC_DMA_CR Register macros*/

#define I2C0_IC_DMA_CR_TDMAE(v) (((v)&0x1)<<1)
#define I2C0_IC_DMA_CR_TDMAE_MASK I2C0_IC_DMA_CR_TDMAE(ALL1)
#define I2C0_IC_DMA_CR_RDMAE(v) (((v)&0x1)<<0)
#define I2C0_IC_DMA_CR_RDMAE_MASK I2C0_IC_DMA_CR_RDMAE(ALL1)

/*IC_DMA_TDLR Register macros*/

#define I2C0_IC_DMA_TDLR_DMATDL(v) (((v)&0xf)<<0)
#define I2C0_IC_DMA_TDLR_DMATDL_MASK I2C0_IC_DMA_TDLR_DMATDL(ALL1)

/*IC_DMA_RDLR Register macros*/

#define I2C0_IC_DMA_RDLR_DMARDL(v) (((v)&0xf)<<0)
#define I2C0_IC_DMA_RDLR_DMARDL_MASK I2C0_IC_DMA_RDLR_DMARDL(ALL1)

/*IC_SDA_SETUP Register macros*/

#define I2C0_IC_SDA_SETUP_SDA_SETUP(v) (((v)&0xff)<<0)
#define I2C0_IC_SDA_SETUP_SDA_SETUP_MASK I2C0_IC_SDA_SETUP_SDA_SETUP(ALL1)

/*IC_ACK_GENERAL_CALL Register macros*/

#define I2C0_IC_ACK_GENERAL_CALL_ACK_GEN_CALL(v) (((v)&0x1)<<0)
#define I2C0_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_MASK I2C0_IC_ACK_GENERAL_CALL_ACK_GEN_CALL(ALL1)

/*IC_ENABLE_STATUS Register macros*/

#define I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(v) (((v)&0x1)<<2)
#define I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_MASK I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(ALL1)
#define I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(v) (((v)&0x1)<<1)
#define I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_MASK I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(ALL1)
#define I2C0_IC_ENABLE_STATUS_IC_EN(v) (((v)&0x1)<<0)
#define I2C0_IC_ENABLE_STATUS_IC_EN_MASK I2C0_IC_ENABLE_STATUS_IC_EN(ALL1)

/*IC_FS_SPKLEN Register macros*/

#define I2C0_IC_FS_SPKLEN_IC_FS_SPKLEN(v) (((v)&0xff)<<0)
#define I2C0_IC_FS_SPKLEN_IC_FS_SPKLEN_MASK I2C0_IC_FS_SPKLEN_IC_FS_SPKLEN(ALL1)

/*IC_CLR_RESTART_DET Register macros*/

#define I2C0_IC_CLR_RESTART_DET_CLR_RESTART_DET(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_RESTART_DET_CLR_RESTART_DET_MASK I2C0_IC_CLR_RESTART_DET_CLR_RESTART_DET(ALL1)

/*IC_COMP_PARAM_1 Register macros*/

#define I2C0_IC_COMP_PARAM_1_TX_BUFFER_DEPTH(v) (((v)&0xff)<<16)
#define I2C0_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_MASK I2C0_IC_COMP_PARAM_1_TX_BUFFER_DEPTH(ALL1)
#define I2C0_IC_COMP_PARAM_1_RX_BUFFER_DEPTH(v) (((v)&0xff)<<8)
#define I2C0_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_MASK I2C0_IC_COMP_PARAM_1_RX_BUFFER_DEPTH(ALL1)
#define I2C0_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS(v) (((v)&0x1)<<7)
#define I2C0_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_MASK I2C0_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS(ALL1)
#define I2C0_IC_COMP_PARAM_1_HAS_DMA(v) (((v)&0x1)<<6)
#define I2C0_IC_COMP_PARAM_1_HAS_DMA_MASK I2C0_IC_COMP_PARAM_1_HAS_DMA(ALL1)
#define I2C0_IC_COMP_PARAM_1_INTR_IO(v) (((v)&0x1)<<5)
#define I2C0_IC_COMP_PARAM_1_INTR_IO_MASK I2C0_IC_COMP_PARAM_1_INTR_IO(ALL1)
#define I2C0_IC_COMP_PARAM_1_HC_COUNT_VALUES(v) (((v)&0x1)<<4)
#define I2C0_IC_COMP_PARAM_1_HC_COUNT_VALUES_MASK I2C0_IC_COMP_PARAM_1_HC_COUNT_VALUES(ALL1)
#define I2C0_IC_COMP_PARAM_1_MAX_SPEED_MODE(v) (((v)&0x3)<<2)
#define I2C0_IC_COMP_PARAM_1_MAX_SPEED_MODE_MASK I2C0_IC_COMP_PARAM_1_MAX_SPEED_MODE(ALL1)
#define I2C0_IC_COMP_PARAM_1_APB_DATA_WIDTH(v) (((v)&0x3)<<0)
#define I2C0_IC_COMP_PARAM_1_APB_DATA_WIDTH_MASK I2C0_IC_COMP_PARAM_1_APB_DATA_WIDTH(ALL1)

/*IC_COMP_VERSION Register macros*/

#define I2C0_IC_COMP_VERSION_IC_COMP_VERSION(v) (((v)&0xffffffff)<<0)
#define I2C0_IC_COMP_VERSION_IC_COMP_VERSION_MASK I2C0_IC_COMP_VERSION_IC_COMP_VERSION(ALL1)

/*IC_COMP_TYPE Register macros*/

#define I2C0_IC_COMP_TYPE_IC_COMP_TYPE(v) (((v)&0xffffffff)<<0)
#define I2C0_IC_COMP_TYPE_IC_COMP_TYPE_MASK I2C0_IC_COMP_TYPE_IC_COMP_TYPE(ALL1)

/*IC_CON Register macros*/

#define I2C1_IC_CON_STOP_DET_IF_MASTER_ACTIVE(v) (((v)&0x1)<<10)
#define I2C1_IC_CON_STOP_DET_IF_MASTER_ACTIVE_MASK I2C1_IC_CON_STOP_DET_IF_MASTER_ACTIVE(ALL1)
#define I2C1_IC_CON_RX_FIFO_FULL_HLD_CTRL(v) (((v)&0x1)<<9)
#define I2C1_IC_CON_RX_FIFO_FULL_HLD_CTRL_MASK I2C1_IC_CON_RX_FIFO_FULL_HLD_CTRL(ALL1)
#define I2C1_IC_CON_TX_EMPTY_CTRL(v) (((v)&0x1)<<8)
#define I2C1_IC_CON_TX_EMPTY_CTRL_MASK I2C1_IC_CON_TX_EMPTY_CTRL(ALL1)
#define I2C1_IC_CON_STOP_DET_IFADDRESSED(v) (((v)&0x1)<<7)
#define I2C1_IC_CON_STOP_DET_IFADDRESSED_MASK I2C1_IC_CON_STOP_DET_IFADDRESSED(ALL1)
#define I2C1_IC_CON_IC_SLAVE_DISABLE(v) (((v)&0x1)<<6)
#define I2C1_IC_CON_IC_SLAVE_DISABLE_MASK I2C1_IC_CON_IC_SLAVE_DISABLE(ALL1)
#define I2C1_IC_CON_IC_RESTART_EN(v) (((v)&0x1)<<5)
#define I2C1_IC_CON_IC_RESTART_EN_MASK I2C1_IC_CON_IC_RESTART_EN(ALL1)
#define I2C1_IC_CON_IC_10BITADDR_MASTER(v) (((v)&0x1)<<4)
#define I2C1_IC_CON_IC_10BITADDR_MASTER_MASK I2C1_IC_CON_IC_10BITADDR_MASTER(ALL1)
#define I2C1_IC_CON_IC_10BITADDR_SLAVE(v) (((v)&0x1)<<3)
#define I2C1_IC_CON_IC_10BITADDR_SLAVE_MASK I2C1_IC_CON_IC_10BITADDR_SLAVE(ALL1)
#define I2C1_IC_CON_SPEED(v) (((v)&0x3)<<1)
#define I2C1_IC_CON_SPEED_MASK I2C1_IC_CON_SPEED(ALL1)
#define I2C1_IC_CON_MASTER_MODE(v) (((v)&0x1)<<0)
#define I2C1_IC_CON_MASTER_MODE_MASK I2C1_IC_CON_MASTER_MODE(ALL1)

/*IC_TAR Register macros*/

#define I2C1_IC_TAR_SPECIAL(v) (((v)&0x1)<<11)
#define I2C1_IC_TAR_SPECIAL_MASK I2C1_IC_TAR_SPECIAL(ALL1)
#define I2C1_IC_TAR_GC_OR_START(v) (((v)&0x1)<<10)
#define I2C1_IC_TAR_GC_OR_START_MASK I2C1_IC_TAR_GC_OR_START(ALL1)
#define I2C1_IC_TAR_IC_TAR(v) (((v)&0x3ff)<<0)
#define I2C1_IC_TAR_IC_TAR_MASK I2C1_IC_TAR_IC_TAR(ALL1)

/*IC_SAR Register macros*/

#define I2C1_IC_SAR_IC_SAR(v) (((v)&0x3ff)<<0)
#define I2C1_IC_SAR_IC_SAR_MASK I2C1_IC_SAR_IC_SAR(ALL1)

/*IC_DATA_CMD Register macros*/

#define I2C1_IC_DATA_CMD_FIRST_DATA_BYTE(v) (((v)&0x1)<<11)
#define I2C1_IC_DATA_CMD_FIRST_DATA_BYTE_MASK I2C1_IC_DATA_CMD_FIRST_DATA_BYTE(ALL1)
#define I2C1_IC_DATA_CMD_RESTART(v) (((v)&0x1)<<10)
#define I2C1_IC_DATA_CMD_RESTART_MASK I2C1_IC_DATA_CMD_RESTART(ALL1)
#define I2C1_IC_DATA_CMD_STOP(v) (((v)&0x1)<<9)
#define I2C1_IC_DATA_CMD_STOP_MASK I2C1_IC_DATA_CMD_STOP(ALL1)
#define I2C1_IC_DATA_CMD_CMD(v) (((v)&0x1)<<8)
#define I2C1_IC_DATA_CMD_CMD_MASK I2C1_IC_DATA_CMD_CMD(ALL1)
#define I2C1_IC_DATA_CMD_DAT(v) (((v)&0xff)<<0)
#define I2C1_IC_DATA_CMD_DAT_MASK I2C1_IC_DATA_CMD_DAT(ALL1)

/*IC_SS_SCL_HCNT Register macros*/

#define I2C1_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT(v) (((v)&0xffff)<<0)
#define I2C1_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT_MASK I2C1_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT(ALL1)

/*IC_SS_SCL_LCNT Register macros*/

#define I2C1_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT(v) (((v)&0xffff)<<0)
#define I2C1_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT_MASK I2C1_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT(ALL1)

/*IC_FS_SCL_HCNT Register macros*/

#define I2C1_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT(v) (((v)&0xffff)<<0)
#define I2C1_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT_MASK I2C1_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT(ALL1)

/*IC_FS_SCL_LCNT Register macros*/

#define I2C1_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT(v) (((v)&0xffff)<<0)
#define I2C1_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT_MASK I2C1_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT(ALL1)

/*IC_INTR_STAT Register macros*/

#define I2C1_IC_INTR_STAT_R_RESTART_DET(v) (((v)&0x1)<<12)
#define I2C1_IC_INTR_STAT_R_RESTART_DET_MASK I2C1_IC_INTR_STAT_R_RESTART_DET(ALL1)
#define I2C1_IC_INTR_STAT_R_GEN_CALL(v) (((v)&0x1)<<11)
#define I2C1_IC_INTR_STAT_R_GEN_CALL_MASK I2C1_IC_INTR_STAT_R_GEN_CALL(ALL1)
#define I2C1_IC_INTR_STAT_R_START_DET(v) (((v)&0x1)<<10)
#define I2C1_IC_INTR_STAT_R_START_DET_MASK I2C1_IC_INTR_STAT_R_START_DET(ALL1)
#define I2C1_IC_INTR_STAT_R_STOP_DET(v) (((v)&0x1)<<9)
#define I2C1_IC_INTR_STAT_R_STOP_DET_MASK I2C1_IC_INTR_STAT_R_STOP_DET(ALL1)
#define I2C1_IC_INTR_STAT_R_ACTIVITY(v) (((v)&0x1)<<8)
#define I2C1_IC_INTR_STAT_R_ACTIVITY_MASK I2C1_IC_INTR_STAT_R_ACTIVITY(ALL1)
#define I2C1_IC_INTR_STAT_R_RX_DONE(v) (((v)&0x1)<<7)
#define I2C1_IC_INTR_STAT_R_RX_DONE_MASK I2C1_IC_INTR_STAT_R_RX_DONE(ALL1)
#define I2C1_IC_INTR_STAT_R_TX_ABRT(v) (((v)&0x1)<<6)
#define I2C1_IC_INTR_STAT_R_TX_ABRT_MASK I2C1_IC_INTR_STAT_R_TX_ABRT(ALL1)
#define I2C1_IC_INTR_STAT_R_RD_REQ(v) (((v)&0x1)<<5)
#define I2C1_IC_INTR_STAT_R_RD_REQ_MASK I2C1_IC_INTR_STAT_R_RD_REQ(ALL1)
#define I2C1_IC_INTR_STAT_R_TX_EMPTY(v) (((v)&0x1)<<4)
#define I2C1_IC_INTR_STAT_R_TX_EMPTY_MASK I2C1_IC_INTR_STAT_R_TX_EMPTY(ALL1)
#define I2C1_IC_INTR_STAT_R_TX_OVER(v) (((v)&0x1)<<3)
#define I2C1_IC_INTR_STAT_R_TX_OVER_MASK I2C1_IC_INTR_STAT_R_TX_OVER(ALL1)
#define I2C1_IC_INTR_STAT_R_RX_FULL(v) (((v)&0x1)<<2)
#define I2C1_IC_INTR_STAT_R_RX_FULL_MASK I2C1_IC_INTR_STAT_R_RX_FULL(ALL1)
#define I2C1_IC_INTR_STAT_R_RX_OVER(v) (((v)&0x1)<<1)
#define I2C1_IC_INTR_STAT_R_RX_OVER_MASK I2C1_IC_INTR_STAT_R_RX_OVER(ALL1)
#define I2C1_IC_INTR_STAT_R_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C1_IC_INTR_STAT_R_RX_UNDER_MASK I2C1_IC_INTR_STAT_R_RX_UNDER(ALL1)

/*IC_INTR_MASK Register macros*/

#define I2C1_IC_INTR_MASK_M_RESTART_DET(v) (((v)&0x1)<<12)
#define I2C1_IC_INTR_MASK_M_RESTART_DET_MASK I2C1_IC_INTR_MASK_M_RESTART_DET(ALL1)
#define I2C1_IC_INTR_MASK_M_GEN_CALL(v) (((v)&0x1)<<11)
#define I2C1_IC_INTR_MASK_M_GEN_CALL_MASK I2C1_IC_INTR_MASK_M_GEN_CALL(ALL1)
#define I2C1_IC_INTR_MASK_M_START_DET(v) (((v)&0x1)<<10)
#define I2C1_IC_INTR_MASK_M_START_DET_MASK I2C1_IC_INTR_MASK_M_START_DET(ALL1)
#define I2C1_IC_INTR_MASK_M_STOP_DET(v) (((v)&0x1)<<9)
#define I2C1_IC_INTR_MASK_M_STOP_DET_MASK I2C1_IC_INTR_MASK_M_STOP_DET(ALL1)
#define I2C1_IC_INTR_MASK_M_ACTIVITY(v) (((v)&0x1)<<8)
#define I2C1_IC_INTR_MASK_M_ACTIVITY_MASK I2C1_IC_INTR_MASK_M_ACTIVITY(ALL1)
#define I2C1_IC_INTR_MASK_M_RX_DONE(v) (((v)&0x1)<<7)
#define I2C1_IC_INTR_MASK_M_RX_DONE_MASK I2C1_IC_INTR_MASK_M_RX_DONE(ALL1)
#define I2C1_IC_INTR_MASK_M_TX_ABRT(v) (((v)&0x1)<<6)
#define I2C1_IC_INTR_MASK_M_TX_ABRT_MASK I2C1_IC_INTR_MASK_M_TX_ABRT(ALL1)
#define I2C1_IC_INTR_MASK_M_RD_REQ(v) (((v)&0x1)<<5)
#define I2C1_IC_INTR_MASK_M_RD_REQ_MASK I2C1_IC_INTR_MASK_M_RD_REQ(ALL1)
#define I2C1_IC_INTR_MASK_M_TX_EMPTY(v) (((v)&0x1)<<4)
#define I2C1_IC_INTR_MASK_M_TX_EMPTY_MASK I2C1_IC_INTR_MASK_M_TX_EMPTY(ALL1)
#define I2C1_IC_INTR_MASK_M_TX_OVER(v) (((v)&0x1)<<3)
#define I2C1_IC_INTR_MASK_M_TX_OVER_MASK I2C1_IC_INTR_MASK_M_TX_OVER(ALL1)
#define I2C1_IC_INTR_MASK_M_RX_FULL(v) (((v)&0x1)<<2)
#define I2C1_IC_INTR_MASK_M_RX_FULL_MASK I2C1_IC_INTR_MASK_M_RX_FULL(ALL1)
#define I2C1_IC_INTR_MASK_M_RX_OVER(v) (((v)&0x1)<<1)
#define I2C1_IC_INTR_MASK_M_RX_OVER_MASK I2C1_IC_INTR_MASK_M_RX_OVER(ALL1)
#define I2C1_IC_INTR_MASK_M_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C1_IC_INTR_MASK_M_RX_UNDER_MASK I2C1_IC_INTR_MASK_M_RX_UNDER(ALL1)

/*IC_RAW_INTR_STAT Register macros*/

#define I2C1_IC_RAW_INTR_STAT_RESTART_DET(v) (((v)&0x1)<<12)
#define I2C1_IC_RAW_INTR_STAT_RESTART_DET_MASK I2C1_IC_RAW_INTR_STAT_RESTART_DET(ALL1)
#define I2C1_IC_RAW_INTR_STAT_GEN_CALL(v) (((v)&0x1)<<11)
#define I2C1_IC_RAW_INTR_STAT_GEN_CALL_MASK I2C1_IC_RAW_INTR_STAT_GEN_CALL(ALL1)
#define I2C1_IC_RAW_INTR_STAT_START_DET(v) (((v)&0x1)<<10)
#define I2C1_IC_RAW_INTR_STAT_START_DET_MASK I2C1_IC_RAW_INTR_STAT_START_DET(ALL1)
#define I2C1_IC_RAW_INTR_STAT_STOP_DET(v) (((v)&0x1)<<9)
#define I2C1_IC_RAW_INTR_STAT_STOP_DET_MASK I2C1_IC_RAW_INTR_STAT_STOP_DET(ALL1)
#define I2C1_IC_RAW_INTR_STAT_ACTIVITY(v) (((v)&0x1)<<8)
#define I2C1_IC_RAW_INTR_STAT_ACTIVITY_MASK I2C1_IC_RAW_INTR_STAT_ACTIVITY(ALL1)
#define I2C1_IC_RAW_INTR_STAT_RX_DONE(v) (((v)&0x1)<<7)
#define I2C1_IC_RAW_INTR_STAT_RX_DONE_MASK I2C1_IC_RAW_INTR_STAT_RX_DONE(ALL1)
#define I2C1_IC_RAW_INTR_STAT_TX_ABRT(v) (((v)&0x1)<<6)
#define I2C1_IC_RAW_INTR_STAT_TX_ABRT_MASK I2C1_IC_RAW_INTR_STAT_TX_ABRT(ALL1)
#define I2C1_IC_RAW_INTR_STAT_RD_REQ(v) (((v)&0x1)<<5)
#define I2C1_IC_RAW_INTR_STAT_RD_REQ_MASK I2C1_IC_RAW_INTR_STAT_RD_REQ(ALL1)
#define I2C1_IC_RAW_INTR_STAT_TX_EMPTY(v) (((v)&0x1)<<4)
#define I2C1_IC_RAW_INTR_STAT_TX_EMPTY_MASK I2C1_IC_RAW_INTR_STAT_TX_EMPTY(ALL1)
#define I2C1_IC_RAW_INTR_STAT_TX_OVER(v) (((v)&0x1)<<3)
#define I2C1_IC_RAW_INTR_STAT_TX_OVER_MASK I2C1_IC_RAW_INTR_STAT_TX_OVER(ALL1)
#define I2C1_IC_RAW_INTR_STAT_RX_FULL(v) (((v)&0x1)<<2)
#define I2C1_IC_RAW_INTR_STAT_RX_FULL_MASK I2C1_IC_RAW_INTR_STAT_RX_FULL(ALL1)
#define I2C1_IC_RAW_INTR_STAT_RX_OVER(v) (((v)&0x1)<<1)
#define I2C1_IC_RAW_INTR_STAT_RX_OVER_MASK I2C1_IC_RAW_INTR_STAT_RX_OVER(ALL1)
#define I2C1_IC_RAW_INTR_STAT_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C1_IC_RAW_INTR_STAT_RX_UNDER_MASK I2C1_IC_RAW_INTR_STAT_RX_UNDER(ALL1)

/*IC_RX_TL Register macros*/

#define I2C1_IC_RX_TL_RX_TL(v) (((v)&0xff)<<0)
#define I2C1_IC_RX_TL_RX_TL_MASK I2C1_IC_RX_TL_RX_TL(ALL1)

/*IC_TX_TL Register macros*/

#define I2C1_IC_TX_TL_TX_TL(v) (((v)&0xff)<<0)
#define I2C1_IC_TX_TL_TX_TL_MASK I2C1_IC_TX_TL_TX_TL(ALL1)

/*IC_CLR_INTR Register macros*/

#define I2C1_IC_CLR_INTR_CLR_INTR(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_INTR_CLR_INTR_MASK I2C1_IC_CLR_INTR_CLR_INTR(ALL1)

/*IC_CLR_RX_UNDER Register macros*/

#define I2C1_IC_CLR_RX_UNDER_CLR_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_RX_UNDER_CLR_RX_UNDER_MASK I2C1_IC_CLR_RX_UNDER_CLR_RX_UNDER(ALL1)

/*IC_CLR_RX_OVER Register macros*/

#define I2C1_IC_CLR_RX_OVER_CLR_RX_OVER(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_RX_OVER_CLR_RX_OVER_MASK I2C1_IC_CLR_RX_OVER_CLR_RX_OVER(ALL1)

/*IC_CLR_TX_OVER Register macros*/

#define I2C1_IC_CLR_TX_OVER_CLR_TX_OVER(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_TX_OVER_CLR_TX_OVER_MASK I2C1_IC_CLR_TX_OVER_CLR_TX_OVER(ALL1)

/*IC_CLR_RD_REQ Register macros*/

#define I2C1_IC_CLR_RD_REQ_CLR_RD_REQ(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_RD_REQ_CLR_RD_REQ_MASK I2C1_IC_CLR_RD_REQ_CLR_RD_REQ(ALL1)

/*IC_CLR_TX_ABRT Register macros*/

#define I2C1_IC_CLR_TX_ABRT_CLR_TX_ABRT(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_TX_ABRT_CLR_TX_ABRT_MASK I2C1_IC_CLR_TX_ABRT_CLR_TX_ABRT(ALL1)

/*IC_CLR_RX_DONE Register macros*/

#define I2C1_IC_CLR_RX_DONE_CLR_RX_DONE(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_RX_DONE_CLR_RX_DONE_MASK I2C1_IC_CLR_RX_DONE_CLR_RX_DONE(ALL1)

/*IC_CLR_ACTIVITY Register macros*/

#define I2C1_IC_CLR_ACTIVITY_CLR_ACTIVITY(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_ACTIVITY_CLR_ACTIVITY_MASK I2C1_IC_CLR_ACTIVITY_CLR_ACTIVITY(ALL1)

/*IC_CLR_STOP_DET Register macros*/

#define I2C1_IC_CLR_STOP_DET_CLR_STOP_DET(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_STOP_DET_CLR_STOP_DET_MASK I2C1_IC_CLR_STOP_DET_CLR_STOP_DET(ALL1)

/*IC_CLR_START_DET Register macros*/

#define I2C1_IC_CLR_START_DET_CLR_START_DET(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_START_DET_CLR_START_DET_MASK I2C1_IC_CLR_START_DET_CLR_START_DET(ALL1)

/*IC_CLR_GEN_CALL Register macros*/

#define I2C1_IC_CLR_GEN_CALL_CLR_GEN_CALL(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_GEN_CALL_CLR_GEN_CALL_MASK I2C1_IC_CLR_GEN_CALL_CLR_GEN_CALL(ALL1)

/*IC_ENABLE Register macros*/

#define I2C1_IC_ENABLE_TX_CMD_BLOCK(v) (((v)&0x1)<<2)
#define I2C1_IC_ENABLE_TX_CMD_BLOCK_MASK I2C1_IC_ENABLE_TX_CMD_BLOCK(ALL1)
#define I2C1_IC_ENABLE_ABORT(v) (((v)&0x1)<<1)
#define I2C1_IC_ENABLE_ABORT_MASK I2C1_IC_ENABLE_ABORT(ALL1)
#define I2C1_IC_ENABLE_ENABLE(v) (((v)&0x1)<<0)
#define I2C1_IC_ENABLE_ENABLE_MASK I2C1_IC_ENABLE_ENABLE(ALL1)
#define I2C1_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(v) (((v)&0x1)<<2)
#define I2C1_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_MASK I2C1_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(ALL1)
#define I2C1_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(v) (((v)&0x1)<<1)
#define I2C1_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_MASK I2C1_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(ALL1)
#define I2C1_IC_ENABLE_STATUS_IC_EN(v) (((v)&0x1)<<0)
#define I2C1_IC_ENABLE_STATUS_IC_EN_MASK I2C1_IC_ENABLE_STATUS_IC_EN(ALL1)

/*IC_STATUS Register macros*/

#define I2C1_IC_STATUS_SLV_ACTIVITY(v) (((v)&0x1)<<6)
#define I2C1_IC_STATUS_SLV_ACTIVITY_MASK I2C1_IC_STATUS_SLV_ACTIVITY(ALL1)
#define I2C1_IC_STATUS_MST_ACTIVITY(v) (((v)&0x1)<<5)
#define I2C1_IC_STATUS_MST_ACTIVITY_MASK I2C1_IC_STATUS_MST_ACTIVITY(ALL1)
#define I2C1_IC_STATUS_RFF(v) (((v)&0x1)<<4)
#define I2C1_IC_STATUS_RFF_MASK I2C1_IC_STATUS_RFF(ALL1)
#define I2C1_IC_STATUS_RFNE(v) (((v)&0x1)<<3)
#define I2C1_IC_STATUS_RFNE_MASK I2C1_IC_STATUS_RFNE(ALL1)
#define I2C1_IC_STATUS_TFE(v) (((v)&0x1)<<2)
#define I2C1_IC_STATUS_TFE_MASK I2C1_IC_STATUS_TFE(ALL1)
#define I2C1_IC_STATUS_TFNF(v) (((v)&0x1)<<1)
#define I2C1_IC_STATUS_TFNF_MASK I2C1_IC_STATUS_TFNF(ALL1)
#define I2C1_IC_STATUS_ACTIVITY(v) (((v)&0x1)<<0)
#define I2C1_IC_STATUS_ACTIVITY_MASK I2C1_IC_STATUS_ACTIVITY(ALL1)

/*IC_TXFLR Register macros*/

#define I2C1_IC_TXFLR_TXFLR(v) (((v)&0x1f)<<0)
#define I2C1_IC_TXFLR_TXFLR_MASK I2C1_IC_TXFLR_TXFLR(ALL1)

/*IC_RXFLR Register macros*/

#define I2C1_IC_RXFLR_RXFLR(v) (((v)&0x1f)<<0)
#define I2C1_IC_RXFLR_RXFLR_MASK I2C1_IC_RXFLR_RXFLR(ALL1)

/*IC_SDA_HOLD Register macros*/

#define I2C1_IC_SDA_HOLD_IC_SDA_RX_HOLD(v) (((v)&0xff)<<16)
#define I2C1_IC_SDA_HOLD_IC_SDA_RX_HOLD_MASK I2C1_IC_SDA_HOLD_IC_SDA_RX_HOLD(ALL1)
#define I2C1_IC_SDA_HOLD_IC_SDA_TX_HOLD(v) (((v)&0xffff)<<0)
#define I2C1_IC_SDA_HOLD_IC_SDA_TX_HOLD_MASK I2C1_IC_SDA_HOLD_IC_SDA_TX_HOLD(ALL1)

/*IC_TX_ABRT_SOURCE Register macros*/

#define I2C1_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT(v) (((v)&0x1ff)<<23)
#define I2C1_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_MASK I2C1_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT(v) (((v)&0x1)<<16)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX(v) (((v)&0x1)<<15)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST(v) (((v)&0x1)<<14)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO(v) (((v)&0x1)<<13)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ARB_LOST(v) (((v)&0x1)<<12)
#define I2C1_IC_TX_ABRT_SOURCE_ARB_LOST_MASK I2C1_IC_TX_ABRT_SOURCE_ARB_LOST(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS(v) (((v)&0x1)<<11)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT(v) (((v)&0x1)<<10)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT(v) (((v)&0x1)<<9)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT(v) (((v)&0x1)<<8)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET(v) (((v)&0x1)<<7)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET(v) (((v)&0x1)<<6)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ(v) (((v)&0x1)<<5)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK(v) (((v)&0x1)<<4)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK(v) (((v)&0x1)<<3)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK(v) (((v)&0x1)<<2)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK(v) (((v)&0x1)<<1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK(v) (((v)&0x1)<<0)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK(ALL1)

/*IC_SLV_DATA_NACK_ONLY Register macros*/

#define I2C1_IC_SLV_DATA_NACK_ONLY_NACK(v) (((v)&0x1)<<0)
#define I2C1_IC_SLV_DATA_NACK_ONLY_NACK_MASK I2C1_IC_SLV_DATA_NACK_ONLY_NACK(ALL1)

/*IC_DMA_CR Register macros*/

#define I2C1_IC_DMA_CR_TDMAE(v) (((v)&0x1)<<1)
#define I2C1_IC_DMA_CR_TDMAE_MASK I2C1_IC_DMA_CR_TDMAE(ALL1)
#define I2C1_IC_DMA_CR_RDMAE(v) (((v)&0x1)<<0)
#define I2C1_IC_DMA_CR_RDMAE_MASK I2C1_IC_DMA_CR_RDMAE(ALL1)

/*IC_DMA_TDLR Register macros*/

#define I2C1_IC_DMA_TDLR_DMATDL(v) (((v)&0xf)<<0)
#define I2C1_IC_DMA_TDLR_DMATDL_MASK I2C1_IC_DMA_TDLR_DMATDL(ALL1)

/*IC_DMA_RDLR Register macros*/

#define I2C1_IC_DMA_RDLR_DMARDL(v) (((v)&0xf)<<0)
#define I2C1_IC_DMA_RDLR_DMARDL_MASK I2C1_IC_DMA_RDLR_DMARDL(ALL1)

/*IC_SDA_SETUP Register macros*/

#define I2C1_IC_SDA_SETUP_SDA_SETUP(v) (((v)&0xff)<<0)
#define I2C1_IC_SDA_SETUP_SDA_SETUP_MASK I2C1_IC_SDA_SETUP_SDA_SETUP(ALL1)

/*IC_ACK_GENERAL_CALL Register macros*/

#define I2C1_IC_ACK_GENERAL_CALL_ACK_GEN_CALL(v) (((v)&0x1)<<0)
#define I2C1_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_MASK I2C1_IC_ACK_GENERAL_CALL_ACK_GEN_CALL(ALL1)

/*IC_ENABLE_STATUS Register macros*/

#define I2C1_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(v) (((v)&0x1)<<2)
#define I2C1_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_MASK I2C1_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(ALL1)
#define I2C1_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(v) (((v)&0x1)<<1)
#define I2C1_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_MASK I2C1_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(ALL1)
#define I2C1_IC_ENABLE_STATUS_IC_EN(v) (((v)&0x1)<<0)
#define I2C1_IC_ENABLE_STATUS_IC_EN_MASK I2C1_IC_ENABLE_STATUS_IC_EN(ALL1)

/*IC_FS_SPKLEN Register macros*/

#define I2C1_IC_FS_SPKLEN_IC_FS_SPKLEN(v) (((v)&0xff)<<0)
#define I2C1_IC_FS_SPKLEN_IC_FS_SPKLEN_MASK I2C1_IC_FS_SPKLEN_IC_FS_SPKLEN(ALL1)

/*IC_CLR_RESTART_DET Register macros*/

#define I2C1_IC_CLR_RESTART_DET_CLR_RESTART_DET(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_RESTART_DET_CLR_RESTART_DET_MASK I2C1_IC_CLR_RESTART_DET_CLR_RESTART_DET(ALL1)

/*IC_COMP_PARAM_1 Register macros*/

#define I2C1_IC_COMP_PARAM_1_TX_BUFFER_DEPTH(v) (((v)&0xff)<<16)
#define I2C1_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_MASK I2C1_IC_COMP_PARAM_1_TX_BUFFER_DEPTH(ALL1)
#define I2C1_IC_COMP_PARAM_1_RX_BUFFER_DEPTH(v) (((v)&0xff)<<8)
#define I2C1_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_MASK I2C1_IC_COMP_PARAM_1_RX_BUFFER_DEPTH(ALL1)
#define I2C1_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS(v) (((v)&0x1)<<7)
#define I2C1_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_MASK I2C1_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS(ALL1)
#define I2C1_IC_COMP_PARAM_1_HAS_DMA(v) (((v)&0x1)<<6)
#define I2C1_IC_COMP_PARAM_1_HAS_DMA_MASK I2C1_IC_COMP_PARAM_1_HAS_DMA(ALL1)
#define I2C1_IC_COMP_PARAM_1_INTR_IO(v) (((v)&0x1)<<5)
#define I2C1_IC_COMP_PARAM_1_INTR_IO_MASK I2C1_IC_COMP_PARAM_1_INTR_IO(ALL1)
#define I2C1_IC_COMP_PARAM_1_HC_COUNT_VALUES(v) (((v)&0x1)<<4)
#define I2C1_IC_COMP_PARAM_1_HC_COUNT_VALUES_MASK I2C1_IC_COMP_PARAM_1_HC_COUNT_VALUES(ALL1)
#define I2C1_IC_COMP_PARAM_1_MAX_SPEED_MODE(v) (((v)&0x3)<<2)
#define I2C1_IC_COMP_PARAM_1_MAX_SPEED_MODE_MASK I2C1_IC_COMP_PARAM_1_MAX_SPEED_MODE(ALL1)
#define I2C1_IC_COMP_PARAM_1_APB_DATA_WIDTH(v) (((v)&0x3)<<0)
#define I2C1_IC_COMP_PARAM_1_APB_DATA_WIDTH_MASK I2C1_IC_COMP_PARAM_1_APB_DATA_WIDTH(ALL1)

/*IC_COMP_VERSION Register macros*/

#define I2C1_IC_COMP_VERSION_IC_COMP_VERSION(v) (((v)&0xffffffff)<<0)
#define I2C1_IC_COMP_VERSION_IC_COMP_VERSION_MASK I2C1_IC_COMP_VERSION_IC_COMP_VERSION(ALL1)

/*IC_COMP_TYPE Register macros*/

#define I2C1_IC_COMP_TYPE_IC_COMP_TYPE(v) (((v)&0xffffffff)<<0)
#define I2C1_IC_COMP_TYPE_IC_COMP_TYPE_MASK I2C1_IC_COMP_TYPE_IC_COMP_TYPE(ALL1)

#endif

