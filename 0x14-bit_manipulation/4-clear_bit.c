#include "main.h"

/**
 * clear_bit - Makes value at given index 0
 * @n: pointer to number to ammend
 * @index: the index to make 0
 * Return: 1-success -1 fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j = 1;
	unsigned long int comp = 1;

	while (j <= index)
	{
		comp *= 2;
		j++;
	}
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	else
	{
		if (*n == 0)
			return (1);
		else
			*n = *n - comp;
		return (1);
	}
}
