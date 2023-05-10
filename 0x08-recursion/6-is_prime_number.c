#include "main.h"

int defined_prime_number(int n, int a);

/**
 * is_prime_number - A function that returns 1 if integer is a prime number
 *
 * @n: The integer
 * Return: 1 if output is a prime number or 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (defined_prime_number(n, n - 1));
}

/**
 * defined_prime_number - Defines the recursiveness of the prime number
 *
 * @n: The integer
 * @a: The iterator
 *
 * Return: 1 if output is a prime number or 0 if otherwise
 */
int defined_prime_number(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	if (n % a == 0 && a > 0)
	{
		return (0);
	}
	return (defined_prime_number(n, a - 1));
}
