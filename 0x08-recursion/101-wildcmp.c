#include "main.h"

/*
*Authour: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: this function compares two strings and checks if any is identical to each other
*/

int wildcmp(char *s1, char *s2){
    if (*s2 == '\0')
        return (*s1 == '\0');

    if(*s2 == '*'){
        return wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2));
    }
    if(*s1 == *s2)
        return wildcmp(s1 + 1, s2 + 1);

    return 0;

}
