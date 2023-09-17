#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Uses jump search algorithm so search in sorted array
 * @array: the array to search in
 * @size: size of the array
 * @value: the value to be searched
 * Return: index of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int block, block_size;
	int i = 0;
	int holder = 0;

	if (array == NULL)
		return (-1);

	block = sqrt((int)size);
	block_size = block;
	printf("Value checked array[%d] = [%d]\n", holder, array[holder]);
	while (array[block] <= value && block <= (int)size - 1)
	{
		if (array[i] == value || array[block] == value)
			break;
		holder = block;
		printf("Value checked array[%d] = [%d]\n", holder, array[block]);
		block = block + block_size;
	}

	printf("Value found between indexes [%d] and [%d]\n", holder, block);
	while (holder <= block)
	{

		if (holder >= (int)size)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", holder, array[holder]);
		if (array[holder] == value)
			return (holder);
		holder++;
	}
	return (-1);
}
