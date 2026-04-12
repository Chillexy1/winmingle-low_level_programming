#include "variadic_functions.h"
#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're to peint out only strings in this program, any other input
 * are to be neglected.
 */

void print_strings(const char *separator, const unsigned int n, ...) {
  unsigned int i;
  char *c;

  va_list strings;
  va_start(strings, n);

  for (i = 0; i < n; i++) {
    c = va_arg(strings, char *);
    if (separator && i > 0)
      printf("%s", separator);
    if (c == NULL)
      printf("nill");
    printf("%s", c);
  }
  printf("\n");

  va_end(strings);
}
