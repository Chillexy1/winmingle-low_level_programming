#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're to write a function that prints the number from 0 - 9 but
 * excluding 4 and 2
 */

void print_most_numbers(void) {
  int numbers;
  numbers = '0';

  while (numbers <= '9') {
    if (numbers == '2' || numbers == '4') {
      numbers++;
      continue;
    }
    _putchar(numbers);

    numbers++;
  }
  _putchar('\n');
}
