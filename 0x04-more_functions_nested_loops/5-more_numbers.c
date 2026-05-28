#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function prints the number 1 - 14 into 10 places
 */

void more_numbers(void) {
  int numbers;
  int count;
  count = 0;

  while (count < 10) {
    numbers = 0;
    while (numbers <= 14) {
      if (numbers > 9)
        _putchar('0' + (numbers / 10));

      _putchar('0' + (numbers % 10));

      numbers++;
    }
    _putchar('\n');

    count++;
  }
}
