#include "main.h"

/*
*Authour: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: in this function we print out the n elements of an int array
*compilarion: -Wall -Werror -Wextra -pedantic -std=gnu89
*/

void print_array(int *a, int n){
    int i = 0 ;
    while (i < n){
        if(i != 0){
            _putchar(',');
            _putchar(' ');
        }
        print_numbers(a[i]);
        i++;
    }
    _putchar('\n');
}
