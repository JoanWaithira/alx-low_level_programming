#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 * @n: integer in question
 * @index: startin from zero of the bit you want to set
 *
 * Return: 1 or -1
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n =  (1UL << index | *n);


	if (index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}
	return (1);
}

