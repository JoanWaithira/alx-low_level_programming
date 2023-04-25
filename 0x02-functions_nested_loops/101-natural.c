#include "main.h"
/**
 * main - A program that computes and prints the sum of multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int z = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			z += n;
		}
		n++;
	}
	printf("%d\n", z);
	return (0);
}
