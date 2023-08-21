#include "main.h"
/**
 * *_strncat - A function that concatenates two strings
 * @src: Source pointer
 * @dest: Destination pointer
 * @n: number of bytes
 *
 * Return: A string Dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];

	dest[a + b] = '\0';
	return (dest);
}
