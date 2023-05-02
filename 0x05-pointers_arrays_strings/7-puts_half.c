#include "main.h"

/**
 * puts_half - A function hat prints half of a string
 *
 * @str: A string to be printed
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int i;
	int n;
	int c;

	c = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		c++;
	}
	n = (c / 2);
	if ((c % 2) == 1)
	{
		n = ((c + 1) / 2);
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
