#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of a list
 *
 * @head: A pointer to the first node
 *
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeds and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *prev = NULL;
	unsigned int a;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	a = 0;

	while (curr != NULL && a < index)
	{
		prev = curr;
		curr = curr->next;
		a++;
	}
	if (curr == NULL)
	{
		return (-1);
	}

	prev->next = curr->next;
	free(curr);

	return (1);
}
