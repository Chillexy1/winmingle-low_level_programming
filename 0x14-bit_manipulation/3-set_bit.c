#include "main.h"

/*
*Author: Chillexy Steven      
*Program: WinMingle Community C Training
*Description: sets the value of a bit at given index to 1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) /* checks if an error occured */
		return (-1);

	*n |= (1 << index);/* sets bit value to 1 (turn bit ON)*/

	if (*n == 1)
		return (1);

	return (0);
}
