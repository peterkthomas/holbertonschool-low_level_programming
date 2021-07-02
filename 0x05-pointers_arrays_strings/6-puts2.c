#include "holberton.h"

/**
 * puts2 - writes every other char
 * @str: pointer to string
 *
 */
void puts2(char *str)
{
	_putchar(*str);
	while (*str) /* loop through char array by pointer */
	{
		str += 2;
		_putchar(*str);
	}
	_putchar('\n');
}
