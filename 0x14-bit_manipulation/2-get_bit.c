#include "main.h"
#include <string.h>
/*
*Author: Chillexy Steven     
*Program: WinMingle Community C Training
*Description: returns the value of bit at a given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1, bit;

	if (index >= sizeof(unsigned long int) * 8) /* checks for error */
		return (-1);

	bit = (n & (mask << index)) != 0;/* if the and(&) result located at index is not equal to 0(!= 0), output 1, else output 0 */

	return (bit);

}

