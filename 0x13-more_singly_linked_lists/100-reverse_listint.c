#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 *
 * @head: A pointer to the first node
 *
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *curr = *head;
	listint_t *next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = old;
		old = curr;
		curr = next;
	}

	*head = old;

	return (*head);
}
