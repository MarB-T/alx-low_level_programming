#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Value of x raised to y
 * @x: x
 * @y: y
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	int power = 0;

	if (y == 0)
	{
		return (1);
	}
	if (y >= 1)
	{
		power = x * _pow_recursion(x, (y - 1));
	/*	return (power);*/
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (power);
}
