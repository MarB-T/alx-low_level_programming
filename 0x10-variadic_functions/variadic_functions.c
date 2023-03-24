#include "variadic_functions.h"

/**
 * print_f - print float
 * @vprint: the float
 */
void print_f(va_list vprint)
{
	printf("%f", va_arg(vprint, double));
}

/**
 * printc - print char
 * @vprint: the char
 */
void printc(va_list vprint)
{
	printf("%c", va_arg(vprint, int));
}

/**
 * printi - print int
 * @vprint: the integer
 */
void printi(va_list vprint)
{
	printf("%d", va_arg(vprint, int));
}

/**
 * prints - print string
 * @vprint: the string
 */
void prints(va_list vprint)
{
	char *s;

	s = va_arg(vprint, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
