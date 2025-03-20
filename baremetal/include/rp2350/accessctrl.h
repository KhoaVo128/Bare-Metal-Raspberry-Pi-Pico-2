
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

#ifndef RP2350_ACCESSCTRL_H
#define RP2350_ACCESSCTRL_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t lock;
		uint32_t force_core_ns;
		uint32_t cfgreset;
		uint32_t gpio_nsmask0;
		uint32_t gpio_nsmask1;
		uint32_t rom;
		uint32_t xip_main;
		uint32_t sram0;
		uint32_t sram1;
		uint32_t sram2;
		uint32_t sram3;
		uint32_t sram4;
		uint32_t sram5;
		uint32_t sram6;
		uint32_t sram7;
		uint32_t sram8;
		uint32_t sram9;
		uint32_t dma;
		uint32_t usbctrl;
		uint32_t pio0;
		uint32_t pio1;
		uint32_t pio2;
		uint32_t coresight_trace;
		uint32_t coresight_periph;
		uint32_t sysinfo;
		uint32_t resets;
		uint32_t io_bank0;
		uint32_t io_bank1;
		uint32_t pads_bank0;
		uint32_t pads_qspi;
		uint32_t busctrl;
		uint32_t adc0;
		uint32_t hstx;
		uint32_t i2c0;
		uint32_t i2c1;
		uint32_t pwm;
		uint32_t spi0;
		uint32_t spi1;
		uint32_t timer0;
		uint32_t timer1;
		uint32_t uart0;
		uint32_t uart1;
		uint32_t otp;
		uint32_t tbman;
		uint32_t powman;
		uint32_t trng;
		uint32_t sha256;
		uint32_t syscfg;
		uint32_t clocks;
		uint32_t xosc;
		uint32_t rosc;
		uint32_t pll_sys;
		uint32_t pll_usb;
		uint32_t ticks;
		uint32_t watchdog;
		uint32_t rsm;
		uint32_t xip_ctrl;
		uint32_t xip_qmi;
		uint32_t xip_aux;
		uint32_t RSVD0[965];
		uint32_t lock_xor;
		uint32_t force_core_ns_xor;
		uint32_t cfgreset_xor;
		uint32_t gpio_nsmask0_xor;
		uint32_t gpio_nsmask1_xor;
		uint32_t rom_xor;
		uint32_t xip_main_xor;
		uint32_t sram0_xor;
		uint32_t sram1_xor;
		uint32_t sram2_xor;
		uint32_t sram3_xor;
		uint32_t sram4_xor;
		uint32_t sram5_xor;
		uint32_t sram6_xor;
		uint32_t sram7_xor;
		uint32_t sram8_xor;
		uint32_t sram9_xor;
		uint32_t dma_xor;
		uint32_t usbctrl_xor;
		uint32_t pio0_xor;
		uint32_t pio1_xor;
		uint32_t pio2_xor;
		uint32_t coresight_trace_xor;
		uint32_t coresight_periph_xor;
		uint32_t sysinfo_xor;
		uint32_t resets_xor;
		uint32_t io_bank0_xor;
		uint32_t io_bank1_xor;
		uint32_t pads_bank0_xor;
		uint32_t pads_qspi_xor;
		uint32_t busctrl_xor;
		uint32_t adc0_xor;
		uint32_t hstx_xor;
		uint32_t i2c0_xor;
		uint32_t i2c1_xor;
		uint32_t pwm_xor;
		uint32_t spi0_xor;
		uint32_t spi1_xor;
		uint32_t timer0_xor;
		uint32_t timer1_xor;
		uint32_t uart0_xor;
		uint32_t uart1_xor;
		uint32_t otp_xor;
		uint32_t tbman_xor;
		uint32_t powman_xor;
		uint32_t trng_xor;
		uint32_t sha256_xor;
		uint32_t syscfg_xor;
		uint32_t clocks_xor;
		uint32_t xosc_xor;
		uint32_t rosc_xor;
		uint32_t pll_sys_xor;
		uint32_t pll_usb_xor;
		uint32_t ticks_xor;
		uint32_t watchdog_xor;
		uint32_t rsm_xor;
		uint32_t xip_ctrl_xor;
		uint32_t xip_qmi_xor;
		uint32_t xip_aux_xor;
		uint32_t RSVDxor_0[965];
		uint32_t lock_set;
		uint32_t force_core_ns_set;
		uint32_t cfgreset_set;
		uint32_t gpio_nsmask0_set;
		uint32_t gpio_nsmask1_set;
		uint32_t rom_set;
		uint32_t xip_main_set;
		uint32_t sram0_set;
		uint32_t sram1_set;
		uint32_t sram2_set;
		uint32_t sram3_set;
		uint32_t sram4_set;
		uint32_t sram5_set;
		uint32_t sram6_set;
		uint32_t sram7_set;
		uint32_t sram8_set;
		uint32_t sram9_set;
		uint32_t dma_set;
		uint32_t usbctrl_set;
		uint32_t pio0_set;
		uint32_t pio1_set;
		uint32_t pio2_set;
		uint32_t coresight_trace_set;
		uint32_t coresight_periph_set;
		uint32_t sysinfo_set;
		uint32_t resets_set;
		uint32_t io_bank0_set;
		uint32_t io_bank1_set;
		uint32_t pads_bank0_set;
		uint32_t pads_qspi_set;
		uint32_t busctrl_set;
		uint32_t adc0_set;
		uint32_t hstx_set;
		uint32_t i2c0_set;
		uint32_t i2c1_set;
		uint32_t pwm_set;
		uint32_t spi0_set;
		uint32_t spi1_set;
		uint32_t timer0_set;
		uint32_t timer1_set;
		uint32_t uart0_set;
		uint32_t uart1_set;
		uint32_t otp_set;
		uint32_t tbman_set;
		uint32_t powman_set;
		uint32_t trng_set;
		uint32_t sha256_set;
		uint32_t syscfg_set;
		uint32_t clocks_set;
		uint32_t xosc_set;
		uint32_t rosc_set;
		uint32_t pll_sys_set;
		uint32_t pll_usb_set;
		uint32_t ticks_set;
		uint32_t watchdog_set;
		uint32_t rsm_set;
		uint32_t xip_ctrl_set;
		uint32_t xip_qmi_set;
		uint32_t xip_aux_set;
		uint32_t RSVDset_0[965];
		uint32_t lock_clr;
		uint32_t force_core_ns_clr;
		uint32_t cfgreset_clr;
		uint32_t gpio_nsmask0_clr;
		uint32_t gpio_nsmask1_clr;
		uint32_t rom_clr;
		uint32_t xip_main_clr;
		uint32_t sram0_clr;
		uint32_t sram1_clr;
		uint32_t sram2_clr;
		uint32_t sram3_clr;
		uint32_t sram4_clr;
		uint32_t sram5_clr;
		uint32_t sram6_clr;
		uint32_t sram7_clr;
		uint32_t sram8_clr;
		uint32_t sram9_clr;
		uint32_t dma_clr;
		uint32_t usbctrl_clr;
		uint32_t pio0_clr;
		uint32_t pio1_clr;
		uint32_t pio2_clr;
		uint32_t coresight_trace_clr;
		uint32_t coresight_periph_clr;
		uint32_t sysinfo_clr;
		uint32_t resets_clr;
		uint32_t io_bank0_clr;
		uint32_t io_bank1_clr;
		uint32_t pads_bank0_clr;
		uint32_t pads_qspi_clr;
		uint32_t busctrl_clr;
		uint32_t adc0_clr;
		uint32_t hstx_clr;
		uint32_t i2c0_clr;
		uint32_t i2c1_clr;
		uint32_t pwm_clr;
		uint32_t spi0_clr;
		uint32_t spi1_clr;
		uint32_t timer0_clr;
		uint32_t timer1_clr;
		uint32_t uart0_clr;
		uint32_t uart1_clr;
		uint32_t otp_clr;
		uint32_t tbman_clr;
		uint32_t powman_clr;
		uint32_t trng_clr;
		uint32_t sha256_clr;
		uint32_t syscfg_clr;
		uint32_t clocks_clr;
		uint32_t xosc_clr;
		uint32_t rosc_clr;
		uint32_t pll_sys_clr;
		uint32_t pll_usb_clr;
		uint32_t ticks_clr;
		uint32_t watchdog_clr;
		uint32_t rsm_clr;
		uint32_t xip_ctrl_clr;
		uint32_t xip_qmi_clr;
		uint32_t xip_aux_clr;
		uint32_t RSVDclr_0[965];
} ACCESSCTRL_REG_BLOCKS;


/*IO Registers as struct*/

#define accessctrl (*(ACCESSCTRL_REG_BLOCKS volatile *)0x40060000)


/*IO Registers AS MACROS*/

