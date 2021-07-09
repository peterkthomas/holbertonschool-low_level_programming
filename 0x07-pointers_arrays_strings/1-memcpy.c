#include "holberton.h"

/**
 * _memcpy - copies memory areas
 * @dest: destination memory area
 * @src: source area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr_dest = dest;
	char *ptr_src = src;

	for (i = 0; i < n; i++)
		ptr_src[i] = ptr_dest[i];

	return (dest);
}
