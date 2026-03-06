#include "main.h"

/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this function print every other character of a string starting from the first.
*compilation: -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar
*/

void puts2(char *str) {
    int i;

    i =0;
    while(str[i] != '\0'){
        _putchar(str[i]);
    
        i += 2;
    }
    _putchar('\n');
    
}
