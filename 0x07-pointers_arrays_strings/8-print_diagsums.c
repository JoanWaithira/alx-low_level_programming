#include "main.h"
/**
 * print_diagsums - A function that prints the sum of the two diagonals
 *
 * @a: integer
 * @size: size
 *
 * Return: Sum of two integers
 */
void print_diagsums(int *a, int size)
{
	int b;
	int c;
	int d;

	b = 0;
	c = 0;
	d = 0;

	for (d = 0; d < size; d++)
	{
		b = b + a[d * size + d];
	}
	for (d = size - 1; d >= 0; d--)
	{
		c += a[d * size + (size - d - 1)];
	}
	printf("%d, %d\n", b, c);
}
