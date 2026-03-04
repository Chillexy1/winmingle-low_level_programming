#include "main.h"
/* #include <string.h>  // uncomment this standard library if you need to use the strlen to sole the question */

/**
*Authour: Chillexy Steven    
*Program: WinMingle Community C Training
*Description: this is a function that returns the len of a string.
*compilation: -Wall -Werror -Wextra -pedantic -std=gnu89 
*/

//solving this using strlen
/*
int _strlen(char *s) {
    int n;
    n = strlen(s);

    return n;
}
*/


/* solving this using a loop*/
int _strlen(char *s) {
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}

