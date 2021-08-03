#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - makes a  dog_t
 *@name: name
 *@age: age
 *@owner: owner
 *
 *Return: doggie
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	doggie = malloc(sizeof(dog_t));

	if (!doggie)
		return (NULL);

	if (!name)
	{
		free(doggie);
		free(owner);
		return (NULL);

	if (!owner)
	{
		free(doggie)
		free(name);
		return (NULL);
	}

	doggie->name = name;
	doggie->age = age;
	doggie->owner = owner;

	return (doggie);
}

