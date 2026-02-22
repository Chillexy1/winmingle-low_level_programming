#include "main.h"

/*
*Authour: Chillexy Steven                                                           *Program: WinMingle Community C Training
*Description: printing out the alphabet in lowercase using a new function call
*/

void print_alphabet(void)
{
    char c;

    c = 'a';

    while(c <= 'z')
    {
        _putchar(c);

        c++;
    }
    _putchar('\n');

}
