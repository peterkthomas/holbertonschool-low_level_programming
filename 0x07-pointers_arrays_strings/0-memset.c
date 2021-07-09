#include "holberton.h"

/**
 * _memset - fills the first n bytes with byte b
 * @s: memory area to fill
 * @b: char to fill memory with
 * @n: the number of bytes in the memory to write
 *
 * Return: char pointer to location in memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
