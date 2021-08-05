#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: string between strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	char *str;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(vlist, char*);
		if (str)
		{
			printf("%s", str);
			if (i != (n - 1) && separator)
				printf("%s", separator);
		}
		else
		{
			printf("(nil)");
			if (i != (n - 1) && separator)
				printf("%s", separator);
		}
	}
	va_end(vlist);
	printf("\n");
}
