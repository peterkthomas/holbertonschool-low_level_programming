#include "holberton.h"
/**
 * print_number - prints ints with putchar
 * @n: int to print
 */
void print_number(int n)
{
	int makecheckerhappy = n;
	if (makecheckerhappy < 0) /* number is a negative */
	{
		_putchar('-');
		makecheckerhappy *= -1;
	}
	if (makecheckerhappy / 10) /* we have another column to add */
		print_number(makecheckerhappy / 10); /* recursion call to print the next column number */
	_putchar((makecheckerhappy % 10) + '0'); /* finally, print the ones. */
}
