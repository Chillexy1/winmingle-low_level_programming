#include "lists.h"
#include <stdio.h>
/*
*Author: Chillexy Steven

 *Program: WinMingle Community C Training

*Description: prints a statment before executing the main function
*
* we're allowed to use printf
*/

__attribute__((constructor)) void print_before(void) {
  printf(
      "You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
