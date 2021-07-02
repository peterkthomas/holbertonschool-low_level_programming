#include "holberton.h"

/**
 * puts_half - writes every other char
 * @str: pointer to string
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int start = 0;

	while (str[i]) /* loop through char array by pointer */
		i++;

	if (i % 2 != 0)
		start = ((i + 1) / 2);
	else
		start = i / 2;

	for (j = start; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
