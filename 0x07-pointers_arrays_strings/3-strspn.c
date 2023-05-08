#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: Segment
 * @accept: 
 *
 * Return: The number of bytes in the initial segemnt of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;

	a = 0;
	b = 0;

	for (; *s; s++)
	{
		for (b = 0; accept[b]; b++)
		{
			if(accept[b] == *s)
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
			{
				return (a);
			}
		}
	}
	return (a);
}
