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

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}
