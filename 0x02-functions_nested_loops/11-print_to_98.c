#include "main.h"
/*
*Authour: Chillexy Steven            
*Program: WinMingle Community C Training
*Description: this is a function that prints out all natural numbers from inputed choice to 98
*/
void print_to_98(int n)
{
    if(n == 98)/* handles case if n is exactly 98*/
    {
	    print_number(n);
    }
    else if(n < 98)/* handles case if n is less than 98*/
    {
        while(n <=98)
	{
		print_number(n);
                if(n!=98)
		{
                    _putchar(',');
                    _putchar(' ');
                } 
		n++;
	}
    }
    else if(n > 98)/* handle case if n is greater than 98*/
    {
        while(n >= 98)
	{
		print_number(n);
                if(n!=98)
		{
                    _putchar(',');
                    _putchar(' ');
		}
		n--;
        }
    }
    _putchar('\n');

}
