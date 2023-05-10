#include "main.h"
/**
 * _strlen_recursion - A unction that returns the length of a string
 *
 * @s - The string
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int length;

	length = 0;

	if (*s)
	{
		length += _strlen_recursion(s + 1);
		length++;
	}
	return (length);
}
