#include "main.h"
#include <stdio.h> /* needed for code testing*/
/*
*Author: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: prints out the binary representation of a number
*/
void print_binary(unsigned long int n)
{
	/*
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n&1) + '0');

*/

	unsigned long int mask;

	mask = 1; /* declare mask */

	/* first,find the highest possible power of 2 of each n */
	while ((mask << 1) <= n)
		mask <<=1; /* gotten the mask highest power of 2*/

	/* prints ths binary representatives*/
	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1; /* moves to the next mask value(bit) */
	}

}
