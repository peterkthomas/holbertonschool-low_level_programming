#include "holberton.h"

/**
 * *string_toupper - Changes lowercase to uppercase
 * @str: pointer to string to convert
 *
 * Return: pointer to string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}

	return (str);
}
