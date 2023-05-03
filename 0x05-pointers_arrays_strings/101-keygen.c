#include "main.h"
/**
 * main - A program that generates random valid passport 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int a;
	int sum = 0;
	int b;

	srand(time(NULL));
	for (a = 0; a < 100; a++)
	{
		pass[a] = rand()%78;
		sum += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2272 - sum) - '0' < 78)
		{
			b = 2772 -sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
