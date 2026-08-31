#include "main.h"

/*
*Author: Chillexy Steven        
*Program: WinMingle Community C Training
*Description: set a bit value to 0 at a given index
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(unsigned long int) * 8) /* checks for an error */
		return (-1);


	mask = 1 << index; /* get the desired index starting from 0 */

	*n &= ~mask; /* turn bit OFF/ set bit value to 0 */

	if (*n == 0)
		return (1);

	return (0);
}
