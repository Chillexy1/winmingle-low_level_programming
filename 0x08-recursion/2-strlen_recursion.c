#include "main.h"

/*
*Authour: Chillexy Steven    
*Program: WinMingle Community C Training
*Description: this function returns the len of a string 
*/

int _strlen_recursion(char *s){
    if(*s == '\0'){
        return 0;
    }
   return 1 +  _strlen_recursion(s + 1);

}
