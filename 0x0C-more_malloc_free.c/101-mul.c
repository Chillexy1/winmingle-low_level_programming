#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/*
 *Authour: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program multiplies two positive numbers
 */

int main(int argc, char *argv[]) {
  int i = 0, k, mul, num1, num2;

  if (argc != 3) {
    print_error();
    exit(98);
  }

  while (argv[1][i]) {
    if (!(isdigit(argv[1][i]))) {
      print_error();
      exit(98);
    }

    i++;
  }
  k = 0;

  while (argv[2][k]) {
    if (!(isdigit(argv[2][k]))) {
      print_error();
      exit(98);
    }
    k++;
  }

  num1 = atoi(argv[1]);
  num2 = atoi(argv[2]);

  mul = num1 * num2;

  print_number(mul);
  _putchar('\n');
  return 0;
}
