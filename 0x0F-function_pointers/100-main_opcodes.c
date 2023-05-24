#include "function_pointers.h"

/**
 * main - A function that prints the opcodes of its own function
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;
	a = 0;

	while (a < b)
	{
		if (a == b - 1)
		{
			printf("%02hhx\n", ptr[a]);
			break;
		}
		printf("%02hhx ", ptr[a]);
		a++;
	}
	return (0);
}
