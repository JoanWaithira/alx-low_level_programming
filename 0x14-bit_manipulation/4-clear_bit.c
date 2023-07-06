#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to o at a given index
 * @index: The index
 * @n: An integer
 * Return: 1 if it worked -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n &= (~(1UL << index));
	return (1);
}
