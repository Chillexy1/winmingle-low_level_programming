#include "lists.h"
#include <string.h>
#include <stdlib.h>
/*
*Author: Chillexy Steven

 *Program: WinMingle Community C Training

*Description: this a function that adds a new node at the very beggining of a
list_t list
*
* we're allowed to use the "strdup"
*/

list_t *add_node(list_t **head, const char *str) {
  list_t *new;
  int size = 0;
  while (str[size])
	  size++;/*get the length of the string*/

  new = malloc(sizeof(*new)); /* allocates size for the new node*/
  if (new == NULL)
    return (NULL);

  new->str = strdup(str); /* duplicates str*/

  if (new->str == NULL) /* return NULL if it fails*/
  {
    free(new);
    return (NULL);
  }

  new->len = size; /* adds the length of the str to the structure memeber*/

  new->next = *head;
  *head = new;

  return (new); /* returns the address of the new element*/
}
