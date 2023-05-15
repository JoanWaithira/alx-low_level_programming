#include "main.h"

/**
 * argstostr - A function that concatenates all aruguments of your program
 *
 * @ac: First argument
 * @av: Second argument
 * Return: Concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char *ch;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (; av[a][b]; b++)
		{
			d++;
		}
	}
	d += ac;
	ch = malloc(sizeof(char) * d + 1);
	if (ch == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ch[c] = av[a][b];
			c++;
		}
		if (ch[c] == '\0')
		{
			ch[c++] = '\n';
		}
	}
	return (ch);
}
