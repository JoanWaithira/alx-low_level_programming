#include "main.h"
/**
 * *_strcat - A function that concatenates two strings
 * @*src: pointer to source
 * @*dest: pointer to destination
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int a = -1;
	int b = 0;

	while (dest[b] != '\0')
	{
		b++;
	}
	do
	{
		a++;
		dest[b] = src[a];
		b++;
	}
	while (src[a] != '\0');
	return (dest);
}
