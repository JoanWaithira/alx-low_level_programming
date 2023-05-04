#include "main.h"
/**
 * *_strncpy - A function that copies a string
 *
 * @src: Source pointer
 * @dest: destination pointer
 * @n: number of bytes
 *
 * Return: dest copy of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for ( ; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
