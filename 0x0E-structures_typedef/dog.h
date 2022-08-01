#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - init var of specific type struct
 * @d: dog to be init
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)

	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
