#include "lists.h"

/*
*Author: Chillexy Steven      
*Program: WinMingle Community C Training
*Description: returns the length of a string
*/
int _strlen(const char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}
