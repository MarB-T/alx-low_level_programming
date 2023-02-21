#include <stdio.h>

/**
 * print_sign - Checks the sign of a number.
 * Return: 0 
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf('+');
		return (1);
	}
	else if (n == 0)
	{
		return (0);
		putchar('0');
	}
	else
	{
		return (-1);
		putchar('-');
	}
}
