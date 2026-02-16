#include <stdio.h>

/*
*Authour: Chillexy Steven                                                         
*Program: WinMingle Community C Training
*Description: printing out all digits of base 10 starting from 0 
*/

int main(void){
    int base = 10;
    char c;
    for (c = 0; c < base; c++)
        printf("%c", '0'+c);
    
    printf("\n");
    return 0;
}
