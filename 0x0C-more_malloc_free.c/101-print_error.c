#include "main.h"
/*one function to print out error
 * */

void print_error(void) {
  char *err = "Error\n";
  int i = 0;

  while (err[i]) {
    _putchar(err[i]);
    i++;
  }
}
