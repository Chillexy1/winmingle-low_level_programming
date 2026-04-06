#include "dog.h"
#include <stdlib.h>
#include <string.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: using the malloc funtion to copy files from the old dog to
 * new_dog
 */

dog_t *new_dog(char *name, float age, char *owner) {
  dog_t *dog;
  char *copied_name, *copied_owner;

  dog = malloc(sizeof(dog_t));
  if (dog == NULL)
    return NULL;

  copied_name = malloc(sizeof(char) * (strlen(name) + 1));
  if (copied_name == NULL) {
    free(dog);
    return NULL;
  }

  strcpy(copied_name, name);

  copied_owner = malloc(sizeof(char) * strlen(owner) + 1);
  if (copied_owner == NULL) {
    free(copied_name);
    free(dog);
    return NULL;
  }

  strcpy(copied_owner, owner);

  dog->name = copied_name;
  dog->age = age;
  dog->owner = copied_owner;

  return dog;
}
