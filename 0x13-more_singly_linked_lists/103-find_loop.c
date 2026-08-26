#include "lists.h"
#include <string.h>
/*
*Author: Chillexy Steven  

 *Program: WinMingle Community C Training

*Description: this function finds the loop in a listint_t linked list
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow;
	listint_t *fast;

	/*sets both pointer to head */
	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast) /* first meeting */
		{
			slow = head; 

			while (slow != fast)
				/* both moves at same pace */
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow);
		}
	}

	return (NULL);
}
