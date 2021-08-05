#include "dog.h"
#include <stdlib.h>


/**
 * _strdup - Returns pointer to copy of string given as param
 * @str: Source string
 *
 * Return: NULL if insufficient memory, ptr to new string otherwise
 */
char *_strdup(char *str)
{
	char *new_str;
	int i;
	int length = 0;

	if (!str)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;

	new_str = malloc(sizeof(char) * (length + 1));

	if (!new_str)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	new_str[length] = '\0';

	return (new_str);
}

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
	doggie->name = _strdup(name);
	if (doggie->name == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	doggie->owner = _strdup(owner);
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
