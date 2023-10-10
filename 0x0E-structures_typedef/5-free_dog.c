#include "dog.h"

/**
 * free_dog - frees memory allocated to a struct
 * @d: struct to be freed
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
