#include "holberton.h"
#include <stdio.h>

/**
 * main - program entry
 * @argc: argument count
 * @argv: argument variables
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc && argv)
	{
		while (*argv)
			printf("%s\n", *argv);
	}

	return (0);
}
