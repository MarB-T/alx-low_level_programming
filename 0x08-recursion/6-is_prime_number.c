#include "main.h"
#include <stdio.h>

/**
 * _prime - guess prime by dividing by increasing number
 * @n: Number to be checked
 * @div: initial dividing number (2)
 * Return: 1 if prime 0 otherwise
 */

int _prime(int n, int div)
{
	if (div < n / 2)
	{
		if (n % div == 0)
		{
			return (0);
		}
		return (_prime(n, div + 1));
	}
	else
		return (1);

}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: the number in question
 * Return: 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n == 1)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	return (_prime(n, div));
}
