#include "main.h"

/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: encoding using rot13.
*/

char *rot13(char *s){
    int i;

    for(i = 0; s[i]; i++){
         if(s[i] >= 'a' && s[i] <= 'm'){
            s[i] += 13;
        }
         else if(s[i] >= 'A' && s[i] <= 'M'){
            s[i] += 13;
        }

         else if(s[i] >= 'n' && s[i] <= 'z'){
            s[i] -= 13;
        }
         else if(s[i] >= 'N' && s[i] <= 'Z'){
             s[i] -= 13;
         }
    }
         return s;
}