#define ACCESSCTRL_LOCK (*(volatile uint32_t *)0x40060000)
#define ACCESSCTRL_FORCE_CORE_NS (*(volatile uint32_t *)0x40060004)
#define ACCESSCTRL_CFGRESET (*(volatile uint32_t *)0x40060008)
#define ACCESSCTRL_GPIO_NSMASK0 (*(volatile uint32_t *)0x4006000c)
#define ACCESSCTRL_GPIO_NSMASK1 (*(volatile uint32_t *)0x40060010)
#define ACCESSCTRL_ROM (*(volatile uint32_t *)0x40060014)
#define ACCESSCTRL_XIP_MAIN (*(volatile uint32_t *)0x40060018)
#define ACCESSCTRL_SRAM0 (*(volatile uint32_t *)0x4006001c)
#define ACCESSCTRL_SRAM1 (*(volatile uint32_t *)0x40060020)
#define ACCESSCTRL_SRAM2 (*(volatile uint32_t *)0x40060024)
#define ACCESSCTRL_SRAM3 (*(volatile uint32_t *)0x40060028)
#define ACCESSCTRL_SRAM4 (*(volatile uint32_t *)0x4006002c)
#define ACCESSCTRL_SRAM5 (*(volatile uint32_t *)0x40060030)
#define ACCESSCTRL_SRAM6 (*(volatile uint32_t *)0x40060034)
#define ACCESSCTRL_SRAM7 (*(volatile uint32_t *)0x40060038)
#define ACCESSCTRL_SRAM8 (*(volatile uint32_t *)0x4006003c)
#define ACCESSCTRL_SRAM9 (*(volatile uint32_t *)0x40060040)
#define ACCESSCTRL_DMA (*(volatile uint32_t *)0x40060044)
#define ACCESSCTRL_USBCTRL (*(volatile uint32_t *)0x40060048)
#define ACCESSCTRL_PIO0 (*(volatile uint32_t *)0x4006004c)
#define ACCESSCTRL_PIO1 (*(volatile uint32_t *)0x40060050)
#define ACCESSCTRL_PIO2 (*(volatile uint32_t *)0x40060054)
#define ACCESSCTRL_CORESIGHT_TRACE (*(volatile uint32_t *)0x40060058)
#define ACCESSCTRL_CORESIGHT_PERIPH (*(volatile uint32_t *)0x4006005c)
#define ACCESSCTRL_SYSINFO (*(volatile uint32_t *)0x40060060)
#define ACCESSCTRL_RESETS (*(volatile uint32_t *)0x40060064)
#define ACCESSCTRL_IO_BANK0 (*(volatile uint32_t *)0x40060068)
#define ACCESSCTRL_IO_BANK1 (*(volatile uint32_t *)0x4006006c)
#define ACCESSCTRL_PADS_BANK0 (*(volatile uint32_t *)0x40060070)
#define ACCESSCTRL_PADS_QSPI (*(volatile uint32_t *)0x40060074)
#define ACCESSCTRL_BUSCTRL (*(volatile uint32_t *)0x40060078)
#define ACCESSCTRL_ADC0 (*(volatile uint32_t *)0x4006007c)
#define ACCESSCTRL_HSTX (*(volatile uint32_t *)0x40060080)
#define ACCESSCTRL_I2C0 (*(volatile uint32_t *)0x40060084)
#define ACCESSCTRL_I2C1 (*(volatile uint32_t *)0x40060088)
#define ACCESSCTRL_PWM (*(volatile uint32_t *)0x4006008c)
#define ACCESSCTRL_SPI0 (*(volatile uint32_t *)0x40060090)
#define ACCESSCTRL_SPI1 (*(volatile uint32_t *)0x40060094)
#define ACCESSCTRL_TIMER0 (*(volatile uint32_t *)0x40060098)
#define ACCESSCTRL_TIMER1 (*(volatile uint32_t *)0x4006009c)
#define ACCESSCTRL_UART0 (*(volatile uint32_t *)0x400600a0)
#define ACCESSCTRL_UART1 (*(volatile uint32_t *)0x400600a4)
#define ACCESSCTRL_OTP (*(volatile uint32_t *)0x400600a8)
#define ACCESSCTRL_TBMAN (*(volatile uint32_t *)0x400600ac)
#define ACCESSCTRL_POWMAN (*(volatile uint32_t *)0x400600b0)
#define ACCESSCTRL_TRNG (*(volatile uint32_t *)0x400600b4)
#define ACCESSCTRL_SHA256 (*(volatile uint32_t *)0x400600b8)
#define ACCESSCTRL_SYSCFG (*(volatile uint32_t *)0x400600bc)
#define ACCESSCTRL_CLOCKS (*(volatile uint32_t *)0x400600c0)
#define ACCESSCTRL_XOSC (*(volatile uint32_t *)0x400600c4)
#define ACCESSCTRL_ROSC (*(volatile uint32_t *)0x400600c8)
#define ACCESSCTRL_PLL_SYS (*(volatile uint32_t *)0x400600cc)
#define ACCESSCTRL_PLL_USB (*(volatile uint32_t *)0x400600d0)
#define ACCESSCTRL_TICKS (*(volatile uint32_t *)0x400600d4)
#define ACCESSCTRL_WATCHDOG (*(volatile uint32_t *)0x400600d8)
#define ACCESSCTRL_RSM (*(volatile uint32_t *)0x400600dc)
#define ACCESSCTRL_XIP_CTRL (*(volatile uint32_t *)0x400600e0)
#define ACCESSCTRL_XIP_QMI (*(volatile uint32_t *)0x400600e4)
#define ACCESSCTRL_XIP_AUX (*(volatile uint32_t *)0x400600e8)
#define ACCESSCTRL_LOCK_XOR (*(volatile uint32_t *)0x40061000)
#define ACCESSCTRL_FORCE_CORE_NS_XOR (*(volatile uint32_t *)0x40061004)
#define ACCESSCTRL_CFGRESET_XOR (*(volatile uint32_t *)0x40061008)
#define ACCESSCTRL_GPIO_NSMASK0_XOR (*(volatile uint32_t *)0x4006100c)
#define ACCESSCTRL_GPIO_NSMASK1_XOR (*(volatile uint32_t *)0x40061010)
#define ACCESSCTRL_ROM_XOR (*(volatile uint32_t *)0x40061014)
#define ACCESSCTRL_XIP_MAIN_XOR (*(volatile uint32_t *)0x40061018)
#define ACCESSCTRL_SRAM0_XOR (*(volatile uint32_t *)0x4006101c)
#define ACCESSCTRL_SRAM1_XOR (*(volatile uint32_t *)0x40061020)
#define ACCESSCTRL_SRAM2_XOR (*(volatile uint32_t *)0x40061024)
#define ACCESSCTRL_SRAM3_XOR (*(volatile uint32_t *)0x40061028)
#define ACCESSCTRL_SRAM4_XOR (*(volatile uint32_t *)0x4006102c)
#define ACCESSCTRL_SRAM5_XOR (*(volatile uint32_t *)0x40061030)
#define ACCESSCTRL_SRAM6_XOR (*(volatile uint32_t *)0x40061034)
#define ACCESSCTRL_SRAM7_XOR (*(volatile uint32_t *)0x40061038)
#define ACCESSCTRL_SRAM8_XOR (*(volatile uint32_t *)0x4006103c)
#define ACCESSCTRL_SRAM9_XOR (*(volatile uint32_t *)0x40061040)
#define ACCESSCTRL_DMA_XOR (*(volatile uint32_t *)0x40061044)
#define ACCESSCTRL_USBCTRL_XOR (*(volatile uint32_t *)0x40061048)
#define ACCESSCTRL_PIO0_XOR (*(volatile uint32_t *)0x4006104c)
#define ACCESSCTRL_PIO1_XOR (*(volatile uint32_t *)0x40061050)
#define ACCESSCTRL_PIO2_XOR (*(volatile uint32_t *)0x40061054)
#define ACCESSCTRL_CORESIGHT_TRACE_XOR (*(volatile uint32_t *)0x40061058)
#define ACCESSCTRL_CORESIGHT_PERIPH_XOR (*(volatile uint32_t *)0x4006105c)
#define ACCESSCTRL_SYSINFO_XOR (*(volatile uint32_t *)0x40061060)
#define ACCESSCTRL_RESETS_XOR (*(volatile uint32_t *)0x40061064)
#define ACCESSCTRL_IO_BANK0_XOR (*(volatile uint32_t *)0x40061068)
#define ACCESSCTRL_IO_BANK1_XOR (*(volatile uint32_t *)0x4006106c)
#define ACCESSCTRL_PADS_BANK0_XOR (*(volatile uint32_t *)0x40061070)
#define ACCESSCTRL_PADS_QSPI_XOR (*(volatile uint32_t *)0x40061074)
#define ACCESSCTRL_BUSCTRL_XOR (*(volatile uint32_t *)0x40061078)
#define ACCESSCTRL_ADC0_XOR (*(volatile uint32_t *)0x4006107c)
#define ACCESSCTRL_HSTX_XOR (*(volatile uint32_t *)0x40061080)
#define ACCESSCTRL_I2C0_XOR (*(volatile uint32_t *)0x40061084)
#define ACCESSCTRL_I2C1_XOR (*(volatile uint32_t *)0x40061088)
#define ACCESSCTRL_PWM_XOR (*(volatile uint32_t *)0x4006108c)
#define ACCESSCTRL_SPI0_XOR (*(volatile uint32_t *)0x40061090)
#define ACCESSCTRL_SPI1_XOR (*(volatile uint32_t *)0x40061094)
#define ACCESSCTRL_TIMER0_XOR (*(volatile uint32_t *)0x40061098)
#define ACCESSCTRL_TIMER1_XOR (*(volatile uint32_t *)0x4006109c)
#define ACCESSCTRL_UART0_XOR (*(volatile uint32_t *)0x400610a0)
#define ACCESSCTRL_UART1_XOR (*(volatile uint32_t *)0x400610a4)
#define ACCESSCTRL_OTP_XOR (*(volatile uint32_t *)0x400610a8)
#define ACCESSCTRL_TBMAN_XOR (*(volatile uint32_t *)0x400610ac)
#define ACCESSCTRL_POWMAN_XOR (*(volatile uint32_t *)0x400610b0)
#define ACCESSCTRL_TRNG_XOR (*(volatile uint32_t *)0x400610b4)
#define ACCESSCTRL_SHA256_XOR (*(volatile uint32_t *)0x400610b8)
#define ACCESSCTRL_SYSCFG_XOR (*(volatile uint32_t *)0x400610bc)
#define ACCESSCTRL_CLOCKS_XOR (*(volatile uint32_t *)0x400610c0)
#define ACCESSCTRL_XOSC_XOR (*(volatile uint32_t *)0x400610c4)
#define ACCESSCTRL_ROSC_XOR (*(volatile uint32_t *)0x400610c8)
#define ACCESSCTRL_PLL_SYS_XOR (*(volatile uint32_t *)0x400610cc)
#define ACCESSCTRL_PLL_USB_XOR (*(volatile uint32_t *)0x400610d0)
#define ACCESSCTRL_TICKS_XOR (*(volatile uint32_t *)0x400610d4)
#define ACCESSCTRL_WATCHDOG_XOR (*(volatile uint32_t *)0x400610d8)
#define ACCESSCTRL_RSM_XOR (*(volatile uint32_t *)0x400610dc)
#define ACCESSCTRL_XIP_CTRL_XOR (*(volatile uint32_t *)0x400610e0)
#define ACCESSCTRL_XIP_QMI_XOR (*(volatile uint32_t *)0x400610e4)
#define ACCESSCTRL_XIP_AUX_XOR (*(volatile uint32_t *)0x400610e8)
#define ACCESSCTRL_LOCK_SET (*(volatile uint32_t *)0x40062000)
#define ACCESSCTRL_FORCE_CORE_NS_SET (*(volatile uint32_t *)0x40062004)
#define ACCESSCTRL_CFGRESET_SET (*(volatile uint32_t *)0x40062008)
#define ACCESSCTRL_GPIO_NSMASK0_SET (*(volatile uint32_t *)0x4006200c)
#define ACCESSCTRL_GPIO_NSMASK1_SET (*(volatile uint32_t *)0x40062010)
#define ACCESSCTRL_ROM_SET (*(volatile uint32_t *)0x40062014)
#define ACCESSCTRL_XIP_MAIN_SET (*(volatile uint32_t *)0x40062018)
#define ACCESSCTRL_SRAM0_SET (*(volatile uint32_t *)0x4006201c)
#define ACCESSCTRL_SRAM1_SET (*(volatile uint32_t *)0x40062020)
#define ACCESSCTRL_SRAM2_SET (*(volatile uint32_t *)0x40062024)
#define ACCESSCTRL_SRAM3_SET (*(volatile uint32_t *)0x40062028)
#define ACCESSCTRL_SRAM4_SET (*(volatile uint32_t *)0x4006202c)
#define ACCESSCTRL_SRAM5_SET (*(volatile uint32_t *)0x40062030)
#define ACCESSCTRL_SRAM6_SET (*(volatile uint32_t *)0x40062034)
#define ACCESSCTRL_SRAM7_SET (*(volatile uint32_t *)0x40062038)
#define ACCESSCTRL_SRAM8_SET (*(volatile uint32_t *)0x4006203c)
#define ACCESSCTRL_SRAM9_SET (*(volatile uint32_t *)0x40062040)
#define ACCESSCTRL_DMA_SET (*(volatile uint32_t *)0x40062044)
#define ACCESSCTRL_USBCTRL_SET (*(volatile uint32_t *)0x40062048)
#define ACCESSCTRL_PIO0_SET (*(volatile uint32_t *)0x4006204c)
#define ACCESSCTRL_PIO1_SET (*(volatile uint32_t *)0x40062050)
#define ACCESSCTRL_PIO2_SET (*(volatile uint32_t *)0x40062054)
#define ACCESSCTRL_CORESIGHT_TRACE_SET (*(volatile uint32_t *)0x40062058)
#define ACCESSCTRL_CORESIGHT_PERIPH_SET (*(volatile uint32_t *)0x4006205c)
#define ACCESSCTRL_SYSINFO_SET (*(volatile uint32_t *)0x40062060)
#define ACCESSCTRL_RESETS_SET (*(volatile uint32_t *)0x40062064)
#define ACCESSCTRL_IO_BANK0_SET (*(volatile uint32_t *)0x40062068)
#define ACCESSCTRL_IO_BANK1_SET (*(volatile uint32_t *)0x4006206c)
#define ACCESSCTRL_PADS_BANK0_SET (*(volatile uint32_t *)0x40062070)
#define ACCESSCTRL_PADS_QSPI_SET (*(volatile uint32_t *)0x40062074)
#define ACCESSCTRL_BUSCTRL_SET (*(volatile uint32_t *)0x40062078)
#define ACCESSCTRL_ADC0_SET (*(volatile uint32_t *)0x4006207c)
#define ACCESSCTRL_HSTX_SET (*(volatile uint32_t *)0x40062080)
#define ACCESSCTRL_I2C0_SET (*(volatile uint32_t *)0x40062084)
#define ACCESSCTRL_I2C1_SET (*(volatile uint32_t *)0x40062088)
#define ACCESSCTRL_PWM_SET (*(volatile uint32_t *)0x4006208c)
#define ACCESSCTRL_SPI0_SET (*(volatile uint32_t *)0x40062090)
#define ACCESSCTRL_SPI1_SET (*(volatile uint32_t *)0x40062094)
#define ACCESSCTRL_TIMER0_SET (*(volatile uint32_t *)0x40062098)
#define ACCESSCTRL_TIMER1_SET (*(volatile uint32_t *)0x4006209c)
#define ACCESSCTRL_UART0_SET (*(volatile uint32_t *)0x400620a0)
#define ACCESSCTRL_UART1_SET (*(volatile uint32_t *)0x400620a4)
#define ACCESSCTRL_OTP_SET (*(volatile uint32_t *)0x400620a8)
#define ACCESSCTRL_TBMAN_SET (*(volatile uint32_t *)0x400620ac)
#define ACCESSCTRL_POWMAN_SET (*(volatile uint32_t *)0x400620b0)
#define ACCESSCTRL_TRNG_SET (*(volatile uint32_t *)0x400620b4)
#define ACCESSCTRL_SHA256_SET (*(volatile uint32_t *)0x400620b8)
#define ACCESSCTRL_SYSCFG_SET (*(volatile uint32_t *)0x400620bc)
#define ACCESSCTRL_CLOCKS_SET (*(volatile uint32_t *)0x400620c0)
#define ACCESSCTRL_XOSC_SET (*(volatile uint32_t *)0x400620c4)
#define ACCESSCTRL_ROSC_SET (*(volatile uint32_t *)0x400620c8)
#define ACCESSCTRL_PLL_SYS_SET (*(volatile uint32_t *)0x400620cc)
#define ACCESSCTRL_PLL_USB_SET (*(volatile uint32_t *)0x400620d0)
#define ACCESSCTRL_TICKS_SET (*(volatile uint32_t *)0x400620d4)
#define ACCESSCTRL_WATCHDOG_SET (*(volatile uint32_t *)0x400620d8)
#define ACCESSCTRL_RSM_SET (*(volatile uint32_t *)0x400620dc)
#define ACCESSCTRL_XIP_CTRL_SET (*(volatile uint32_t *)0x400620e0)
#define ACCESSCTRL_XIP_QMI_SET (*(volatile uint32_t *)0x400620e4)
#define ACCESSCTRL_XIP_AUX_SET (*(volatile uint32_t *)0x400620e8)
#define ACCESSCTRL_LOCK_CLR (*(volatile uint32_t *)0x40063000)
#define ACCESSCTRL_FORCE_CORE_NS_CLR (*(volatile uint32_t *)0x40063004)
#define ACCESSCTRL_CFGRESET_CLR (*(volatile uint32_t *)0x40063008)
#define ACCESSCTRL_GPIO_NSMASK0_CLR (*(volatile uint32_t *)0x4006300c)
#define ACCESSCTRL_GPIO_NSMASK1_CLR (*(volatile uint32_t *)0x40063010)
#define ACCESSCTRL_ROM_CLR (*(volatile uint32_t *)0x40063014)
#define ACCESSCTRL_XIP_MAIN_CLR (*(volatile uint32_t *)0x40063018)
#define ACCESSCTRL_SRAM0_CLR (*(volatile uint32_t *)0x4006301c)
#define ACCESSCTRL_SRAM1_CLR (*(volatile uint32_t *)0x40063020)
#define ACCESSCTRL_SRAM2_CLR (*(volatile uint32_t *)0x40063024)
#define ACCESSCTRL_SRAM3_CLR (*(volatile uint32_t *)0x40063028)
#define ACCESSCTRL_SRAM4_CLR (*(volatile uint32_t *)0x4006302c)
#define ACCESSCTRL_SRAM5_CLR (*(volatile uint32_t *)0x40063030)
#define ACCESSCTRL_SRAM6_CLR (*(volatile uint32_t *)0x40063034)
#define ACCESSCTRL_SRAM7_CLR (*(volatile uint32_t *)0x40063038)
#define ACCESSCTRL_SRAM8_CLR (*(volatile uint32_t *)0x4006303c)
#define ACCESSCTRL_SRAM9_CLR (*(volatile uint32_t *)0x40063040)
#define ACCESSCTRL_DMA_CLR (*(volatile uint32_t *)0x40063044)
#define ACCESSCTRL_USBCTRL_CLR (*(volatile uint32_t *)0x40063048)
#define ACCESSCTRL_PIO0_CLR (*(volatile uint32_t *)0x4006304c)
#define ACCESSCTRL_PIO1_CLR (*(volatile uint32_t *)0x40063050)
#define ACCESSCTRL_PIO2_CLR (*(volatile uint32_t *)0x40063054)
#define ACCESSCTRL_CORESIGHT_TRACE_CLR (*(volatile uint32_t *)0x40063058)
#define ACCESSCTRL_CORESIGHT_PERIPH_CLR (*(volatile uint32_t *)0x4006305c)
#define ACCESSCTRL_SYSINFO_CLR (*(volatile uint32_t *)0x40063060)
#define ACCESSCTRL_RESETS_CLR (*(volatile uint32_t *)0x40063064)
#define ACCESSCTRL_IO_BANK0_CLR (*(volatile uint32_t *)0x40063068)
#define ACCESSCTRL_IO_BANK1_CLR (*(volatile uint32_t *)0x4006306c)
#define ACCESSCTRL_PADS_BANK0_CLR (*(volatile uint32_t *)0x40063070)
#define ACCESSCTRL_PADS_QSPI_CLR (*(volatile uint32_t *)0x40063074)
#define ACCESSCTRL_BUSCTRL_CLR (*(volatile uint32_t *)0x40063078)
#define ACCESSCTRL_ADC0_CLR (*(volatile uint32_t *)0x4006307c)
#define ACCESSCTRL_HSTX_CLR (*(volatile uint32_t *)0x40063080)
#define ACCESSCTRL_I2C0_CLR (*(volatile uint32_t *)0x40063084)
#define ACCESSCTRL_I2C1_CLR (*(volatile uint32_t *)0x40063088)
#define ACCESSCTRL_PWM_CLR (*(volatile uint32_t *)0x4006308c)
#define ACCESSCTRL_SPI0_CLR (*(volatile uint32_t *)0x40063090)
#define ACCESSCTRL_SPI1_CLR (*(volatile uint32_t *)0x40063094)
#define ACCESSCTRL_TIMER0_CLR (*(volatile uint32_t *)0x40063098)
#define ACCESSCTRL_TIMER1_CLR (*(volatile uint32_t *)0x4006309c)
#define ACCESSCTRL_UART0_CLR (*(volatile uint32_t *)0x400630a0)
#define ACCESSCTRL_UART1_CLR (*(volatile uint32_t *)0x400630a4)
#define ACCESSCTRL_OTP_CLR (*(volatile uint32_t *)0x400630a8)
#define ACCESSCTRL_TBMAN_CLR (*(volatile uint32_t *)0x400630ac)
#define ACCESSCTRL_POWMAN_CLR (*(volatile uint32_t *)0x400630b0)
#define ACCESSCTRL_TRNG_CLR (*(volatile uint32_t *)0x400630b4)
#define ACCESSCTRL_SHA256_CLR (*(volatile uint32_t *)0x400630b8)
#define ACCESSCTRL_SYSCFG_CLR (*(volatile uint32_t *)0x400630bc)
#define ACCESSCTRL_CLOCKS_CLR (*(volatile uint32_t *)0x400630c0)
#define ACCESSCTRL_XOSC_CLR (*(volatile uint32_t *)0x400630c4)
#define ACCESSCTRL_ROSC_CLR (*(volatile uint32_t *)0x400630c8)
#define ACCESSCTRL_PLL_SYS_CLR (*(volatile uint32_t *)0x400630cc)
#define ACCESSCTRL_PLL_USB_CLR (*(volatile uint32_t *)0x400630d0)
#define ACCESSCTRL_TICKS_CLR (*(volatile uint32_t *)0x400630d4)
#define ACCESSCTRL_WATCHDOG_CLR (*(volatile uint32_t *)0x400630d8)
#define ACCESSCTRL_RSM_CLR (*(volatile uint32_t *)0x400630dc)
#define ACCESSCTRL_XIP_CTRL_CLR (*(volatile uint32_t *)0x400630e0)
#define ACCESSCTRL_XIP_QMI_CLR (*(volatile uint32_t *)0x400630e4)
#define ACCESSCTRL_XIP_AUX_CLR (*(volatile uint32_t *)0x400630e8)

