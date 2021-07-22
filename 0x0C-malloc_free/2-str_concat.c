#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concat two strings
 * @s1: string to receive buffer
 * @s2: buffer to insert
 *
 * Return: NULL if fail, or ptr to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i;
	int j = 0;
	int length = 0;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	new_str = malloc(sizeof(char) * (length + 1));

	if (!new_str)
	{
		free(new_str);
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
		new_str[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		new_str[j++] = s2[i];

	new_str[length] = '\0';

	return (new_str);
}
