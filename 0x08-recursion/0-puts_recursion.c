#include "main.h"
/**
 * _puts_recursion - A function that prints a string followed by new line
 *
 * @s: string to be printed
 * Return: Always 0 (Succcess)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}


}
