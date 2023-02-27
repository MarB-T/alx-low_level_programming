#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string in question
 */

void puts_half(char *str)
{
	int len = 0;
	int n, i;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}
	str -= n;
	for (i = 0; i < n; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
