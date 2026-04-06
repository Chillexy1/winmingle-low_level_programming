#include "dog.h"
#include <stdlib.h>
#include <string.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: freeing every memory allocated by new_dog
 */

void free_dog(dog_t *d) {
  if (d == NULL)
    return;

  free(d->name);
  free(d->owner);
  free(d);
}
