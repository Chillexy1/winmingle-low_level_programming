#include "main.h"
/*get the lengt of a base 10(integer) digit
 */

int int_len(int n) {
  int len = 1;
  long num = n; // handels any overflow values

  if (n < 0) {
    len++; /* counts the '-' sign*/
    num = -num;
  }

  while (num >= 10) {
    len++;
    num /= 10;
  }
  return len;
}
