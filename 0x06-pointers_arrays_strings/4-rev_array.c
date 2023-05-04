#include "main.h"
/**
 * reverse_array - A function that reverses content of an array
 *
 * @a: integer one
 * @n: number of elements of the array
 *
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int first = 0;
	int last;

	for (first = 0; first < n--; first++)
	{
		last = a[first];
		a[first] = a[n];
		a[n] = last;
	}
}
