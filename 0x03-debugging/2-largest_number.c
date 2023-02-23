#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int x;
	int y;
	int z;

	x = (int) a;
	y = (int) b;
	z = (int) c;

	int largest = a;

	if (y >= x)
	{
		largest = b;
	}
	if (z >= y)
	{
		largest = c;
	}
	return (largest);
}
