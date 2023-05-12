#include "main.h"
/**
 * main - A function that multiplies two numbers
 *
 * @argc: count argument
 * @argv: vector argument
 *
 * Return: Always (0) Success)
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	a = 0;
	b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
