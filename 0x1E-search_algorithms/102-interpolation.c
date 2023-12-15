#include "search_algos.h"
/**
 * interpolation_search -  searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: First index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l;
	size_t h;
	size_t p;

	if (array == NULL || size == 0)
		return (-1);
	l = 0;
	h = size - 1;

	while (l <= h)
	{
		p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (p < size)
			printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", p);
			break;
		}
		if (array[p] == value)
			return (p);
		else if (array[p] < value)
			l = p + 1;
		else
			h = p - 1;
	}
	return (-1);
}
