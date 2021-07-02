#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - writes an array of chars in reverse
 * @str: pointer to string
 *
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i]) /* loop through char array by pointer */
		i++;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
