#include "lists.h"

/**
 * Prototype: listint_t *find_listint_loop(listint_t *head);
 * Returns: The address of the node where the loop starts, or NULL if there is no loop
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your function
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
