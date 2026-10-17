#include "main.h"
/*
*Author: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this function  copies memory area from src to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n){
    unsigned int i = 0;
    while (i < n)
    {
	    dest[i] = src[i];
	    i++;
    }
    return (dest);
}
