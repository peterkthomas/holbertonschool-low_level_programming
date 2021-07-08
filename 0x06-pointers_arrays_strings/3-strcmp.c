#include "holberton.h"

/**
 * _strcmp - Compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: -diff if 1 LT 2 0 if 1 EQ 2 +diff if 1 GT 2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int retval = 0;

	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;

	retval = s1[i] - s2[i];

	return (retval);
}
