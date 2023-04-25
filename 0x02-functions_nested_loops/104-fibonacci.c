#include"main.h"
/**
 * main - A program that finds and prints the 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	unsigned long int a = 0, b = 1, next = 0;

	while (n < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (n < 97)
		{
			printf(", ");
		}
		n++;
	}
	putchar('\n');
	return (0);
}

