#include "holberton.h"

/**
 * puts2 - writes every other char
 * @str: pointer to string
 *
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	while (str[i]) /* loop through char array by pointer */
		i++;

	for (j = 0; j < i; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
