#include "holberton.h"

/**
 * print_binary - prints a number in binary
 * @n: number to convert
 *
 */

void print_binary(unsigned long int n)
{
	char c;

	if (!n)
	{
		_putchar('0');
		return (0);
	}
	if (n == 1)
	{
		_putchar('1');
		return (0);
	}

	print_binary (n >> 1);
	_putchar((n & 1) + '0');
}
