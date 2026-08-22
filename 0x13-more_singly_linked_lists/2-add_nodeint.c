#include "lists.h"
#include <stdlib.h>

/*
*Author: Chillexy Steven  

 *Program: WinMingle Community C Training

*Description: creates a function that adds a new node at the begining of a listint_t list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new; /* variable name for new node*/

	new = malloc(sizeof(*new)); /* allocates memory for new node */
	if (new == NULL)  /* checks if memory allocation for new node failed */
		return (NULL);

	new->n = n; /* get the number data */
	new->next = *head; /* first elements points to head */
	*head = new; /* makes head point to the new created node */

	return (new);
}
