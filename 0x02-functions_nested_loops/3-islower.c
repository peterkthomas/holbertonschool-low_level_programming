#include "holberton.h"

/**
 * _islower - checks for lowercase
 * @c: character to check
 *
 * Return: 0 success, 1 fail
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	return (1);
}
