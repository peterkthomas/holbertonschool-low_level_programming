#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and inits it
 *		with a specific char.
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: NULL if size is zero or fail. Ptr to array otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (!size)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (!arr)
		return (NULL);

	for (i = 0; i < size, i++)
		arr[i] = c;

	return (arr);
}
