#include "watchdog.h"
#include <rp2040/watchdog.h>
#include <rp2040/psm.h>
#include "stdint.h"
static uint32_t reload_value;
void configure_watchdog( uint32_t reload)
{
	watchdog->clr_ctrl = WATCHDOG_CTRL_ENABLE_MASK;
	psm->wdsel = 0xfffc;
	watchdog->tick = WATCHDOG_TICK_ENABLE_MASK | WATCHDOG_TICK_CYCLES(12);
	reload_value = reload*2;
	feed_the_watchdog();
	watchdog-> set_ctrl = WATCHDOG_CTRL_ENABLE_MASK;
}
void feed_the_watchdog()
{
	watchdog->load=reload_value;
}

