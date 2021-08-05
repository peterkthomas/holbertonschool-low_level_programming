#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string between numbers
 * @n: number of integers passed in
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	int result;
	unsigned int i;

	va_start(vlist, n);

	i = 0;

	while (i < n)
	{
		result = va_arg(vlist, int);

		printf("%d", result);

		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(vlist);
}
