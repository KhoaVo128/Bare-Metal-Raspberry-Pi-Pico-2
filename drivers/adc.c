/*
 * Polling based ADC driver for RP2350.  
 */

#include "adc.h"
#include <rp2350/clocks.h>
#include <rp2350/pll.h>
#include <rp2350/resets.h>
#include <rp2350/adc.h>
#include <rp2350/pads_bank0.h>

#include <stdint.h>
#include <stdbool.h>

//CONFIGURATION OPTIONS

//If not using the USB CDC Driver, uncomment the following line
//#define CONFIGURE_USB_PLL 1

//Select the analog pin(s) to be used by software
#define USE_ADC_PIN_26
#define USE_ADC_PIN_27
#define USE_ADC_PIN_28
#define USE_ADC_PIN_29

#define ADC_RESETS ( RESETS_RESET_ADC_MASK \
		   | RESETS_RESET_IO_BANK0_MASK \
		   | RESETS_RESET_PADS_BANK0_MASK )


#ifdef CONFIGURE_USB_PLL
static void configure_usb_pll();
#endif

void configure_adc()
{
#ifdef CONFIGURE_USB_PLL
	configure_usb_pll();
#endif
	clocks.clk_adc_div =
		CLOCKS_CLK_ADC_DIV_INT(1);
	clocks.clk_adc_ctrl = 
		 CLOCKS_CLK_ADC_CTRL_ENABLE(1) 
		|CLOCKS_CLK_ADC_CTRL_AUXSRC(0);
	resets.reset_clr = ADC_RESETS;
	while( (resets.reset_done & ADC_RESETS) != ADC_RESETS)
		continue;
#ifdef USE_ADC_PIN_26
	pads_bank0.gpio26 = 
		PADS_BANK0_GPIO26_OD(1) 
		| PADS_BANK0_GPIO26_IE(0) 
		| PADS_BANK0_GPIO26_DRIVE(0) 
		| PADS_BANK0_GPIO26_PUE(0) 
		| PADS_BANK0_GPIO26_PDE(0) 
		| PADS_BANK0_GPIO26_SCHMITT(0) 
		| PADS_BANK0_GPIO26_SLEWFAST(0);
#endif
#ifdef USE_ADC_PIN_27
	pads_bank0.gpio27 = 
		PADS_BANK0_GPIO27_OD(1) 
		| PADS_BANK0_GPIO27_IE(0) 
		| PADS_BANK0_GPIO27_DRIVE(0) 
		| PADS_BANK0_GPIO27_PUE(0) 
		| PADS_BANK0_GPIO27_PDE(0) 
		| PADS_BANK0_GPIO27_SCHMITT(0) 
		| PADS_BANK0_GPIO27_SLEWFAST(0);
#endif
#ifdef USE_ADC_PIN_28
	pads_bank0.gpio28 = 
		PADS_BANK0_GPIO28_OD(1) 
		| PADS_BANK0_GPIO28_IE(0) 
		| PADS_BANK0_GPIO28_DRIVE(0) 
		| PADS_BANK0_GPIO28_PUE(0) 
		| PADS_BANK0_GPIO28_PDE(0) 
		| PADS_BANK0_GPIO28_SCHMITT(0) 
		| PADS_BANK0_GPIO28_SLEWFAST(0);
#endif
#ifdef USE_ADC_PIN_29
	pads_bank0.gpio29 = 
		PADS_BANK0_GPIO29_OD(1) 
		| PADS_BANK0_GPIO29_IE(0) 
		| PADS_BANK0_GPIO29_DRIVE(0) 
		| PADS_BANK0_GPIO29_PUE(0) 
		| PADS_BANK0_GPIO29_PDE(0) 
		| PADS_BANK0_GPIO29_SCHMITT(0) 
		| PADS_BANK0_GPIO29_SLEWFAST(0);
#endif
}

#ifdef CONFIGURE_USB_PLL
static void configure_usb_pll(){
	resets.reset_clr  =  RESETS_RESET_PLL_USB_MASK;
	while(!(resets.reset_done & RESETS_RESET_DONE_PLL_USB_MASK))
		continue;
	pll_usb.cs = PLL_USB_CS_REFDIV(1);
	pll_usb.fbdiv_int = 120; 
	pll_usb.pwr = 0;
	while( !(pll_usb.cs & PLL_USB_CS_LOCK_MASK))
		continue;
	pll_usb.prim  =  
		 PLL_USB_PRIM_POSTDIV1(6) |PLL_USB_PRIM_POSTDIV2(5);
#endif

void start_adc( adc_channel_t channel )
{
	adc.cs =
		ADC_CS_RROBIN(0)
	       |ADC_CS_AINSEL(channel)
	       |ADC_CS_EN(1)
	       |ADC_CS_START_ONCE(1);
}
_Bool get_adc_conversion_result( uint16_t *result )
{
	_Bool retval = false;
	if( adc.cs & ADC_CS_READY_MASK )
	{
		retval = true;
		*result = adc.result;
	}
	return retval;
}
