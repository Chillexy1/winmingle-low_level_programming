#include <stdio.h>

/*
*Authour: Chillexy Steven                                                            *Program: WinMingle Community C Training
*Description: printing all the number of base 16 in lowercase
*/

int main(void){
    int base = 16;

    char c;

    for(c = 0; c < base; c++){
        if(c < 10)
            printf("%c", c + '0');
        else
            printf("%c", c - 10 + 'a');
    }
    printf("\n");
    return 0;
}
