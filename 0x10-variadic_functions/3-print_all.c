#include"variadic_functions.h"

/**
 * print_all - A function that prints anything
 *
 * @format: list of typ[es of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *ch, *s = "";

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", s, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(ap, double));
					break;
				case 's':
					ch = va_arg(ap, char *);

					if (!ch)
						ch = "(nil)";
					printf("%s%s", s, ch);
					break;
				default:
					a++;
					continue;
			}
			s = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(ap);
}
