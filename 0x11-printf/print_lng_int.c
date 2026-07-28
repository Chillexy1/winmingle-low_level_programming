#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: fuction that prints any interger number
 */

void print_lng_int(long int n, char *buffer,
                   int *index) { /* checks if number is less than 0 */
  if (n < 0) {
    store_buffer('-', buffer, index);
    n = -n;
  }

  if (n >= 10)
    print_lng_int(n / 10, buffer, index);

  store_buffer((n % 10) + '0', buffer, index);
}
