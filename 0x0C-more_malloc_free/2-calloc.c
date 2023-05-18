#include "main.h"

/**
 * _calloc - A function that allocates memory for an array
 *
 * @nmemb: Array elements
 * @size: Size of elements
 *
 * Return: A pointer of allocated memory otherwise NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a = 0;
	char *ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (; a < nmemb * size; a++)
	{
		ptr[a] = 0;
	}

	return (ptr);
}
