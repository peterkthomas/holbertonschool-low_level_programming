#include "holberton.h"

/**
 * swap_int - swaps int a and b
 * @a: pointer to int a
 * @b: pointer to int b
 */
void reset_to_98(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = a;
}
