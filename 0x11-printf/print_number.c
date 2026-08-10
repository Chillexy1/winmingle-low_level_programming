#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: fuction that prints any interger number
 */

void print_number(int n, char *buffer,
                  int *index) { /* checks if number is less than 0 */
  long int num; // use this to deal with any overflow of min or max value
  num = n;

  if (n < 0) {
    store_buffer('-', buffer, index);
    num = -num;
  }

  if (num >= 10)
    print_number(num / 10, buffer, index);

  store_buffer((num % 10) + '0', buffer, index);
}
