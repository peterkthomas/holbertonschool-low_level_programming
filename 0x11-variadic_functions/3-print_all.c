#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a lsit of arguents passed to function
 */

void print_all(const char * const format, ...)
{
	va_list vlist;
	int n = 0;
	int i = 0;
	char *str;
	char *separator = ", ";

	va_start(vlist, format);

	while (format[i])
		i++;

	while (format[n])
	{
		if (n == (i - 1))
			separator = "";

		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(vlist, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(vlist, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(vlist, float), seperator);
			case 's':
				str = va_arg(vlist, char*);
				if (!str)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(vlist);
}
}
