#include "main.h"
/**
 * print_triangle - Function that prints a triangle
 *
 * @size: Size of the triangle
 * Return: Always 0(Success)
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
				_putchar(' ');
			}
			for  (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

