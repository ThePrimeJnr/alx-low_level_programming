#include "main.h"

/**
 * alloc_grid - allocates memory to a grid of given height and width
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: returns a grid of width and height, NULL if malloc fails
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			while (i-- >= 0)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
