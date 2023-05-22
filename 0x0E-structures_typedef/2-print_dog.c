#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - A function that prints a struct dog
 * @d: A pointer of struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
