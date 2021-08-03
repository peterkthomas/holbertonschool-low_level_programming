#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - inits a dog
 * @d: structure
 * @name: dog name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d-> owner = owner;
	}
}
