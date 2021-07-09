#include "holberton.h"

/**
 * *_strpbrk - locates first occurrence of s in accept
 * @s: string to search
 * @accept: byte to locatei
 *
 * Return: pointer to occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
