#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a funtion given as parameter
 * @array: the array to loop over
 * @size: size of the array
 * @action: pointer to code block
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((action != NULL) && (array))
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
