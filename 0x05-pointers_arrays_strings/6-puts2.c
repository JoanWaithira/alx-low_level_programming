#include "main.h"
/**
 * puts2 - A function that prints other characters of a string
 *
 * @str: The string being printed
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int a;
	int b;
	int d;
	char *ch = str;

	a = 0;
	b = 0;

	while (*ch != '\0')
	{
		ch++;
		a++;
	}
	b = a - 1;
	for (d = 0; d <= b; d++)
	{
		if (d % 2 == 0)
		{
			_putchar(str[d]);
		}
	}
	_putchar('\n');
}


