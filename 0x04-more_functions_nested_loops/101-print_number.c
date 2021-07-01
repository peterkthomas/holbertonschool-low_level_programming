#include "holberton.h"
/**
 * print_number - prints ints with putchar
 * @n: int to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10) /* we have another column to add */
		print_number(n / 10); /* recursion call to print the next column number */
	_putchar((n % 10) + '0'); /* finally, print the ones. */
}
