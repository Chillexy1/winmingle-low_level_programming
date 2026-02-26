#include "main.h"
#include <stdio.h>


/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this function computes and prints the sum of all the multiples of 3 or 5 below 1024. 
*/

int print_natural(int a, int b){
    int n = 0;
    int result = 0;

    while(n < 1024){
        if(n % a == 0 || n % b == 0){
            result += n;

        }

        n++;
    }
    return result;
}
