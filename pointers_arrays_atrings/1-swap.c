#include "main.h"

/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this functions swaps the value of two given int using a pointer
* compiller: -Wall -Werror -Wextra -pedantic -std=gnu89 0-
*/

void swap_int(int *a, int *b) {
    int a_dub = *a;
    
    *a = *b;
    *b = a_dub;


}
