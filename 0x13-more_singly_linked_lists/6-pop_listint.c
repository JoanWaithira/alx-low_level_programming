#include "lists.h"

/**
 * pop_listint - A function that deletes the head node and returns its data
 *
 * @head: The pointer to the first node
 *
 * Return: NULL if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int a;

	if (head != NULL ||*head != NULL)
	{
		return (0);
	}
	a = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (a);
}
