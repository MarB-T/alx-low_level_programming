#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: String to reverse print
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	int m;

	s -= len;
	for (m = len; m >= 0; m--)
	{
		putchar(*(s + m));
	}
	putchar('\n');
}
