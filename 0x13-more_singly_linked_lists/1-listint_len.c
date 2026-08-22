#include "lists.h"
#include <string.h>

/*
*Author: Chillexy Steven      

*Program: WinMingle Community C Training

*Description: returns the number of elements in a listint list
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0; /* keeps track of the number of element */
	while (h != NULL)
	{
		nodes++;
		h = h->next; /* keeps moving from node till it's none */
	}
	return (nodes);

}
