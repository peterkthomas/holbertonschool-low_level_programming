#include <stdarg.h>

/**
 * sum_them_all - sum of all ar guments
 * @n: number of parameters
 *
 * Return: Sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total;
	va_list list;

	va_start(list, n);
	for (i = 0, sum = 0; i < n, i++)
		sum += va_arg(list, int);

	va_end(list);

	return (total);
}
