#include "main.h"
/*
 * get the length of an unsigned long number
 */

int unsigned_lng_len(unsigned long n, unsigned long base) {
  int len = 1;

  while (n >= base) {
    len++;
    n /= base;
  }
  return len;
}
