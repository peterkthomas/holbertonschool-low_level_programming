#include "holberton.h"

/**
 * leet - l33tsp34k c0nv3rtz0r
 * @str: string to convert
 *
 * Return: pointer to string
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;

	char src[] = "aAeEoOtTlL";
	char dest[] = "4433007711";

	while (str[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == src[j])
				str[i] = dest[j];
		}
		i++;
	}

	return (str);
}
