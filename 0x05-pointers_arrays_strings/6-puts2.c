#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: the string in question
 */

void puts2(char *str)
{
	int len = 0;
	int m;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= len;
	for (m = 0; m < len; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(*(str + m));
		}
	}
	_putchar('\n');
}
