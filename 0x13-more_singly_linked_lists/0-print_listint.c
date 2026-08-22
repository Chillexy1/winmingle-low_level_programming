#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*
*Author: Chillexy Steven  

 *Program: WinMingle Community C Training

*Description: prints all the elements of listint list
*
* printf is alllowed
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next; /* keep moving to next node untill it NULL*/
	}
	return (nodes);
    
}
