#include "holberton.h"
/**
 * print_number - prints ints with putchar
 * @n: int to print
 */
void print_number(int n)
{
	unsigned int mch;

	if (n < 0) /* number is a negative */
	{
		_putchar('-');
		n *= -1;
	}

	mch = n;

	if (mch / 10) /* we have another column to add */
		print_number(mch / 10); /* recursion call to print the next column number */
	_putchar((mch % 10) + '0'); /* finally, print the ones. */
}
