#include "main.h"
#include <stdio.h>

/*
*Authour: Chillexy Steven
*Program: WinMingle Community C Training
*Description: we're reversing the output of a string in this function.
*compilation: -Wall -Werror -Wextra -pedantic -std=gnu89
*/

void print_rev(char *s) {
    int n;

    n = strlen(s)-1;

    while(n >= 0) {

        _putchar(s[n]);

        n--;
    }

    _putchar('\n');
}
