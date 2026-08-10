#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: fuction that prints any interger number of a 'long'data type
 */

void print_lng_int(long int n, char *buffer, int *index) {
  if (n < 0) {
    store_buffer('-', buffer, index);
    n = -n;
  }

  if (n >= 10)
    print_lng_int(n / 10, buffer, index);

  store_buffer((n % 10) + '0', buffer, index);
}
