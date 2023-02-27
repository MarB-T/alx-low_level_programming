#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */

void rev_string(char *s)
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
