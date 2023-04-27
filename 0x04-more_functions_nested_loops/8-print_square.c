#include "main.h"
/**
 * print_square - A function that prints a square
 *
 * @size: Size of the square
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
