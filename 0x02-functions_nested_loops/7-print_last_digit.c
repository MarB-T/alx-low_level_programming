#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: number to get last digit
 * Return: Last_digit(a) of n
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
