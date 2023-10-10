#include "dog.h"

/**
 * init_dog - function entry point
 * @d: struct pointer
 * @name: dog name to be initialized
 * @age: dog age to be initialized
 * @owner: owners name
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
