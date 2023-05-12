#include "main.h"
/**
 * main - A program that prints all arguments it receives
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;

	a = 0;

	for (; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
