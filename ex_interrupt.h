
#ifndef EXT_INT_H_
#define EXT_INT_H_

/*include files*/
#include "micro_config.h"
#include "macro.h"
#include "std_types.h"

/*definitions*/
#define ISC2 6   /*ISC2 is a bit in REG MCUCSR , it controls on INT2 to be at falling edge or rising edge*/
#define I    7      /*its a bit in REG SREG , its responsible for enable or disbale global INT*/
#define INT2 5     /*its at REG GICR , responsible for enable external interrupt2*/

/*prototypes*/
void init_INT();
/*_vector_18 its responsible for external interrupt occurrence (INT2)*/
void __vector_18 (void) __attribute__ ((signal,used, externally_visible)) ;

extern uint8 INT_flag;

#endif /* EXT_INT_H_ */
