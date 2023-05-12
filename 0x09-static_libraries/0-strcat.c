#include "main.h"
/**
 * _strcat - A function that concatenates two strings
 *
 * @src: source pointer
 * @dest: destination pointer
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}


