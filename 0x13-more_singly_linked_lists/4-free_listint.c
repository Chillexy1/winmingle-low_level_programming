#include "lists.h"
#include <stdlib.h>
/*
*Author: Chillexy Steven   

 *Program: WinMingle Community C Training

*Description: frees listint_t list
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head; /* save the current node */
		head = head->next; /* iterate over nodes */

		free(current);

	}

}
