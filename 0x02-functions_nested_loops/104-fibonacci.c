#include "main.h"
#include <stdio.h>


/*
*Authour: Chillexy Steven  
*Program: WinMingle Community C Training
*Description: tthis function prints out the first 98 fibonacci.
*compilation: must be compiled with print_unsigned,_putchar along with a main.c function
*/

void prints_fibonacci(void)
{
    unsigned long prev_low = 1, prev_high = 0;
    unsigned long currn_low = 2, currn_high = 0;
    unsigned long next_high, next_low;
    unsigned long carry;
    int n = 3;

    print_unsigned(prev_low);
    _putchar(',');
    _putchar(' ');
    print_unsigned(currn_low);

    while(n <= 98)
    {
        if(n != 0)
	{
            _putchar(',');
	    _putchar(' ');
        }
        next_low = prev_low + currn_low;

        if(next_low >= 1000000000UL){
            next_low -= 1000000000UL;
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        next_high = prev_high + currn_high + carry;
        if(next_high == 0){
            print_unsigned(next_low);
        }
        else
        {
		print_unsigned(next_high);
    		print_unsigned(next_low);
        }

        prev_high = currn_high;
        prev_low = currn_low;
        currn_high = next_high;
        currn_low = next_low;

        n++;
    }
}
