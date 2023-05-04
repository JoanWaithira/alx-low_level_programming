#include "main.h"
/**
 * rot13 - A function that encodes a string using rot13
 * @ch: Characters of a string
 *
 * Return: Always 0 (Success)
 */

char *rot13(char *ch)
{
	int a = 0;
	int b;
	char lett[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char rotlet[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (; ch[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (ch[a] == lett[b])
			{
				ch[a] = rotlet[b];
				break;
			}
		}
	}
	return (ch);
}
