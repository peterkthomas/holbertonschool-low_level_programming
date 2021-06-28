#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int fib_one = 1; /* fib number 1 */
	unsigned long int fib_two = 2; /* fib number 2 */
	unsigned long int next = fib_one + fib_two; /* result of 1+2 */

	printf("%d, %d, ", fib_one, fib_two);
	for (i = 3; i < 50; ++i)
	{
		printf("%d, ", next);
		fib_one = fib_two;
		fib_two = next;
		next = fib_one + fib_two;
	}

	printf("\n"); /* print the number */

	return (0);
}
