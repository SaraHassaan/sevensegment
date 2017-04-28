/*
 * micro_config.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Sara
 */

#ifndef MICRO_CONFIG_H_
#define MICRO_CONFIG_H_

#ifndef F_CPU
#define F_CPU 1000000UL //1MHz Clock frequency
#endif

/*configure registers of avr ATmega16*/

#define PORTC *((volatile uint8 *)0x35)
#define DDRC *((volatile uint8 *)0x34)
#define PINC *((volatile uint8 *)0x33)
#define PORTB *((volatile uint8 *)0x38)
#define DDRB *((volatile uint8 *)0x37)
#define PINB *((volatile uint8 *)0x36)
#define MCUCSR *((volatile uint8 *)0x54) /*MCU Control and Status Register*/
#define SREG *((volatile uint8 *)0x5F)
#define GICR *((volatile uint8 *)0x5B)


#endif /* MICRO_CONFIG_H_ */
