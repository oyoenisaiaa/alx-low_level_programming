#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs
 * frees memory allocated for a struct dog
 * @d: the struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
