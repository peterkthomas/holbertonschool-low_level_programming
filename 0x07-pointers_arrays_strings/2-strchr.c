#include "holberton.h"

/**
 * *_strchr - Find a char in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: pointer to char within s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return s;
		s++;
	}

	return (NULL);
}
