#include <stdio.h>
#include <ctype.h>

/**
 * main - program entry
 *
 * Return: 0
 */
int main(void)
{
	int i, j; 

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++) /* j is always 1 higher */
		{
			putchar((i / 10) + '0'); /* tens */
			putchar((i % 10) + '0'); /* ones */
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
