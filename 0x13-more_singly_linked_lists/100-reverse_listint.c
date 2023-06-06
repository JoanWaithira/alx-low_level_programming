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
	listint_t *temp = *head;
	listint_t *next;


	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		return *head;
	}

	while (temp != NULL)
	{
		next = temp->next;
		temp->next = old;
		old = temp;
		temp = next;
	}
	*head = old;
	return (*head);
}
