#include <rp2350/m33.h>
#include <rp2350/ticks.h>
#include "systick.h"
#include "interrupt.h"

#ifndef SYSTICK_FREQ
#define SYSTICK_FREQ_HZ 100000
#endif

#ifndef EXT_CLK_FREQ_HZ
#define EXT_CLK_FREQ_HZ 1000000
#endif

#ifndef NUM_SYSTICK_CALLBACKS
#define NUM_SYSTICK_CALLBACKS 5
#endif

#define SYSTICK_TOP (EXT_CLK_FREQ_HZ/SYSTICK_FREQ_HZ - 1)

static volatile uint64_t systick_counter;

static uint8_t	num_callbacks;

static void(*callback[NUM_SYSTICK_CALLBACKS])();

_Bool systick_register_callback(void (*p_fn)()){
	if(num_callbacks == NUM_SYSTICK_CALLBACKS){
		return false;
	}
	callback[num_callbacks++] = *p_fn;
	return true;
}

void configure_systick(void ){
	TICKS_PROC0_CYCLES = 1;
	TICKS_PROC0_CTRL = TICKS_PROC0_CTRL_ENABLE(1);
	M33_SYST_RVR = SYSTICK_TOP;
	M33_SYST_CVR = 0;
	M33_SYST_CSR = 
		M33_SYST_CSR_CLKSOURCE(0) 
		| M33_SYST_CSR_TICKINT(1) 
		| M33_SYST_CSR_ENABLE(1);	
	M33_SHPR3 = (M33_SHPR3 & ~M33_SHPR3_PRI_15_3_MASK )| M33_SHPR3_PRI_15_3(0);
}

void __attribute__((interrupt)) SYSTICK_Handler(){
	uint32_t irq_status;
	__get_primask(&irq_status);
	systick_counter++;
	__set_primask(irq_status);
	for(int8_t i = 0; i < num_callbacks; i++){
		callback[i]();
	}
}

_Bool system_tick(){
	return M33_SYST_CSR & M33_SYST_CSR_COUNTFLAG_MASK;
}


uint64_t get_system_time(){
	return systick_counter;
}
