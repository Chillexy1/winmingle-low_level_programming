#include "lists.h"
/*
*Author: Chillexy Steven       
*Program: WinMingle Community C Training
*Description: create a function that duplicates a string
*/
char *_strdup(const char *str)
{
	int i = 0;
	char *dup;
	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(*dup) * (_strlen(str) + 1));
	if (dup == NULL)
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
