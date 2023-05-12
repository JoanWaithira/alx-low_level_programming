#include "main.h"
/**
 * main - A program that adds [positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always (0) Success.
 */
int main(int argc, char *argv[])
{
	int a;
	unsigned int b;
	char *ch;
	unsigned int sum = 0;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			ch = argv[a];

			for (b = 0; b < strlen(ch); b++)
			{
				if (ch[b] < 48 || ch[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(ch);
			ch++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}

