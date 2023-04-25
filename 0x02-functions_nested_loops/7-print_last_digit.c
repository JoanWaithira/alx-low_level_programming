#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 *
 * @n: integer
 * Return: The value of last digits
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		_putchar(-ld + '0');
		return (-ld);
	}
	else
	{
		_putchar(ld + '0');
		return (ld);
	}
	_putchar('\n');
}

