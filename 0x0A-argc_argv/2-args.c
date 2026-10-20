#include <stdio.h>
#include "main.h"
/*
*Authour: Chillexy Steven     
*Program: WinMingle Community C Training
*Description: this prints out all arguments passed into it
*/
int main(int argc, char *argv[]){
    int i;
    for (i = 1; i < argc; i++){
        printf("%s\n", argv[i]);
    }
    return 0;
}
