#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(i);
		_putchar('\n');
		i++;
	}
}
