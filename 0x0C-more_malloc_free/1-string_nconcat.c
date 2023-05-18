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
	unsigned int a = 0, b = 0, c;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)

	for (b = 0; s2[b] != '\0'; b++)

	if (n > b)
	n = b;
	ptr = malloc((a + n + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		ptr[c] = s1[c];
	}
	for (; c < (a + n); c++)
	{
		ptr[c] = s2[c - a];
	}
	ptr[c] = '\0';
	return (ptr);
}
