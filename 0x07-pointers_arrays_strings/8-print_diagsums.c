#include "holberton.h"

/**
 * print_diagsums - prints the sum of two diagonals of sqr matrix of ints
 * @a: matrix of ints
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int x = 0;
	int y = 0;

	for (i = 0; i < size; i++)
	{
		x = x + a[i];
		a = a + size;
	}

	a = a - size;

	for (i = 0; i < size; i++)
	{
		y = y + a[i];
		a = a - size;
	}

	printf("%d, %d\n", x, y);
}
