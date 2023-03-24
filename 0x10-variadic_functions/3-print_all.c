#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include "variadic_functions.c"

/**
 * print_all - print everything
 * @format: type to print
 * Return: none
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "";
	va_list vprint;

	types opt[] = { {'c', printc},
			      {'i', printi},
			      {'f', print_f},
			      {'s', prints},
			      {'\0', NULL} };

	va_start(vprint, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (opt[j].c != '\0')
		{
			if (opt[j].c == format[i])
			{
				printf("%s", separator);
				opt[j].f(vprint);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(vprint);
	printf("\n");
}
