#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc
 *
 * @b: Unsigned integer
 *
 * Return: A pointer to the allocated memor; otherwise a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b * sizeof(int));
	if (pointer == NULL)
	{
	       exit(98);
	}
	return (pointer);
}
