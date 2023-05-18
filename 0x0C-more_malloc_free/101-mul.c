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

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
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

	while (s[a] != '\0')
	{
		a++;
	}

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
	char *ptr1, *ptr2;
	int len1, len2, len, i, carry, d1, d2, *res, a = 0;

	ptr1 = argv[1], ptr2 = argv[2];
	if (argc != 3 || !is_digit(ptr1) || !is_digit(ptr2))
		errors();
	len1 = _strlen(ptr1);
	len2 = _strlen(ptr2);
	len = len1 + len2 + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		res[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		d1 = ptr1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(ptr2) - 1; len2 >= 0; len2--)
		{
			d2 = ptr2[len2] - '0';
			carry += res[len1 + len2 + 1] + (d1 * d2);
			res[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
