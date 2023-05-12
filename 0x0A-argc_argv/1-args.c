#include "main.h"

/**
 * main - a program that prints all the argumentspassed into it
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
