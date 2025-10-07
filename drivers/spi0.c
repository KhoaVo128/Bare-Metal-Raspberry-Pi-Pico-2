#include "spi0.h"
#include <stdbool.h>
#include <stdint.h>
#include <rp2350/resets.h>
#include <rp2350/sio.h>
#include <rp2350/io_bank0.h>
#include <rp2350/pads_bank0.h>
#include <rp2350/spi.h>
#include <rp2350/clocks.h>

#define CONCAT2(X,Y) X ## Y
#define CONCAT3(X,Y,Z) X ## Y ## Z
#define GPIO(X) CONCAT2(gpio,X)
#define GPIO_CTRL(X) CONCAT3(gpio,X,_ctrl)

#define DATA_BITS 8 //must be 4-16
#define MOTOROLA_CPHA 1
#define MOTOROLA_CPOL 1
#define SPI0_SCLK_LOC 6
#define SPI0_TXD_LOC 7
#define SPI0_CSn_LOC 5
#define SPI0_RXD_LOC 4

#define SPI0_RESETS ( RESETS_RESET_SPI0_MASK \
		| RESETS_RESET_IO_BANK0_MASK \
		| RESETS_RESET_PADS_BANK0_MASK )

void configure_spi0()
{
	clocks.clk_peri_ctrl = 
		 CLOCKS_CLK_PERI_CTRL_ENABLE(1)
		|CLOCKS_CLK_PERI_CTRL_AUXSRC(0)
		|CLOCKS_CLK_PERI_CTRL_KILL(0);

	resets.reset_clr = SPI0_RESETS;

	while( (resets.reset_done & SPI0_RESETS) != SPI0_RESETS);


	const uint32_t pads_bank0_gpio_in = 
	PADS_BANK0_GPIO0_OD(0) 
	| PADS_BANK0_GPIO0_IE(1) 
	| PADS_BANK0_GPIO0_DRIVE(0) 
	| PADS_BANK0_GPIO0_PUE(0) 
	| PADS_BANK0_GPIO0_PDE(0) 
	| PADS_BANK0_GPIO0_SCHMITT(0) 
	| PADS_BANK0_GPIO0_SLEWFAST(0);

	const uint32_t pads_bank0_gpio_out = 
	PADS_BANK0_GPIO0_OD(0) 
	| PADS_BANK0_GPIO0_IE(0) 
	| PADS_BANK0_GPIO0_DRIVE(0) 
	| PADS_BANK0_GPIO0_PUE(0) 
	| PADS_BANK0_GPIO0_PDE(0) 
	| PADS_BANK0_GPIO0_SCHMITT(0) 
	| PADS_BANK0_GPIO0_SLEWFAST(0);

	const uint32_t io_bank0_gpio_ctrl= 
	  IO_BANK0_GPIO0_CTRL_IRQOVER(0) 
	| IO_BANK0_GPIO0_CTRL_INOVER(0)
	| IO_BANK0_GPIO0_CTRL_OEOVER(0) 
	| IO_BANK0_GPIO0_CTRL_OUTOVER(0)
	| IO_BANK0_GPIO0_CTRL_FUNCSEL(1);

	io_bank0.GPIO_CTRL( SPI0_SCLK_LOC ) = io_bank0_gpio_ctrl;
	io_bank0.GPIO_CTRL( SPI0_TXD_LOC  ) = io_bank0_gpio_ctrl;
	io_bank0.GPIO_CTRL( SPI0_RXD_LOC ) = io_bank0_gpio_ctrl;
	io_bank0.GPIO_CTRL( SPI0_CSn_LOC ) = io_bank0_gpio_ctrl;

	pads_bank0.GPIO( SPI0_SCLK_LOC ) = pads_bank0_gpio_out;
	pads_bank0.GPIO( SPI0_TXD_LOC  ) = pads_bank0_gpio_out;
	pads_bank0.GPIO( SPI0_CSn_LOC  ) = pads_bank0_gpio_out;
	pads_bank0.GPIO( SPI0_RXD_LOC  ) = pads_bank0_gpio_in;

	spi0.sspcr0 =
		  SPI0_SSPCR0_SCR(14)
		| SPI0_SSPCR0_SPH(MOTOROLA_CPHA)
		| SPI0_SSPCR0_SPO(MOTOROLA_CPOL)
		| SPI0_SSPCR0_FRF(0)
		| SPI0_SSPCR0_DSS(DATA_BITS-1);

	//spi0.sspcpsr = 150;

	spi0.sspcr1 =
		  SPI0_SSPCR1_SOD(0)
		| SPI0_SSPCR1_MS(0)
		| SPI0_SSPCR1_SSE(0)
		| SPI0_SSPCR1_LBM(0);
 
	spi0.sspcr1_set = SPI0_SSPCR1_SSE(1);
}
_Bool spi0_write( uint8_t x)
{
	_Bool retval = false;
	if( spi0.sspsr & SPI0_SSPSR_TNF_MASK )
	{
		spi0.sspdr = x;
		retval = true;
	}
	return retval;
}
_Bool spi0_read( uint8_t *x)
{
	_Bool retval = false;
	if( spi0.sspsr & SPI0_SSPSR_RNE_MASK )
	{
		*x = spi0.sspdr;
		retval = true;
	}
	return retval;
}

