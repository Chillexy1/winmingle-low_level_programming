#include "main.h"


/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: returning the last digit of a given number
*/

int print_last_digit(int n)
{
    int result;

    result = n % 10;
    if(result < 0)
        result = - result;
    _putchar('0' + result);

    return result;

}
