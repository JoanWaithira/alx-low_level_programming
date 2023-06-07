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

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (-1);
	}
	a = 0;

	while (current != NULL || a < index -1)
	{
		current = current ->next;
		a++;
	}
	if (current == NULL || current->next != NULL)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}

