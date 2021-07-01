#include "holberton.h"

/**
 * print_triangle - draws a triangle on terminal
 * @size: size of triangle in lines
 *
 */
void print_triangle(int size)
{
	int i = 0;
	int j;

	if (size > 0)
	{
		while (i < size) /** loop 12 times */ 
		{
			for (j = 0; j < (size - i); j++) /* write 12 spaces, 11 spaces, etc. */
				_putchar(' ');
			while(j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');

			i++;
		}
	}
	else
		_putchar('\n');
}
