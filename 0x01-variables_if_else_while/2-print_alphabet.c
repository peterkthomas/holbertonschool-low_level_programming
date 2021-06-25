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

	while (i < (sizeof(alphabet)-1))
	{
		putchar(alphabet[i]);
		i++;
	}

	return (0);
}
