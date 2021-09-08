#include "holberton.h"

/**
 * array_range - creates an array of ints ordered low to high
 * @min: min value
 * @max: max value
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *result;
	int i;
	int length;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	result = malloc(sizeof(int) * length);

	if (!result)
		return (NULL);

	for (i = 0; i < length; i++)
		result[i] = min + 1;

	return (result);
}
