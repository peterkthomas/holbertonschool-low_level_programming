#include "holberton.h"

/**
 * print_numbers - prints 0-9\n
 *
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}