#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 *
 * @head: A pointer to the first node
 *
 * Return: Always (0) Success
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
