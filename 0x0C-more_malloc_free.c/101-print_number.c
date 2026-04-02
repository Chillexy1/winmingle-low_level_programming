#include "main.h"
/* we nees to print number from base 10 upwards using our _putchar function
 * **/

void print_number(int n) {
  if (n < 0) {
    _putchar('-');
    n = -n;
  }

  if (n >= 10)
    print_number(n / 10);

  _putchar((n % 10) + '0');
}
