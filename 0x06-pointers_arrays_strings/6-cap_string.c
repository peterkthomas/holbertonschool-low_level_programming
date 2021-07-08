#include "holberton.h"

/**
 * *cap_string - capitalizes all letters in string
 * @str: string to capitalize
 *
 * Return: pointer to capitalized string array
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i > 0)
				j = i - 1;

			if (str[j] == ' ' || str[j] == '\t' ||
				str[j] == '\n' || str[j] == ',' ||
				str[j] == ';' || str[j] == '.' ||
				str[j] == '!' || str[j] == '?' ||
				str[j] == '"' || str[j] == '(' ||
				str[j] == ')' || str[j] == '{' ||
				str[j] == '}' || i == 0)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
