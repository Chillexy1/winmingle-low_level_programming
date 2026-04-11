#include "variadic_functions.h"
#include <stdarg.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program sums all argument of the parameter
 */

int sum_them_all(const unsigned int n, ...) {
  unsigned int i, sum = 0;

  va_list list;
  if (n == 0)
    return 0;

  va_start(list, n);

  for (i = 0; i < n; i++) {
    sum += va_arg(list, int);
  }

  va_end(list);

  return sum;
}
