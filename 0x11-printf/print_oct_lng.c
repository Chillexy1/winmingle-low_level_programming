#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: prints value in long octal base 8
 */

void print_oct_lng(unsigned long n, char *buffer, int *index) {
  if (n >= 8)
    print_oct_lng(n / 8, buffer, index);

  store_buffer((n % 8) + '0', buffer, index);
}
