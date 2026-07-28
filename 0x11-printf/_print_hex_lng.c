#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: prints the hexadecimal unsigned long value in lowercase
 */

void _print_hex_lng(unsigned long n, char *buffer, int *index) {
  unsigned long digit;

  if (n >= 16)
    _print_hex_lng(n / 16, buffer, index);

  digit = n % 16;

  if (digit < 10)
    store_buffer('0' + digit, buffer, index);

  else
    store_buffer('a' + (digit - 10), buffer, index);
}
