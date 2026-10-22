#include "dog.h"
/*
*Author: Chillexy Steven                   
*Program: WinMingle Community C Training
*Description: copies a string from source(src) to destination(dest)
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
