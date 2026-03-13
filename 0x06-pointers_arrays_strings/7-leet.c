#include "main.h"
#include <ctype.h>
/*
*Authour: Chillexy Steven  
*Program: WinMingle Community C Training
*Description: this function encodes strings to it's leet version.
*/

char *leet(char *s){
    int i;
    for(i = 0; s[i];i++){
        s[i] = tolower(s[i]);
        if(s[i] == 'a')
            s[i] = '4';
        else if(s[i] == 'e')
            s[i] = '3';
        else if(s[i] == 'i')
            s[i] = '1';
        else if(s[i] == 'o')
            s[i] = '0';
//        else if(s[i] == 's')
  //          s[i] = '5';
        else if(s[i] == 't')
            s[i] = '7';
        else if(s[i] == 'g')
            s[i] = '6';
        else
            s[i] = s[i];

    } 
    return s;
}
