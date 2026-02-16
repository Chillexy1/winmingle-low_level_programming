#include <stdio.h>

/*
*Authour: Chillexy Steven                                                          *Program: WinMingle Community C Training
*Description: printing alphabetas in lowercase and excluding letter q and e followed by a new line
**/

int main(void){
    char c;

    for(c = 'a';c <= 'z'; c++){
        if(c == 'e' || c == 'q'){
            continue;
        }
        putchar(c);
    }
    putchar('\n');
    return(0);
}
