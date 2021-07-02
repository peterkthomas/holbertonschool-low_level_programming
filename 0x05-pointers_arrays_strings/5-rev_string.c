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
	int j = 0;
	char hold;

	while (s[i]) /* loop through char array by pointer */
		i++;

	i -= 1; /* i is now length of string */

	while (j < i) /* loop until meet string length */
	{
		hold = s[j]; /* s[0] is now held */
		s[j] = s[i]; /* s[0] is now last char */
		s[i] = hold; /* last char is now first char */
		j++; /* increment to s[1] */
		i--; /* decrement to s[len-1] */
	}
}
