#include "main.h"
/**
 * _strstr - A function that locates a substring
 *
 * @haystack: A string to be located
 * @needle: A substring to be located
 *
 * Return: A pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	a = 0;

	if (*needle == 0)
	{
		return (haystack);
	}
	for (a = 0; *haystack; haystack++)
	{
		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a + 1] == '\0')
				{
					return (haystack);
					a++;
				}
			} while (haystack[a] == needle[a]);
		}
	}

	return ('\0');
}
