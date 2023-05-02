#include "main.h"
/**
 * *_strcpy - A function that copies the string pointed to by src
 * @src: Source
 * @dest: Destination
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
