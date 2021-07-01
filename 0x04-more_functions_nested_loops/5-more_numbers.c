#include "holberton.h"

/**
 * more_numbers - prints 1-14\n
 *
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 14)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('1');
			_putchar(i % 10 + '0');
		}
		j++;
		_putchar('\n');
	}
}
