/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: Sara
 */

#include "io.h"
#include "ex_interrupt.h"

uint8 INT_flag=0;

int main()
{
	init_INT();/*initialize external interrupt*/
	init_io();/*initialize 7eg and switch*/
	uint8 num=0;
	while(1)
	{
		/*INT_flag will be equal 1 when external interrupt occur when user press on the switch */
		if(INT_flag==1)
		{
		   num++;
		   /*when number=10 , we can't show 10 on 7 seg so let number =0 */
		   if(num>9)
		   {
			  num=0;
			  seven_seg_increment(num);
		   }
		   else
		   {
			   seven_seg_increment(num);
		   }
		   INT_flag=0;

	     }
	 }
    return 0;
}

