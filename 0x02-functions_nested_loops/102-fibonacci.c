#include "main.h"
#include <stdio.h>


/*
*Authour: Chillexy Steven
*Program: WinMingle Community C Training
*Description: this finction prints out the first 50 fibonacci number starting with 1 and 2.
*compilation: must be compiled together with _putchar, print_long along with a main function
*/

void print_fibonacci(void){
    long current = 1;
    long previous = 1;
    long next;
    int n =1;

    while(n <= 50){
        if(n != 1){
            _putchar(',');
	    _putchar(' ');
        }
        print_long(current);

        next = current + previous;
        previous = current;
        current = next;

        n++;
    }
    _putchar('\n');
}
