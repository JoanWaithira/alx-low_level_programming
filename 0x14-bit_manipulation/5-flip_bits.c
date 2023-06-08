#include "main.h"

/**
 * flip_bits - A function that returns the number of bits needed to flip
 *
 * @n: integer
 *
 * @m: unsigned log int
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a = 63;
	unsigned int count = 0;
	unsigned long int qst;
	unsigned long int result = n ^ m;

	for (; a >= 0; a--)
	{
		qst = result >> a;

		if (qst & 1)
		{
			count++;
		}
	}
	return (count);
}



