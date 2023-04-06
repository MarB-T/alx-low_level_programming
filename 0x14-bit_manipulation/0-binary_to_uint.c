#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: string of 1 and 0
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			converted = (converted << 1) | 1;
		else if (*b == '0')
			converted <<= 1;
		else
			return (0);
		b++;
	}
	return (converted);
}
