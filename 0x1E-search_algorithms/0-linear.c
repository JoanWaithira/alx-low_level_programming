#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * @array: A pointer to the first element
 * @size: Number of elements in an array
 * @value: The value to search for
 * Return: The first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (; a < size; a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
	}
	return (-1);
}
