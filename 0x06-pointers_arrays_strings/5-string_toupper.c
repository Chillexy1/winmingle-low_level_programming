#include "main.h"
#include <ctype.h>
#include <string.h>

/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this is a function that changes all lowercase letter of a string to uppercase.
*/

char *string_toupper(char *s){
    int i = 0;
    while (s[i] != '\0'){
        s[i] = toupper(s[i]);
        i++;
    }

    _putchar('\n');
    return s;
}
