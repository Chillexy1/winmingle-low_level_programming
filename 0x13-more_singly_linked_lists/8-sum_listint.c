#include "lists.h"
#include <string.h>
/*
*Author: Chillexy Steven  

 *Program: WinMingle Community C Training

*Description: returns the sum of all the data(n) of listint_t li.ked list
*/
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL) /* checks if head is not empty */
		return (0);

	current = head;

	while (current != NULL) 
	{
		sum += current->n;
		current = current->next;
	}

	return (sum); /* return total amount if list is not empty or return 0 if list is empty */
}
