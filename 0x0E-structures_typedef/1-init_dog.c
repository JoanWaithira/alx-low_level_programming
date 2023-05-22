#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A function that initialises a variable of struct dog
 *
 * @d: A pointer to initialise a variable of struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
