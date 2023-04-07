#include "main.h"

/**
 * flip_bits - Return the number of bits to flip
 * @n: first number to compare
 * @m: second number
 * Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0, i = 0;
	unsigned long int mXORn;

	mXORn = m ^ n;
	while (i <= 64)
	{
		if (mXORn & 1)
		{
			bits++;
		}
		mXORn >>= 1;
		i++;
	}
	return (bits);
}
