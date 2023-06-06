#include "lists.h"
/**
 * free_listint2 - A function that frees a list_t list
 *
 * @head: The first node
 *
 * Return: Always 0 (success)
 */
void free_listint2(listint_t **head)
{
	listint_t *a;

	if (!head)
	{
		return;
	}
	while (*head != NULL)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}
	*head = NULL;
}
