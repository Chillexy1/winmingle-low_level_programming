#include "main.h"


/*
*Authour: Chillexy Steven    
*Program: WinMingle Community C Training
*Description: this is a function that prints every minutes of the day
*/

void jack_bauer(void)
{
    int h, m;

    h =0;
    while(h < 24)
    {
        m = 0;
        while(m < 60)
        {
            _putchar('0' + h / 10);
            _putchar('0' + h % 10);
            _putchar(':');
            _putchar('0' + m / 10);
            _putchar('0' + m % 10);
            _putchar('\n');

            m++;
        }

        h++;
    }
}
