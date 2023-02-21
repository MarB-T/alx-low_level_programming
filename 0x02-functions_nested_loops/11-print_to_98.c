#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints to 98
 * @n: starting point
 * Return: 0 success
 */

void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i == n; i == 98; i++)
		{
			if ((i >= -9) && ( i <= 9))
			{
				putchar(i + '0');
				putchar(' ');
			}
			else
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
			}
		}
	}
	else
	{
		for (i == n; i == 98; i--)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
		}
	}
}
