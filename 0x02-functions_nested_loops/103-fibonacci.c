#include "main.h"
#include <stdio.h>


/*
*Authour: Chillexy Steven            
*Program: WinMingle Community C Training
*Description: considering the dact that most fibonacci values are less than 4,000,000. we use this function to sum the total of all it's even numbers.
*/

int return_fibonacci(void){
    long long current = 1;
    long long previous = 1;
    long long next;
    int sum_of_even = 0;

    while(current <= 4000000){
        next = previous + current;
        previous= current;
        current = next;
        if(current % 2 == 0){
            sum_of_even += current;
        }
    }
    return sum_of_even;
}
