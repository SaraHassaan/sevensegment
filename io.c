/*
 * IO.c

 * contains the input switch P2 at PORTB the switch is connected pull down
 * and the function of 7 seg , 7 seg increments when press on the switch
 */

#include "io.h"

void init_io()
{
	CLEAR_BIT(DDRB,PB2);// MAKE PIN3 AT PORTB IS INPUT
	DDRC|=0X0F; //MAKE FIRST 4 PINS IS OUTPUT (in PORTC) 7seg is connected on PORTC by using decoder7447
	PORTC &=0XF0; //initialize 7 seg with zero


}

/*i want to show number  on 7seg */
void seven_seg_increment(uint8 num)
{
    /*
     * (c7..c4 c3 c2 c1 c0 &11110000) =c7..c4 0000
     * say num= 1 ..00000001&00001111=0000000
     * c7..c4 |00000001=c7..c40001
     */
	PORTC = (PORTC & 0XF0) | (num & 0x0F);/*the number will be showed on 7SEG */

	while( PINB & (1<<PB2) )/*don't do any action while the switch is still pressed*/
	{

	}
}

