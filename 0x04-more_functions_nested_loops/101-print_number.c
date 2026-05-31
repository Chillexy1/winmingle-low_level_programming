#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function print's any number using our custom _putchar
 */

void print_number(int n) {
  if (n < 0) {
    _putchar('-');
    n = -n;
  }

  if (n >= 10) {
    print_number(n / 10);
  }

  _putchar('0' + (n % 10));
}
