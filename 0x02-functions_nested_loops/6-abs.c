#include <stdio.h>

/**
 * _abs - Finds the absolute value of an integer
 * @i: given number
 * Return: int
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
