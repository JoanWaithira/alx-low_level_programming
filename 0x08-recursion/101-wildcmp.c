#include "main.h"
/**
 * wildcmp - Compares the string
 * @s1: string one pointer
 * @s2: string two pointer
 *
 * Return: Always 0 (success)
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '*' && *s2 != '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else if (*s2 == *s1)
	{
		return (wildcmp(s2 + 1, s1 + 1));
	}
	return (0);
}



