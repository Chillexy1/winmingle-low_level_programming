#include "main.h"
#include <stdlib.h>

/*
 *Authour: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: were writing a program that allocates memory using malloc
 */

void *malloc_checked(unsigned int b) {
  void *ptr;

  ptr = malloc(b);
  if (ptr == NULL)
    exit(98);
  return ptr;
}
