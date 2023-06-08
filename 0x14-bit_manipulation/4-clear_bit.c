#include "main.h"

/**
 * clear_bit - A function that sets the value of bit to 0
 *
 * @n: integre
 * @index: index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}

	*n = -(1UL << index) & *n;

	return (1);
}
