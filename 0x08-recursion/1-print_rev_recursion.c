#include "main.h"
#include <string.h>
/*
*Authour: Chillexy Steven    
*Program: WinMingle Community C Training
*Description: this function reverses the output of a string.
*/

void _print_rev_recursion(char *s){
    if(*s == '\0'){
        _putchar('\n');
        return;
    }

    _print_rev_recursion(s + 1);
    _putchar(*s);
}
