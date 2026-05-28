#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a function that prints the numbers from 0 to 9
 */

void print_numbers(void) {
  int numbers;

  numbers = '0';

  while (numbers <= '9') {
    _putchar(numbers);

    numbers++;
  }

  _putchar('\n');
}
