#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all data of a linked list
 *
 * @head: The pointer to the first node 
 * Return: Always 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *curr = head;

	for (sum = 0; curr; curr = curr->next)
	{
		sum += curr->n;
	}
	return (sum);
}
