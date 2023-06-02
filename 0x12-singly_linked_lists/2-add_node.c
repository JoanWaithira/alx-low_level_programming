#include "lists.h"

/**
 * add_node - A function that adds a node at the beginning of a list_t list
 * @head: The first node
 * @str: Needs to be duplicated
 *
 * Return: The address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len;

	for (len = 0; str[len]; len++)

	/*Allocating memory to node */
	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	/**
	 * if (node->str == NULL)
	 *{
	 *	free(node);
	 *	return (NULL);
	 * }
	 */
	node->len = len;
	node->next = *head;
	*head = node;

	return (node);
}

