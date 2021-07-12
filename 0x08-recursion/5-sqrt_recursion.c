#include "holberton.h"

/**
 * finder - checks for square root
 * @a: number to compare
 * @b: base
 *
 * Return: sqrt of base
 */
int finder(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (finder(a + 1, b));
}

/**
 * _sqrt_recursion - returns sqrt of a number
 * @n: number to check
 *
 * Return: Square root / -1
 */
int _sqrt_recursion(int n)
{
	if (!n)
		return (0);
	return (finder(1, n));
}
