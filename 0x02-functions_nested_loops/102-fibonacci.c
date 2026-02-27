#include "main.h"
#include <stdio.h>


/*
*Authour: Chillexy Steven
*Program: WinMingle Community C Training
*Description: this finction prints out the first 50 fibonacci number starting with 1 and 2.
*/

void print_fibonacci(void){
    long long current = 1;
    long long previous = 1;
    long long next;
    int n =1;

    while(n <= 50){
        if(n != 1){
            printf(", ");
        }
        printf("%lld", current);

        next = current + previous;
        previous = current;
        current = next;

        n++;
    }
}
