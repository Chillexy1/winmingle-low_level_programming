
#include "main.h"
#include <string.h>
#include <stdio.h>
/*
*Author: Chillexy Steven
*Program: WinMingle Community C Training
*Description: converts a binary number to an unsigned int
*where (b); points to a string of 0 and 1 chars
*
* MAKE SURE TO COMPILE WITH _pow.c
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, k,n;
	unsigned int len = 0;
	unsigned int converted = 0,temp, digit;
	unsigned int sum_binary = 0;

	if (b == NULL)
		return (0); /* return 0 if b is NULL */

	while (b && b[i])
	{
		/* converts each value of 1 or 0 to integer value*/
		if (b[i] == '0' || b[i] == '1'){

			converted = converted * 10 + (b[i] - '0');
		}
	
		/* if value is not 0 or 1, we discard it */
		else
		{
			return (0);
		} 

		i++;
	}
	/* get the length of each converted numbers*/
	temp = converted; /* we can't destroy the values in converted  */
	while (temp > 0)
	{
		len ++;
		temp /=10;
	}

	/* loop through each converted values and work with the values from  backward*/
	for (k = 0; k < len; k ++)
	{
		digit = converted % 10; /* each loop get  the last digit */
		n = _pow(2, k); /* each loop raises 2 to the power of k value */
		sum_binary += n * digit; /* sum-up the results of each n and digit values */

		converted /= 10; /* discard the last digit each time/loop */
	}

	return (sum_binary);
}

