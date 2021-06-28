#include "holberton.h"

/**
 * times_table - prints times table 0 -> 0
 *
 */
void times_table(void)
{
	int i;
	int j;
	int result;
	int result_tens;
	int result_ones;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			result_tens = result / 10;
			result_ones = result % 10;

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
