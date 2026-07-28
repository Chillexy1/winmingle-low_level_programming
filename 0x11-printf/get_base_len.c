#include "main.h"
/*
 * returns the length of an unsigned long number of any base type
 */

int base_len(unsigned long n, unsigned long base) {
  int len = 1;

  while (n >= base) {
    len++;
    n /= base;
  }
  return len;
}
