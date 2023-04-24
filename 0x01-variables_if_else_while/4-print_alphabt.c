#include <stdio.h>
/**
 * main - Program that prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n != 101 &&  n != 113)
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
