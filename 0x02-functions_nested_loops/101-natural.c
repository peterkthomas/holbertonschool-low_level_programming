#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int result = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0) /* is a multiple of 3 */
			result = result + i; /* add to the total  result */
		else if (i % 5 == 0) /* is a multiple of 5 */
			result = result + i; /* add to the total result */
	}

	printf("%d\n", result); /* print the number */

	return (0);
}
