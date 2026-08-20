#include "lists.h"
#include <string.h>

/*
*Author: Chillexy Steven

 *Program: WinMingle Community C Training

*Description: this function adds a new node to the end of s list_t list
*
* we're to use 'strdup from the standard libarary'
*/
list_t *add_node_end(list_t **head, const char *str) {
  list_t *new;     /*create the new node */
  list_t *current; /* use this to walk through our node/ */

  new = malloc(sizeof(*new)); /* allocate memory to the node */
  if (new == NULL)
    return (NULL); /* checks if memory alloc failed*/

  new->str = strdup(str); /* duplicate string */
  if (new->str ==
      NULL) // free nrw and return null if the new created str failed
  {
    free(new);
    return (NULL);
  }

  new->len = strlen(str); /* get length of string */

  new->next = NULL; /* make the new node to become the last node */

  if (*head == NULL) /* if the list is NULL to begin with, then make
                        head/beggining the new created str  */
  {
    *head = new;
    return (new);
  }

  current = *head; /*make current points at the head/beggining */

  while (current->next != NULL) /* then loop through the list*/
    current = current->next;

  current->next = new; /* link the new node */

  return (new); // return the address of the new element
}
