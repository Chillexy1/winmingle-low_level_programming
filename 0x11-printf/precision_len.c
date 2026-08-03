#include "main.h"
/*get the lengt of number used to impliment precision in our %d case
 */

int precision_len(int n) {
  int len = 1;

  if (n < 0)
    n = -n;

  while (n >= 10) {
    len++;
    n /= 10;
  }
  return len;
}
