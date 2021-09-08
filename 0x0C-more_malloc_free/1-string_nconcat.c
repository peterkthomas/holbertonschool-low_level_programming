#include "holberton.h"
/**
 * string_nconcat - concatenates two strings of at most n bytes
 * @s1: first string.
 * @s2: second string.
 * @n: Max bytes in string 2 to add to string 1
 *
 * Return: null on fail, or pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int length = n;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (i = 0; s1[i]; i++)
		length++;
	str = malloc(sizeof(char) * (length + 1));

	if (!str)
		return (NULL);
	length = 0;

	for (i = 0; s1[i]; i++)
		str[length++] = s1[i];

	for (i = 0; i < n && s2[i]; i++)
		str[length++] = s2[i];

	str[length] = '\0';

	return (str);
}