/*LOCK Register macros*/

#define ACCESSCTRL_LOCK_DEBUG(v) (((v)&0x1)<<3)
#define ACCESSCTRL_LOCK_DEBUG_MASK ACCESSCTRL_LOCK_DEBUG(ALL1)
#define ACCESSCTRL_LOCK_DMA(v) (((v)&0x1)<<2)
#define ACCESSCTRL_LOCK_DMA_MASK ACCESSCTRL_LOCK_DMA(ALL1)
#define ACCESSCTRL_LOCK_CORE1(v) (((v)&0x1)<<1)
#define ACCESSCTRL_LOCK_CORE1_MASK ACCESSCTRL_LOCK_CORE1(ALL1)
#define ACCESSCTRL_LOCK_CORE0(v) (((v)&0x1)<<0)
#define ACCESSCTRL_LOCK_CORE0_MASK ACCESSCTRL_LOCK_CORE0(ALL1)

/*FORCE_CORE_NS Register macros*/

#define ACCESSCTRL_FORCE_CORE_NS_CORE1(v) (((v)&0x1)<<1)
#define ACCESSCTRL_FORCE_CORE_NS_CORE1_MASK ACCESSCTRL_FORCE_CORE_NS_CORE1(ALL1)

/*CFGRESET Register macros*/


/*GPIO_NSMASK0 Register macros*/


/*GPIO_NSMASK1 Register macros*/

#define ACCESSCTRL_GPIO_NSMASK1_QSPI_SD(v) (((v)&0xf)<<28)
#define ACCESSCTRL_GPIO_NSMASK1_QSPI_SD_MASK ACCESSCTRL_GPIO_NSMASK1_QSPI_SD(ALL1)
#define ACCESSCTRL_GPIO_NSMASK1_QSPI_CSN(v) (((v)&0x1)<<27)
#define ACCESSCTRL_GPIO_NSMASK1_QSPI_CSN_MASK ACCESSCTRL_GPIO_NSMASK1_QSPI_CSN(ALL1)
#define ACCESSCTRL_GPIO_NSMASK1_QSPI_SCK(v) (((v)&0x1)<<26)
#define ACCESSCTRL_GPIO_NSMASK1_QSPI_SCK_MASK ACCESSCTRL_GPIO_NSMASK1_QSPI_SCK(ALL1)
#define ACCESSCTRL_GPIO_NSMASK1_USB_DM(v) (((v)&0x1)<<25)
#define ACCESSCTRL_GPIO_NSMASK1_USB_DM_MASK ACCESSCTRL_GPIO_NSMASK1_USB_DM(ALL1)
#define ACCESSCTRL_GPIO_NSMASK1_USB_DP(v) (((v)&0x1)<<24)
#define ACCESSCTRL_GPIO_NSMASK1_USB_DP_MASK ACCESSCTRL_GPIO_NSMASK1_USB_DP(ALL1)
#define ACCESSCTRL_GPIO_NSMASK1_GPIO(v) (((v)&0xffff)<<0)
#define ACCESSCTRL_GPIO_NSMASK1_GPIO_MASK ACCESSCTRL_GPIO_NSMASK1_GPIO(ALL1)

/*ROM Register macros*/

#define ACCESSCTRL_ROM_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_ROM_DBG_MASK ACCESSCTRL_ROM_DBG(ALL1)
#define ACCESSCTRL_ROM_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_ROM_DMA_MASK ACCESSCTRL_ROM_DMA(ALL1)
#define ACCESSCTRL_ROM_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_ROM_CORE1_MASK ACCESSCTRL_ROM_CORE1(ALL1)
#define ACCESSCTRL_ROM_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_ROM_CORE0_MASK ACCESSCTRL_ROM_CORE0(ALL1)
#define ACCESSCTRL_ROM_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_ROM_SP_MASK ACCESSCTRL_ROM_SP(ALL1)
#define ACCESSCTRL_ROM_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_ROM_SU_MASK ACCESSCTRL_ROM_SU(ALL1)
#define ACCESSCTRL_ROM_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_ROM_NSP_MASK ACCESSCTRL_ROM_NSP(ALL1)
#define ACCESSCTRL_ROM_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_ROM_NSU_MASK ACCESSCTRL_ROM_NSU(ALL1)

/*XIP_MAIN Register macros*/

#define ACCESSCTRL_XIP_MAIN_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_XIP_MAIN_DBG_MASK ACCESSCTRL_XIP_MAIN_DBG(ALL1)
#define ACCESSCTRL_XIP_MAIN_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_XIP_MAIN_DMA_MASK ACCESSCTRL_XIP_MAIN_DMA(ALL1)
#define ACCESSCTRL_XIP_MAIN_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_XIP_MAIN_CORE1_MASK ACCESSCTRL_XIP_MAIN_CORE1(ALL1)
#define ACCESSCTRL_XIP_MAIN_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_XIP_MAIN_CORE0_MASK ACCESSCTRL_XIP_MAIN_CORE0(ALL1)
#define ACCESSCTRL_XIP_MAIN_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_XIP_MAIN_SP_MASK ACCESSCTRL_XIP_MAIN_SP(ALL1)
#define ACCESSCTRL_XIP_MAIN_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_XIP_MAIN_SU_MASK ACCESSCTRL_XIP_MAIN_SU(ALL1)
#define ACCESSCTRL_XIP_MAIN_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_XIP_MAIN_NSP_MASK ACCESSCTRL_XIP_MAIN_NSP(ALL1)
#define ACCESSCTRL_XIP_MAIN_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_XIP_MAIN_NSU_MASK ACCESSCTRL_XIP_MAIN_NSU(ALL1)

/*SRAM0 Register macros*/

