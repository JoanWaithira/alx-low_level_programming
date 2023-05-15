#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 *
 * @str: A string
 * Return: Null if str = NULL
 */
char *_strdup(char *str)
{
	int a = 0;
	int b;
	char *ch;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[a] != '\0')
	{
		a++;
	}

	ch = malloc(sizeof(char) * (a + 1));
	if (ch == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b]; b++)
	{
		ch[b] = str[b];
	}
	return (ch);
}
