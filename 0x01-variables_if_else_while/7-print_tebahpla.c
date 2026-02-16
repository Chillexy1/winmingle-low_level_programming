#include <stdio.h>

/*
*Authour: Chillexy Steven                                                            *Program: WinMingle Community C Training
*Description: printing a reversed order of the alphabets in lowercase
*/

int main(void){
    char c;

    for(c='z';c >= 'a'; c--)
        printf("%c",c);

    printf("\n");
    return 0;
}
