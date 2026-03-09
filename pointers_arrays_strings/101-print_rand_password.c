#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/*
 * this is a function to generate random numbers 
 * */

void rand_password(char *s){
    int i = 0;
    int type;
//*    srand(time(NULL));

    while (i < 14){
        type = rand()%4;
        char c;

        if(type == 0){
            c = 'A' + rand() % 26;
        }
        else if(type == 1){
            c = 'a' + rand() % 26;
        }
        else if(type == 2){
            c = '0' + rand() % 10;
        }
        else{
            c = 33 + rand() % 15;
        }
        s[i] = c;

        
        i++;
    }
    s[i] = '\0';

}
