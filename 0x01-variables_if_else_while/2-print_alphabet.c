#include <stdio.h>
#include <ctype.h>
/**
 * main - program entry point
 *
 * Return: 0
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 27)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
