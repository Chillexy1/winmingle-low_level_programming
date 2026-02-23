#include "main.h"


/*
*Authour: Chillexy Steven     
*Program: WinMingle Community C Training
*Description: this function prints 9 times table startung from 0
*/

void times_table(void)
{
    int result;
    int j;
    int n = 0;
    
    while(n <= 9)
    {
        j = 0;
        while(j <= 9)
        {
            result = n * j;
            if(j != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if(result >= 10)
            
                _putchar('0' + result / 10);
            else
                _putchar(' ');
            _putchar('0' + result % 10);
            
            if(j == 9)
            {
                _putchar('\n');
            }

            j++;
        }

        n++;
    }
}
