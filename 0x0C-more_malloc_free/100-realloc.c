#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - realocates mempry using malloc and free
 * @ptr: pointer to previously allocated mempry
 * @old_size: size in bytes of old allocation
 * @new_size: new size in bytes
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr, *ptrr = ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (new_ptr);
	}
	else
	{
		for (i = 0; i < (new_size || old_size); i++)
		{
			new_ptr[i] = ptrr[i];
		}
	}
	free(ptr);
	return (new_ptr);

}
