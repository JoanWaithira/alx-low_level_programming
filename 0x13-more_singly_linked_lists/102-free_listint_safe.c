#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t list
 *
 * @h: A pointer to the first node
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{