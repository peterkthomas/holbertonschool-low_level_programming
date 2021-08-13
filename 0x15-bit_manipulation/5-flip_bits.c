#include "holberton.h"

/**
 * flip_bits - # of bits to flip between numbers
 * @n: value2
 * @m: value2
 *
 * Return: bit count of flipped number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int x;

	x = n ^ m;

	while (x)
	{
		if ((x & 1) == 1)
			i++;
		x = x >> 1;
	}

	return(i);
}
