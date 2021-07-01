#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - check if character is digit
 * @c: int of digit to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
