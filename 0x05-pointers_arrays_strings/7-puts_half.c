#include "main.h"

/**
 * puts_half - A function that prints half of a string
 *
 * @str: The string printed
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int a;
	int b;
	int c;

	c = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		c++;
	}
	b = c / 2;

	if ((c % 2) == 1)
	{
		b = ((c + 1) / 2);
	}
	for ( a = b ; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
