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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	return (0);
}
