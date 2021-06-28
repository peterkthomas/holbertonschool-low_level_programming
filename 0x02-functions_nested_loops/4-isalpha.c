#include "holberton.h"

/**
 * _isalpha - checks for lowercase
 * @c: character to check
 *
 * Return: 0 success, 1 fail
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
		return (1);
	return (0);
}
