#include "main.h"
#include <ctype.h>
/*
*Authour: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: this function capitalizese th first occurence of every word in a string
*/

char *cap_string(char *str){
    int i = 0;
    while(str[i] != '\0'){
        if(i == 0){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] = toupper(str[i]);
            }
        }
        else if(isspace(str[i -1])){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] = toupper(str[i]);
            }
        }

        i++;
    }
    return str;
}
