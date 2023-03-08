#include "main.h"

/**
 * factorial - Calculates factorial of a number recursively
 * @n: the number in question
 * Return: factorial of n
 */

int factorial(int n)
{
	int _factorial = 0;

	if (n == 0)
	{
		return (1);
	}
	else if (n >= 1)
	{
		_factorial = n * factorial(n - 1);
		return (_factorial);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (_factorial);
}
