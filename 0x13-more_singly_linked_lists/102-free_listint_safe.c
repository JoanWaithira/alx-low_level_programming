#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t list
 *
 * @h: A pointer to the first node
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *curr;
	int new;

	if (h == NULL)
	{
		return (0);
	}

	if (*h == NULL)
	{
		return (0);
	}

	while (*h != NULL)
	{
		new = *h - (*h)->next;
		if (new > 0)
		{
			curr = (*h)->next;
			free(*h);
			*h = curr;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