#define ACCESSCTRL_SRAM0_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SRAM0_DBG_MASK ACCESSCTRL_SRAM0_DBG(ALL1)
#define ACCESSCTRL_SRAM0_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SRAM0_DMA_MASK ACCESSCTRL_SRAM0_DMA(ALL1)
#define ACCESSCTRL_SRAM0_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SRAM0_CORE1_MASK ACCESSCTRL_SRAM0_CORE1(ALL1)
#define ACCESSCTRL_SRAM0_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SRAM0_CORE0_MASK ACCESSCTRL_SRAM0_CORE0(ALL1)
#define ACCESSCTRL_SRAM0_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SRAM0_SP_MASK ACCESSCTRL_SRAM0_SP(ALL1)
#define ACCESSCTRL_SRAM0_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SRAM0_SU_MASK ACCESSCTRL_SRAM0_SU(ALL1)
#define ACCESSCTRL_SRAM0_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SRAM0_NSP_MASK ACCESSCTRL_SRAM0_NSP(ALL1)
#define ACCESSCTRL_SRAM0_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SRAM0_NSU_MASK ACCESSCTRL_SRAM0_NSU(ALL1)

/*SRAM1 Register macros*/

#define ACCESSCTRL_SRAM1_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SRAM1_DBG_MASK ACCESSCTRL_SRAM1_DBG(ALL1)
#define ACCESSCTRL_SRAM1_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SRAM1_DMA_MASK ACCESSCTRL_SRAM1_DMA(ALL1)
#define ACCESSCTRL_SRAM1_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SRAM1_CORE1_MASK ACCESSCTRL_SRAM1_CORE1(ALL1)
#define ACCESSCTRL_SRAM1_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SRAM1_CORE0_MASK ACCESSCTRL_SRAM1_CORE0(ALL1)
#define ACCESSCTRL_SRAM1_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SRAM1_SP_MASK ACCESSCTRL_SRAM1_SP(ALL1)
#define ACCESSCTRL_SRAM1_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SRAM1_SU_MASK ACCESSCTRL_SRAM1_SU(ALL1)
#define ACCESSCTRL_SRAM1_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SRAM1_NSP_MASK ACCESSCTRL_SRAM1_NSP(ALL1)
#define ACCESSCTRL_SRAM1_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SRAM1_NSU_MASK ACCESSCTRL_SRAM1_NSU(ALL1)

/*SRAM2 Register macros*/

#define ACCESSCTRL_SRAM2_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SRAM2_DBG_MASK ACCESSCTRL_SRAM2_DBG(ALL1)
#define ACCESSCTRL_SRAM2_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SRAM2_DMA_MASK ACCESSCTRL_SRAM2_DMA(ALL1)
#define ACCESSCTRL_SRAM2_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SRAM2_CORE1_MASK ACCESSCTRL_SRAM2_CORE1(ALL1)
#define ACCESSCTRL_SRAM2_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SRAM2_CORE0_MASK ACCESSCTRL_SRAM2_CORE0(ALL1)
#define ACCESSCTRL_SRAM2_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SRAM2_SP_MASK ACCESSCTRL_SRAM2_SP(ALL1)
#define ACCESSCTRL_SRAM2_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SRAM2_SU_MASK ACCESSCTRL_SRAM2_SU(ALL1)
#define ACCESSCTRL_SRAM2_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SRAM2_NSP_MASK ACCESSCTRL_SRAM2_NSP(ALL1)
#define ACCESSCTRL_SRAM2_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SRAM2_NSU_MASK ACCESSCTRL_SRAM2_NSU(ALL1)

/*SRAM3 Register macros*/

#define ACCESSCTRL_SRAM3_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SRAM3_DBG_MASK ACCESSCTRL_SRAM3_DBG(ALL1)
#define ACCESSCTRL_SRAM3_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SRAM3_DMA_MASK ACCESSCTRL_SRAM3_DMA(ALL1)
#define ACCESSCTRL_SRAM3_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SRAM3_CORE1_MASK ACCESSCTRL_SRAM3_CORE1(ALL1)
#define ACCESSCTRL_SRAM3_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SRAM3_CORE0_MASK ACCESSCTRL_SRAM3_CORE0(ALL1)
#define ACCESSCTRL_SRAM3_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SRAM3_SP_MASK ACCESSCTRL_SRAM3_SP(ALL1)
#define ACCESSCTRL_SRAM3_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SRAM3_SU_MASK ACCESSCTRL_SRAM3_SU(ALL1)
#define ACCESSCTRL_SRAM3_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SRAM3_NSP_MASK ACCESSCTRL_SRAM3_NSP(ALL1)
#define ACCESSCTRL_SRAM3_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SRAM3_NSU_MASK ACCESSCTRL_SRAM3_NSU(ALL1)

/*SRAM4 Register macros*/

#define ACCESSCTRL_SRAM4_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SRAM4_DBG_MASK ACCESSCTRL_SRAM4_DBG(ALL1)
#define ACCESSCTRL_SRAM4_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SRAM4_DMA_MASK ACCESSCTRL_SRAM4_DMA(ALL1)
#define ACCESSCTRL_SRAM4_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SRAM4_CORE1_MASK ACCESSCTRL_SRAM4_CORE1(ALL1)
#define ACCESSCTRL_SRAM4_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SRAM4_CORE0_MASK ACCESSCTRL_SRAM4_CORE0(ALL1)
#define ACCESSCTRL_SRAM4_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SRAM4_SP_MASK ACCESSCTRL_SRAM4_SP(ALL1)
#define ACCESSCTRL_SRAM4_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SRAM4_SU_MASK ACCESSCTRL_SRAM4_SU(ALL1)
#define ACCESSCTRL_SRAM4_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SRAM4_NSP_MASK ACCESSCTRL_SRAM4_NSP(ALL1)
#define ACCESSCTRL_SRAM4_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SRAM4_NSU_MASK ACCESSCTRL_SRAM4_NSU(ALL1)

/*SRAM5 Register macros*/

#define ACCESSCTRL_SRAM5_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SRAM5_DBG_MASK ACCESSCTRL_SRAM5_DBG(ALL1)
#define ACCESSCTRL_SRAM5_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SRAM5_DMA_MASK ACCESSCTRL_SRAM5_DMA(ALL1)
#define ACCESSCTRL_SRAM5_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SRAM5_CORE1_MASK ACCESSCTRL_SRAM5_CORE1(ALL1)
#define ACCESSCTRL_SRAM5_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SRAM5_CORE0_MASK ACCESSCTRL_SRAM5_CORE0(ALL1)
#define ACCESSCTRL_SRAM5_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SRAM5_SP_MASK ACCESSCTRL_SRAM5_SP(ALL1)
#define ACCESSCTRL_SRAM5_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SRAM5_SU_MASK ACCESSCTRL_SRAM5_SU(ALL1)
#define ACCESSCTRL_SRAM5_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SRAM5_NSP_MASK ACCESSCTRL_SRAM5_NSP(ALL1)
#define ACCESSCTRL_SRAM5_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SRAM5_NSU_MASK ACCESSCTRL_SRAM5_NSU(ALL1)

/*SRAM6 Register macros*/

#define ACCESSCTRL_SRAM6_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SRAM6_DBG_MASK ACCESSCTRL_SRAM6_DBG(ALL1)
#define ACCESSCTRL_SRAM6_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SRAM6_DMA_MASK ACCESSCTRL_SRAM6_DMA(ALL1)
#define ACCESSCTRL_SRAM6_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SRAM6_CORE1_MASK ACCESSCTRL_SRAM6_CORE1(ALL1)
#define ACCESSCTRL_SRAM6_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SRAM6_CORE0_MASK ACCESSCTRL_SRAM6_CORE0(ALL1)
#define ACCESSCTRL_SRAM6_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SRAM6_SP_MASK ACCESSCTRL_SRAM6_SP(ALL1)
#define ACCESSCTRL_SRAM6_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SRAM6_SU_MASK ACCESSCTRL_SRAM6_SU(ALL1)
#define ACCESSCTRL_SRAM6_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SRAM6_NSP_MASK ACCESSCTRL_SRAM6_NSP(ALL1)
#define ACCESSCTRL_SRAM6_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SRAM6_NSU_MASK ACCESSCTRL_SRAM6_NSU(ALL1)

/*SRAM7 Register macros*/

#define ACCESSCTRL_SRAM7_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SRAM7_DBG_MASK ACCESSCTRL_SRAM7_DBG(ALL1)
#define ACCESSCTRL_SRAM7_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SRAM7_DMA_MASK ACCESSCTRL_SRAM7_DMA(ALL1)
#define ACCESSCTRL_SRAM7_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SRAM7_CORE1_MASK ACCESSCTRL_SRAM7_CORE1(ALL1)
#define ACCESSCTRL_SRAM7_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SRAM7_CORE0_MASK ACCESSCTRL_SRAM7_CORE0(ALL1)
#define ACCESSCTRL_SRAM7_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SRAM7_SP_MASK ACCESSCTRL_SRAM7_SP(ALL1)
#define ACCESSCTRL_SRAM7_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SRAM7_SU_MASK ACCESSCTRL_SRAM7_SU(ALL1)
#define ACCESSCTRL_SRAM7_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SRAM7_NSP_MASK ACCESSCTRL_SRAM7_NSP(ALL1)
#define ACCESSCTRL_SRAM7_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SRAM7_NSU_MASK ACCESSCTRL_SRAM7_NSU(ALL1)

/*SRAM8 Register macros*/

#define ACCESSCTRL_SRAM8_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SRAM8_DBG_MASK ACCESSCTRL_SRAM8_DBG(ALL1)
#define ACCESSCTRL_SRAM8_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SRAM8_DMA_MASK ACCESSCTRL_SRAM8_DMA(ALL1)
#define ACCESSCTRL_SRAM8_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SRAM8_CORE1_MASK ACCESSCTRL_SRAM8_CORE1(ALL1)
#define ACCESSCTRL_SRAM8_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SRAM8_CORE0_MASK ACCESSCTRL_SRAM8_CORE0(ALL1)
#define ACCESSCTRL_SRAM8_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SRAM8_SP_MASK ACCESSCTRL_SRAM8_SP(ALL1)
#define ACCESSCTRL_SRAM8_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SRAM8_SU_MASK ACCESSCTRL_SRAM8_SU(ALL1)
#define ACCESSCTRL_SRAM8_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SRAM8_NSP_MASK ACCESSCTRL_SRAM8_NSP(ALL1)
#define ACCESSCTRL_SRAM8_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SRAM8_NSU_MASK ACCESSCTRL_SRAM8_NSU(ALL1)

/*SRAM9 Register macros*/

#define ACCESSCTRL_SRAM9_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SRAM9_DBG_MASK ACCESSCTRL_SRAM9_DBG(ALL1)
#define ACCESSCTRL_SRAM9_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SRAM9_DMA_MASK ACCESSCTRL_SRAM9_DMA(ALL1)
#define ACCESSCTRL_SRAM9_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SRAM9_CORE1_MASK ACCESSCTRL_SRAM9_CORE1(ALL1)
#define ACCESSCTRL_SRAM9_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SRAM9_CORE0_MASK ACCESSCTRL_SRAM9_CORE0(ALL1)
#define ACCESSCTRL_SRAM9_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SRAM9_SP_MASK ACCESSCTRL_SRAM9_SP(ALL1)
#define ACCESSCTRL_SRAM9_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SRAM9_SU_MASK ACCESSCTRL_SRAM9_SU(ALL1)
#define ACCESSCTRL_SRAM9_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SRAM9_NSP_MASK ACCESSCTRL_SRAM9_NSP(ALL1)
#define ACCESSCTRL_SRAM9_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SRAM9_NSU_MASK ACCESSCTRL_SRAM9_NSU(ALL1)

/*DMA Register macros*/

#define ACCESSCTRL_DMA_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_DMA_DBG_MASK ACCESSCTRL_DMA_DBG(ALL1)
#define ACCESSCTRL_DMA_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_DMA_DMA_MASK ACCESSCTRL_DMA_DMA(ALL1)
#define ACCESSCTRL_DMA_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_DMA_CORE1_MASK ACCESSCTRL_DMA_CORE1(ALL1)
#define ACCESSCTRL_DMA_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_DMA_CORE0_MASK ACCESSCTRL_DMA_CORE0(ALL1)
#define ACCESSCTRL_DMA_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_DMA_SP_MASK ACCESSCTRL_DMA_SP(ALL1)
#define ACCESSCTRL_DMA_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_DMA_SU_MASK ACCESSCTRL_DMA_SU(ALL1)
#define ACCESSCTRL_DMA_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_DMA_NSP_MASK ACCESSCTRL_DMA_NSP(ALL1)
#define ACCESSCTRL_DMA_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_DMA_NSU_MASK ACCESSCTRL_DMA_NSU(ALL1)

