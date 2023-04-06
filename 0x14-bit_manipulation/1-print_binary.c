#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to print
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int bit;
	static int c;

	if (n == 0 && c > 0)
	{
		return;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	bit = (n & 1);
	c++;
	print_binary(n >>= 1);
	_putchar(bit + '0');
}
