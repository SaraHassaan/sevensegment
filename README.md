# 7segment

this  Embedded C code using AVR ATmega16 μC to control a 7-segment using a INT2(external interrupt).
seven segment is connected to first 4-pins of portc by using decoder.
switch is pull down and connected to PB2 in PORTB(INT2). 
when user press on switch the INT2 is triggering and that increase the number appeared in 7 segment display. 
if user reach to the maximum number (9) overflow occurs (zero appeared in 7 seg).

this is the simulation of 7 segment using protus
https://drive.google.com/file/d/0BxW_WWLZUmFNcV9zWTV5OGh5R3c/view?usp=sharing
