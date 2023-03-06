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

int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