/*USBCTRL Register macros*/

#define ACCESSCTRL_USBCTRL_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_USBCTRL_DBG_MASK ACCESSCTRL_USBCTRL_DBG(ALL1)
#define ACCESSCTRL_USBCTRL_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_USBCTRL_DMA_MASK ACCESSCTRL_USBCTRL_DMA(ALL1)
#define ACCESSCTRL_USBCTRL_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_USBCTRL_CORE1_MASK ACCESSCTRL_USBCTRL_CORE1(ALL1)
#define ACCESSCTRL_USBCTRL_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_USBCTRL_CORE0_MASK ACCESSCTRL_USBCTRL_CORE0(ALL1)
#define ACCESSCTRL_USBCTRL_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_USBCTRL_SP_MASK ACCESSCTRL_USBCTRL_SP(ALL1)
#define ACCESSCTRL_USBCTRL_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_USBCTRL_SU_MASK ACCESSCTRL_USBCTRL_SU(ALL1)
#define ACCESSCTRL_USBCTRL_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_USBCTRL_NSP_MASK ACCESSCTRL_USBCTRL_NSP(ALL1)
#define ACCESSCTRL_USBCTRL_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_USBCTRL_NSU_MASK ACCESSCTRL_USBCTRL_NSU(ALL1)

/*PIO0 Register macros*/

#define ACCESSCTRL_PIO0_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_PIO0_DBG_MASK ACCESSCTRL_PIO0_DBG(ALL1)
#define ACCESSCTRL_PIO0_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_PIO0_DMA_MASK ACCESSCTRL_PIO0_DMA(ALL1)
#define ACCESSCTRL_PIO0_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_PIO0_CORE1_MASK ACCESSCTRL_PIO0_CORE1(ALL1)
#define ACCESSCTRL_PIO0_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_PIO0_CORE0_MASK ACCESSCTRL_PIO0_CORE0(ALL1)
#define ACCESSCTRL_PIO0_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_PIO0_SP_MASK ACCESSCTRL_PIO0_SP(ALL1)
#define ACCESSCTRL_PIO0_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_PIO0_SU_MASK ACCESSCTRL_PIO0_SU(ALL1)
#define ACCESSCTRL_PIO0_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_PIO0_NSP_MASK ACCESSCTRL_PIO0_NSP(ALL1)
#define ACCESSCTRL_PIO0_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_PIO0_NSU_MASK ACCESSCTRL_PIO0_NSU(ALL1)

/*PIO1 Register macros*/

#define ACCESSCTRL_PIO1_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_PIO1_DBG_MASK ACCESSCTRL_PIO1_DBG(ALL1)
#define ACCESSCTRL_PIO1_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_PIO1_DMA_MASK ACCESSCTRL_PIO1_DMA(ALL1)
#define ACCESSCTRL_PIO1_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_PIO1_CORE1_MASK ACCESSCTRL_PIO1_CORE1(ALL1)
#define ACCESSCTRL_PIO1_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_PIO1_CORE0_MASK ACCESSCTRL_PIO1_CORE0(ALL1)
#define ACCESSCTRL_PIO1_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_PIO1_SP_MASK ACCESSCTRL_PIO1_SP(ALL1)
#define ACCESSCTRL_PIO1_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_PIO1_SU_MASK ACCESSCTRL_PIO1_SU(ALL1)
#define ACCESSCTRL_PIO1_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_PIO1_NSP_MASK ACCESSCTRL_PIO1_NSP(ALL1)
#define ACCESSCTRL_PIO1_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_PIO1_NSU_MASK ACCESSCTRL_PIO1_NSU(ALL1)

/*PIO2 Register macros*/

#define ACCESSCTRL_PIO2_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_PIO2_DBG_MASK ACCESSCTRL_PIO2_DBG(ALL1)
#define ACCESSCTRL_PIO2_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_PIO2_DMA_MASK ACCESSCTRL_PIO2_DMA(ALL1)
#define ACCESSCTRL_PIO2_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_PIO2_CORE1_MASK ACCESSCTRL_PIO2_CORE1(ALL1)
#define ACCESSCTRL_PIO2_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_PIO2_CORE0_MASK ACCESSCTRL_PIO2_CORE0(ALL1)
#define ACCESSCTRL_PIO2_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_PIO2_SP_MASK ACCESSCTRL_PIO2_SP(ALL1)
#define ACCESSCTRL_PIO2_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_PIO2_SU_MASK ACCESSCTRL_PIO2_SU(ALL1)
#define ACCESSCTRL_PIO2_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_PIO2_NSP_MASK ACCESSCTRL_PIO2_NSP(ALL1)
#define ACCESSCTRL_PIO2_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_PIO2_NSU_MASK ACCESSCTRL_PIO2_NSU(ALL1)

/*CORESIGHT_TRACE Register macros*/

#define ACCESSCTRL_CORESIGHT_TRACE_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_CORESIGHT_TRACE_DBG_MASK ACCESSCTRL_CORESIGHT_TRACE_DBG(ALL1)
#define ACCESSCTRL_CORESIGHT_TRACE_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_CORESIGHT_TRACE_DMA_MASK ACCESSCTRL_CORESIGHT_TRACE_DMA(ALL1)
#define ACCESSCTRL_CORESIGHT_TRACE_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_CORESIGHT_TRACE_CORE1_MASK ACCESSCTRL_CORESIGHT_TRACE_CORE1(ALL1)
#define ACCESSCTRL_CORESIGHT_TRACE_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_CORESIGHT_TRACE_CORE0_MASK ACCESSCTRL_CORESIGHT_TRACE_CORE0(ALL1)
#define ACCESSCTRL_CORESIGHT_TRACE_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_CORESIGHT_TRACE_SP_MASK ACCESSCTRL_CORESIGHT_TRACE_SP(ALL1)
#define ACCESSCTRL_CORESIGHT_TRACE_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_CORESIGHT_TRACE_SU_MASK ACCESSCTRL_CORESIGHT_TRACE_SU(ALL1)
#define ACCESSCTRL_CORESIGHT_TRACE_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_CORESIGHT_TRACE_NSP_MASK ACCESSCTRL_CORESIGHT_TRACE_NSP(ALL1)
#define ACCESSCTRL_CORESIGHT_TRACE_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_CORESIGHT_TRACE_NSU_MASK ACCESSCTRL_CORESIGHT_TRACE_NSU(ALL1)

/*CORESIGHT_PERIPH Register macros*/

#define ACCESSCTRL_CORESIGHT_PERIPH_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_CORESIGHT_PERIPH_DBG_MASK ACCESSCTRL_CORESIGHT_PERIPH_DBG(ALL1)
#define ACCESSCTRL_CORESIGHT_PERIPH_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_CORESIGHT_PERIPH_DMA_MASK ACCESSCTRL_CORESIGHT_PERIPH_DMA(ALL1)
#define ACCESSCTRL_CORESIGHT_PERIPH_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_CORESIGHT_PERIPH_CORE1_MASK ACCESSCTRL_CORESIGHT_PERIPH_CORE1(ALL1)
#define ACCESSCTRL_CORESIGHT_PERIPH_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_CORESIGHT_PERIPH_CORE0_MASK ACCESSCTRL_CORESIGHT_PERIPH_CORE0(ALL1)
#define ACCESSCTRL_CORESIGHT_PERIPH_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_CORESIGHT_PERIPH_SP_MASK ACCESSCTRL_CORESIGHT_PERIPH_SP(ALL1)
#define ACCESSCTRL_CORESIGHT_PERIPH_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_CORESIGHT_PERIPH_SU_MASK ACCESSCTRL_CORESIGHT_PERIPH_SU(ALL1)
#define ACCESSCTRL_CORESIGHT_PERIPH_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_CORESIGHT_PERIPH_NSP_MASK ACCESSCTRL_CORESIGHT_PERIPH_NSP(ALL1)
#define ACCESSCTRL_CORESIGHT_PERIPH_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_CORESIGHT_PERIPH_NSU_MASK ACCESSCTRL_CORESIGHT_PERIPH_NSU(ALL1)

/*SYSINFO Register macros*/

#define ACCESSCTRL_SYSINFO_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SYSINFO_DBG_MASK ACCESSCTRL_SYSINFO_DBG(ALL1)
#define ACCESSCTRL_SYSINFO_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SYSINFO_DMA_MASK ACCESSCTRL_SYSINFO_DMA(ALL1)
#define ACCESSCTRL_SYSINFO_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SYSINFO_CORE1_MASK ACCESSCTRL_SYSINFO_CORE1(ALL1)
#define ACCESSCTRL_SYSINFO_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SYSINFO_CORE0_MASK ACCESSCTRL_SYSINFO_CORE0(ALL1)
#define ACCESSCTRL_SYSINFO_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SYSINFO_SP_MASK ACCESSCTRL_SYSINFO_SP(ALL1)
#define ACCESSCTRL_SYSINFO_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SYSINFO_SU_MASK ACCESSCTRL_SYSINFO_SU(ALL1)
#define ACCESSCTRL_SYSINFO_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SYSINFO_NSP_MASK ACCESSCTRL_SYSINFO_NSP(ALL1)
#define ACCESSCTRL_SYSINFO_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SYSINFO_NSU_MASK ACCESSCTRL_SYSINFO_NSU(ALL1)

/*RESETS Register macros*/

#define ACCESSCTRL_RESETS_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_RESETS_DBG_MASK ACCESSCTRL_RESETS_DBG(ALL1)
#define ACCESSCTRL_RESETS_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_RESETS_DMA_MASK ACCESSCTRL_RESETS_DMA(ALL1)
#define ACCESSCTRL_RESETS_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_RESETS_CORE1_MASK ACCESSCTRL_RESETS_CORE1(ALL1)
#define ACCESSCTRL_RESETS_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_RESETS_CORE0_MASK ACCESSCTRL_RESETS_CORE0(ALL1)
#define ACCESSCTRL_RESETS_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_RESETS_SP_MASK ACCESSCTRL_RESETS_SP(ALL1)
#define ACCESSCTRL_RESETS_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_RESETS_SU_MASK ACCESSCTRL_RESETS_SU(ALL1)
#define ACCESSCTRL_RESETS_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_RESETS_NSP_MASK ACCESSCTRL_RESETS_NSP(ALL1)
#define ACCESSCTRL_RESETS_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_RESETS_NSU_MASK ACCESSCTRL_RESETS_NSU(ALL1)

/*IO_BANK0 Register macros*/

#define ACCESSCTRL_IO_BANK0_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_IO_BANK0_DBG_MASK ACCESSCTRL_IO_BANK0_DBG(ALL1)
#define ACCESSCTRL_IO_BANK0_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_IO_BANK0_DMA_MASK ACCESSCTRL_IO_BANK0_DMA(ALL1)
#define ACCESSCTRL_IO_BANK0_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_IO_BANK0_CORE1_MASK ACCESSCTRL_IO_BANK0_CORE1(ALL1)
#define ACCESSCTRL_IO_BANK0_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_IO_BANK0_CORE0_MASK ACCESSCTRL_IO_BANK0_CORE0(ALL1)
#define ACCESSCTRL_IO_BANK0_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_IO_BANK0_SP_MASK ACCESSCTRL_IO_BANK0_SP(ALL1)
#define ACCESSCTRL_IO_BANK0_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_IO_BANK0_SU_MASK ACCESSCTRL_IO_BANK0_SU(ALL1)
#define ACCESSCTRL_IO_BANK0_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_IO_BANK0_NSP_MASK ACCESSCTRL_IO_BANK0_NSP(ALL1)
#define ACCESSCTRL_IO_BANK0_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_IO_BANK0_NSU_MASK ACCESSCTRL_IO_BANK0_NSU(ALL1)

/*IO_BANK1 Register macros*/

#define ACCESSCTRL_IO_BANK1_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_IO_BANK1_DBG_MASK ACCESSCTRL_IO_BANK1_DBG(ALL1)
#define ACCESSCTRL_IO_BANK1_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_IO_BANK1_DMA_MASK ACCESSCTRL_IO_BANK1_DMA(ALL1)
#define ACCESSCTRL_IO_BANK1_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_IO_BANK1_CORE1_MASK ACCESSCTRL_IO_BANK1_CORE1(ALL1)
#define ACCESSCTRL_IO_BANK1_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_IO_BANK1_CORE0_MASK ACCESSCTRL_IO_BANK1_CORE0(ALL1)
#define ACCESSCTRL_IO_BANK1_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_IO_BANK1_SP_MASK ACCESSCTRL_IO_BANK1_SP(ALL1)
#define ACCESSCTRL_IO_BANK1_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_IO_BANK1_SU_MASK ACCESSCTRL_IO_BANK1_SU(ALL1)
#define ACCESSCTRL_IO_BANK1_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_IO_BANK1_NSP_MASK ACCESSCTRL_IO_BANK1_NSP(ALL1)
#define ACCESSCTRL_IO_BANK1_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_IO_BANK1_NSU_MASK ACCESSCTRL_IO_BANK1_NSU(ALL1)

