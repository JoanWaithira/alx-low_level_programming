#include "main.h"
/**
 * print_numbers - A function that prints the numbers from 0-9
 *
 * Return: Always 0 Success
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
