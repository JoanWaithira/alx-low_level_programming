#include "main.h"
/**
 * _realloc - A function that reallocates a memory block
 *
 * @ptr: pointer
 * @old_size: Previous memory
 * @new_size: New size in bytes for the new mwmory block
 *
 * Return: Pointer otherwise NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *realloc;
	char *a;
	unsigned int b;

	if (ptr != NULL)
	{
		a = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (0);
	}
	realloc = malloc(new_size);
	if (realloc == NULL)
	{
		return (0);
	}
	for (b = 0; b < (old_size || b < new_size); b++)
	{
		*(realloc + b) = a[b];
	}
	free(ptr);
	return (realloc);
}
