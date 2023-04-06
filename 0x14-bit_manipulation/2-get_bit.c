#include "main.h"

/**
 * get_bit - Gets value of bit at given index
 * @n: the number to check
 * @index: the index to return bit
 * Return: 0 or 1 success, 1- fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max;

	max = (sizeof(unsigned long int) * 8) - 1;
	if (index > max)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
