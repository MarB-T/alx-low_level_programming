#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to print
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, bit, flag = 0;

	for (i = 31; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
		{
			flag = 1;
			break;
		}
	}
	for (i = i; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		_putchar(bit + '0');
	}
	if (!flag)
		_putchar('0');
}
