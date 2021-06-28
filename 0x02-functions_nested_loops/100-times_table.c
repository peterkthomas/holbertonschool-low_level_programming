#include "holberton.h";

/**
 * print_times_table - prints times table 0 -> n
 * @n: number to print table to
 */
void print_times_table(int n)
{
	int i, j, result;

	if(n <= 15 && n >= 0)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				int result_hundreds = result / 100;
				int result_tens = (result / 10) % 10;
				int result_ones = (result % 100) % 10;
				
				if (result < 10)
					_putchar('result_ones');
				else
				{
					_putchar(result_tens + '0');
					_putchar(result_ones + '0');
				}

				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
}
