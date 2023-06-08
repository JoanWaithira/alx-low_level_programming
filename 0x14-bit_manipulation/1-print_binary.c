#include "main.h"
#include <stddef.h>


/**
 * print_binary - A function that prints the binary representation of a number
 *
 * @n: The number in question
 *
 * Return: Binary
 */
void print_binary(unsigned long int n)
{
	int a = 63;
	unsigned long int binary;
	int x = 0;

	if (!x)
	{
		_putchar('0');
	}

	for(; a >= 0; a++)
	{
		binary = n >> a;

		if (binary & 1)
		{
			_putchar('1');
			x++;
		}
		else if (x)
		{
			_putchar('0');
		}
	}
}
