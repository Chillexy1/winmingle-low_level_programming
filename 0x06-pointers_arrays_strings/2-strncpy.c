#include "main.h"
/*
*Author: Chillexy Steven                                                           
*Program: WinMingle Community C Training
*Description: this function copies a string with the most n bytes src
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;
	int loop;
	while (src[len])/*get the length for src strings*/
		len++;
	/*check to determine wich most n byted to work with*/
	if (n >= len)
		loop = len;
	else
		loop = n;
	/*__end__of__check*/
	while (i < loop)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
