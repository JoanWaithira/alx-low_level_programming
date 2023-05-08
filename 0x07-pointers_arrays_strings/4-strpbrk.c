#include "main.h"
/**
 * _strpbrk - A function that searches a string fo a set of bytes
 *
 * @s: string in question
 * @accept: the input
 *
 * Return: A pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	a = 0;

	for (; *s; s++)
	{
		for(a = 0; accept[a]; a++)
		{
			if (accept[a] == *s)
			{
				return (s);
			}
		}
	}
	return ('\0');
}
