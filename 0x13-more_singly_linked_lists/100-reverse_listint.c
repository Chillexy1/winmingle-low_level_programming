#include "lists.h"
#include <stdlib.h>
/*
*Author: Chillexy Steven   

 *Program: WinMingle Community C Training

*Description: reverses a listint_t linked list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *previous;

	previous = NULL; 
	current = *head; /* point to the first node head was currently pointing to*/

	while (current != NULL)
	{
		*head = current->next; /* save the next node */

		current->next = previous; /* reverses the node currently being held by current*/
		
		previous = current; /* move previous forward */

		current = *head; /* move current to point to the saved node */
	}

	*head = previous; /* points to the first node of my reversed list */

	return (*head); 
}
