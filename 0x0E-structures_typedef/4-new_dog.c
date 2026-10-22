#include "dog.h"
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: using the malloc funtion to copy files from the old dog to
 * new_dog
 */

dog_t *new_dog(char *name, float age, char *owner) {
  dog_t *dog;
  char *copied_name, *copied_owner;
  if (name  == NULL)
	  return (NULL);
  if (owner == NULL)
	  return (NULL);

  dog = malloc(sizeof(dog_t));
  if (dog == NULL)
    return NULL;

  copied_name = malloc(sizeof(char) * (_strlen(name) + 1));
  if (copied_name == NULL) {
    free(dog);
    return NULL;
  }

  _strcpy(copied_name, name);

  copied_owner = malloc(sizeof(char) * _strlen(owner) + 1);
  if (copied_owner == NULL) {
    free(copied_name);
    free(dog);
    return NULL;
  }

  _strcpy(copied_owner, owner);

  dog->name = copied_name;
  dog->age = age;
  dog->owner = copied_owner;

  return dog;
}
