#include "main.h"

/*
*Authour: Chillexy Steven  
*Program: WinMingle Community C Training
*Description: this function checks if an input integer is a Prime number
*Compilation:gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-main.c 6-prime_root.c 6-is_prime_number.c -o 6-prime
*/

int is_prime_number(int n){
    if(n < 1)
        return 0;


    return prime_check(n, n-1);
}
