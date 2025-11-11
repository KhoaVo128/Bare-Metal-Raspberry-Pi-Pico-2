#ifndef SYSTICK_H
#define SYSTICK_H

#include <stdbool.h>
#include <stdint.h>

void configure_systick();
_Bool systick_register_callback(void (*p_fn)());
_Bool system_tick();
uint64_t get_system_time();

#endif
