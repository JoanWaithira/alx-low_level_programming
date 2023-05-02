#include "main.h"

/**
 * rev_string - A function that reverses a string
 *
 * @s: The string
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int a;
	int b;
	char rev = s[0];
	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		a--;
		rev = s[b];
		s[b] = s[a];
		s[a] = rev;
	}
}
