#include "lists.h"

/**
 * listint_len - A function that returns number of elements in a linked list
 *
 * @h: The pointer
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	for (n = 0; h ; h = h->next)
	{
		n++;
	}
	return (n);
}
