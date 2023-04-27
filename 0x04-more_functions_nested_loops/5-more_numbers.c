#include "main.h"
/**
 * more_numbers - A function that prints 0-14 ten times
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int n;
	int i;

	for (n = 1; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
