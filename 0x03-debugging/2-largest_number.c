#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

float largest_number(float a, float b, float c)
{
	float largest = a;

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
