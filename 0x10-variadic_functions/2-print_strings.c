#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string parameters
 * @separator: separator
 * @n: number of parameters
 */

void print_strings(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i > 0)
			printf("%s", separator);
		printf("%s", va_arg(strings, char *));
	}
	printf("\n");
	va_end(strings);
}
