#include "main.h"
#include <string.h>

/*
*Authour: Chillexy Steven    
*Program: WinMingle Community C Training
*Description: this is a function that fills a memory with constant byte.
*/

char *_memset(char *s, char b, unsigned int n){
    memset(s, b, n);
    return s;
}
