#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters using variadic functions
 * @n: number of parameters
 * Return: int(sum of parameters)
 */

int sum_them_all(unsigned int n, ...)
{
	int sum = 0, i;
	va_list list;

	if (n == 0)
		return (0);
	va_start (list, n);
	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg (list, int);
	}
	va_end (list);
	return (sum);
}
