#include "main.h"

/**
 * print_binary - A function that prints binary representation of a number
 * @n: Number in question
 * Return: Binary representation of the number
 */
void print_binary(unsigned long int n)
{
	unsigned long int decimal;
	int a = 63;
	int b = 0;

	while (a >= 0)
	{
		decimal = n >> a;

		if (decimal & 1)
		{
			_putchar('1');
			b++;
		}
		else if (b)
		{
			_putchar ('0');
		}
		a--;
	}
	if (b == 0)
	{
		_putchar ('0');
	}
}
