#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid- frees up al the allocated memory for an array
 *@grid: the array
 *@height: the length of the row of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
