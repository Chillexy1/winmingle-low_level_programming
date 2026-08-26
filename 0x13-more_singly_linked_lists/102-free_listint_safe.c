#include "lists.h"
#include <stdlib.h>
/*
*Author: Chillexy Steven 

 *Program: WinMingle Community C Training

*Description: frees a looping listint_t linked list 
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *next;
	listint_t **visited;
	listint_t **temp;

	size_t size = 0;
	size_t i;

	if (*h == NULL || h == NULL)
		return(0);

	current = *h;

	visited = malloc(sizeof(*visited));
	if (visited == NULL)
		exit(98);

	while (current != NULL)
	{
		/* check for visited nodes */
		for (i = 0; i < size; i++)
		{
			if (visited[i] == current)
			{
				free(visited);
				*h = NULL;
				return(size); /* stop loop */
			}
		}

		/* allocates memory for each node being freed */
		temp = malloc(sizeof(*visited)* (size + 1));

		if (temp == NULL)/* checks if memory allocation failed */
		{
			free(visited);
			exit(98);
		}

		for (i = 0; i < size; i++)
		{
			temp[i] = visited[i];
		}
		free(visited);

		
		visited = temp;

		visited[size] = current;/* remembers current node */ 

		next = current->next; /* save next node */
		free(current); /* free current */

		size ++;
		current = next; /* move forward */
	}

	free(visited);
	*h = NULL;

	return (size);
}
