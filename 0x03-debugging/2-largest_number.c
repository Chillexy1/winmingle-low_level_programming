#include "main.h"
#include <stdio.h>

/*
*Authour: Chillexy Steven       
*Program: WinMingle Community C Training
*Description: this function determines the largest number from three numbers
*/


int largest_number(int a, int b, int c)
{
    int largest;
 
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;
 
    return (largest);
}
