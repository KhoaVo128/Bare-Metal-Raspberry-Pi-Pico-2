#ifndef GPIO_IRQ_H
#define GPIO_IRQ_H

#include <stdint.h>

void register_gpio_irq_callback( void (*pf)() );
uint8_t get_irq_status_for_pin( uint8_t n);

#define IRQ_EDGE_HIGH (1<<3)
#define IRQ_EDGE_LOW (1<<2)
#define IRQ_EDGE_BOTH (IRQ_EDGE_HIGH | IRQ_EDGE_LOW)
#define IRQ_LEVEL_HIGH (1<<1)
#define IRQ_LEVEL_LOW (1<<2)
#define IRQ_LEVEL_BOTH (IRQ_LEVEL_HIGH | IRQ_LEVEL_LOW)

#endif
