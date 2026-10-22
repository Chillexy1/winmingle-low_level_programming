#include "dog.h"
/*
*Author: Chillexy Steven                                         
*Program: WinMingle Community C Training
*Description: returns the length of a string
*/
int _strlen(char *str)
{
	int i = 0;
	while (str && str[i])
		i++;
	return (i);
}
