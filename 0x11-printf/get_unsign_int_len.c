#include "main.h"
/*
 * get the length of any base number other than base 10
 */

int unsigned_int_len(unsigned int n, unsigned int base) {
  int len = 1;

  while (n >= base) {
    len++;
    n /= base;
  }
  return len;
}
