#include "main.h"
/**
 * array_range - A function that creates an array of integers
 *
 * @min: smalest value
 * @max: Largest value
 *
 * Return: The pointer to the newly creatd array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int b = 0;
	int c = min;

	if (min > max)
	{
		return (0);
	}
	ptr = malloc((max - min + 1) * sizeof(int));

	if (!ptr)
	{
		return (0);
	}
	while (b <= max - min)
	{
		ptr[b++] = c++;
	}
	return (ptr);
}
