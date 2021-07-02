#include "holberton.h"

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
