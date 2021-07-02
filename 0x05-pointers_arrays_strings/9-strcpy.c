#include "holberton.h"

/**
 * strcpy - copies one string buffer to another
 * @dest: destination string buffer
 * @src: source string buffer
 *
 * Return: pointer to dest buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0') /* copy the whole string */
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
