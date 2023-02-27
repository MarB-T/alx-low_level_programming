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
	for (m = len - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
