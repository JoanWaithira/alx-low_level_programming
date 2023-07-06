#include "main.h"

/**
 * get_endianness - A function that checks endianness
 *
 * Return: Always 0 (Success)
 */
int get_endianness(void)
{
	unsigned int a;
	char *character;

	a = 1;
	character = (char *) &a;

	return (*character);
}
