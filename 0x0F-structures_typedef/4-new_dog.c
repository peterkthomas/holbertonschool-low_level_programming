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
	{
		free(doggie);
		return (NULL);
	}
	doggie->name = _strcpy(name);
	if (doggie->name == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	doggie->owner = _strcpy(owner);
	if (!doggie->owner)
	{
		free(doggie->owner);
		free(doggie->name);
		free(doggie);
		return (NULL);
	}

	doggie->age = age;

	return (doggie);
}

/**
 * _strcpy - copies one string buffer to another
 * @dest: destination string buffer
 * @src: source string buffer
 *
 * Return: pointer to dest buffer
 */
char *_strcpy(char *dest, char *src)
{
        int i;

        for (i = 0; src[i] != '\0'; i++)
                dest[i] = src[i];

        dest[i] = '\0';

        return (dest);
}
