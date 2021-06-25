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
	int j = 0;
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}

	while (str[j])
	{
		putchar(toupper(str[j]));
		j++;
	}
	putchar('\n');

	return (0);
}
