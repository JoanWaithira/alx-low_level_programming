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
	unsigned int a;
	listint_t *temp = *head;
	listint_t *current = NULL;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (-1);
	}
	for (a = 0; a < index - 1; a++)
	{
		if (temp != NULL || temp->next != NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

