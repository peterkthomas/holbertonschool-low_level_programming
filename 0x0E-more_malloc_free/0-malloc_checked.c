#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory and confirm success
 * @num: amount of memory to allocate
 *
 * Return: pointer or exit code 98
 */
void *malloc_checked(unsigned int num)
{
	void *hi = malloc(num);

	if (hi == NULL)
		exit(98);
	return (hi);
}
