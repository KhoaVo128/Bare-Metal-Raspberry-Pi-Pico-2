#include "watchdog.h"
#include <rp2040/watchdog.h>
#include <rp2040/psm.h>
#include "stdint.h"
static uint32_t reload_value;
void configure_watchdog( uint32_t reload)
{
	WATCHDOG_CLR_CTRL = WATCHDOG_CTRL_ENABLE_MASK;
	PSM_WDSEL = 0xfffc;
	WATCHDOG_TICK = WATCHDOG_TICK_ENABLE_MASK | WATCHDOG_TICK_CYCLES(12);
	reload_value = reload*2;
	feed_the_watchdog();
	WATCHDOG_SET_CTRL = WATCHDOG_CTRL_ENABLE_MASK;
}
void feed_the_watchdog()
{
	WATCHDOG_LOAD=reload_value;
}

