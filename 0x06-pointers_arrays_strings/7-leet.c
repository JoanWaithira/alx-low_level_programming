#include "main.h"
/**
 * *leet - A function that encodes a string into 1337
 * @ch: characters of a string
 *
 * Return: Always 0 (Success)
 */
char *leet(char *ch)
{
	int a = 0;
	int b;
	char old[] = "aAeEoOtTlL";
	char new[] = "4433007711";

	for (; ch[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (ch[a] == old[b])
			{
				ch[a] = new[b];
			}
		}
	}
	return (ch);
}



