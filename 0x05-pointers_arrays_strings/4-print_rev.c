#include "main.h"

/**
 * print_rev - A frunction that prints a string in reverse
 *
 * @s: The string
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int a;
	int b;
	a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for(b = a; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

