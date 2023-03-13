#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - allocate memory to 2D array
 * @width: width of array
 * @height: height of array
 * Return: pointer or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	return (grid);
}
