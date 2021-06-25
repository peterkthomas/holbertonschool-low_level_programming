#include <stdio.h>
#include <ctype.h>

/**
 * main - program entry
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	int k;
	int l;

	/* ij  kl */ 
	for (i = '0'; i <= '9'; i++)
	{
		for (j = i; j <= '9'; j++)
		{

			for (k = '0'; k <= '9'; k++)
			{
				for(l = k; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');

	return (0);
}
