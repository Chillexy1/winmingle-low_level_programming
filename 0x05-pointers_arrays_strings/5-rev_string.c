#include "main.h"
/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this function reverses a string.
* compilation: -Wall -Werror -Wextra -pedantic -std=gnu89
*/

void rev_string(char *s)
{
    int n;

    n = _strlen(s) -1;

    
    while(n >= 0){ /* represents starting from the end of the loop we got using _strlen */
        _putchar(s[n]);

        n--;
    }
    _putchar('\n');
}
