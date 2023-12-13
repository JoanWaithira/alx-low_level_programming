#include "search_algos.h"

/**
 * jump_search - A function searches for a value in a sorted array of integers
 * @array: A pointer to the first element of array
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t left, right;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	jump = (size_t)sqrt(size);
	left = 0;
	right = 0;
	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	for (i = left; i < size && i <= right; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
