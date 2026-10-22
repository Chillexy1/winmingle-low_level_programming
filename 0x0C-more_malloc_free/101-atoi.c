#include "main.h"
/*
*Author: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: creates a custom atoi that converts strings to number
*ERROR: this function doesn't handle error of an int convertion
*/
int _atoi(const char *str)
{
	int i = 0, num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0'); /* converts a character to an integer*/
		i++;
	}
	return (num);
}
