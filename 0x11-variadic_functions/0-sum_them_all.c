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
	va_list list;

	if (n == 0)
		return (n);

	va_start(list, n);
	for (i = 0; i < n; i++)
		total += va_arg(list, int);

	va_end(list);

	return (total);
}
