#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a linked list
 *
 * @head: The pointer to the first node
 * @index: integere
 *
 * Return: NULL if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *curr = head;

	for (a = 0; curr && a < index; a++)
	{
		curr = curr->next;
	}
	return (curr ? curr : NULL);
}
