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
	int x;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", x);
		return (0);
	}

	print("Error\n");

	return (1);
}
