#include "main.h"
#include <stdio.h>


/*
*Authour: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: this program test if an input number is negative, positive or ZERO
*/

void positive_or_negative(int i){
    if(i < 0){
        printf("%d is negative", i);
    }
    else if(i == 0){
        printf("%d is zero", i);
    }
    else{
        printf("%d is positive", i);
    }
    printf("\n");
}
