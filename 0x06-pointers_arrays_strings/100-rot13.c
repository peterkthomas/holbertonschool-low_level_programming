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
	int rotval = 13;

	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			if((rotval + str[i]) <= 'Z')
				str[i] = rotval + str[i];
			else
				str[i] -= rotval;
		}
		else if (str[i] >='a' && str[i] <= 'z')
		{
			if ((rotval + str[i]) <= 'z')
				str[i] = rotval + str[i];
			else
				str[i] -= rotval;
		}
		i++;
	}

	return (str);

}

