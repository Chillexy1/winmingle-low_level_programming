#include "variadic_functions.h"
#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a variadic function that prints anything
 */

void print_all(const char *const format, ...) {
  int i = 0, j;
  char *sep = "";
  print_type to_type[] = {
      {"c", print_char},   {"i", print_int}, {"f", print_float},
      {"s", print_string}, {NULL, NULL},

  };

  va_list args;

  va_start(args, format);

  while (format && format[i]) {
    j = 0;

    while (to_type[j].type) {

      if (format[i] == *to_type[j].type) {
        printf("%s", sep);

        to_type[j].f(&args);

        sep = ", ";
      }
      j++;
    }

    i++;
  }

  printf("\n");
  va_end(args);
}
