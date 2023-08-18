#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node at index 
 * @index: The index of a node
 * Return: 1 if it succeeds and -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *first_head;
	dlistint_t *second_head;
	unsigned int a = 0;

	first_head = *head;

	if(first_head != NULL)
	{
		while (first_head->prev != NULL)
		{
			first_head = first_head->prev;
		}
	}
	while (first_head != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = first_head->next;
				if(*head != NULL)
				{
					(*head)->prev = NULL;
				}
			}
			else
			{
				second_head->next = first_head->next;

				if (first_head->next != NULL)
				{
					first_head->next->prev = second_head;
				}
			}
			free(first_head);
			return (1);
		}
		second_head = first_head;
		first_head = first_head->next;
		a++;
	}
	return (-1);
}
