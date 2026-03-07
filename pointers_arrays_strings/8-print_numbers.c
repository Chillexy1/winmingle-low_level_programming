#include "main.h"

/*
 * printing numbers with _putchar
 * */

void print_numbers(int n){
    if(n < 0){ // checks if n is negative number
        _putchar('-');
        n = -n;
    }
    if(n /10){ // we use this to check if n is == 0
        print_numbers(n/10); // in a while/for loop it runs untill n == 0 
    }
    _putchar((n%10) + '0');
}
