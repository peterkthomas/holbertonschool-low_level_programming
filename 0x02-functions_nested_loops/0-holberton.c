#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program entry point
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char str[] = "Holberton\n";

	for (i = 0; i <= 10; i++)
		_putchar(str[i]);

	return (0);
}
