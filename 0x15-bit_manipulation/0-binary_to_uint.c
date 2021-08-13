#include "holberton.h"

/**
 * binary_to_uint - converts binary to uint
 * @b: string of binary
 *
 * Return: Converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i = 0;

	while (b[i])
	{
		n += 2;
		if (b[i] == '1')
			n += 1;
		i++;
	}

	return (n);
}
