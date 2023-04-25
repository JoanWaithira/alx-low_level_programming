#include "main.h"

/**
 * main -Print 50 Fibonacci numbers starting with 1 & 2
 * Return: Always 0
 */
int main(void)
{
	int n = 0;
	long j = 1;
	long k = 2;

	while (n < 50)
	{
		if (n == 0)
		{
			printf("%ld", j);
		}
		else if (n == 1)
		{
			printf(", %ld", k);
		}
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		n++;
	}
	printf("\n");
	return (0);
}
