#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int fib_one = 1; /* fib number 1 */
	unsigned long int fib_two = 2; /* fib number 2 */
	unsigned long int next = fib_one + fib_two; /* result of 1+2 */

	unsigned long total = 2; /* start with our first even*/

	while (fib_one + fib_two < 4000000)
	{
		fib_one = fib_two;
		fib_two = next;
		next = fib_one + fib_two;
		
		if (next % 2 == 0)
			total += next;
	}

	printf("%lu\n", total); /* print the number */

	return (0);
}
