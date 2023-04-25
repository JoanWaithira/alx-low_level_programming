#include "main.h"
/**
 * main - A program that prints sum of the even valued terms and a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	long j = 1;
	long k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
		{
			sum += k;
			j = k - j;
		}
		n++;
	}
		printf("%ld\n", sum);
	return (0);
}
