#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to reverse print
 */

void print_rev(char *s)
{
	int len = 0;
	int m;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (m = 0; m <= len; m++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
