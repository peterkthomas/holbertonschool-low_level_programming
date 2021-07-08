#include "holberton.h"

/**
 * *_strncat - concats two stings up to <x> bytes
 * @dest: ptr to dest string
 * @src: ptr to source string
 * @n: number of bytes from src to go to dest
 *
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;

	while (dest[i])
	{
		length++;
		i++;
	}

	for (i = 0; src[i] != '\0'  && i < n; i++)
	{
		dest[length++] = src[i];
	}
	return (dest);
}