/*PADS_BANK0 Register macros*/

#define ACCESSCTRL_PADS_BANK0_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_PADS_BANK0_DBG_MASK ACCESSCTRL_PADS_BANK0_DBG(ALL1)
#define ACCESSCTRL_PADS_BANK0_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_PADS_BANK0_DMA_MASK ACCESSCTRL_PADS_BANK0_DMA(ALL1)
#define ACCESSCTRL_PADS_BANK0_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_PADS_BANK0_CORE1_MASK ACCESSCTRL_PADS_BANK0_CORE1(ALL1)
#define ACCESSCTRL_PADS_BANK0_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_PADS_BANK0_CORE0_MASK ACCESSCTRL_PADS_BANK0_CORE0(ALL1)
#define ACCESSCTRL_PADS_BANK0_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_PADS_BANK0_SP_MASK ACCESSCTRL_PADS_BANK0_SP(ALL1)
#define ACCESSCTRL_PADS_BANK0_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_PADS_BANK0_SU_MASK ACCESSCTRL_PADS_BANK0_SU(ALL1)
#define ACCESSCTRL_PADS_BANK0_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_PADS_BANK0_NSP_MASK ACCESSCTRL_PADS_BANK0_NSP(ALL1)
#define ACCESSCTRL_PADS_BANK0_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_PADS_BANK0_NSU_MASK ACCESSCTRL_PADS_BANK0_NSU(ALL1)

/*PADS_QSPI Register macros*/

#define ACCESSCTRL_PADS_QSPI_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_PADS_QSPI_DBG_MASK ACCESSCTRL_PADS_QSPI_DBG(ALL1)
#define ACCESSCTRL_PADS_QSPI_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_PADS_QSPI_DMA_MASK ACCESSCTRL_PADS_QSPI_DMA(ALL1)
#define ACCESSCTRL_PADS_QSPI_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_PADS_QSPI_CORE1_MASK ACCESSCTRL_PADS_QSPI_CORE1(ALL1)
#define ACCESSCTRL_PADS_QSPI_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_PADS_QSPI_CORE0_MASK ACCESSCTRL_PADS_QSPI_CORE0(ALL1)
#define ACCESSCTRL_PADS_QSPI_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_PADS_QSPI_SP_MASK ACCESSCTRL_PADS_QSPI_SP(ALL1)
#define ACCESSCTRL_PADS_QSPI_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_PADS_QSPI_SU_MASK ACCESSCTRL_PADS_QSPI_SU(ALL1)
#define ACCESSCTRL_PADS_QSPI_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_PADS_QSPI_NSP_MASK ACCESSCTRL_PADS_QSPI_NSP(ALL1)
#define ACCESSCTRL_PADS_QSPI_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_PADS_QSPI_NSU_MASK ACCESSCTRL_PADS_QSPI_NSU(ALL1)

/*BUSCTRL Register macros*/

#define ACCESSCTRL_BUSCTRL_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_BUSCTRL_DBG_MASK ACCESSCTRL_BUSCTRL_DBG(ALL1)
#define ACCESSCTRL_BUSCTRL_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_BUSCTRL_DMA_MASK ACCESSCTRL_BUSCTRL_DMA(ALL1)
#define ACCESSCTRL_BUSCTRL_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_BUSCTRL_CORE1_MASK ACCESSCTRL_BUSCTRL_CORE1(ALL1)
#define ACCESSCTRL_BUSCTRL_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_BUSCTRL_CORE0_MASK ACCESSCTRL_BUSCTRL_CORE0(ALL1)
#define ACCESSCTRL_BUSCTRL_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_BUSCTRL_SP_MASK ACCESSCTRL_BUSCTRL_SP(ALL1)
#define ACCESSCTRL_BUSCTRL_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_BUSCTRL_SU_MASK ACCESSCTRL_BUSCTRL_SU(ALL1)
#define ACCESSCTRL_BUSCTRL_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_BUSCTRL_NSP_MASK ACCESSCTRL_BUSCTRL_NSP(ALL1)
#define ACCESSCTRL_BUSCTRL_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_BUSCTRL_NSU_MASK ACCESSCTRL_BUSCTRL_NSU(ALL1)

/*ADC0 Register macros*/

#define ACCESSCTRL_ADC0_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_ADC0_DBG_MASK ACCESSCTRL_ADC0_DBG(ALL1)
#define ACCESSCTRL_ADC0_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_ADC0_DMA_MASK ACCESSCTRL_ADC0_DMA(ALL1)
#define ACCESSCTRL_ADC0_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_ADC0_CORE1_MASK ACCESSCTRL_ADC0_CORE1(ALL1)
#define ACCESSCTRL_ADC0_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_ADC0_CORE0_MASK ACCESSCTRL_ADC0_CORE0(ALL1)
#define ACCESSCTRL_ADC0_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_ADC0_SP_MASK ACCESSCTRL_ADC0_SP(ALL1)
#define ACCESSCTRL_ADC0_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_ADC0_SU_MASK ACCESSCTRL_ADC0_SU(ALL1)
#define ACCESSCTRL_ADC0_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_ADC0_NSP_MASK ACCESSCTRL_ADC0_NSP(ALL1)
#define ACCESSCTRL_ADC0_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_ADC0_NSU_MASK ACCESSCTRL_ADC0_NSU(ALL1)

/*HSTX Register macros*/

#define ACCESSCTRL_HSTX_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_HSTX_DBG_MASK ACCESSCTRL_HSTX_DBG(ALL1)
#define ACCESSCTRL_HSTX_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_HSTX_DMA_MASK ACCESSCTRL_HSTX_DMA(ALL1)
#define ACCESSCTRL_HSTX_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_HSTX_CORE1_MASK ACCESSCTRL_HSTX_CORE1(ALL1)
#define ACCESSCTRL_HSTX_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_HSTX_CORE0_MASK ACCESSCTRL_HSTX_CORE0(ALL1)
#define ACCESSCTRL_HSTX_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_HSTX_SP_MASK ACCESSCTRL_HSTX_SP(ALL1)
#define ACCESSCTRL_HSTX_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_HSTX_SU_MASK ACCESSCTRL_HSTX_SU(ALL1)
#define ACCESSCTRL_HSTX_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_HSTX_NSP_MASK ACCESSCTRL_HSTX_NSP(ALL1)
#define ACCESSCTRL_HSTX_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_HSTX_NSU_MASK ACCESSCTRL_HSTX_NSU(ALL1)

/*I2C0 Register macros*/

#define ACCESSCTRL_I2C0_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_I2C0_DBG_MASK ACCESSCTRL_I2C0_DBG(ALL1)
#define ACCESSCTRL_I2C0_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_I2C0_DMA_MASK ACCESSCTRL_I2C0_DMA(ALL1)
#define ACCESSCTRL_I2C0_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_I2C0_CORE1_MASK ACCESSCTRL_I2C0_CORE1(ALL1)
#define ACCESSCTRL_I2C0_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_I2C0_CORE0_MASK ACCESSCTRL_I2C0_CORE0(ALL1)
#define ACCESSCTRL_I2C0_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_I2C0_SP_MASK ACCESSCTRL_I2C0_SP(ALL1)
#define ACCESSCTRL_I2C0_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_I2C0_SU_MASK ACCESSCTRL_I2C0_SU(ALL1)
#define ACCESSCTRL_I2C0_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_I2C0_NSP_MASK ACCESSCTRL_I2C0_NSP(ALL1)
#define ACCESSCTRL_I2C0_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_I2C0_NSU_MASK ACCESSCTRL_I2C0_NSU(ALL1)

/*I2C1 Register macros*/

#define ACCESSCTRL_I2C1_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_I2C1_DBG_MASK ACCESSCTRL_I2C1_DBG(ALL1)
#define ACCESSCTRL_I2C1_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_I2C1_DMA_MASK ACCESSCTRL_I2C1_DMA(ALL1)
#define ACCESSCTRL_I2C1_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_I2C1_CORE1_MASK ACCESSCTRL_I2C1_CORE1(ALL1)
#define ACCESSCTRL_I2C1_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_I2C1_CORE0_MASK ACCESSCTRL_I2C1_CORE0(ALL1)
#define ACCESSCTRL_I2C1_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_I2C1_SP_MASK ACCESSCTRL_I2C1_SP(ALL1)
#define ACCESSCTRL_I2C1_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_I2C1_SU_MASK ACCESSCTRL_I2C1_SU(ALL1)
#define ACCESSCTRL_I2C1_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_I2C1_NSP_MASK ACCESSCTRL_I2C1_NSP(ALL1)
#define ACCESSCTRL_I2C1_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_I2C1_NSU_MASK ACCESSCTRL_I2C1_NSU(ALL1)

/*PWM Register macros*/

#define ACCESSCTRL_PWM_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_PWM_DBG_MASK ACCESSCTRL_PWM_DBG(ALL1)
#define ACCESSCTRL_PWM_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_PWM_DMA_MASK ACCESSCTRL_PWM_DMA(ALL1)
#define ACCESSCTRL_PWM_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_PWM_CORE1_MASK ACCESSCTRL_PWM_CORE1(ALL1)
#define ACCESSCTRL_PWM_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_PWM_CORE0_MASK ACCESSCTRL_PWM_CORE0(ALL1)
#define ACCESSCTRL_PWM_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_PWM_SP_MASK ACCESSCTRL_PWM_SP(ALL1)
#define ACCESSCTRL_PWM_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_PWM_SU_MASK ACCESSCTRL_PWM_SU(ALL1)
#define ACCESSCTRL_PWM_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_PWM_NSP_MASK ACCESSCTRL_PWM_NSP(ALL1)
#define ACCESSCTRL_PWM_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_PWM_NSU_MASK ACCESSCTRL_PWM_NSU(ALL1)

/*SPI0 Register macros*/

#define ACCESSCTRL_SPI0_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SPI0_DBG_MASK ACCESSCTRL_SPI0_DBG(ALL1)
#define ACCESSCTRL_SPI0_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SPI0_DMA_MASK ACCESSCTRL_SPI0_DMA(ALL1)
#define ACCESSCTRL_SPI0_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SPI0_CORE1_MASK ACCESSCTRL_SPI0_CORE1(ALL1)
#define ACCESSCTRL_SPI0_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SPI0_CORE0_MASK ACCESSCTRL_SPI0_CORE0(ALL1)
#define ACCESSCTRL_SPI0_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SPI0_SP_MASK ACCESSCTRL_SPI0_SP(ALL1)
#define ACCESSCTRL_SPI0_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SPI0_SU_MASK ACCESSCTRL_SPI0_SU(ALL1)
#define ACCESSCTRL_SPI0_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SPI0_NSP_MASK ACCESSCTRL_SPI0_NSP(ALL1)
#define ACCESSCTRL_SPI0_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SPI0_NSU_MASK ACCESSCTRL_SPI0_NSU(ALL1)

/*SPI1 Register macros*/

#define ACCESSCTRL_SPI1_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SPI1_DBG_MASK ACCESSCTRL_SPI1_DBG(ALL1)
#define ACCESSCTRL_SPI1_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SPI1_DMA_MASK ACCESSCTRL_SPI1_DMA(ALL1)
#define ACCESSCTRL_SPI1_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SPI1_CORE1_MASK ACCESSCTRL_SPI1_CORE1(ALL1)
#define ACCESSCTRL_SPI1_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SPI1_CORE0_MASK ACCESSCTRL_SPI1_CORE0(ALL1)
#define ACCESSCTRL_SPI1_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SPI1_SP_MASK ACCESSCTRL_SPI1_SP(ALL1)
#define ACCESSCTRL_SPI1_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SPI1_SU_MASK ACCESSCTRL_SPI1_SU(ALL1)
#define ACCESSCTRL_SPI1_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SPI1_NSP_MASK ACCESSCTRL_SPI1_NSP(ALL1)
#define ACCESSCTRL_SPI1_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SPI1_NSU_MASK ACCESSCTRL_SPI1_NSU(ALL1)

/*TIMER0 Register macros*/

