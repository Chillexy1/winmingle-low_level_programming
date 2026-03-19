#include "main.h"
#include <string.h>

/*
*Authour: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: this function returns 1 if a string is PALINDROME and 0 of not 
* compilarion: ❯ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 100-main.c 100-checks_palindrome.c 100-is_palindrome.c -o 100-palindrome
*/  

int is_palindrome(char *s){
    if(s == NULL)
        return 0;

    return checks_palindrome(s, 0, strlen(s)-1);

}
