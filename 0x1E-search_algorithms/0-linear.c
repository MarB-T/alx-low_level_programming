#include "search_algos.h"

/**
 * linear_search - searches a value in an array of integers
 * @array: pointer to array
 * @size: size of the array
 * @value: the value to search
 * Return: index of value if present; -1 if not
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]", i, array[i]);
		printf("\n");
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
