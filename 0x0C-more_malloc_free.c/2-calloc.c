#include "main.h"
#include <stdlib.h>

/*
 *Authour: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're writing a function that allocates memory for an array using
 * malloc.
 */

void *_calloc(unsigned int nmemb, unsigned int size) {
  unsigned int i;
  unsigned *array;

  if (nmemb == 0 || size == 0)
    return NULL;

  array = malloc(sizeof(unsigned int) * size);
  if (array == NULL)
    return NULL;

  for (i = 0; i < size; i++) {
    array[i] = nmemb;
  }

  array[i] = 0;

  return array;
}
