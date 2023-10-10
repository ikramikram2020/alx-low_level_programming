#include "dog.h"

/**
 * free_dog -  frees dogs.
 * @d: the pointer to the dog
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
