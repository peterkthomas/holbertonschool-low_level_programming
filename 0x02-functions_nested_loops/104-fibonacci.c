#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int fib_one = 1; /* fib number 1 */
	unsigned long int fib_two = 2; /* fib number 2 */
	unsigned long int next = fib_one + fib_two; /* result of 1+2 */

	printf("%lu, %lu, ", fib_one, fib_two);
	for (i = 2; i < 99; i++)
	{
		printf("%lu", next);
		fib_one = fib_two;
		fib_two = next;
		next = fib_one + fib_two;
		if (i < 98)
			printf(", ");
	}

	printf("\n"); /* print the number */

	return (0);
}
