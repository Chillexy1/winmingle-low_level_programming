#include "main.h"
#include <stdio.h>

/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this is a function that prints out half of a string
*compilation: -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar
*/

void puts_half(char *str){
    int n;
    int half;

//get half of the string 
    n = strlen(str);
    half = n/2;
    
// we use the half to loop through our string
    while (str[half] != '\0'){
        _putchar(str[half]); //printing from the first half
        half++;
    }
    _putchar('\n');

}
