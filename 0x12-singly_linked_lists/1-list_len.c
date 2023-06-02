#include "lists.h"
/**
 * list_len - A function that returns the number of elements in a linked list
 *
 * @h: Pointer
 *
 * Return: The number of elemets in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
