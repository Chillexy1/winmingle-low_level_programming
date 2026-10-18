#include "main.h"
/*
*Author: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: this function locates a substring from needle to haystack
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	while (haystack[i])
	{
		while (needle[j] && needle[j] == haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (0);
}
