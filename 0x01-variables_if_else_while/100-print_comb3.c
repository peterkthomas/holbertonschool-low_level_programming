#include <stdio.h>
#include <ctype.h>

/**
 * main - program entry
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (j < 10)
		{
			if (j != i)
			{
				putchar(j + '0');
			}
			j++;
		}
		j = 0;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}
