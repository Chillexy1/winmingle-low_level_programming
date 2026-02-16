#include <stdio.h>

/*
*Authour: Chillexy Steven                                                            *Program: WinMingle Community C Training
*Description: this is a program to print out sinfle digits of numbers seperated by comma and space 
*/

int main(void){
    int base=10;
    int n;

    for (n = 0; n < base; n++)
        printf("%d, ",n);
    
    printf("\n");
    return 0;

}
