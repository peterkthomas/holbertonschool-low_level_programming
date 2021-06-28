#include "holberton.h"

/**
 * print_last_digit - prints ones column of int only
 * @n: integer to check
 *
 * Return: lastdigit - last digit (ones value)
 */
int print_last_digit(int n)
{
	int last_digit;
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
