#include "holberton.h"

/**
 * *_strstr - returns occurrence of needle in haystack
 * @haystack: str to search
 * @needle: substr to locate
 *
 * Return: Pointer to beginning of substr or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		while (haystack[i] == needle[i])
		{
			if (!needle[i + 1])
				return (haystack);

			i++;
		}
		haystack++;
	}

	return (NULL);
}

