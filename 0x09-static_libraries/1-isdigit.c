#include "main.h"
/**
 * _isdigit - A function that checks for a digit 0 to 9
 *
 * @c: digit to be checked
 * Return: 1 if char is digit, otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
