#include "main.h"

/**
 * create-array - A function that creates an array of characters
 * @size: Size of data type
 *
 * @c: Character
 * Return: A pointer to the arrat or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *ch;

	ch = malloc(sizeof(char) * size);

	if (ch == NULL || size == 0)
	{
		return (NULL);
	}
	for (; a < size; a++)
	{
		ch[a] = c;
	}
	return (ch);
}
