#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - A function that converts binary to unsigned int
 *
 * @b: A string of 0 to 1
 * Return: 0 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int binary = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (; b[a]; a++)
	{
		if (b[a] < '0')
		{
			return (0);
		}
		if (b[a] > '1')
		{
			return (0);
		}
		binary = 2 * binary + (b[a] - '0');
	}
	return (binary);
}
