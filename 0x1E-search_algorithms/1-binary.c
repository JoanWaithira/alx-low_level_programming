#include "search_algos.h"

/**
 * binary_search - A function that searches for value in a sorted array
 * @array: A pointer to the first element of an array
 * @size: Number of elements in an array
 * @value: The value to search for
 *
 * Return: The index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (array == NULL)
	{
		return (-1);
	}
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
