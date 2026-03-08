#include "main.h"
#include <stdlib.h>

/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: we're converting strings to an int in this function 
*/

int _atoi(char *s){
    int i = 0;
    int num = 0;
    int position = 1;

    if (s[i] == '-'){
        position = -1;

        i++;
    }

    while(s[i] >= '0' && s[i] <= '9'){
        num = num * 10 + s[i] - '0';
        i++;
    }

    return num * position;
}
