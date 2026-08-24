#include "lists.h"
#include <stdlib.h>
/*
*Author: Chillexy Steven  

 *Program: WinMingle Community C Training

*Description: add a function that inserts a new node at a given position
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int i = 0;

	new = malloc(sizeof(*new));
	if (new == NULL) /* check if allocation failed */
		return (NULL);

	new->n = n;

	if (idx == 0) /* if no idx was specified then the new node points to head(the first node) */
	{
		new->next = *head;
		return (new);
	}

	current = *head;


	while ((i < idx - 1) && current != NULL)
	{
		current = current->next; /* loop to the node index of choice */
		i++;
	}

	if (current == NULL) /* checks if it's possible to add at the new node */
	{
		free(new);
		return (NULL);
	}

	/* link our node */
	new->next = current->next;
	current->next = new;

	return (new);
}
