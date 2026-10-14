#include "main.h"
/*
*Author: Chillexy Steven
*Program: WinMingle Community C Training
*Description: this is a function that concatenates two strings
*compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];/*concate src to dest*/
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
