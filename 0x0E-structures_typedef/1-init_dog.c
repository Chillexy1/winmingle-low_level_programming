#include "dog.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this a program that initializes the struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner) {
  (*d).name = name;
  d->age = age;
  d->owner = owner;
}
