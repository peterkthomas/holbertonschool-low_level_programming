#include "holberton.h"

/**
 * *_strncpy - copies at most count characters of the src array to dest
 * @dest: dest pointer
 * @src: source pointer
 * @n: number chars to copy
 *
 * Return: copy of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

