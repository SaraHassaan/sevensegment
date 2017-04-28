/*
 * io.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Sara
 */

#ifndef IO_H_
#define IO_H_
/*include files*/
#include "micro_config.h"
#include "macro.h"
#include "std_types.h"

/*prototypes of functions*/
void init_io();
void seven_seg_increment(uint8 num);

/*definitions*/
#define PB2   2

#endif /* IO_H_ */
