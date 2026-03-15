#include "main.h"

/*
*Authour: Chillexy Steven  
*Program: WinMingle Community C Training
*Description: printing out the sum of two diagonals of square matrix
*/

void print_diagsums(int *a, int size){
    int i;
    int sum1 = 0, sum2 = 0;

    for (i =0; i < size; i++){
        sum1 += a[i * size + i];
        sum2 += a[i * size+(size -i - 1)];
    }
    print_number(sum1);
    _putchar(',');
    _putchar(' ');
    print_number(sum2);

    _putchar('\n');
}
