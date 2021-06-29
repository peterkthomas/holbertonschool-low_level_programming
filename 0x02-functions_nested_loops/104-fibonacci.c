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
	unsigned long billiondiv = 1000000000;
	unsigned long fib_one_a = 0;
	unsigned long fib_one_b = 1;
	unsigned long fib_two_a = 0;
	unsigned long fib_two_b = 2;
	unsigned long fib_temp_a;
	unsigned long fib_temp_b;
	unsigned long reduce;

	for (i = 0; i < 98; i++)
	{
		if (fib_one_a)
			printf("%lu%09%lu", fib_one_a);
		else
			printf("%lu", fib_one_b);

		if (i < 97)
			printf(", ");
		fib_temp_a = fib_one_a;
		fib_temp_b = fib_one_b;
		fib_one_a = fib_two_a;
		fib_one_b = fib_two_b;
		fib_two_a = fib_two_a + fib_temp_a;
		fib_two_b = fib_two_b + fib_temp_b;
		reduce = fib_two_b / billiondiv;
		fib_two_b = fib_two_b % billiondiv;
		fib_two_a = fib_two_a + reduce;
	}
	printf("\n");

	return (0);
}
