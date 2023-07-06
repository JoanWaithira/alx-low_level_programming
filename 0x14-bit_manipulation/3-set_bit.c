#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1
 * @index: given index
 * @n: integer
 * Return: 1 if it works and -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (*n & ~(1UL << index)) | (1UL << index);
	return (1);
}
