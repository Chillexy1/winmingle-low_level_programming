#include "lists.h"

/*
*Author: Chillexy Steven

 *Program: WinMingle Community C Training

*Description: this is a linked list function that returns the number of elements
in a linked list_t
*/
size_t list_len(const list_t *h) {
  size_t n = 0; // for number of elements

  while (h != NULL) {
    n++;
    h = h->next; // keep moving to the next node until h becomes NULL
  }
  return (n);
}
