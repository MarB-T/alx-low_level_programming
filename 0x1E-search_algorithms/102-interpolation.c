#include "search_algos.h"

/**
 * interpolation_search - searches for value in an array using interpolation
 * @array: the array to search in
 * @size: size of the array
 * @value: the value to be searched
 * Return: index of value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high  = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low]))
			    * (value - array[low]));
	while (low <= high)
	{
		pos = low + (((double)(high - low) /
			      (array[high] - array[low]))
			     * (value - array[low]));
		if (pos > size)
		{
			printf("Value checked array[%d] is out of range\n",
			       (int)pos);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos,
		       array[(int)pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;

		if (array[pos] < value)
			low = pos + 1;

	}
	if (array[low] == value)
		return (low);

	return (-1);
}
