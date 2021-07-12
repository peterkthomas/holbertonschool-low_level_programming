#include "holberton.h"

/**
 * _strlen_recursion - gets string length
 * @s: string
 *
 * Return: int of length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);

	return (0);
}
