#include "holberton.h"

/**
 * _calloc - allocate memory for an array of elements
 *				all size bytes long, all at 0
 * @nmemb: number of elements
 * @size: size in bytes
 *
 * Return: pointer to allocated memory, or NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t i;

	if (!nmemb)
		return (NULL);

	if (!size)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
