#ifndef INTERRUPT_H
#define INTERRUPT_H

#define __disable_irq()  __asm__("CPSID I")
#define __enable_irq()  __asm__("CPSIE I")
#define __set_primask(p) __asm__("MSR PRIMASK, %0" : : "r"(p) )
#define __get_primask(p) __asm__("MRS %0, PRIMASK" : "=r"(*p) )
#define __wait_for_interrupt() __asm__("wfi")

#endif
