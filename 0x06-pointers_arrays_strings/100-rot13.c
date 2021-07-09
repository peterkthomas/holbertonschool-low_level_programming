#include "holberton.h"

/**
 * rot13 - rotates by 13 chars
 * @str: string to rotate
 *
 * Return: pointer to rotated string
 */
char *rot13(char *str)
{
	int i = 0;
	int j;
	char forward[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char backward[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i])
	{
		j = 0;
		while (j < 52)
		{
			if (str[i] == forward[j])
			{
				str[i] = backward[j];
				break;
			}
			j++;
		}

		i++;
	}

	return (str);

}

