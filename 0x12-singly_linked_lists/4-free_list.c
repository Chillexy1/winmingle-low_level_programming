#include "lists.h"

/*
*Author: Chillexy Steven

 *Program: WinMingle Community C Training

*Description: frees a list_t list
*/
void free_list(list_t *head) {
  list_t *current;

  while (head != NULL) {
    current = head;    // first iteration
    head = head->next; // keepd movimg to next node

    /* frees node */
    free(current->str);
    free(current);
  }
}
