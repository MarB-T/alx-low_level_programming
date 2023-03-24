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

	va_start(numbers, n);
	for (i = 0; i < (int)n; i++)
	{
		num = va_arg(numbers, unsigned int);
		if ((separator != NULL) && i > 0)
		{
			printf("%s", separator);
		}
		printf("%d", num);
	}
	printf("\n");
	va_end(numbers);
}
