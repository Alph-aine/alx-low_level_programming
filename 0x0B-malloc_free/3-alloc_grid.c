#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid- creates a 2d array with all elements 0
 *@width: the width / column of the array
 *@height: the height / row of the array
 *
 *Return: NULL or a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height); /**size for rows*/
	if (grid == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
