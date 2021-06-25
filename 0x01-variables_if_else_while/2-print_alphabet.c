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
	unsigned long int i = 0;

	while( i < sizeof(alphabet))
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
