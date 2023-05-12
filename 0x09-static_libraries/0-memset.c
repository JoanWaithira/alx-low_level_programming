#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 * @s: pointer to memory area
 * @b: character
 * @n: bytes of the memory area
 *
 * Return: A pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		a--;
	}
	return (s);
}
