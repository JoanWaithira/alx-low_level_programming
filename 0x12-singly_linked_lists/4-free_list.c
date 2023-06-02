#include "lists.h"
/**
 * free_list - A function that frees a list_t list
 *
 * @head: The first node
 *
 * Return: Always 0 (success)
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (temp != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
