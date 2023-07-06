#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int a;

	if (b == NULL)
	{
		return (0);
	}
	a = 0;
	number = 0;
	while (b[a])
	{
		if (b[a] < '0')
		{
			return (0);
		}
		else if (b[a] > '1')
		{
			return (0);
		}
		number = 2 * number + (b[a] - '0');
		b++;
	}
	return (number);
}
