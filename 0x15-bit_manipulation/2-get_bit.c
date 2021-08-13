#include "holberton.h"

/**
 * get_bit - prints value of a bit
 * @n: number to check
 * @index: index of number
 *
 * Return: Value or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int n = 0;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	while (n < index)
	{
		n = n >> 1;
		i++;
	}

	return ((n & 1));
}
