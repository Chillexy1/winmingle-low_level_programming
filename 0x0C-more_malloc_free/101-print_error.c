#include "main.h"
/*
*Author: Chillexy Steven       
*Program: WinMingle Community C Training
*Description: tis fubction handles error output
 * */

void print_error(void) {
  char *err = "Error\n";
  int i = 0;

  while (err[i]) {
    _putchar(err[i]);
    i++;
  }
}
