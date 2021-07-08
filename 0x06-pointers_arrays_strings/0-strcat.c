#include "holberton.h"

/**
 * _strcat - concat's src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
