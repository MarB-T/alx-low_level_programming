#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints string in reverse
 * @s: the string in question
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		putchar(*(s - 1));
	}
}
