#include <stdio.h>
/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a program that prints out the name of the file it was
 * compiled with
 */

int main(void) {
  char *filename = __FILE__;
  printf("%s\n", filename);

  return 0;
}
