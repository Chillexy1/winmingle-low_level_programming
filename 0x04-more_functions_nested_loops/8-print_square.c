#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this functions prints a square to the terminal with a given
 * character symbol(#)
 */

void print_square(int size) {
  int count;
  int square;
  count = 0;

  while (count < size) {
    square = 0;
    while (square < size) {
      if (size <= 0)
        _putchar('\n');

      else
        _putchar('#');

      square++;
    }
    _putchar('\n');

    count++;
  }
}
