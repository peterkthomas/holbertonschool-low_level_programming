#include "holberton.h"

/**
 * set_bit - prints value of a bit
 * @n: number to check
 * @index: index of number
 *
 * Return: Value or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);

	return (1);
}
