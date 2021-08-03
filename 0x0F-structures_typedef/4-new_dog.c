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

	doggie = malloc(sizeof(struct dog));

	if (doggie == NULL)
		return (NULL);
	doggie->name = name;
	if (doggie->name == NULL)
	{
		free(doggie);
		free(owner);
		return (NULL);
	}
	doggie->owner = owner
	if (!doggie->owner)
	{
		free(doggie);
		free(name);
		return (NULL);
	}

	doggie->age = age;

	return (doggie);
}

