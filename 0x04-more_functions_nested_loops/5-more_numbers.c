#include "holberton.h"

/**
 * more_numbers - prints 1-14\n
 *
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	for (i = 0; i <= 4; i++)
	{
		_putchar('1');
		_putchar(i + '0');
	}
	_putchar('\n');
}
