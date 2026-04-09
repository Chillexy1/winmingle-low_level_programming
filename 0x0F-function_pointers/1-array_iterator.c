#include "function_pointers.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're to execute the function pointer 'action' to each element of
 * an array
 */

void array_iterator(int *array, size_t size, void (*action)(int)) {
  size_t n;

  for (n = 0; n < size; n++) {
    if (array != NULL && action != NULL) {
      action(array[n]);
    }
  }
}
