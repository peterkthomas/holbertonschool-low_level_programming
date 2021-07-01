#include <stdio.h>

/**
* main - program entry
*
* Return: 0
*/
int main(void)
{
	int i = 2;
	int x = 2;
	unsigned long num = 612852475143;

	while (num != 1)
	{
		while (num % i == 0)
		{
			num = num / i;
			x = i;
		}
		i++;
	}
	printf("%d\n", x);
	return (0);
}
