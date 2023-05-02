#include "main.h"
/**
 * _strlen - A function that returns length of a string
 *
 * @s: The string in question
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	if (*s != '\0')
	{
		n++;
		s++;
	}
	return (strlen(s));
}
