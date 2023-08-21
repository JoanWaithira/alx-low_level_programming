#include "main.h"
/**
 * _memset - A function that fills memory with constant byte
 * @s: Pointer to memory area
 * @b: character
 * @n: bytes of the memory area
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	a = 0;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
