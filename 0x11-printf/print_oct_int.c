#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: prints value in  octal int base 8
 */

void print_oct_int(unsigned int n, char *buffer, int *index) {
  if (n >= 8)
    print_oct_int(n / 8, buffer, index);

  store_buffer((n % 8) + '0', buffer, index);
}
