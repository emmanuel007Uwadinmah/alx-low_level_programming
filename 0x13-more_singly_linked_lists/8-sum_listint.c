#include "lists.h"
/**
 * Prototype: int sum_listint(listint_t *head);
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

