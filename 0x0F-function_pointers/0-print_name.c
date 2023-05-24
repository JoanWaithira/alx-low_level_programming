#include"function_pointers.h"

/**
 * print_name - A function that prints a name
 *
 * @name: A pointer of that name to be printed
 * @f: A pointer pointing to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if ((f == NULL) || (name == NULL))
	{
		return;
	}
	f(name);
}
