#include "main.h"

/**
 * flip_bits - A  function that returns the number of bits
 * @n: an integer
 * @m: second integer
 *
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int old;
	int a;
	int b;

	a = 63;
	b = 0;

	while (a >= 0)
	{
		old = (n ^ m) >> a;
		if (old & 1)
		{
			b++;
		}
		a--;
	}
	return (b);
}
