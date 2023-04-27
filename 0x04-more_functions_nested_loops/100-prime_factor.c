#include "main.h"
/**
 * main - A program that finds and prints the largest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int larg = -1;
	long int a;

	while (n % 2 == 0)
	{
		larg = 2;
		n /= 2;
	}
	for (a = 3; a <= sqrt(n); a = a + 2)
	{
		while (n % a == 0)
		{
			larg = a;
			n = n / a;
		}
	}
	if (n > 2)
		larg = n;

	printf("%ld\n", larg);

	return (0);
}
