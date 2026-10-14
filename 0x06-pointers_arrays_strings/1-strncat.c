#include "main.h"
/*
*Author: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: function to concatebates two strings using n bytes from src
*/
char *_strncat(char *dest, char *src, int n)
{
	int loop;
	int len = 0;
	int i = 0;
	int j = 0;
	while (src[len])
		len++;/*get the length of src*/
	/*get the right most n to work with*/
	if (n >= len)
		loop = len;
	else
		loop = n;
	/*___gotten__the___right__n*/
	while (dest[i])
		i++;
	while (j < loop)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
