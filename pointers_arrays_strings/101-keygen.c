#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
*Authour: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: using the random generated password, this function prints out a valid password used in crackme programs.
*/

void print_crackme(char *s){
    char input[15];

    rand_password(s);

//    printf("testing the code: %s\n", s);

    printf("Enter password: ");
    scanf("%14s", input);

    if(strcmp(input, s) == 0){
        printf("%s congrats", input);
    }
    else{
        printf("Access Denied");
    }
    printf("\n");

}
