#include "main.h"

/**
 * _isupper - A function that checks for uppercase characters
 *
 * @c: The characters in question
 * Return: 1 if char is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
