#include "main.h"
/**
 * _isdigit - A function that checks for a digit 0-9
 *
 * @c: digit
 * Return: 1 is c is digit, otherwise return 0
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
