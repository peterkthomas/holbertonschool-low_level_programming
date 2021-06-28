#include "holberton.h"

/**
 * print_times_table - prints times table 0 -> n
 * @n: number to print table to
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (result > 99) /* 3 character result */
				{
					_putchar(result / 100 + '0'); /* hundreds */
					_putchar((result / 10 % 10) + '0'); /* tens */
					_putchar(result + '0'); /* ones */
				}
				else if (result > 9) /* 2 character result */
				{
					_putchar(' '); /* hundreds */
					_putchar(result / 10 + '0'); /* tens */
					_putchar(result % 10 + '0'); /* ones */
				}
				else if (j != 0) /* 1 character result 1 - 9 */
				{
					_putchar(' '); /* hundreds */
					_putchar(' '); /* tens */
					_putchar(result + '0'); /* ones */
				}
				else
					_putchar(result + '0'); /* zero */
				if(result != n) /* we are not at the final number */
				{
					_putchar(',');
					_putchar(' ');
				}
				
			}
		}
	_putchar('\n');
	}
}
