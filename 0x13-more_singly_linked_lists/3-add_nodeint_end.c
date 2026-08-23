#include "lists.h"
#include <stdlib.h>
/*
*Author: Chillexy Steven 

 *Program: WinMingle Community C Training

*Description: adds  a new node at the end of a listint_t list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new; /* name of new node */
	listint_t *current; /*to keep track of node movement*/

	new = malloc(sizeof(*new)); /* allocates memory for the new node */
	if (new == NULL) /* return NULL if memory allocation failed */
		return (NULL);

	new->n = n; /* assigns an integer to new node */

	new->next = NULL; /* making last node */

	if (*head == NULL) /* checks for an empty list */
	{
		*head = new;
		return (new);
	}

	
	/* process to find the last node*/
	current = *head; /* assign head to current for movement looping */
	while (current->next != NULL)
		current = current->next; /* keeps looping till *next becomes NULL */

	current->next = new; /* connect the new node */

	return (new); /* returns the new node */
}
