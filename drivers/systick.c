#include "systick.h"
#include <stdbool.h>
#include <stdint.h>
#include <rp2350/m33.h>
#include <rp2350/ticks.h>

void configure_systick(uint32_t systick_period_us)
{
	ticks.proc0_ctrl_set = TICKS_PROC0_CTRL_ENABLE_MASK;
	ticks.proc0_cycles = 1;
	m33.syst_rvr= systick_period_us;
	m33.syst_cvr=0;
	m33.shpr3 = (m33.shpr3 & ~M33_SHPR3_PRI_14_3_MASK ) 
		| M33_SHPR3_PRI_14_3(0);
	m33.syst_csr= M33_SYST_CSR_CLKSOURCE(0) 
		| M33_SYST_CSR_ENABLE_MASK 
		| M33_SYST_CSR_TICKINT(0);
}
_Bool systick_has_fired()
{
	return m33.syst_csr & M33_SYST_CSR_COUNTFLAG_MASK;
}
