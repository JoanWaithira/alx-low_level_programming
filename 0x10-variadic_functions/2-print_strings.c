#include "variadic_functions.h"

/**
 * print_strings - A function that prints anything
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 * @...: A range of strings to be printed
 *
 * Description: If separator is NULL don't print it, otherwise print nil
 * Return: A new line
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *ch;
	unsigned int a;

	va_start(ap, n);

	a = 0;

	while (a < n)
	{
		ch = va_arg(ap, char *);

		if (ch == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ch);
		}
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		a++;
	}
	printf("\n");

	va_end(ap);
}
