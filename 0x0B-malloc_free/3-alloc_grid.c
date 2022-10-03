#include "main.h"
#include "string.h"

/**
  * alloc_grid- creates an array of 2 dimensions
  * @width: pointer to width
  * @height: pointerr to height
  * Return: pointer to 2 dimension of array
  */
int **alloc_grid(int width, int height)
{
	int x, y;

	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for ( ; x > 0; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
	}

	for (x = 0; x < height ; x++)
	{
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
