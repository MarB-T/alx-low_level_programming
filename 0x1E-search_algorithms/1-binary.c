#include "search_algos.h"

/**
 * print_array - function to print array
 * @array: the array to print
 * @siz: size of array
 * Return: nothing
 */
void print_array(int *array, size_t siz)
{
	size_t i  = 0;

	printf("Searching in array: ");
	for (i = 0; i < siz; i++)
	{
		printf("%d", array[i]);
		if (i < siz - 1)
			printf(", ");
	}
	printf("\n");
}


/**
 * binary_search - C code to search an element in an array using binary search
 * @array: pointer to array to search
 * @size: size of the array
 * @value: the value to be searched
 * Return: index of value or -1 if not available
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, i, mid;
	size_t right = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
