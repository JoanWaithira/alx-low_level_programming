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
	int a = 0;
	int b = 0;

	for (; dest[a] != '\0'; a++)

	for (; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';
	return (dest);
}
