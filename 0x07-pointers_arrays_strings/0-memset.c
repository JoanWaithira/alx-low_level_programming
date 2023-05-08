#include "main.h"
/**
 * _memset - A function that fills memory with constant byte
 * @s: Pointer to memory area
 * @b: character
 * @n: unsigned integer
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	a = 0;

	while (n > 0)
	{
		a++;
		s[a] = b;
		n--;
	}
	return (s);
}
