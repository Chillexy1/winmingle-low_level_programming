#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: prints an unsigned int value
 */

void print_unsigned_lng(unsigned long n, char *buffer, int *index) {
  if (n >= 10)
    print_unsigned_lng(n / 10, buffer, index);

  store_buffer('0' + (n % 10), buffer, index);
}
