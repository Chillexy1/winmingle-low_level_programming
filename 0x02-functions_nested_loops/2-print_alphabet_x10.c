#include "main.h"

/*
*Authour: Chillexy Steven                                                           *Program: WinMingle Community C Training
*Description: this is a function that prints out the lowcase alphabet 10x in a row 
*/

void print_alphabet_x10(void)
{
    char c;
    int n;

    n = 0;
    while(n < 10)
    {
        c = 'a';
        while(c <= 'z')
        {
            _putchar(c);
            if(c =='z')
            {
                _putchar('\n');
            }
            c++;
        }
        n++;
    }
}
