#include "holberton.h"

/**
 * print_rev - writes an array of chars in reverse
 * @str: pointer to string
 *
 */
void print_rev(char *str)
{
	int i = 0;

	while (str[i]) /* loop through char array by pointer */
		i++;

	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
