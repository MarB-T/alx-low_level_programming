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
	for (i = 0; i <= siz; i++)
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
	size_t siz = size / 2;
	int result;

	if (array == NULL || size == 0)
		return (-1);
	if (value == array[siz])
	{
		print_array(array, siz);
		printf("Found %d at index %ld\n", value, size);
		return (siz);
	}
	else if (value > array[siz])
	{
		result = binary_search(array + size + 1, size - siz - 1, value);
		if (result != -1)
			return (siz + result + 1);
	}
	else
	{
		return (binary_search(array, siz, value));
	}
	return (-1);
}
