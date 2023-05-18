#include "main.h"
/**
 * is_digit - A function that checks for a digit
 * @s: The string in question
 *
 * Return: 0 if a non-digit is found
 */
int is_digit(char *s)
{
	int a;

	a = 0;

	for (; s[a]; a++)
	{
		if (s[a] < '0' || s[a] > '9')
		{
			return (0);
		}
	}

	return (1);
}

/**
 * _strlen - A function that returns the length of a string
 *
 * @s: The string in questiom
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	for (; s[a] != '\0'; a++)
	return (a);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}



/**
 * main - A program that multiplies two positive numbers
 *
 * @argv: Agrument vector
 * @argc: Argument count
 *
 * Return: Product of two numbers
 */
int main(int argc, char *argv[])
{
	char *ptr;
	char *ptr2;
	int *res;
	int a, b, c, d, e, g, h;

	ptr = argv[1], ptr2 = argv[2];

	if (argc != 3 || !is_digit(ptr) || !is_digit(ptr2))
	{
		errors();
	}
	a = _strlen(ptr);
	b = _strlen(ptr2);
	c = a + b + 1;

	res = malloc(sizeof(int) * c);

	if (!res)
	{
		return (1);
	}
	for(d = 0; d <= a + b; d++)
	{
		res[d] = 0;
	}
	for (a = a - 1; a >= 0; a--)
	{
		f = ptr[a] - '0';
		e = 0;
		
		for (b = _strlen(ptr2) - 1; b >= 0; b--)
			{
				b = ptr2[b] - '0';
				e += res [a + b + 1] + (g * h);
				res[a + b + 1] = e % 10;
				e /= 10;
			}
		if (e > 0)
		{
			res[a + b + 1] += e;
		}
	}
	for (d = 0; d < c - 1; d++)
	{
		if (res[c])
			j = 1;
		if (j)
			_putchar(res[d] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
		
}

