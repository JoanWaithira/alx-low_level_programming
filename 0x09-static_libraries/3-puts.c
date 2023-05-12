#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: A string in question
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
