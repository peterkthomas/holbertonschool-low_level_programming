#include "holberton.h"

/**
 * _atoi - converts ascii to integer
 * @s: pointer to a char array
 *
 * Return: integer version of string
 */
int _atoi(char *s)
{
	int i = 0;
	int signs = 0;
	int value = 0;

	while (s[i])
	{
		if (s[i] == '-')
			signs++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			value = value * 10; /* add a column */
			value = value + (s[i] - '0'); /* revert from ascii to int value */
		}
		else if (value > 0)
			break;

		i++;
	}

	if (signs % 2)
		value = -value;

	return (value);
}
