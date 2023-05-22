#include <stdio.h>

/**
 * main - A program that prints the name of a filr it was compiled from
 *
 * Return: Successfully print name of file
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
