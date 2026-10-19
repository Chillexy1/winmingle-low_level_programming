#include "main.h"
/*
*Author: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: returns the factorial of a given number.
*/
int factorial(int n){
    if(n < 0)
        return - 1;

    if (n == 0)
        return 1;  

    return n * factorial(n - 1);

}
