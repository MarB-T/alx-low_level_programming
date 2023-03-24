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
	int i, num;
	va_list numbers;

	if (n <= 0)
		return;
	va_start(numbers, n);
	for (i = 0; i < (int)n - 1; i++)
	{
		num = va_arg(numbers, int);
		if (separator == NULL)
		{
			printf("%d", num);
		}
		else
		{
			printf("%d%s", num, separator);
		}
	}
	printf("%d\n", va_arg(numbers, int));
	va_end(numbers);
}
