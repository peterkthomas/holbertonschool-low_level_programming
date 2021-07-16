#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry
 * @argc: argument count
 * @argv: argument variables
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
				result += atoi(argv[i]);
		}
	}

	printf("%d\n", result);

	return (0);
}
