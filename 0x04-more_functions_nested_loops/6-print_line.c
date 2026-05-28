#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're to create a function that draws a straight line in our
 * terminal
 */

void print_line(int n) {
  int count;
  count = 0;

  while (count < n) {
    if (n <= 0)
      _putchar('\n');
    else
      _putchar('_');

    count++;
  }
  _putchar('\n');
}
