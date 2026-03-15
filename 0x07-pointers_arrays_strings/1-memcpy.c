#include "main.h"
#include <string.h>

/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this function that copies memory area
*/

char *_memcpy(char *dest, char *src, unsigned int n){
    memcpy(dest, src, n);
    return dest;
}
