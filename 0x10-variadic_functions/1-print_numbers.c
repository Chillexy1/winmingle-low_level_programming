#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a variadic function thst print out numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...) {
  unsigned int i, j;

  va_list list;
  va_start(list, n);

  for (i = 0; i < n; i++) {
    j = va_arg(list, int);
    printf("%d", j);
    if (separator != NULL && i < n - 1)
      printf("%s", separator);
  }
  printf("\n");
  va_end(list);
}
