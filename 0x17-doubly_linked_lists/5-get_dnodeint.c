#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: The beginning
 * @index: of the node
 * Return: The nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int size = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	node = head;
	while (node)
	{
		if (index == size)
		{
			return (node);
			size++;
			node = node->next;
		}
	}
	return (NULL);
}
