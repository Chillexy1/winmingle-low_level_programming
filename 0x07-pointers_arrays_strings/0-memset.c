#include "main.h"
/*
*Authour: Chillexy Steven    
*Program: WinMingle Community C Training
*Description: this is a function that fills a memory with constant byte.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i =0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
