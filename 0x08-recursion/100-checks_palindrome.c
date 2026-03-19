#include "main.h"

/*
 * checks  and perform palindrome strategies in here
 */

int checks_palindrome(char *s, int start, int end){
    if(start >= end)
        return 1;
    if(s[start] != s[end])
        return 0;
    
    return checks_palindrome(s, start + 1, end -1);

}
