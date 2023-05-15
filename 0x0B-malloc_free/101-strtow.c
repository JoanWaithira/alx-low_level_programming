#include "main.h"

/**
 * word_count - A function that counts number of words in a string
 *
 * @s: The string to be split
 * Return: words that are split; NULL if string is NULL
 */
char word_count(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;

	for (; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
		{
			a = 0;
		}
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (b);
}

/**
 * strtow - A function that splits a string into words
 * @str: The string that is being split
 *
 * Return: Split words
 */
char **strtow(char *str)
{
	char **ch;
	char *tree;

	int a, b = 0, length = 0, w, e = 0;
	int first, last;

	while (*(str + length))
		length++;
	w = word_count(str);

	if (w == 0)
		return (NULL);
	ch = (char **) malloc(sizeof(char *) * (w + 1));
	if (ch == NULL)
		return (NULL);
	for (a = 0; a <= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (e)
			{
				last = a;
				tree = (char *)malloc(sizeof(char) *  (e + 1));
				if (tree == NULL)
					return (NULL);
				while (first < last)
					*tree++ = str[first++];
				*tree = '\0';
				ch[b] = tree - e;
				b++;
				e = 0;
			}
		}
		else if (e++ == 0)
			first = a;
	}
	ch[b] = NULL;
	return (ch);
}
