#include <stdio.h>
#include "main.h"

/**
 * print_line - Prints line
 * Return: 0 Success
 * @n: Length of line
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	return (0);
}
