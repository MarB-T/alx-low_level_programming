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
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			putchar(',');
			putchar(' ');
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			putchar(',');
			putchar(' ');
		}
	}
}
