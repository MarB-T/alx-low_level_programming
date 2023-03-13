#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free a 2d array 
 * @height: height of array
 * @grid: pointer to grid location
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	grid = NULL;
}
