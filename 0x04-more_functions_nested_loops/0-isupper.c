#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - checks if character is uppercase
 * @c: character to check
 *
 * Return: 1 if c is upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
