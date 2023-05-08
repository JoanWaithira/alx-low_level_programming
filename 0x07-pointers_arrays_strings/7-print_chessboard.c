#include "main.h"
/**
 * print_chessboard - A function that prints the chessboard
 *
 * @a: The integer
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	b = 0;
	c = 0;

	for (; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}

