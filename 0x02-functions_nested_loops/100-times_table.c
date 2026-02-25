#include "main.h"


/*
*Authour: Chillexy Steven          
*Program: WinMingle Community C Training
*Description: this is a times table function that takes an input, if it's greater than 15 or less than 0 it prints nothing.
*/

void print_times_table(int n){
    int result;
    int j,b;

    j=0;
    while(j <= n){
        b = 0;
        while(b <= n){
            if(n > 15 || n < 0){
                break;
            }
            else
            {
                result = j * b;
                if(b!=0){
                    _putchar(',');
                    _putchar(' ');
                }
                if(result < 10){
                    _putchar(' ');
                    _putchar('0' + result % 10);
                }
                else if(result >=100){
                    _putchar('0' + result / 100);
                    _putchar('0' + (result/10) %10);
                    _putchar('0' + result %10);
                }
                else
                {
                    _putchar('0' + result / 10);
                    _putchar('0' + result % 10);
                }
            }
            if(b ==n)
                _putchar('\n');

            b++;
        }

        j++;
    }

}
