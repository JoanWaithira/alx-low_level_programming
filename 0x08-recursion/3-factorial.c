#include "main.h"
/**
 * factorial - A function that returns the factorial of a given number
 *
 * @n: the integer to be factorised
 * Return: The factorial of the number
 *
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
