#include <stdio.h>

/*
*Authour: Chillexy Steven                                                          
*Program: WinMingle Community C Training
*Description: printing alphabetas in lowercase and uppercase
* */

int main(void){
    char c;
    char z;

    for(c = 'a'; c <= 'z'; c++){
        putchar(c);
        if(c == 'z'){
            for(z = 'A'; z <= 'Z'; z++){
                putchar(z);
            }
        }
    }
    putchar('\n');
    return (0);
}
