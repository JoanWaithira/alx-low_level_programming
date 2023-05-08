#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 *
 * @s: The string in question
 * @c: The character in the string s
 * Return : A pointer to the first occurence of the character c
 */

char *_strchr(char *s, char c)
{
	int a;

	a = 0;

	for (a = 0; s[a] > '\0'; a++)
	{
		if (c == s[a])
		{
			return (&s[a]);
		}
	}
	return (0);
}
