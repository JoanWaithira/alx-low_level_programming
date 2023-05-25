#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameter
 *
 * @n: The integer in question
 * @...: The parameters to calculate th sum of
 *
 * Return: if n == 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int a = 0;

	va_start(ap, n);
	sum = 0;

	while (a < n)
	{
		sum += va_arg(ap, int);
		a++;
	}

	va_end(ap);
	return (sum);
}
