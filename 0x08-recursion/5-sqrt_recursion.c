#include "main.h"

/*
*Authour: Chillexy Steven                     
*Program: WinMingle Community C Training
*Description: returns the natural square root of a number 
*compilation: -Wall -Werror -Wextra -pedantic -std=gnu89 5-main.c 5-sqrt_root.c 5-sqrt_recursion.c -o 5-sqrt
*/

int _sqrt_recursion(int n){
    if(n < 0)
        return -1;
    
    if(n == 0)
        return 1;

    return _sqrt_root(n, 0);
}
