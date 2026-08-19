#include "lists.h"
#include <stdio.h>
/*
*Author: Chillexy Steven

*Program: WinMingle Community C Training

*Description: this functions prints out all the elements of our struct "list_t"
*
* we're allowed to use the printf
*/

size_t print_list(const list_t *h) {
  size_t nodes = 0;

  while (h != NULL) {
    if (h->str == NULL)
      printf("[0] (nill)\n");

    else
      printf("[%d] %s\n", h->len, h->str);
    nodes++;
    h = h->next; // moves to next nodes untill it gets to null
  }
  return (nodes);
}
