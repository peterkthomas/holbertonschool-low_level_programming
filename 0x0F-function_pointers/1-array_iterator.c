#include "function_pointers.h"

/**
 * array_iterator - runs function as a parameter on each array element
 * @array: array elements
 * @size: size of array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}