#include "main.h"
#include <stdio.h>


/*
*Authour: Chillexy Steven            
*Program: WinMingle Community C Training
*Description: this is a function that prints out all natural numbers from inputed choice to 98
*/

void print_to_98(int n)
{
    if(n == 98){
        _putchar(n/10 + '0');
        _putchar('0' + n%10);
    }
    else if(n == 0){
        while(n <=98)
            {
            if(n < 10)
            {
                _putchar(n%10 + '0');
                _putchar(',');
                _putchar(' '); 
            }
             else
            {
                _putchar('0' + n/10);
                _putchar('0' + n%10);
                if(n!=98){
                    _putchar(',');
                    _putchar(' ');
                }
                
            }

            n++;
        }
    }

    else if(n > 98){
        while(n >= 98){
            if(n <= 99){
                printf("%02d", n);
                if(n!=98)
                    printf(", ");
            }
            else
            {
                printf("%03d", n);
                if(n!=98)
                    printf(", ");
            }

            n--;
        }
    }
    else if(n < 98 && (!(n < 0))){
        while(n <= 98){
            printf("%02d", n);
            if(n!=98)
                printf(", ");

            n++;
        }
    }
    else
    {
        while(n <= 98){
            if(n < 10){
                printf("%d", n);
                if(n!=98)
                    printf(", ");
            }
            else
            {
                printf("%02d", n);
                if(n != 98)
                    printf(", ");
            }
            n++;
        }
    }
    _putchar('\n');
    printf("\n");

}
