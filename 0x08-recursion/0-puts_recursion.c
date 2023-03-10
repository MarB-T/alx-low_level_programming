#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: the string in question
 * Return:
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		if (*s != '\0')
		{
			_puts_recursion(s);
		}
		else
			_putchar('\n');
	}
	else
		_putchar('\n');
}
