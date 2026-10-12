#include "main.h"
/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this function reverses a string.
* compilation: -Wall -Werror -Wextra -pedantic -std=gnu89
*/

void rev_string(char *s)
{
    int n, i, start = 0;
    char temp;
    n = _strlen(s) - 1;
    while (start < n)
    {
	    temp = s[start];
	    s[start] = s[n];
	    s[n] = temp;
	    start++;
	    n--;
    }
    i = 0;
    while (s[i])
    {
	    _putchar(s[i]);
	    i++;
    }
    _putchar('\n');
}