#define ACCESSCTRL_TIMER0_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_TIMER0_DBG_MASK ACCESSCTRL_TIMER0_DBG(ALL1)
#define ACCESSCTRL_TIMER0_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_TIMER0_DMA_MASK ACCESSCTRL_TIMER0_DMA(ALL1)
#define ACCESSCTRL_TIMER0_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_TIMER0_CORE1_MASK ACCESSCTRL_TIMER0_CORE1(ALL1)
#define ACCESSCTRL_TIMER0_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_TIMER0_CORE0_MASK ACCESSCTRL_TIMER0_CORE0(ALL1)
#define ACCESSCTRL_TIMER0_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_TIMER0_SP_MASK ACCESSCTRL_TIMER0_SP(ALL1)
#define ACCESSCTRL_TIMER0_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_TIMER0_SU_MASK ACCESSCTRL_TIMER0_SU(ALL1)
#define ACCESSCTRL_TIMER0_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_TIMER0_NSP_MASK ACCESSCTRL_TIMER0_NSP(ALL1)
#define ACCESSCTRL_TIMER0_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_TIMER0_NSU_MASK ACCESSCTRL_TIMER0_NSU(ALL1)

/*TIMER1 Register macros*/

#define ACCESSCTRL_TIMER1_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_TIMER1_DBG_MASK ACCESSCTRL_TIMER1_DBG(ALL1)
#define ACCESSCTRL_TIMER1_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_TIMER1_DMA_MASK ACCESSCTRL_TIMER1_DMA(ALL1)
#define ACCESSCTRL_TIMER1_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_TIMER1_CORE1_MASK ACCESSCTRL_TIMER1_CORE1(ALL1)
#define ACCESSCTRL_TIMER1_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_TIMER1_CORE0_MASK ACCESSCTRL_TIMER1_CORE0(ALL1)
#define ACCESSCTRL_TIMER1_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_TIMER1_SP_MASK ACCESSCTRL_TIMER1_SP(ALL1)
#define ACCESSCTRL_TIMER1_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_TIMER1_SU_MASK ACCESSCTRL_TIMER1_SU(ALL1)
#define ACCESSCTRL_TIMER1_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_TIMER1_NSP_MASK ACCESSCTRL_TIMER1_NSP(ALL1)
#define ACCESSCTRL_TIMER1_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_TIMER1_NSU_MASK ACCESSCTRL_TIMER1_NSU(ALL1)

/*UART0 Register macros*/

#define ACCESSCTRL_UART0_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_UART0_DBG_MASK ACCESSCTRL_UART0_DBG(ALL1)
#define ACCESSCTRL_UART0_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_UART0_DMA_MASK ACCESSCTRL_UART0_DMA(ALL1)
#define ACCESSCTRL_UART0_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_UART0_CORE1_MASK ACCESSCTRL_UART0_CORE1(ALL1)
#define ACCESSCTRL_UART0_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_UART0_CORE0_MASK ACCESSCTRL_UART0_CORE0(ALL1)
#define ACCESSCTRL_UART0_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_UART0_SP_MASK ACCESSCTRL_UART0_SP(ALL1)
#define ACCESSCTRL_UART0_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_UART0_SU_MASK ACCESSCTRL_UART0_SU(ALL1)
#define ACCESSCTRL_UART0_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_UART0_NSP_MASK ACCESSCTRL_UART0_NSP(ALL1)
#define ACCESSCTRL_UART0_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_UART0_NSU_MASK ACCESSCTRL_UART0_NSU(ALL1)

/*UART1 Register macros*/

#define ACCESSCTRL_UART1_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_UART1_DBG_MASK ACCESSCTRL_UART1_DBG(ALL1)
#define ACCESSCTRL_UART1_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_UART1_DMA_MASK ACCESSCTRL_UART1_DMA(ALL1)
#define ACCESSCTRL_UART1_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_UART1_CORE1_MASK ACCESSCTRL_UART1_CORE1(ALL1)
#define ACCESSCTRL_UART1_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_UART1_CORE0_MASK ACCESSCTRL_UART1_CORE0(ALL1)
#define ACCESSCTRL_UART1_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_UART1_SP_MASK ACCESSCTRL_UART1_SP(ALL1)
#define ACCESSCTRL_UART1_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_UART1_SU_MASK ACCESSCTRL_UART1_SU(ALL1)
#define ACCESSCTRL_UART1_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_UART1_NSP_MASK ACCESSCTRL_UART1_NSP(ALL1)
#define ACCESSCTRL_UART1_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_UART1_NSU_MASK ACCESSCTRL_UART1_NSU(ALL1)

/*OTP Register macros*/

#define ACCESSCTRL_OTP_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_OTP_DBG_MASK ACCESSCTRL_OTP_DBG(ALL1)
#define ACCESSCTRL_OTP_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_OTP_DMA_MASK ACCESSCTRL_OTP_DMA(ALL1)
#define ACCESSCTRL_OTP_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_OTP_CORE1_MASK ACCESSCTRL_OTP_CORE1(ALL1)
#define ACCESSCTRL_OTP_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_OTP_CORE0_MASK ACCESSCTRL_OTP_CORE0(ALL1)
#define ACCESSCTRL_OTP_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_OTP_SP_MASK ACCESSCTRL_OTP_SP(ALL1)
#define ACCESSCTRL_OTP_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_OTP_SU_MASK ACCESSCTRL_OTP_SU(ALL1)
#define ACCESSCTRL_OTP_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_OTP_NSP_MASK ACCESSCTRL_OTP_NSP(ALL1)
#define ACCESSCTRL_OTP_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_OTP_NSU_MASK ACCESSCTRL_OTP_NSU(ALL1)

/*TBMAN Register macros*/

#define ACCESSCTRL_TBMAN_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_TBMAN_DBG_MASK ACCESSCTRL_TBMAN_DBG(ALL1)
#define ACCESSCTRL_TBMAN_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_TBMAN_DMA_MASK ACCESSCTRL_TBMAN_DMA(ALL1)
#define ACCESSCTRL_TBMAN_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_TBMAN_CORE1_MASK ACCESSCTRL_TBMAN_CORE1(ALL1)
#define ACCESSCTRL_TBMAN_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_TBMAN_CORE0_MASK ACCESSCTRL_TBMAN_CORE0(ALL1)
#define ACCESSCTRL_TBMAN_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_TBMAN_SP_MASK ACCESSCTRL_TBMAN_SP(ALL1)
#define ACCESSCTRL_TBMAN_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_TBMAN_SU_MASK ACCESSCTRL_TBMAN_SU(ALL1)
#define ACCESSCTRL_TBMAN_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_TBMAN_NSP_MASK ACCESSCTRL_TBMAN_NSP(ALL1)
#define ACCESSCTRL_TBMAN_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_TBMAN_NSU_MASK ACCESSCTRL_TBMAN_NSU(ALL1)

/*POWMAN Register macros*/

#define ACCESSCTRL_POWMAN_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_POWMAN_DBG_MASK ACCESSCTRL_POWMAN_DBG(ALL1)
#define ACCESSCTRL_POWMAN_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_POWMAN_DMA_MASK ACCESSCTRL_POWMAN_DMA(ALL1)
#define ACCESSCTRL_POWMAN_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_POWMAN_CORE1_MASK ACCESSCTRL_POWMAN_CORE1(ALL1)
#define ACCESSCTRL_POWMAN_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_POWMAN_CORE0_MASK ACCESSCTRL_POWMAN_CORE0(ALL1)
#define ACCESSCTRL_POWMAN_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_POWMAN_SP_MASK ACCESSCTRL_POWMAN_SP(ALL1)
#define ACCESSCTRL_POWMAN_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_POWMAN_SU_MASK ACCESSCTRL_POWMAN_SU(ALL1)
#define ACCESSCTRL_POWMAN_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_POWMAN_NSP_MASK ACCESSCTRL_POWMAN_NSP(ALL1)
#define ACCESSCTRL_POWMAN_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_POWMAN_NSU_MASK ACCESSCTRL_POWMAN_NSU(ALL1)

/*TRNG Register macros*/

#define ACCESSCTRL_TRNG_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_TRNG_DBG_MASK ACCESSCTRL_TRNG_DBG(ALL1)
#define ACCESSCTRL_TRNG_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_TRNG_DMA_MASK ACCESSCTRL_TRNG_DMA(ALL1)
#define ACCESSCTRL_TRNG_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_TRNG_CORE1_MASK ACCESSCTRL_TRNG_CORE1(ALL1)
#define ACCESSCTRL_TRNG_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_TRNG_CORE0_MASK ACCESSCTRL_TRNG_CORE0(ALL1)
#define ACCESSCTRL_TRNG_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_TRNG_SP_MASK ACCESSCTRL_TRNG_SP(ALL1)
#define ACCESSCTRL_TRNG_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_TRNG_SU_MASK ACCESSCTRL_TRNG_SU(ALL1)
#define ACCESSCTRL_TRNG_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_TRNG_NSP_MASK ACCESSCTRL_TRNG_NSP(ALL1)
#define ACCESSCTRL_TRNG_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_TRNG_NSU_MASK ACCESSCTRL_TRNG_NSU(ALL1)

/*SHA256 Register macros*/

#define ACCESSCTRL_SHA256_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SHA256_DBG_MASK ACCESSCTRL_SHA256_DBG(ALL1)
#define ACCESSCTRL_SHA256_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SHA256_DMA_MASK ACCESSCTRL_SHA256_DMA(ALL1)
#define ACCESSCTRL_SHA256_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SHA256_CORE1_MASK ACCESSCTRL_SHA256_CORE1(ALL1)
#define ACCESSCTRL_SHA256_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SHA256_CORE0_MASK ACCESSCTRL_SHA256_CORE0(ALL1)
#define ACCESSCTRL_SHA256_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SHA256_SP_MASK ACCESSCTRL_SHA256_SP(ALL1)
#define ACCESSCTRL_SHA256_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SHA256_SU_MASK ACCESSCTRL_SHA256_SU(ALL1)
#define ACCESSCTRL_SHA256_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SHA256_NSP_MASK ACCESSCTRL_SHA256_NSP(ALL1)
#define ACCESSCTRL_SHA256_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SHA256_NSU_MASK ACCESSCTRL_SHA256_NSU(ALL1)

/*SYSCFG Register macros*/

#define ACCESSCTRL_SYSCFG_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_SYSCFG_DBG_MASK ACCESSCTRL_SYSCFG_DBG(ALL1)
#define ACCESSCTRL_SYSCFG_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_SYSCFG_DMA_MASK ACCESSCTRL_SYSCFG_DMA(ALL1)
#define ACCESSCTRL_SYSCFG_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_SYSCFG_CORE1_MASK ACCESSCTRL_SYSCFG_CORE1(ALL1)
#define ACCESSCTRL_SYSCFG_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_SYSCFG_CORE0_MASK ACCESSCTRL_SYSCFG_CORE0(ALL1)
#define ACCESSCTRL_SYSCFG_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_SYSCFG_SP_MASK ACCESSCTRL_SYSCFG_SP(ALL1)
#define ACCESSCTRL_SYSCFG_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_SYSCFG_SU_MASK ACCESSCTRL_SYSCFG_SU(ALL1)
#define ACCESSCTRL_SYSCFG_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_SYSCFG_NSP_MASK ACCESSCTRL_SYSCFG_NSP(ALL1)
#define ACCESSCTRL_SYSCFG_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_SYSCFG_NSU_MASK ACCESSCTRL_SYSCFG_NSU(ALL1)

/*CLOCKS Register macros*/

#define ACCESSCTRL_CLOCKS_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_CLOCKS_DBG_MASK ACCESSCTRL_CLOCKS_DBG(ALL1)
#define ACCESSCTRL_CLOCKS_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_CLOCKS_DMA_MASK ACCESSCTRL_CLOCKS_DMA(ALL1)
#define ACCESSCTRL_CLOCKS_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_CLOCKS_CORE1_MASK ACCESSCTRL_CLOCKS_CORE1(ALL1)
#define ACCESSCTRL_CLOCKS_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_CLOCKS_CORE0_MASK ACCESSCTRL_CLOCKS_CORE0(ALL1)
#define ACCESSCTRL_CLOCKS_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_CLOCKS_SP_MASK ACCESSCTRL_CLOCKS_SP(ALL1)
#define ACCESSCTRL_CLOCKS_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_CLOCKS_SU_MASK ACCESSCTRL_CLOCKS_SU(ALL1)
#define ACCESSCTRL_CLOCKS_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_CLOCKS_NSP_MASK ACCESSCTRL_CLOCKS_NSP(ALL1)
#define ACCESSCTRL_CLOCKS_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_CLOCKS_NSU_MASK ACCESSCTRL_CLOCKS_NSU(ALL1)

/*XOSC Register macros*/

