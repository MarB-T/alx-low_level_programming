#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates and orderd array of integers
 * @min: starting integer
 * @max: ending integer
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr, i;
	
	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = (min + i);
	}
	return (ptr);
}
