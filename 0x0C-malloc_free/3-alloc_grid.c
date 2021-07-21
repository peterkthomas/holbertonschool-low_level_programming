#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Pointer to 2D array of ints
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL if params 0 or less or failure
 *			Pointer otherwise.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (!arr)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (!arr[i])
		{
			for (--i; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
