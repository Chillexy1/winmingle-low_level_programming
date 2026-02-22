#include "main.h"

/*
*Authour: Chillexy Steven                                                           *Program: WinMingle Community C Training
*Description: printing alphabetas in lowercase and uppercase
*/

int print_sign(int n)
{
    if(n > 0)
    {
        _putchar('+');
        return 1;
    }
    else if(n < 0)
    {
        _putchar('-');
        return -1;
    }
    else
    {
        _putchar('0');
        return 0;
    }

}
