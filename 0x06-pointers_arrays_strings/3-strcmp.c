#include "main.h"
#include <string.h>
#include <stdio.h>

/*
*Authour: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: this function compares two strings
*/

int _strcmp(char *s1, char *s2){
    int i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
        i++;
    }
    return s1[i] - s2[i];
}
