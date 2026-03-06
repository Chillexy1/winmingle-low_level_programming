#include "main.h"

/*
*Authour: Chillexy Steven                                                           
*Program: WinMingle Community C Training
*Description: this is the function to get the string we are to reverse.
*/

void alph_string(char *s){
    int i;

    i = 0;
    while(s[i] != '\0'){
        _putchar(s[i]);
        i++;
    }
    _putchar('\n');
}
