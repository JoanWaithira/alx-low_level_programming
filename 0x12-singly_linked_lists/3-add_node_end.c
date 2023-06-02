#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a string
 *
 * @head: The first node
 * @str: A string that needs to be duplicated
 *
 * Return: The address of the new element or NUll
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len;
	list_t *temp = *head;

	for (len = 0; str[len]; len++)

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = node;
	return (node);
}
