#include "main.h"

/*
*Author: Chillexy Steven    
*Program: WinMingle Community C Training
*Description: A function that returns the length of a string
*/

int _strlen(char *s)
{
	int c = 0;
	while (s && s[c])
		c++;

	return (c);
}
