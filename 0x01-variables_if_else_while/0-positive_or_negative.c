#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *Author: Chillexy Steven
 *Programm: WinMingle Community C Training
 *Description: this is a program that asdigns a random number to an init of n and ehenever it runs it csn detect if the outcome is either POSITIVR, NEGATIVE OR A ZERO NUMBER
 * */

int main(void){
    int n;
    srand(time(NULL));
    n=rand()-(RAND_MAX/2);
    if(n > 0){
        printf("%d is positive", n);
    }
    else if(n < 0){
        printf("%d is negative", n);
    }
    else{
        printf("%d is zero", n);
    }
    return(0);
}
