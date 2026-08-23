#include "lists.h"
#include <stdlib.h>

/*
*Author: Chillexy Steven   

 *Program: WinMingle Community C Training

*Description: frees a listint_t list, this function sets the head to NULL
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head; /*saves */
		*head = (*head)->next; /* move forward */

		free(current); /* free list */
	}
}
