#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - Frees a 2D array previously allocated by alloc_grid.
* @grid: The 2D array to free.
* @height: Number of rows in the array.
*
* Return: Nothing.
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}

	free(grid);
	grid = NULL;
}
