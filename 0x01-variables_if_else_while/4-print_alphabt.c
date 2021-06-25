#include <stdio.h>
#include <ctype.h>

/**
 * main - program entry point
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	while (str[i])
	{
		if (str[i] != 'q' && str[i] != 'e')
			putchar(str[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
