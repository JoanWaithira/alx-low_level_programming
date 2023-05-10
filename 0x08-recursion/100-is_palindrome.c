#include "main.h"

int check_palindrome(char *s, int a, int length);
int _strlen_recur(char *s);

/**
 * is_palindrome - A function that checks if a string is a palindrome
 *
 * @s: The string in question
 *
 * Return: 1 if a  palindrome and 0 if otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recur(s)));
}

/**
 * _strlen_recur -  A function that returns the length of a string
 *
 * @s: string in question
 *
 * Return: length of the string
 */
int _strlen_recur(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recur(s + 1));
}

/**
 * check_palindrome - A function that checks for palindrome
 * @s: The string in question
 * @a: iterator
 * @length: length of the string
 *
 * Return: 1 if string is a palindrome and 0 if othewise
 */
int check_palindrome(char *s, int a, int length)
{
	if (*(s + a) != *(s + length - 1))
		return (0);
	if (a >= length)
		return (1);
	return (check_palindrome(s, a + 1, length - 1));
}


