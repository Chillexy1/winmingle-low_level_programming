#include "main.h"
/*
*Author: Chillexy Steven    
*Program: WinMingle Community C Training
*Description: this function reverses the output of a string.
*/
void _print_rev_recursion(char *s){
    if(*s == '\0' )
    {
        return;
    }

    _print_rev_recursion(s + 1);
    _putchar(*s);
}
