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
    size_t len = 0;
    listint_t *current = *h;
    listint_t *temp = NULL;

    if (!h || !*h)
        return len;

    while (current != NULL)
    {
        if (current <= current->next)
        {
            temp = current;
            current = current->next;
            free(temp);
            len++;
        }
        else
        {
            free(current);
            len++;
            break;
        }
    }

    *h = NULL;

    return len;
}

