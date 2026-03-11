#include "main.h"
#include <string.h>
#include <stdio.h>

/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this function reverses the content of an array of int
*/

void reverse_array(int *a, int n){
    int i;
    
    for(i = n-1; i >= 0; i--){
        if(i != n-1){
            _putchar(',');
            _putchar(' ');
        }
        print_number(a[i]);
        
    }
    _putchar('\n');
}
