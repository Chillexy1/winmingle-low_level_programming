#include "main.h"
#include <stdio.h>

/*
*Authour: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: this is a function that prints out a string followed by a new line
*/

void _puts_recursion(char *s){
    int i;
    for (i = 0; s[i] != '\0'; i++){
        _putchar(s[i]);
    }
    _putchar('\n');
}
