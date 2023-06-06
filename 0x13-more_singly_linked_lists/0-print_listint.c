#include "lists.h"

/**
 * print_listint - A function that prints all elements of a listint_t list
 *
 * @h: the pointer
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	for (n = 0; h; h = h->next)
	{
		printf("%d\n", h->n);
		n++;
	}

	return (n);
}
