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

  if (d->name == NULL)
	  printf("name:(nil)");
  else
  {
	  printf("name:%s\nage:%f\n", d->name, d->age);
	  printf("name:%s\nage:%f\n", d->name, d->age);
  }
  if (d->owner == NULL)
	  printf("owner:(nil)");
  else
  {
	  printf("owner:%s\nage:%f\n", d->owner, d->age);
	  printf("owner:%s\nage:%f\n", d->owner, d->age);
  }
}
