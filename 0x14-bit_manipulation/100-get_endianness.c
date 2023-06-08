#include "main.h"

/**
 * get_endianness - A functtion that checks the endianness
 *
 * Return: Always 0 (success)
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *endian = (char *) &a;

	return (*endian);
}
