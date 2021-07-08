#include "holberton.h"

/**
 * reverse_array - reverses an array of ints
 * @a: pointer to int array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int hold;

	n -= 1;

	for (i = 0; i < n; i++)
	{
		hold = a[i];
		a[i] = a[n];
		a[n] = hold;
		n--;
	}
}
