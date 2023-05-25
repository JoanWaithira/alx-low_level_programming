#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers followed by a new line
 *
 * @n: The number of integers passed to the function
 * @separator: The string to be printed between numbers
 *
 * Return: A new line at the end of the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;

	va_start(ap, n);

	a = 0;

	while (a < n)
	{
		printf("%d", va_arg(ap, int));

		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		a++;
	}
	printf("\n");

	va_end(ap);
}
