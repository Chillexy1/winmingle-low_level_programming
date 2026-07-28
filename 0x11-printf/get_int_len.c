#include "main.h"
/*get the lengt of a base 10(integer) digit
 */

int int_len(int n) {
  int len = 1;

  if (n < 0) {
    len++; /* counts the '-' sign*/
    n = -n;
  }

  while (n >= 10) {
    len++;
    n /= 10;
  }
  return len;
}