#define ACCESSCTRL_XOSC_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_XOSC_DBG_MASK ACCESSCTRL_XOSC_DBG(ALL1)
#define ACCESSCTRL_XOSC_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_XOSC_DMA_MASK ACCESSCTRL_XOSC_DMA(ALL1)
#define ACCESSCTRL_XOSC_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_XOSC_CORE1_MASK ACCESSCTRL_XOSC_CORE1(ALL1)
#define ACCESSCTRL_XOSC_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_XOSC_CORE0_MASK ACCESSCTRL_XOSC_CORE0(ALL1)
#define ACCESSCTRL_XOSC_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_XOSC_SP_MASK ACCESSCTRL_XOSC_SP(ALL1)
#define ACCESSCTRL_XOSC_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_XOSC_SU_MASK ACCESSCTRL_XOSC_SU(ALL1)
#define ACCESSCTRL_XOSC_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_XOSC_NSP_MASK ACCESSCTRL_XOSC_NSP(ALL1)
#define ACCESSCTRL_XOSC_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_XOSC_NSU_MASK ACCESSCTRL_XOSC_NSU(ALL1)

/*ROSC Register macros*/

#define ACCESSCTRL_ROSC_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_ROSC_DBG_MASK ACCESSCTRL_ROSC_DBG(ALL1)
#define ACCESSCTRL_ROSC_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_ROSC_DMA_MASK ACCESSCTRL_ROSC_DMA(ALL1)
#define ACCESSCTRL_ROSC_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_ROSC_CORE1_MASK ACCESSCTRL_ROSC_CORE1(ALL1)
#define ACCESSCTRL_ROSC_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_ROSC_CORE0_MASK ACCESSCTRL_ROSC_CORE0(ALL1)
#define ACCESSCTRL_ROSC_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_ROSC_SP_MASK ACCESSCTRL_ROSC_SP(ALL1)
#define ACCESSCTRL_ROSC_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_ROSC_SU_MASK ACCESSCTRL_ROSC_SU(ALL1)
#define ACCESSCTRL_ROSC_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_ROSC_NSP_MASK ACCESSCTRL_ROSC_NSP(ALL1)
#define ACCESSCTRL_ROSC_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_ROSC_NSU_MASK ACCESSCTRL_ROSC_NSU(ALL1)

/*PLL_SYS Register macros*/

#define ACCESSCTRL_PLL_SYS_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_PLL_SYS_DBG_MASK ACCESSCTRL_PLL_SYS_DBG(ALL1)
#define ACCESSCTRL_PLL_SYS_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_PLL_SYS_DMA_MASK ACCESSCTRL_PLL_SYS_DMA(ALL1)
#define ACCESSCTRL_PLL_SYS_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_PLL_SYS_CORE1_MASK ACCESSCTRL_PLL_SYS_CORE1(ALL1)
#define ACCESSCTRL_PLL_SYS_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_PLL_SYS_CORE0_MASK ACCESSCTRL_PLL_SYS_CORE0(ALL1)
#define ACCESSCTRL_PLL_SYS_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_PLL_SYS_SP_MASK ACCESSCTRL_PLL_SYS_SP(ALL1)
#define ACCESSCTRL_PLL_SYS_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_PLL_SYS_SU_MASK ACCESSCTRL_PLL_SYS_SU(ALL1)
#define ACCESSCTRL_PLL_SYS_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_PLL_SYS_NSP_MASK ACCESSCTRL_PLL_SYS_NSP(ALL1)
#define ACCESSCTRL_PLL_SYS_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_PLL_SYS_NSU_MASK ACCESSCTRL_PLL_SYS_NSU(ALL1)

/*PLL_USB Register macros*/

#define ACCESSCTRL_PLL_USB_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_PLL_USB_DBG_MASK ACCESSCTRL_PLL_USB_DBG(ALL1)
#define ACCESSCTRL_PLL_USB_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_PLL_USB_DMA_MASK ACCESSCTRL_PLL_USB_DMA(ALL1)
#define ACCESSCTRL_PLL_USB_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_PLL_USB_CORE1_MASK ACCESSCTRL_PLL_USB_CORE1(ALL1)
#define ACCESSCTRL_PLL_USB_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_PLL_USB_CORE0_MASK ACCESSCTRL_PLL_USB_CORE0(ALL1)
#define ACCESSCTRL_PLL_USB_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_PLL_USB_SP_MASK ACCESSCTRL_PLL_USB_SP(ALL1)
#define ACCESSCTRL_PLL_USB_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_PLL_USB_SU_MASK ACCESSCTRL_PLL_USB_SU(ALL1)
#define ACCESSCTRL_PLL_USB_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_PLL_USB_NSP_MASK ACCESSCTRL_PLL_USB_NSP(ALL1)
#define ACCESSCTRL_PLL_USB_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_PLL_USB_NSU_MASK ACCESSCTRL_PLL_USB_NSU(ALL1)

/*TICKS Register macros*/

#define ACCESSCTRL_TICKS_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_TICKS_DBG_MASK ACCESSCTRL_TICKS_DBG(ALL1)
#define ACCESSCTRL_TICKS_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_TICKS_DMA_MASK ACCESSCTRL_TICKS_DMA(ALL1)
#define ACCESSCTRL_TICKS_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_TICKS_CORE1_MASK ACCESSCTRL_TICKS_CORE1(ALL1)
#define ACCESSCTRL_TICKS_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_TICKS_CORE0_MASK ACCESSCTRL_TICKS_CORE0(ALL1)
#define ACCESSCTRL_TICKS_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_TICKS_SP_MASK ACCESSCTRL_TICKS_SP(ALL1)
#define ACCESSCTRL_TICKS_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_TICKS_SU_MASK ACCESSCTRL_TICKS_SU(ALL1)
#define ACCESSCTRL_TICKS_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_TICKS_NSP_MASK ACCESSCTRL_TICKS_NSP(ALL1)
#define ACCESSCTRL_TICKS_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_TICKS_NSU_MASK ACCESSCTRL_TICKS_NSU(ALL1)

/*WATCHDOG Register macros*/

#define ACCESSCTRL_WATCHDOG_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_WATCHDOG_DBG_MASK ACCESSCTRL_WATCHDOG_DBG(ALL1)
#define ACCESSCTRL_WATCHDOG_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_WATCHDOG_DMA_MASK ACCESSCTRL_WATCHDOG_DMA(ALL1)
#define ACCESSCTRL_WATCHDOG_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_WATCHDOG_CORE1_MASK ACCESSCTRL_WATCHDOG_CORE1(ALL1)
#define ACCESSCTRL_WATCHDOG_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_WATCHDOG_CORE0_MASK ACCESSCTRL_WATCHDOG_CORE0(ALL1)
#define ACCESSCTRL_WATCHDOG_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_WATCHDOG_SP_MASK ACCESSCTRL_WATCHDOG_SP(ALL1)
#define ACCESSCTRL_WATCHDOG_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_WATCHDOG_SU_MASK ACCESSCTRL_WATCHDOG_SU(ALL1)
#define ACCESSCTRL_WATCHDOG_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_WATCHDOG_NSP_MASK ACCESSCTRL_WATCHDOG_NSP(ALL1)
#define ACCESSCTRL_WATCHDOG_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_WATCHDOG_NSU_MASK ACCESSCTRL_WATCHDOG_NSU(ALL1)

/*RSM Register macros*/

#define ACCESSCTRL_RSM_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_RSM_DBG_MASK ACCESSCTRL_RSM_DBG(ALL1)
#define ACCESSCTRL_RSM_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_RSM_DMA_MASK ACCESSCTRL_RSM_DMA(ALL1)
#define ACCESSCTRL_RSM_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_RSM_CORE1_MASK ACCESSCTRL_RSM_CORE1(ALL1)
#define ACCESSCTRL_RSM_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_RSM_CORE0_MASK ACCESSCTRL_RSM_CORE0(ALL1)
#define ACCESSCTRL_RSM_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_RSM_SP_MASK ACCESSCTRL_RSM_SP(ALL1)
#define ACCESSCTRL_RSM_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_RSM_SU_MASK ACCESSCTRL_RSM_SU(ALL1)
#define ACCESSCTRL_RSM_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_RSM_NSP_MASK ACCESSCTRL_RSM_NSP(ALL1)
#define ACCESSCTRL_RSM_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_RSM_NSU_MASK ACCESSCTRL_RSM_NSU(ALL1)

/*XIP_CTRL Register macros*/

#define ACCESSCTRL_XIP_CTRL_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_XIP_CTRL_DBG_MASK ACCESSCTRL_XIP_CTRL_DBG(ALL1)
#define ACCESSCTRL_XIP_CTRL_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_XIP_CTRL_DMA_MASK ACCESSCTRL_XIP_CTRL_DMA(ALL1)
#define ACCESSCTRL_XIP_CTRL_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_XIP_CTRL_CORE1_MASK ACCESSCTRL_XIP_CTRL_CORE1(ALL1)
#define ACCESSCTRL_XIP_CTRL_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_XIP_CTRL_CORE0_MASK ACCESSCTRL_XIP_CTRL_CORE0(ALL1)
#define ACCESSCTRL_XIP_CTRL_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_XIP_CTRL_SP_MASK ACCESSCTRL_XIP_CTRL_SP(ALL1)
#define ACCESSCTRL_XIP_CTRL_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_XIP_CTRL_SU_MASK ACCESSCTRL_XIP_CTRL_SU(ALL1)
#define ACCESSCTRL_XIP_CTRL_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_XIP_CTRL_NSP_MASK ACCESSCTRL_XIP_CTRL_NSP(ALL1)
#define ACCESSCTRL_XIP_CTRL_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_XIP_CTRL_NSU_MASK ACCESSCTRL_XIP_CTRL_NSU(ALL1)

/*XIP_QMI Register macros*/

#define ACCESSCTRL_XIP_QMI_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_XIP_QMI_DBG_MASK ACCESSCTRL_XIP_QMI_DBG(ALL1)
#define ACCESSCTRL_XIP_QMI_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_XIP_QMI_DMA_MASK ACCESSCTRL_XIP_QMI_DMA(ALL1)
#define ACCESSCTRL_XIP_QMI_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_XIP_QMI_CORE1_MASK ACCESSCTRL_XIP_QMI_CORE1(ALL1)
#define ACCESSCTRL_XIP_QMI_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_XIP_QMI_CORE0_MASK ACCESSCTRL_XIP_QMI_CORE0(ALL1)
#define ACCESSCTRL_XIP_QMI_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_XIP_QMI_SP_MASK ACCESSCTRL_XIP_QMI_SP(ALL1)
#define ACCESSCTRL_XIP_QMI_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_XIP_QMI_SU_MASK ACCESSCTRL_XIP_QMI_SU(ALL1)
#define ACCESSCTRL_XIP_QMI_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_XIP_QMI_NSP_MASK ACCESSCTRL_XIP_QMI_NSP(ALL1)
#define ACCESSCTRL_XIP_QMI_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_XIP_QMI_NSU_MASK ACCESSCTRL_XIP_QMI_NSU(ALL1)

/*XIP_AUX Register macros*/

#define ACCESSCTRL_XIP_AUX_DBG(v) (((v)&0x1)<<7)
#define ACCESSCTRL_XIP_AUX_DBG_MASK ACCESSCTRL_XIP_AUX_DBG(ALL1)
#define ACCESSCTRL_XIP_AUX_DMA(v) (((v)&0x1)<<6)
#define ACCESSCTRL_XIP_AUX_DMA_MASK ACCESSCTRL_XIP_AUX_DMA(ALL1)
#define ACCESSCTRL_XIP_AUX_CORE1(v) (((v)&0x1)<<5)
#define ACCESSCTRL_XIP_AUX_CORE1_MASK ACCESSCTRL_XIP_AUX_CORE1(ALL1)
#define ACCESSCTRL_XIP_AUX_CORE0(v) (((v)&0x1)<<4)
#define ACCESSCTRL_XIP_AUX_CORE0_MASK ACCESSCTRL_XIP_AUX_CORE0(ALL1)
#define ACCESSCTRL_XIP_AUX_SP(v) (((v)&0x1)<<3)
#define ACCESSCTRL_XIP_AUX_SP_MASK ACCESSCTRL_XIP_AUX_SP(ALL1)
#define ACCESSCTRL_XIP_AUX_SU(v) (((v)&0x1)<<2)
#define ACCESSCTRL_XIP_AUX_SU_MASK ACCESSCTRL_XIP_AUX_SU(ALL1)
#define ACCESSCTRL_XIP_AUX_NSP(v) (((v)&0x1)<<1)
#define ACCESSCTRL_XIP_AUX_NSP_MASK ACCESSCTRL_XIP_AUX_NSP(ALL1)
#define ACCESSCTRL_XIP_AUX_NSU(v) (((v)&0x1)<<0)
#define ACCESSCTRL_XIP_AUX_NSU_MASK ACCESSCTRL_XIP_AUX_NSU(ALL1)

#endif

