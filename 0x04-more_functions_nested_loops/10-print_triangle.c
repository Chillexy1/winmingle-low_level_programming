#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this a function that prints a triangle
 */
void print_triangle(int size) {
  int count;
  int space;
  int hash;
  count = 0;

  while (count < size) {
    space = 0;
    hash = 0;
    while (space < size - count - 1) {
      _putchar(' ');
      space++;
    }
    while (hash < count + 1) {
      _putchar('#');
      hash++;
    }
    _putchar('\n');
    count++;
  }
}
