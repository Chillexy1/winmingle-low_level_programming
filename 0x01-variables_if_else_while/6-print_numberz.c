#include <stdio.h>

/*
*Authour: Chillexy Steven  
*Program: WinMingle Community C Training
*Description: printing all digit number of base 10 starting from 0 without the use of char variables
*/

int main(void){
    int base = 10;
    int n;
    for(n = 0; n < base ; n++ ){
        putchar(n + '0');
    }
    putchar('\n');
    return(0);
}
