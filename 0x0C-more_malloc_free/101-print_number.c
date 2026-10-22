#include "main.h"
/*
*Author: Chillexy Steven  
*Program: WinMingle Community C Training
*Description:we nees to print number from base 10 upwards using our _putchar function
 **/

void print_number(int n) {
  if (n < 0) {
    _putchar('-');
    n = -n;
  }

  if (n >= 10)
    print_number(n / 10);/*get each last digit of a number*/

  _putchar((n % 10) + '0');
}
