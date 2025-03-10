#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: Number of columns.
 * @height: Number of rows.
 *
 * Return: Pointer to the 2D array, or NULL on failure.
 *         Returns NULL if width or height is 0 or negative.
 *         Initializes all elements to 0.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = (int *)malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
		while (--row >= 0)
			free(grid[row]);
		free(grid);
		return (NULL);
		}

		for (col = 0; col < width; col++)
		grid[row][col] = 0;
	}

	return (grid);
}

