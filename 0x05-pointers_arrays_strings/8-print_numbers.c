#include "main.h"
/*
*Author: Chillexy Steven      
*Program: WinMingle Community C Training
*Description: this a function that print out any integer number using _putchar
*/
void print_numbers(int n){
    if(n < 0){ /*checks if n is negative number */
        _putchar('-');
        n = -n;
    }
    if(n /10)/* ger the last digit of every numbee*/
        print_numbers(n/10);
    _putchar((n%10) + '0');
}
