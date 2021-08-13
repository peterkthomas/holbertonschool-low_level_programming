#include "holberton.h"

/**
 * clear_bit - sets a bit to 0 at address
 * @n: number to check
 * @index: index of number
 *
 * Return: 1 success or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
