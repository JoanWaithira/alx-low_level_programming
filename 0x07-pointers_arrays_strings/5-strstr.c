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
	int b;

	a = 0;
	b = 0;

	for (a = 0; haystack[a]; a++)
	{
		for (b = 0; needle[b]; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}
		if (!needle[b])
		{
			return (&haystack[a]);
		}
	}
	return (0);
}
