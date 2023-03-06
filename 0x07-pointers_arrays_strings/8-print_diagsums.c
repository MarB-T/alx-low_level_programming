#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sums of diagonals
 * @a: pointer to address of first element
 * @size: Size of matrix
 * Return: 0 successful
 */

void print_diagsums(int *a, int size)
{
	int index;
	int sum_one = 0;
	int sum_two = 0;

	for (index = 0; index < size; index++)
	{
		sum_one += a[(index * size) + index];
		sum_two += a[(size - 1) + ((size - 1) * index)];
	}
	printf("%d, %d\n", sum_one, sum_two);
}
