#include "main.h"
/**
 * str_concat - A function that concatenates two string
 * @s1: first string
 * @s2: second string
 * Return: Two strings
 */
char *str_concat(char *s1, char *s2)
{
	int a;
	int b;
	char *ch;

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

	ch = malloc(sizeof(char) * (a + b + 1));

	if (ch == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		ch[a] = s1[a];
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		ch[a] = s2[b];
		a++;
	}
	ch[a] = '\0';
	return (ch);
}

