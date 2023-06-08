#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 *
 * @n: unsigned long int
 * @index: The index, starting from 0 to the bit you want to get
 *
 * Return: The index or 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int binary;

	binary = (n >> index) & 1;

	if (index > (sizeof(unsigned long int) *8) -1)
	{
		return (-1);
	}
	return (binary);
}
