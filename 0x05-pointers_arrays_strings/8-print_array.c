#include "holberton.h"

/**
 * print_array - writes every other char
 * @a: array of ints
 * @n: number of array elements to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n-1)
			printf(", ");
	}
	printf("\n");
}
