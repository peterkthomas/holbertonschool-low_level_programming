#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: segment
 * @accept: bytes to accept in segment
 *
 * Return: unsigned integer with length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i] != 0; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}

			else if (!accept[i + 1])
				return (b);
		}
		s++;
	}

	return (b);
}
