#include "lists.h"
#include <stdlib.h>
/*
*Author: Chillexy Steven  

 *Program: WinMingle Community C Training

*Description: deletes the head node of a listint_t linked list and returns the head node data
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;
	
	if (*head == NULL) /* checks if head is emtpy */
		return (0);

	n=(*head)->n; /* saves the data from the first node */

	current = *head; /* get hold of the first node to free */

	*head = (*head)->next; /* moves head to the next node data */

	free(current); /* frees the first node */

	return (n); /* return the first node data */
}
