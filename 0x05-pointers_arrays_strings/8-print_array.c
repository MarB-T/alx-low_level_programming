#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: The array in question
 * @n: Number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			printf("%d, ", *a);
		}
		else if (i == (n - 1))
		{
			printf("%d", *a);
		}
		a++;
	}
	printf("\n");
}
