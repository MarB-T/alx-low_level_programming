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

	if (separator == NULL)
	{
		return;
	}
	va_start(strings, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%s%s", va_arg(strings, char *), separator);
	}
	printf("%s\n", va_arg(strings, char*));
	va_end(strings);
}
