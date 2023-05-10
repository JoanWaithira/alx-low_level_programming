#include "main.h"
int defined_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - Returns the square root of a number
 *
 * @n: The number to be aquare-rooted
 *
 * Return: The square - root of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (defined_sqrt_recursion(n, 0));
}

/**
 * defined_sqrt_recursion - Returns the natural squareroot of a number
 * @n: the number to be square- rooted
 * @a: the iterator
 *
 * Return: the square- root of number
 */
int defined_sqrt_recursion(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	if (a * a > n)
	{
		return (-1);
	}
	return (defined_sqrt_recursion(n, a + 1));
}
