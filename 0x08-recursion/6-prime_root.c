#include "main.h"

/*
*Authour: Chillexy Steven    
*Program: WinMingle Community C Training
*Description: this determines the value to use for our prime function 'is_prime_number(int n)'
*/

int prime_check(int n, int modulos){
    if(modulos == 1)
        return 1;

    if(n % modulos == 0)
        return 0;

    return prime_check(n, modulos - 1);
    
} 
