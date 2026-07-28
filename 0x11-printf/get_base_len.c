#include "main.h"
/*
 * get the length of any base number other than base 10
 */

int base_len(unsigned long n, unsigned long base) {
  int len = 1;

  while (n >= base) {
    len++;
    n /= base;
  }
  return len;
}
