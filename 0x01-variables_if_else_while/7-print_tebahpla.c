#include <stdio.h>
#include <ctype.h>

/**
 * main - program entry point
 *
 * Return: 0
 */
int main(void)
{
	int i = 25;
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	while (str[i] >= 0)
	{
		i--;
	}

	putchar('\n');

	return (0);
}
