#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by new line
 * @separator: separator
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < (int)n - 1; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(numbers, int));
		}
		else
			printf("%d%s", va_arg(numbers, int), separator);
	}
	printf("%d\n", va_arg(numbers, int));
	va_end(numbers);
}
