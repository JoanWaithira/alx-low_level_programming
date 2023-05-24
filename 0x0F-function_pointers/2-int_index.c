#include"function_pointers.h"

/**
 * int_index - A function that searches for an integer
 *
 * @array: array
 * @size: number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 * Return: Returns the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if ((size <= 0) || (array == NULL) || (cmp == NULL))
	{
		return (-1);
	}
	while (a < size)
	{
		if (cmp(array[a]))
		{
			return (a);
		}
		a++;
	}
	return (-1);
}

