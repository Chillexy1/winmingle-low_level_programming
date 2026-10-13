#include "main.h"

/*
 * printing numbers with _putchar
 * */

void print_numbers(int n){
    if(n < 0){ /*checks if n is negative number */
        _putchar('-');
        n = -n;
    }
    if(n /10)/* ger the last digit of every numbee*/
        print_numbers(n/10);
    _putchar((n%10) + '0');
}
