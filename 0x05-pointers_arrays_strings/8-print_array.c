#include "main.h"
#include <stdio.h>
/**
 * print_array - A function that prins elements of an array of integers
 * @a: integer one
 * @n: integer two
 * Return: Always 0 Success
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
	if (b == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}


