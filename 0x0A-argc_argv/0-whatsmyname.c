#include <stdio.h>
#include <stdlib.h>

/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: using the argc and argv, we're printing out a program that print's out it%s name
*/

int main(int argc, char * argv[]){
    int i;

    for(i = 0; i < argc; i++){
        printf("%s\n", argv[i]);
    }


    return 0;
}
