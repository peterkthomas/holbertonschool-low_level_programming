#include "function_pointers.h"
/**
 * int_index - searches an array for a specific int
 * @array: array
 * @size: size of array
 * @cmp: pointer to the compare function
 *
 * Return: index of match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size >= 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
