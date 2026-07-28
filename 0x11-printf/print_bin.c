#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: binary function
 */

void print_bin(unsigned long n, char *buffer, int *index) {
  if (n > 1)
    print_bin(n / 2, buffer, index);

  store_buffer('0' + (n % 2), buffer, index);
}
