#include "main.h"
#include <stdio.h>


/*
*Authour: Chillexy Steven  
*Program: WinMingle Community C Training
*Description: tthis function prints out the first 98 fibonacci.
*/

void prints_fibonacci(void){
    unsigned long long prev_low = 1, prev_high = 0;
    unsigned long long currn_low = 2, currn_high = 0;
    unsigned long long next_high, next_low;
    unsigned long long carry;
    int n = 3;

    printf("%llu, ", prev_low);
    printf("%llu", currn_low);

    while(n <= 98){
        if(n != 0){
            printf(", ");
        }
        next_low = prev_low + currn_low;

        if(next_low >= 1000000000LLU){
            next_low -= 1000000000LLU;
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        next_high = prev_high + currn_high + carry;
        if(next_high == 0){
            printf("%llu", next_low);
        }
        else
        {
            printf("%llu%09llu",next_high, next_low);
        }

        prev_high = currn_high;
        prev_low = currn_low;
        currn_high = next_high;
        currn_low = next_low;

        n++;
    }
}
