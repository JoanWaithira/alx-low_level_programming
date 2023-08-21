#include "main.h"
/**
 * _memcpy - A function that copies the memory area
 *
 * @dest: Destination of memory storage
 * @src: Source of memory storage
 * @n: Number of bytes to be copied
 *
 * Return: A pointer to a dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b;

	a = 0;
	b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
