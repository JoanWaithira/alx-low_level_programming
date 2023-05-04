#include "main.h"
/**
 * cap_string - A function that capitalizes all words of a string
 *
 * @ch: characters
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *ch)
{
	int a = 0;
	int b;
	int n[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	while (ch[a] != '\0')
	{
		if (ch[a] >= 'a' && ch[a] <= 'z')
		{
			if (a == 0)
			{
				ch[a] = ch[a] - 32;
			}
			else
			{
				for (b =0; b <= 12; b++)
				{
					if (n[b] == ch[a] -1)
					{
						ch[a] = ch[a] -32;
					}
				}
			}
		}
		a++;
	}
	return (ch);
}

							

