#include "main.h"

/*
*Author: Chillexy Steven  
*Program: WinMingle Community C Training
*Description: this a function that raises a number to a power of choice.
*@ base; the number you want to raise/multiply.
*@ power; how many times you want to raise the base to.
*

*/
unsigned int _pow(unsigned int base, unsigned int power)
{
	unsigned int number; /* variable to return the total amount */
	unsigned int i;
	number = 1;

	for (i = 0; i < power; i++)
	{
		number *= base;
	}

	return number;
}
