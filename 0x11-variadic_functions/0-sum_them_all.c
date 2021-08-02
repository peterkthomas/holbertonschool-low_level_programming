#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all ar guments
 * @n: number of parameters
 *
 * Return: Sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
		total += va_arg(args, int);

	va_end(args);

	return (n);
}
