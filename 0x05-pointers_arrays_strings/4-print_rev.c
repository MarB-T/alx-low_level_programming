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
	s -= 1;
	for (m = 0; m < len; m++)
	{
		_putchar(*(s - m));
	}
	_putchar('\n');
}
