#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 *
 * @index: The index
 * @n: integer
 * Return: The value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
