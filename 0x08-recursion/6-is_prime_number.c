#include "holberton.h"

/**
 * div - See if divisible by base
 * @a: number to be checked
 * @b: divisor
 *
 * Return: 0 if divisible by base, -1 if not
 */
int div(int a, int b)
{
	if (a % b == 0)
		return (0);
	if (b == a / 2)
		return (1);

	return (div(a, b + 1));
}

/**
 * is_prime_number - See if number is prime
 * @n: number to check
 *
 * Return: 0 if not prime, 1 if prime.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n > 1 && n < 4)
		return (1);

	return (div(n, 2));
}
