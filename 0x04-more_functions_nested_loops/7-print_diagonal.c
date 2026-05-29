#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're to create a function that draws a diahonal line to the
 * terminal
 */

void print_diagonal(int n) {
  int count;
  int diagonal_count;
  count = 0;

  while (count < n) {
    diagonal_count = 0;
    while (diagonal_count <= count) {
      if (n <= 0)
        _putchar('\n');
      else {
        _putchar(' ');
      }

      diagonal_count++;
    }
    _putchar('\\');
    _putchar('\n');

    count++;
  }
}
