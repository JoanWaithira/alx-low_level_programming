#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic character
 * @c: ASCII character
 *
 * Return: 1 if a letter is lower/uppercase; 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
