
#include "main.h"
#include <string.h>
#include <stdio.h>
/*
*Author: Chillexy Steven
*Program: WinMingle Community C Training
*Description: converts a binary number to an unsigned int
*where (b); points to a string of 0 and 1 chars
*
* b[i] - '0' converts a character to its integer representative in ascii table
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int sum_binary = 0;

	if (b == NULL)
		return (0); /* return 0 if b is NULL */

	while (b && b[i])
	{
		/* converts each value of 1 or 0 to integer value*/
		if (b[i] == '0' || b[i] == '1'){

			sum_binary = (sum_binary << 1) | (b[i] - '0');/* converts binary to an integer*/
		}
	
		/* if value is not 0 or 1, we return (0) */
		else
		{
			return (0);
		} 

		i++;
	}

	return (sum_binary);
}

