#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

long largest_number(long a, long b, long c)
{
	long largest = a;

	if (b >= a)
	{
		largest = b;
	}
	if (c >= b)
	{
		largest = c;
	}
	return (largest);
}
