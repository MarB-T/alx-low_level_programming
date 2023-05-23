#include <stdio.h>

/**
 * _gm - return the correct array
 * @array: array
 * @size: size of array
 * @valid: check validity
 * Return: array
 */

int *_gm(int *array, int size, int *valid)
{
	int i, *arr = NULL;

	for (i = 0; i < size; i++)
		arr[i] = array[i];

	*valid = 1;
	return (valid);
}
