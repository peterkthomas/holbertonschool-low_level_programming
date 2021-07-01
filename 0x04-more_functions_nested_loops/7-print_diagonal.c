#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times \ is printed
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			for (j = 0; j < (n - i); j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
