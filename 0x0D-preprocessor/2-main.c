#include "main.h"
/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a program that prints out the name of the file it was
 * compiled with
 */

int main(void) {
  char *filename = __FILE__;
  int i;

  for (i = 0; filename[i]; i++)
    _putchar(filename[i]);

  _putchar('\n');

  return 0;
}
