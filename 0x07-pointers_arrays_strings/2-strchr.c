#include "main.h"
/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this is a function that locates a character to a pointer and return it's first occurrencen
*/
char *_strchr(char *s, char c)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
