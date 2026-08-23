#include "lists.h"
#include <stdlib.h>
/*
*Author: Chillexy Steven   

 *Program: WinMingle Community C Training

*Description: returns the nth node of a listint_t list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;/* loop count */

	listint_t *current; /* to keep track of node while looping through it */		

	current = head; /* sets the first node to keep track */
	

	while (i < index && current != NULL) /* loop through node to index of choice */
	{
		current = current->next; /* move from one node to another till it gets to index choice */

		i++; /* count */
	}

	return (current); /* return the index node or returns NULL if node doesnt exits also */
}
