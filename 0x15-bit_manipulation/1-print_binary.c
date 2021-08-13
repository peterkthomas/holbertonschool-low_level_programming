#include "holberton.h"

/**
 * print_binary - prints a number in binary
 * @n: number to convert
 */

void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	print_binary (n >> 1);
	_putchar((n & 1) + '0');
}
