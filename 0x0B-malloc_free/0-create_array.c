#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - function to create array of characters
 * @size: the size of the array
 * @c: character to append in array
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(((sizeof(c)) * size) + 1);
	for (i = 0; i <= size; i++)
	{
		if (i == size)
		{
			array[i] = '\0';
		}
		array[i] = c;
	}
	return (array);
}
