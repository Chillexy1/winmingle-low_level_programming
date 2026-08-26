#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/*
*Author: Chillexy Steven  

 *Program: WinMingle Community C Training

*Description: prints a listint_t linked list, (2).returns the number of nodes in the list, (3).go through the list only once and prints the list with a loop
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	size_t i;
	const listint_t **visited;
	const listint_t **temp;

	visited = malloc(sizeof(*visited));
	if (visited == NULL)
		exit(98);

	while (head != NULL)
	{
		/* check if visited appeared in head more than once while looping */
		for (i = 0; i < nodes; i++)
		{
			if (visited[i] == head) /* checks while looping through the list and same data occurs more than once */
			{
				printf("[%p] %d\n",(void*)head, head->n);
				free(visited);
				return (nodes); /* stop the loop */
			}
		}

		temp = malloc((nodes +1)*(sizeof(*visited))); /* allocates memory for each nodes while looping through the list */
		if (temp == NULL)
		{
			free(visited);
			exit(98);
		}

		for (i = 0; i < nodes; i++)
		{
			temp[i] = visited[i]; /* copies data from visited to temp */
		}

		free(visited);

		visited = temp; /* points to the new address */

		visited[nodes] = head; /*save current node */

		printf("[%p] %d\n",(void*)head, head->n);

		nodes++;

		head = head->next; /* move through the list till it becomes NULL */

	}

	free(visited);

	return (nodes);
}
