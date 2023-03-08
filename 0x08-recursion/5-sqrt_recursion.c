#include "main.h"
#include <stdio.h>


/**
 * _sqrt - gues square root
 * @num: the number in question
 * @root: first guess set to 0
 * Return: square root
 */

int _sqrt(int num, int root)
{
	int r = 0;

	if (root * root == num)
	{
		return (root);
	}
	else if (root == num / 2)
	{
		return (-1);
	}
	else
	{
		r = _sqrt(num, root + 1);
		return (r);
	}
}


/**
 * _sqrt_recursion - Finds the natural square root of a number
 * @n: the number in question
 * Return: square root of n or -1
 */

int _sqrt_recursion(int n)
{
	int sqrt = 0;

	if (n <= 0)
	{
		return (-1);
	}
	else if (n == 1)
		return (1);
	return (_sqrt(n, sqrt));
}
