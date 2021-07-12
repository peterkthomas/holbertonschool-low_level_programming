#include "holberton.h"

/**
 * factorial - returns factorial of number
 * @n: the number
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 1)
		return (-1);
	else
		return (n * factorial(n - 1));
}
