#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program is to print out the values of struct dog
 */

void print_dog(struct dog *d) {
  int i;
  if (d == NULL)
    return;

  for (i = 0; i < 1; i++) {
    if (d->name == NULL || d->owner == NULL)
      printf("nil");

    printf("name:%s\nage:%f\nowner:%s\n", d->name, d->age, d->owner);
  }
}
