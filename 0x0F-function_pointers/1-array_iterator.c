#include"function_pointers.h"
/**
 * array_iterator - A function that executes a function given as a parameter
 *
 * @array: The array in question
 * @size: The size pof the array
 * @action: A pointer to the function you need to use
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if ((action == NULL) || (array == NULL))
	{
		return;
	}
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
