#include "main.h"

/**
 * power - calculates exponential
 * @base: base
 * @power: raised
 * Return: (base raised to power)
 */

int power(int base, int power)
{
	int res = 1, i;

	for (i = power; i > 0; i--)
	{
		res = res  * base;
	}
	return (res);
}

/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: string of 1 and 0
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0, i, len = strlen(b);

	if (b == NULL || len == 0)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			converted += power(2, (len - 1 - i));
		}
	}
	return (converted);
}
