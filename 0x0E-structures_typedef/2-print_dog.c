#include "dog.h"
#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program is to print out the values of struct dog
 */

void print_dog(struct dog *d) {
  int i;
  if (d == NULL)
    return;

  if (d->name == NULL)
	  printf("name:(nil)\n");
  else
	  printf("name:%s\n", d->name);

  if (d->owner == NULL)
	  printf("owner:(nil)\n");

  else
	  printf("owner:%s\nage:%f\n", d->owner, d->age);

  printf("age:%f\n", d->age);
}
