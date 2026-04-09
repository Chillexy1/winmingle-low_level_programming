#include "function_pointers.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program searches for an integer and return the first element
 * of the index where the pointer function 'cmp' is != 0
 */

int int_index(int *array, int size, int (*cmp)(int)) {
  int i, j;

  if (size > 0 && array != NULL && cmp != NULL) {
    for (i = 0; i < size; i++) {
      j = cmp(array[i]);

      if (j)
        break;
    }
    if (i < size)
      return (i);
  }
  return (-1);
}
