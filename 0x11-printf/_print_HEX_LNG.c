#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: prints the hexadecimal value in upper case
 */

void _print_HEX_LNG(unsigned long n, char *buffer, int *index) {
  unsigned long digit;

  if (n >= 16)
    _print_HEX_LNG(n / 16, buffer, index);

  digit = n % 16;

  if (digit < 10)
    store_buffer('0' + digit, buffer, index);

  else
    store_buffer('A' + (digit - 10), buffer, index);
}
