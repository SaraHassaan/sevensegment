/*
 * ex_interrupt
        this contains ISR of external INT2 and initialize INT function
 */

#include "ex_interrupt.h"

void init_INT()
{
	SET_BIT(GICR ,INT2);//enable external interrupt (INT2)
	SET_BIT(SREG ,I);  //enable global interrupt
	SET_BIT(MCUCSR,ISC2);//CONFIGURE INT2 AT RISING EDGE AT PINB2
}

void __vector_18()
{
	INT_flag=1;
}
