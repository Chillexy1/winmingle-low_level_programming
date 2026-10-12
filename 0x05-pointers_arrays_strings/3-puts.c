#include "main.h"


/*
*Authour: Chillexy Steven  
*Program: WinMingle Community C Training
*Description: this function prints out a string and a newline to a stdout.
*compilation: -Wall -Werror -Wextra -pedantic -std=gnu89
*/

void _puts(char *str) {
    int i = 0;
    while (str[i] != '\0'){
        _putchar(str[i]);

        i++;
    }
    _putchar('\n');

}
