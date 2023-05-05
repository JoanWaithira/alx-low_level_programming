#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A function that prints a buffer
 *
 * @b: the content of size bytes of the buffer pointed
 * @size: size
 *
 * Return: Always 0 (Success)
 */
void print_buffer(char *b, int size)
{
	int a = 0;
	int e;
	int c = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		e = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (c = 0; c < 10; c++)
		{
			if (c < e)
				printf("%02x", b[a + c]);
			else
				printf(" ");
			if (c % 2)
			{
				printf(" ");
			}
		}
		for (c = 0; c < e; c++)
		{
			int d = b[a + c];

			if (d < 32 || d > 132)
			{
				d = '.';
			}
			printf("%c", d);
		}
		printf("\n");
		a += 10;
	}
}
