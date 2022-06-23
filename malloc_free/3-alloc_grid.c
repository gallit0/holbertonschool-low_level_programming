#include "main.h"

/**
 * alloc_grid - alloc 2 dimensional grid
 * @width: int
 * @height: int
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || width <= 0)
		return (0);
	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		for (j = 0; grid[i][j]; j++)
		{
			if (grid[i] == NULL)
			{
				return (0);
			}
			grid[i][j] = 0;
		}
	}
	free(i);
	free(j);
	return (grid);
}
