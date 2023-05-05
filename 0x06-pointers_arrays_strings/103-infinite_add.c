#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer
 * Return: Always zero (Success)
 */

void rev_string(char *n)
{
	int b = 0;
	int c = 0;
	char t;

	while (n[b] != '\0')
	{
		b++;
	}
	b--;

	for (; c < b;  c++, b--)
	{
		t = n[c];
		n[c] = n[b];
		n[b] = t;
	}
}


/**
 * infinite_add - A function that adds two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: The buffer the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: Always (0) Success
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, c = 0, d = 0;
	int v1 = 0, v2 = 0, t = 0;

	while (n1[b] != '\0')
		b++;
	while (n2[c] != '\0')
		c++;
	b--;
	c--;

	if (c >= size_r || b >= size_r)
		return (0);
	while (c >= 0 || b >= 0 || a == 1)
	{
		if (b < 0)
			v1 = 0;
		else
			v1 = n1[b] - '0';
		if (c < 0)
			v2 = 0;
		else
			v2 = n2[c] - '0';
		t = v1 + v2 + a;
		if (t >= 10)
			a = 1;
		else
			a = 0;
		if (d >= (size_r - 1))
			return (0);
		r[d] = (t % 10) + '0';
		d++;
		c--;
		b--;
	}
	if (d == size_r)
		return (0);
	r[d] = '\0';
	rev_string(r);
	return (r);
}
