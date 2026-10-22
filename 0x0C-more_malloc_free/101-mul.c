#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program multiplies two positive numbers
 */
int main(int argc, char *argv[])
{
  int i = 0, k, mul, num1, num2;
  if (argc != 3) {
    print_error();/*print Error if incorrect arguments*/
    exit(98);
  }

  while (argv[1][i])
  {
    if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
    {
      print_error();/*print Error message if incorect argument*/
      exit(98);
    }

    i++;
  }
  k = 0;

  while (argv[2][k])
  {
    if (!(argv[2][k] >= '0' && argv[2][k] <= '9')) 
    {
      print_error();/*print Error message if incorect argument*/
      exit(98);
    }
    k++;
  }

  num1 = _atoi(argv[1]);
  num2 = _atoi(argv[2]);

  mul = num1 * num2;

  print_number(mul);
  _putchar('\n');
  return 0;
}
