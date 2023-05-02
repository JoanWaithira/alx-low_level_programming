#include "main.h"
/**
 * _atoi - A function that convert a string to an integer
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int a = 0;
	int d = 0;
	int n = 0;
	int l = 0;
	int j = 0;
	int dig = 0;

	while (s[l] != '\0')
		l++;

	while (a < l && j == 0)
	{
		if (s[a] == '-')
			++d;

		if (s[a] >= '0' && s[a] <= '9')
		{
			dig = s[a] - '0';
			if (d % 2)
				dig = -dig;
			n = n * 10 + dig;
			j = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			j = 0;
		}
		a++;
	}

	if (j == 0)
		return (0);

	return (n);

}
