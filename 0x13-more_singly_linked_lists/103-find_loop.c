#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list
 *
 * @head: A pointer to the first node
 *
 * Return: The address of the node where loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (tortoise && hare && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;

		if (hare == tortoise)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (hare);
		}
	}
	return (NULL);
}
