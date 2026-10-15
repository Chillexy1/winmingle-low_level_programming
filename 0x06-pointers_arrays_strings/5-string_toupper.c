#include "main.h"
/*
*Author: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this is a function that changes all lowercase letter of a string to uppercase.
*/
char *string_toupper(char *s)
{
	int i = 0;
	while (s && s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
