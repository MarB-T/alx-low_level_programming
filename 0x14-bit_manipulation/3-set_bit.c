#include "main.h"

/**
 * set_bit - sets the value of given index to 1
 * @n: address to value to ammend
 * @index: index to ammend
 * Return: 1-success 1- fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max, j = 1;
	unsigned long int k = 1;

	while (j <= index)
	{
		k *= 2;
		j++;
	}
	max = (sizeof(unsigned long int) * 8) - 1;
	if (index > max)
		return (-1);
	*n = *n | k;
		return (1);
}
