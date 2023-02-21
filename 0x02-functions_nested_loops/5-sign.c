#include <stdio.h>

/**
 * print_sign - Checks the sign of a number.
 * Return: 0
 * @n: number to be checked
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return 1;
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
