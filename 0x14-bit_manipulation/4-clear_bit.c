#include "main.h"

/**
 * clear_bit - Makes value at given index 0
 * @n: pointer to number to ammend
 * @index: the index to make 0
 * Return: 1-success -1 fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int comp = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	comp <<= index;
	*n &= ~comp;

	return (1);

}
