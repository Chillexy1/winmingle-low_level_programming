#include "main.h"
#include <stdlib.h>

/*
 *Authour: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're to write a fuction that reallocates a memory block using
 * 'malloc ' and 'free.'
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
  unsigned int i;
  char *new_array, *old_array;

  if (new_size == old_size)
    return ptr;

  if (ptr == NULL)
    return malloc(new_size);

  if (new_size == 0) {
    free(ptr);
    return NULL;
  }

  new_array = malloc(new_size);
  if (new_array == NULL)
    return NULL;

  old_array = ptr;

  for (i = 0; i < new_size && i < old_size; i++)
    new_array[i] = old_array[i];

  free(ptr);

  return new_array;
}
