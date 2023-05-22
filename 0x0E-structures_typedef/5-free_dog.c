#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees dogs
 *
 * @d: pointer to wthat is to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
