#include "main.h"
/**
 * main - A program that prints sum of the even valued terms and a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	long j = 1, k = 2, sum = 0, next;

	for (n = 1; n <= 33; ++n)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);
	return (0);
}
