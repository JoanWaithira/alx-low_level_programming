#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings
 *
 * @s1: String one
 * @s2: String two
 * @n: number of bytes
 *
 * Return: Pointer to a newly allocated space otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c, d;
	char *ptr;

	for (; s1[a] != '\0'; a++)

	for (; s2[b] != '\0'; b++)

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n > b)
	{
		n = b;
	}
	c = a + n;
	ptr = malloc(c + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < c; d++)
	{
		if (d < a)
		{
			ptr[d] = s1[d];
		}
		else
			ptr[d] = s2[d - a];
	}
	ptr[d] = '\0';
	return (ptr);
}
