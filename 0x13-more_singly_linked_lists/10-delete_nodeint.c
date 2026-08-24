#include "lists.h"
#include <stdlib.h>

/*
*Author: Chillexy Steven

 *Program: WinMingle Community C Training

*Description: deletes a node at a given index of listint_t liked list
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *del; /* used to link the desired node to delete */
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0) /* handles node at index of 0 */
	{
		del = *head; /* saves/link node to delete */
		*head = (*head)->next; /*move forward */
		free(del); /* deletes linked/saved node */
		return (1);
	}

	current = *head; 

	while ((i < index - 1) && current != NULL)
	{
		current = current->next; /* move node from one to another till node is null */

		i++;
	}

	if (current == NULL) 
		return (-1);

	del = current->next; /* link/save the node to delete */
	current->next = del->next;  /* move forward */

	free(del); /* delete node linked at index above*/

	return (1);
}
