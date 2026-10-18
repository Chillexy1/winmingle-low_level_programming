#include "main.h"
/*
*Author: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: this is a function that returns lenght of a prefix substring matching bytes from the declared pointer (accept). 
*/
unsigned int _strspn(char *s, char *accept)
{
	int j;
	int count = 0;
	int found = 0;
	int i = 0;
	while (s[i])
	{
		j = 0;
		found = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				found = 1;
				count++;
				break;
			}
			j++;
		}
		if (!found)
		{
			break;
		}
		i++;

	}
	return (count);
}
