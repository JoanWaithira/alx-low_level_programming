#include "main.h"
/**
 * print_number - A function that prints an integer
 * @n: integer to be printed
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int ui;

	if (n < 0)
	{
		ui = -n;
		_putchar('-');
	}
	else
	{
		ui = n;
	}
	if (ui / 10)
	{
		print_number(ui / 10);
	}
	_putchar((ui % 10) + '0');
}

