#include "main.h"
/**
 * string_toupper - A function that changes lowercase to uppercase
 * @ch: characters
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *ch)
{
	int n = 0;

	while (ch[n] != '\0')
	{
		if (ch[n] >= 'a' && ch[n] <= 'z')
		{
			ch[n] = ch[n] - 32;
		}
		ch++;
	}
	return (ch);
}
