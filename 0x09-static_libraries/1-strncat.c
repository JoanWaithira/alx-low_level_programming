#include "main.h"

/**
 * *_strcat - A function that concatenates two strings
 *
 * @src: Pointer to source
 * @dest: pointer to destination
 * @n: number of bytes
 *
 * Return: A string
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
